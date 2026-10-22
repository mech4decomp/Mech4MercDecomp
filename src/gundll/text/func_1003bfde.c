/*
 * FUN_1003bfde (11 B) - __thiscall. Wrapper: pushes the single stack arg
 * (this in ECX), calls __cdecl FUN_100424b2, pops the arg, returns.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100424b2(void);   /* rel32 call */

__declspec(naked) void FUN_1003bfde(void)
{
    __asm {
        push    dword ptr [esp + 0x4]
        call    FUN_100424b2
        pop     ecx
        ret
    }
}
