/*
 * FUN_005814e0 (39 B) — Cleanup / destructor wrapper.
 *
 * If global [0x007f1f78] != 0, calls FUN_004dd340 (thiscall destructor)
 * on it, then calls FUN_004084e0 (free) on it.
 * Then nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f1f78;
extern void __fastcall FUN_004dd340(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_005814e0(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, dword ptr [DAT_007f1f78]
        TEST ESI, ESI
        JZ   l_null
        MOV  ECX, ESI
        CALL FUN_004dd340
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
    l_null:
        mov     dword ptr [DAT_007f1f78], 0
        POP  ESI
        RET
    }
}
