/*
 * func_0067C000 - wrapper
 * Calls FUN_0067be90(0x100)
 */

extern void __cdecl FUN_0067be90(void);

__declspec(naked) void func_0067C000()
{
    __asm {
        push    0x100
        call    FUN_0067be90
        pop     ecx
        ret
    }
}
