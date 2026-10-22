/*
 * FUN_10037a49 (11 B) - __thiscall. Wrapper: pushes the single stack arg
 * (this in ECX), calls __cdecl FUN_100379be, pops the arg, returns.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100379be(void);   /* rel32 call */

__declspec(naked) void FUN_10037a49(void)
{
    __asm {
        push    dword ptr [esp + 0x4]
        call    FUN_100379be
        pop     ecx
        ret
    }
}
