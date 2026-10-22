/*
 * FUN_100012e0 (10 B) - thunk: sets ECX = &DAT_10027058 and jumps to
 * FUN_10003930 (a __fastcall ctor wrapper).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_10027058;
extern void __cdecl FUN_10003930(void);

__declspec(naked) void __cdecl FUN_100012E0(void)
{
    __asm {
        mov     ecx, offset g_10027058
        jmp     FUN_10003930
    }
}
