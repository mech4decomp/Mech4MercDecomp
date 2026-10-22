/*
 * FUN_00583250 (39 B) — Cleanup / destructor wrapper.
 *
 * If global [0x007f1f84] != 0, calls FUN_00501b40 (thiscall destructor)
 * on it, then calls FUN_004084e0 (free) on it.
 * Then nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f1f84;
extern void __fastcall FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_00583250(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, dword ptr [DAT_007f1f84]
        TEST ESI, ESI
        JZ   l_null
        MOV  ECX, ESI
        CALL FUN_00501b40
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
    l_null:
        mov     dword ptr [DAT_007f1f84], 0
        POP  ESI
        RET
    }
}
