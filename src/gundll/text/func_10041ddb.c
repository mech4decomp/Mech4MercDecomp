/*
 * FUN_10041ddb (22 B) - __cdecl. Calls FUN_10041c6f(param_1, param_2, 0x100549b0).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10041c6f(void);

__declspec(naked) void FUN_10041ddb(void)
{
    __asm {
        push    0x100549b0
        push    dword ptr [esp + 0xc]
        push    dword ptr [esp + 0xc]
        call    FUN_10041c6f
        add     esp, 0xc
        ret
    }
}
