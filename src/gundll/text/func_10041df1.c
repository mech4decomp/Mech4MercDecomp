/*
 * FUN_10041df1 (22 B) - __cdecl. Pushes constant 0x100549c8 and the two
 * args, calls FUN_10041c6f(param_1, param_2, 0x100549c8).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10041c6f(void);   /* rel32 call */

__declspec(naked) void FUN_10041df1(void)
{
    __asm {
        push    0x100549c8
        push    dword ptr [esp+0xc]
        push    dword ptr [esp+0xc]
        call    FUN_10041c6f
        add     esp, 0xc
        ret
    }
}
