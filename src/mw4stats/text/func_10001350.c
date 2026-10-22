/*
 * FUN_10001350 (12 B) - CRT onexit registration: pushes the address of
 * cleanup routine LAB_10001360 and calls FUN_1001edec (_onexit).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001360(void);
extern void __cdecl FUN_1001edec(void);

__declspec(naked) void __cdecl FUN_10001350(void)
{
    __asm {
        push    offset FUN_10001360
        call    FUN_1001edec
        pop     ecx
        ret
    }
}
