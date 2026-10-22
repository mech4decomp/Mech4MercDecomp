/*
 * func_0067BFD0 - wrapper
 * Calls FUN_0067be90(0x80)
 */

extern void __cdecl FUN_0067be90(void);

__declspec(naked) void func_0067BFD0()
{
    __asm {
        push    0x80
        call    FUN_0067be90
        pop     ecx
        ret
    }
}
