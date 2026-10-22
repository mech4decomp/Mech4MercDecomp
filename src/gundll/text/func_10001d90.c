/*
 * FUN_10001d90 (63 B) - __stdcall, RET 0x4. String duplicate: strlen via
 * repne scasb, alloc via FUN_10001d50, copy loop.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10001d90(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        xor     eax, eax
        test    ebx, ebx
        jz      L_cb
        push    edi
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_10001d50
        add     esp, 4
        test    eax, eax
        pop     edi
        jnz     L_b7
        pop     ebx
        ret     4
L_b7:
        push    esi
        mov     esi, eax
        mov     ecx, ebx
        sub     esi, ebx
        mov     edi, edi
L_c0:
        mov     dl, byte ptr [ecx]
        mov     byte ptr [esi + ecx], dl
        inc     ecx
        test    dl, dl
        jnz     L_c0
        pop     esi
L_cb:
        pop     ebx
        ret     4
    }
}
