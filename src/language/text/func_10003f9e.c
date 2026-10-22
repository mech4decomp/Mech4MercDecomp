/*
 * FUN_10003f9e (27 B, __cdecl) — call the function pointer at 0x10008c14 with
 * param_1; return 1 if it returns nonzero, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10003f9e (27 B) -- __cdecl. If the handler at 0x10008c14
 * is set and returns nonzero for arg, yield 1, else 0.
 */

extern int g_10008c14;

__declspec(naked) int FUN_10003f9e(void)
{
    __asm {
        mov     eax, dword ptr [g_10008c14]
        test    eax, eax
        jz      L_3fb6
        push    dword ptr [esp + 4]
        call    eax
        test    eax, eax
        pop     ecx
        jz      L_3fb6
        push    1
        pop     eax
        ret
L_3fb6:
        xor     eax, eax
        ret
    }
}
