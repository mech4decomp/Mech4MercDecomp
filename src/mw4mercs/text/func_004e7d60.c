/*
 * FUN_004E7D60 (151 B) — Damage-mode string dispatcher.
 *
 * __cdecl, 1 char* param at [ESP+0x8]. Calls _stricmp (via IAT 0x0076b2ac)
 * against a series of mode-name strings, returning a mode id:
 *   GimpLeftDamageMode=1, GimpRightDamageMode=2, DestructionDamageMode=3,
 *   HeadShotDamageMode=7, DetachableDamageMode=4, EngineDamageMode=5 (default).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2ac;          /* IAT slot for _stricmp @ 0x0076b2ac */
extern char g_7743b8[];         /* "GimpLeftDamageMode" @ 0x7743b8 */
extern char g_7743a4[];         /* "GimpRightDamageMode" @ 0x7743a4 */
extern char g_77438c[];         /* "DestructionDamageMode" @ 0x77438c */
extern char g_774378[];         /* "HeadShotDamageMode" @ 0x774378 */
extern char g_774360[];         /* "DetachableDamageMode" @ 0x774360 */
extern char g_77434c[];         /* "EngineDamageMode" @ 0x77434c */

__declspec(naked) int __cdecl FUN_004e7d60(void)
{
    __asm {
        PUSH ESI
        MOV ESI, dword ptr [ESP + 0x8]
        PUSH EDI
        MOV EDI, dword ptr [g_76b2ac]
        PUSH OFFSET g_7743b8
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_2
        POP EDI
        MOV EAX, 0x1
        POP ESI
        RET
    l_2:
        PUSH OFFSET g_7743a4
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_3
        POP EDI
        MOV EAX, 0x2
        POP ESI
        RET
    l_3:
        PUSH OFFSET g_77438c
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_4
        POP EDI
        MOV EAX, 0x3
        POP ESI
        RET
    l_4:
        PUSH OFFSET g_774378
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_5
        POP EDI
        MOV EAX, 0x7
        POP ESI
        RET
    l_5:
        PUSH OFFSET g_774360
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_6
        POP EDI
        MOV EAX, 0x4
        POP ESI
        RET
    l_6:
        PUSH OFFSET g_77434c
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        NEG EAX
        SBB EAX, EAX
        AND EAX, 0xfffffffb
        POP EDI
        ADD EAX, 0x5
        POP ESI
        RET
    }
}
