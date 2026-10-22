/*
 * FUN_004E8160 (85 B) — MLR/Adept object teardown helper.
 *
 * __thiscall (ECX = this), RET 4, 1 byte flags param at [ESP+0x8].
 * Calls FUN_004169c0(). If (flags & 1): calls FUN_00416130(this), decrements
 * global 0x007dc778; when it reaches 0, frees global 0x007dc77c via
 * FUN_00415e30 + FUN_004084e0 and zeroes it. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void *ptr);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern int g_7dc77c;   /* 0x007dc77c */
extern int g_7dc778;   /* 0x007dc778 */

__declspec(naked) void __fastcall FUN_004e8160(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        CALL FUN_004169c0
        TEST byte ptr [ESP + 0x8], 0x1
        JZ l_done
        MOV ECX, dword ptr [g_7dc77c]
        PUSH ESI
        CALL FUN_00416130
        DEC dword ptr [g_7dc778]
        JNZ l_done
        PUSH EDI
        MOV EDI, dword ptr [g_7dc77c]
        TEST EDI, EDI
        JZ l_skip_free
        MOV ECX, EDI
        CALL FUN_00415e30
        PUSH EDI
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_skip_free:
        POP EDI
        MOV EAX, ESI
        MOV dword ptr [g_7dc77c], 0x0
        POP ESI
        RET 0x4
    l_done:
        MOV EAX, ESI
        POP ESI
        RET 0x4
    }
}
