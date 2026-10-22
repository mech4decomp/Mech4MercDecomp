/*
 * FUN_10007450 (32 B) - __stdcall, RET 0x4.
 * Clears param_1+0x89; if param_1+0x88 is nonzero calls FUN_10005ac0.
 * Returns 0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10005ac0(void);       /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_10007450(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     cl, byte ptr [eax + 0x88]
        test    cl, cl
        mov     byte ptr [eax + 0x89], 0x0
        jz      L_746b
        push    eax
        call    FUN_10005ac0
    L_746b:
        xor     eax, eax
        ret     0x4
    }
}
