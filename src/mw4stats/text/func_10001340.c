/*
 * FUN_10001340 (10 B) - thunk: sets ECX = &DAT_10026ba0 and jumps to
 * FUN_100058c0 (a __fastcall ctor wrapper).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_10026ba0;
extern void __cdecl FUN_100058c0(void);

__declspec(naked) void __cdecl FUN_10001340(void)
{
    __asm {
        mov     ecx, offset g_10026ba0
        jmp     FUN_100058c0
    }
}
