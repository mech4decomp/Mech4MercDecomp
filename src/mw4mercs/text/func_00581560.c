/*
 * FUN_00581560 (30 B) — Deleting destructor (__thiscall, RET 0x4).
 *
 * Calls FUN_004dd1c0 (base destructor), then if param_1 & 1,
 * calls FUN_004084e0 (free) on this. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004dd1c0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00581560(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        CALL FUN_004dd1c0
        TEST byte ptr [ESP + 0x8], 0x1
        JZ   l_skip_free
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
    l_skip_free:
        MOV  EAX, ESI
        POP  ESI
        RET  0x4
    }
}
