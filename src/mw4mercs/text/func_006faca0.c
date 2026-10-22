/*
 * FUN_006FACA0 (410 B) — File open + read into allocated buffer.
 *
 * Opens a file by name, reads its entire contents into a heap-allocated
 * buffer (via gos_Malloc / FUN_006F3C80), and returns the buffer pointer
 * and size through two output parameters.
 *
 * Also handles UNC path normalization (collapses "\\" to "\") and supports
 * a hook/callback at 0x00858a44 (guarded by reentrancy flag at 0x0085670c).
 *
 * __stdcall, RET 0xC (3 params):
 *   param_1 (EDI) = const char *filename
 *   param_2 (EBP+0x0C) = void **out_buffer  (allocated buffer)
 *   param_3 (EBP+0x10) = DWORD *out_size    (bytes read)
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

/* External functions */
extern void *__stdcall FUN_006f3c80(int size, int context);
extern int __cdecl FUN_006f91d0(int mode, const char *msg);
extern int __cdecl FUN_006fab90(const char *fmt, ...);
extern char *__cdecl FUN_0072d830(int ctx, int id);

__declspec(naked) void __stdcall FUN_006faca0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x204
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]        ; edi = filename (param_1)
        lea     esi, [edi + 1]                  ; esi = filename + 1 (skip drive letter)

        ; Call _mbsstr(filename+1, "\\\\") to check for UNC path
        push    0x7a01c4                        ; "\\\\" string
        push    esi                             ; filename+1
        ; call dword ptr [0x0076b390]  -- _mbsstr
        _emit 0xFF
        _emit 0x15
        _emit 0x90
        _emit 0xB3
        _emit 0x76
        _emit 0x00
        add     esp, 8
        test    eax, eax
        jz      l_skip_unc_normalize

        ; UNC path normalization: copy first char (drive letter) to local buffer
        mov     al, byte ptr [edi]
        mov     byte ptr [ebp - 0x104], al      ; local_108 = first char

        ; Copy rest, collapsing "\\" to "\"
        mov     eax, esi                        ; eax = src = filename+1
        mov     cl, byte ptr [eax]              ; cl = first src byte
        test    cl, cl
        lea     edx, [ebp - 0x103]              ; edx = dst = local_107
        jz      l_unc_copy_done

        ; MOV BL,0x5c is hoisted outside the loop in the reference
        mov     bl, 0x5c                        ; bl = '\\'

l_unc_copy_loop:
        cmp     cl, bl
        jnz     l_unc_copy_byte
        cmp     byte ptr [eax + 1], bl
        jnz     l_unc_copy_byte
        inc     eax                             ; skip one backslash (collapse \\ to \)
l_unc_copy_byte:
        mov     cl, byte ptr [eax]
        mov     byte ptr [edx], cl
        mov     cl, byte ptr [eax + 1]
        inc     edx
        inc     eax
        test    cl, cl
        jnz     l_unc_copy_loop

l_unc_copy_done:
        mov     byte ptr [edx], 0               ; null-terminate
        lea     edi, [ebp - 0x104]              ; edi = &local_108 (normalized path)

l_skip_unc_normalize:
        ; Check reentrancy guard
        ; mov al, [0x0085670c]
        _emit 0xA0
        _emit 0x0C
        _emit 0x67
        _emit 0x85
        _emit 0x00
        test    al, al
        jnz     l_do_createfile

        ; Check callback
        ; mov eax, [0x00858a44]
        _emit 0xA1
        _emit 0x44
        _emit 0x8A
        _emit 0x85
        _emit 0x00
        test    eax, eax
        jz      l_do_createfile

        ; Call the hook callback
        mov     edx, dword ptr [ebp + 0x10]     ; param_3
        mov     ecx, dword ptr [ebp + 0x0c]     ; param_2
        push    edx
        push    ecx
        push    edi                             ; filename (possibly normalized)
        ; mov byte ptr [0x0085670c], 1
        _emit 0xC6
        _emit 0x05
        _emit 0x0C
        _emit 0x67
        _emit 0x85
        _emit 0x00
        _emit 0x01
        call    eax                             ; callback(param_1, param_2, param_3)
        pop     edi
        pop     esi
        ; mov byte ptr [0x0085670c], 0
        _emit 0xC6
        _emit 0x05
        _emit 0x0C
        _emit 0x67
        _emit 0x85
        _emit 0x00
        _emit 0x00
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x0c

l_do_createfile:
        ; CreateFileA(filename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL)
        ; mov ebx, [0x0076b0e8]  -- CreateFileA IAT entry
        _emit 0x8B
        _emit 0x1D
        _emit 0xE8
        _emit 0xB0
        _emit 0x76
        _emit 0x00
l_createfile_call:
        push    0
        push    0
        push    3                               ; OPEN_EXISTING
        push    0
        push    1                               ; FILE_SHARE_READ
        push    0x80000000                      ; GENERIC_READ
        push    edi                             ; filename
        call    ebx                             ; CreateFileA
        mov     esi, eax                        ; esi = hFile
        cmp     esi, -1                         ; INVALID_HANDLE_VALUE?
        jnz     l_file_opened

        ; File open failed — log error and retry
