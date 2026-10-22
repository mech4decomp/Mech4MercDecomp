/*
 * FUN_10043b70 (257 B) — __cdecl.
 * Case-insensitive string compare (stricmp-like) with a lock-protected
 * alternate path. Returns <0 / 0 / >0.
 *
 * CFLAGS: /O1
 */

extern char g_10075674;
extern int g_10076a8c;
extern int g_10076a88;
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern int __cdecl FUN_10037d37(void);

__declspec(naked) void FUN_10043b70(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        push    esi
        push    ebx
        mov     ecx, dword ptr [ebp + 0x10]
        or      ecx, ecx
        jz      L_c6a
        mov     esi, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0xc]
        lea     eax, [g_10075674]
        cmp     dword ptr [eax + 0x8], 0x0
        jnz     L_be1
        mov     bh, 0x41
        mov     bl, 0x5a
        mov     dh, 0x20
        __emit 0x8D          /* __emit: lea ecx,[ecx] ref is 8D 49 00 (disp8=0); MSVC6 emits 8D 09 */
        __emit 0x49
        __emit 0x00
    L_b9c:
        mov     ah, byte ptr [esi]
        or      ah, ah
        mov     al, byte ptr [edi]
        jz      L_bc5
        or      al, al
        jz      L_bc5
        inc     esi
        inc     edi
        __emit 0x38          /* __emit: cmp ah,bh ref 38 FC; MSVC6 emits 3A E7 (r8,r/m8 form) */
        __emit 0xFC
        jc      L_bb4
        __emit 0x38          /* __emit: cmp ah,bl ref 38 DC; MSVC6 emits 3A E3 */
        __emit 0xDC
        ja      L_bb4
        add     ah, dh
    L_bb4:
        __emit 0x38          /* __emit: cmp al,bh ref 38 F8; MSVC6 emits 3A C7 */
        __emit 0xF8
        jc      L_bbe
        __emit 0x38          /* __emit: cmp al,bl ref 38 D8; MSVC6 emits 3A C3 */
        __emit 0xD8
        ja      L_bbe
        add     al, dh
    L_bbe:
        __emit 0x38          /* __emit: cmp ah,al ref 38 C4; MSVC6 emits 3A E0 */
        __emit 0xC4
        jnz     L_bcf
        dec     ecx
        jnz     L_b9c
    L_bc5:
        xor     ecx, ecx
        __emit 0x38          /* __emit: cmp ah,al ref 38 C4; MSVC6 emits 3A E0 */
        __emit 0xC4
        jz      L_c6a
    L_bcf:
        mov     ecx, 0xffffffff
        jc      L_c6a
        neg     ecx
        jmp     L_c6a
    L_be1:
        lock inc dword ptr [g_10076a8c]
        cmp     dword ptr [g_10076a88], 0x0
        jg      L_bf5
        push    0x0
        jmp     L_c0e
    L_bf5:
        lock dec dword ptr [g_10076a8c]
        mov     ebx, ecx
        push    0x13
        call    FUN_10039b19
        mov     dword ptr [esp], 0x1
        mov     ecx, ebx
    L_c0e:
        xor     eax, eax
        xor     ebx, ebx
        mov     edi, edi
    L_c14:
        mov     al, byte ptr [esi]
        or      eax, eax
        mov     bl, byte ptr [edi]
        jz      L_c3f
        or      ebx, ebx
        jz      L_c3f
        inc     esi
        inc     edi
        push    ecx
        push    eax
        push    ebx
        call    FUN_10037d37
        mov     ebx, eax
        add     esp, 0x4
        call    FUN_10037d37
        add     esp, 0x4
        pop     ecx
        cmp     eax, ebx
        jnz     L_c45
        dec     ecx
        jnz     L_c14
    L_c3f:
        xor     ecx, ecx
        cmp     eax, ebx
        jz      L_c4e
    L_c45:
        mov     ecx, 0xffffffff
        jc      L_c4e
        neg     ecx
    L_c4e:
        pop     eax
        or      eax, eax
        jnz     L_c5c
        lock dec dword ptr [g_10076a8c]
        jmp     L_c6a
    L_c5c:
        mov     ebx, ecx
        push    0x13
        call    FUN_10039b7a
        add     esp, 0x4
        mov     ecx, ebx
    L_c6a:
        mov     eax, ecx
        pop     ebx
        pop     esi
        pop     edi
        leave
        ret
    }
}
