/*
 * FUN_004E6160 (17 B) — Thunk: loads global DAT_007dc770 and
 * passes it along with the stack param to FUN_006F3C80.
 *
 * __cdecl, one stack param.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f3c80(void);
extern int DAT_007dc770;

__declspec(naked) void __cdecl FUN_004e6160(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dc770]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    FUN_006f3c80
        ret
    }
}
