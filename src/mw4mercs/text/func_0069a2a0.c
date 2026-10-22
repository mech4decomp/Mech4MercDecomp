/*
 * FUN_0069a2a0 (16 B) - HUD element destructor wrapper. __cdecl, RET.
 * If param_1 != 0, calls FUN_004084e0(param_1) (operator delete).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);   /* operator delete */

__declspec(naked) void FUN_0069a2a0(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L2AF
        push    eax
        call    FUN_004084e0
        pop     ecx
L2AF:
        ret
    }
}
