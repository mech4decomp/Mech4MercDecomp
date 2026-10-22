/*
 * FUN_00676050 (11 B) — thunk: load global object pointer into ECX and
 * tail-jump into FUN_006765b0 (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0080da94;
extern void FUN_006765b0(void);

__declspec(naked) void FUN_00676050(void)
{
    __asm {
        mov     ecx, dword ptr [g_0080da94]
        jmp     FUN_006765b0
    }
}