l_retry_open:
        push    edi                             ; filename
        lea     edx, [ebp - 0x204]              ; local_208 buffer
        push    0x7a01b0                        ; "File not found '%s'"
        push    edx
        ; call dword ptr [0x0076b420]  -- sprintf
        _emit 0xFF
        _emit 0x15
        _emit 0x20
        _emit 0xB4
        _emit 0x76
        _emit 0x00
        add     esp, 0x0c
        lea     eax, [ebp - 0x204]
        push    eax
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        jz      l_createfile_call               ; retry CreateFile if user says continue
        int     3                               ; INT3 / breakpoint
        ; JMP SHORT back to CreateFile (after INT3, unconditionally retry)
        _emit 0xEB
        _emit 0xB9                              ; jmp 0x006fad37 (l_do_createfile)

l_file_opened:
        ; GetFileSize(hFile, NULL)
        push    0
        push    esi                             ; hFile
        ; call dword ptr [0x0076b15c]  -- GetFileSize
        _emit 0xFF
        _emit 0x15
        _emit 0x5C
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        mov     ebx, eax                        ; ebx = file size
        test    ebx, ebx
        jle     l_zero_outputs                  ; if size <= 0, return NULL/0

        ; Allocate buffer via gos_Malloc
        ; mov ecx, [0x0084930c]  -- heap context
        _emit 0x8B
        _emit 0x0D
        _emit 0x0C
        _emit 0x93
        _emit 0x84
        _emit 0x00
        push    ecx
        push    ebx                             ; size
        call    FUN_006f3c80                    ; gos_Malloc(size, context)
        mov     edx, dword ptr [ebp + 0x0c]     ; param_2 (out_buffer)
        mov     dword ptr [edx], eax            ; *out_buffer = allocated buffer

        ; ReadFile(hFile, *out_buffer, size, out_size, NULL)
l_retry_read:
        mov     eax, dword ptr [ebp + 0x10]     ; param_3 (out_size)
        mov     ecx, dword ptr [ebp + 0x0c]     ; param_2
        mov     edx, dword ptr [ecx]            ; *out_buffer
        push    0                               ; OVERLAPPED = NULL
        push    eax                             ; &out_size (bytes read)
        push    ebx                             ; size to read
        push    edx                             ; buffer
        push    esi                             ; hFile
        ; call dword ptr [0x0076b164]  -- ReadFile
        _emit 0xFF
        _emit 0x15
        _emit 0x64
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        test    eax, eax
        jnz     l_read_ok

        ; ReadFile failed — log error and retry
        ; mov eax, [0x00896c88]
        _emit 0xA1
        _emit 0x88
        _emit 0x6C
        _emit 0x89
        _emit 0x00
        push    edi                             ; filename
        push    0x2745                          ; string ID
        push    eax                             ; context
        call    FUN_0072d830                    ; get format string
        push    eax                             ; format
        lea     ecx, [ebp - 0x204]              ; local_208 buffer
        push    ecx
        ; call dword ptr [0x0076b420]  -- sprintf
        _emit 0xFF
        _emit 0x15
        _emit 0x20
        _emit 0xB4
        _emit 0x76
        _emit 0x00
        add     esp, 0x0c
        lea     edx, [ebp - 0x204]
        push    edx
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        jz      l_retry_read                    ; retry if user says continue
        int     3                               ; INT3
        ; JMP SHORT back to ReadFile retry (after INT3, unconditionally retry)
        _emit 0xEB
        _emit 0xAE                              ; jmp 0x006fada3 (l_retry_read)

l_read_ok:
        ; Check that bytes read == expected size
        mov     eax, dword ptr [ebp + 0x10]     ; param_3 (out_size)
        cmp     dword ptr [eax], ebx            ; *out_size == file_size?
        jz      l_close_and_return_2

        ; Size mismatch — assert
        ; mov ecx, [0x00896c88]
        _emit 0x8B
        _emit 0x0D
        _emit 0x88
        _emit 0x6C
        _emit 0x89
        _emit 0x00
        push    edi                             ; filename
        push    0x2745                          ; string ID
        push    ecx                             ; context
        call    FUN_0072d830                    ; get format string
        push    eax                             ; format
        call    FUN_006fab90                    ; assert
        add     esp, 8
        test    eax, eax
        jz      l_close_and_return_2
        int     3                               ; INT3 (no JMP after this one)

        ; First copy of CloseHandle+epilogue (reachable from size-mismatch assert's jz)
l_close_and_return_1:
        push    esi                             ; hFile
        ; call dword ptr [0x0076b0ec]  -- CloseHandle
        _emit 0xFF
        _emit 0x15
        _emit 0xEC
        _emit 0xB0
        _emit 0x76
        _emit 0x00
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x0c

        ; Zero outputs (file size <= 0)
l_zero_outputs:
        mov     edx, dword ptr [ebp + 0x0c]     ; param_2
        mov     eax, dword ptr [ebp + 0x10]     ; param_3
        mov     dword ptr [edx], 0
        mov     dword ptr [eax], 0

        ; Second copy of CloseHandle+epilogue (reachable from l_read_ok's jz and zero_outputs fallthrough)
l_close_and_return_2:
        push    esi                             ; hFile
        ; call dword ptr [0x0076b0ec]  -- CloseHandle
        _emit 0xFF
        _emit 0x15
        _emit 0xEC
        _emit 0xB0
        _emit 0x76
        _emit 0x00
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x0c
    }
}
