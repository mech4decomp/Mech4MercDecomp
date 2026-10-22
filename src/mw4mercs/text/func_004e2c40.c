/*
 * FUN_004E2C40 (91 B) - Adept::CollisionGrid subsystem init.
 *
 * Allocates 0x18 bytes via FUN_004084d0. If non-null, calls
 * FUN_004151c0(0x235, "Adept::CollisionGrid", DAT_007daa20), sets
 * vtable ptr at [this+0x14] = 0x4b6b30, stores this in DAT_007dc72c.
 * Else stores 0 in DAT_007dc72c.
 * Then calls FUN_0070f090("Libraries\\Adept\\Ignore OBB Collisions",
 *   &0x4e2ca0, &0x4e2cb0, 0, 0).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0070f090(void);

extern int g_007daa20;
extern int g_007dc72c;

__declspec(naked) void __stdcall FUN_004e2c40(void)
{
    __asm {
        PUSH ESI
        PUSH 0x18
        CALL FUN_004084d0
        MOV ESI, EAX
        ADD ESP, 0x4
        TEST ESI, ESI
        JZ l_null
        MOV EAX, dword ptr [g_007daa20]
        PUSH EAX
        PUSH 0x773e78
        PUSH 0x235
        MOV ECX, ESI
        CALL FUN_004151c0
        MOV dword ptr [ESI + 0x14], 0x4b6b30
        MOV dword ptr [g_007dc72c], ESI
        JMP l_done
    l_null:
        MOV dword ptr [g_007dc72c], 0x0
    l_done:
        PUSH 0x0
        PUSH 0x0
        PUSH 0x4e2cb0
        PUSH 0x4e2ca0
        PUSH 0x773e50
        CALL FUN_0070f090
        POP ESI
        RET
    }
}
