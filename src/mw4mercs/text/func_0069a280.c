/*
 * FUN_0069a280 (18 B) - HUD element destructor wrapper. __stdcall, RET 0x8.
 * If param_1 != 0, calls FUN_004084e0(param_1) (operator delete).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);   /* operator delete */

__declspec(naked) void __stdcall FUN_0069a280(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L28F
        push    eax
        call    FUN_004084e0
        pop     ecx
L28F:
        ret     0x8
    }
}
