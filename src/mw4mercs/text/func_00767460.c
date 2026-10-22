/*
 * FUN_00767460 (66 B) — Two-stage equality check.
 *
 * Returns 1 if FUN_0041C540(param_1, param_2, param_3) is nonzero AND
 * FUN_0041C540(param_1+0xC, param_2+0xC, param_3) is nonzero; else 0.
 *
 * __cdecl, RET (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041C540(void);

__declspec(naked) int __cdecl FUN_00767460(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    esi
        push    edi
        push    ebx
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jz      fail
        push    esi
        add     edi, 0xC
        push    edi
        add     ebx, 0xC
        push    ebx
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jz      fail
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret
fail:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
