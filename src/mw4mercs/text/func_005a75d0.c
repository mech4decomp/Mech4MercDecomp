/*
 * FUN_005a75d0 (103 B) — Buffer reallocation/resize function.
 *
 * Reallocates an array of elements (each 0x38 bytes). If new count
 * differs from current, frees old buffer, allocates new one.
 * If new count is 0, frees and zeros.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: new_count).
 * this+0x00 = buffer pointer
 * this+0x04 = element count
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005a75d0(int new_count)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]   ; esi = new_count
        push    edi
        mov     edi, ecx                      ; edi = this
        cmp     esi, dword ptr [edi + 0x4]    ; compare with current count
        jz      done

        test    esi, esi
        jbe     free_and_zero

        mov     eax, dword ptr [edi]          ; old buffer
        test    eax, eax
        jz      skip_free
        push    eax
        call    FUN_004084e0                  ; operator delete
        add     esp, 0x4

skip_free:
        lea     eax, [esi*8]                  ; esi * 8
        sub     eax, esi                      ; esi * 7
        shl     eax, 3                        ; esi * 56 = esi * 0x38
        push    eax
        mov     dword ptr [edi + 0x4], esi    ; store new count
        call    FUN_004084d0                  ; operator new
        add     esp, 0x4
        test    eax, eax
        jz      alloc_failed

        dec     esi
        mov     dword ptr [edi], eax          ; store new buffer
        pop     edi
        mov     dword ptr [esp + 0x8], esi    ; store (new_count - 1) in param slot
        pop     esi
        ret     0x4

alloc_failed:
        xor     eax, eax
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     0x4

free_and_zero:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi], 0x0

done:
        pop     edi
        pop     esi
        ret     0x4
    }
}
