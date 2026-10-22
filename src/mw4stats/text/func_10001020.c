/*
 * FUN_10001020 (10 B) - thunk: sets ECX = &DAT_10027080 and jumps to
 * FUN_100010a0 (a __fastcall ctor wrapper).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_10027080;
extern void __cdecl FUN_100010a0(void);

__declspec(naked) void __cdecl FUN_10001020(void)
{
    __asm {
        mov     ecx, offset g_10027080
        jmp     FUN_100010a0
    }
}
