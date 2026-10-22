/*
 * FUN_00701da0 (58 B) — gosScript reset. Runs FUN_00701970, FUN_00701de0,
 * FUN_006f8ac0, FUN_006f8fd0, then zeroes a set of gosScript globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aaabc;
extern int g_008aab0c;
extern char g_008aaac0;
extern char g_008aaac1;
extern int g_008aaaf4;
extern int g_008aab04;
extern int g_008aab08;
extern void __cdecl FUN_00701970(void);
extern void __cdecl FUN_00701de0(void);
extern void __cdecl FUN_006f8ac0(void);
extern void __cdecl FUN_006f8fd0(void);

__declspec(naked) void FUN_00701da0(void)
{
    __asm {
        call    FUN_00701970
        call    FUN_00701de0
        call    FUN_006f8ac0
        call    FUN_006f8fd0
        xor     eax, eax
        mov     dword ptr [g_008aaabc], eax
        mov     dword ptr [g_008aab0c], eax
        mov     byte ptr [g_008aaac0], al
        mov     byte ptr [g_008aaac1], al
        mov     dword ptr [g_008aaaf4], eax
        mov     dword ptr [g_008aab04], eax
        mov     dword ptr [g_008aab08], eax
        ret
    }
}
