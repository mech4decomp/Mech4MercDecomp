/*
 * FUN_0052A450 (16 B) — thunk: loads ecx from global 0x7dd268, calls
 * FUN_0052A460, returns 0xc (__stdcall). Trailing nops are alignment pad.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_7dd268;
extern void __cdecl FUN_0052A460(void);

__declspec(naked) void FUN_0052A450(void)
{
    __asm {
        mov     ecx, dword ptr [g_7dd268]
        call    FUN_0052A460
        ret     0xc
        nop
        nop
    }
}
