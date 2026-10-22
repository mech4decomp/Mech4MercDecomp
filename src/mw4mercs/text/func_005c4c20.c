/*
 * func_005c4c20 - FUN_005c4c20
 * Thunk: pushes its argument and forwards to FUN_005c4c30.
 */
__declspec(naked) void func_005c4c20()
{
    

extern void __cdecl FUN_005c4c30(void);
__asm {
mov     eax, [esp + 4]
        push    eax
        call FUN_005c4c30
        ret     4
    }


}
