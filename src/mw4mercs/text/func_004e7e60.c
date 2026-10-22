/*
 * FUN_004E7E60 (327 B) — Location/part name string dispatcher.
 *
 * __cdecl, 1 char* param at [ESP+0x8]. Calls _stricmp (via IAT 0x0076b2ac)
 * against a series of part/location names, returning a part id:
 *   NullZone=-1, LeftLeg=0, RightLeg=1, LeftArm=2, RightArm=3, RightTorso=4,
 *   LeftTorso=5, CenterTorso=6, Head=7, Special1=8, Special2=9,
 *   VehicleHull=10, VehicleWeapon=11, VehicleSpecial=12 (default).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2ac;          /* IAT slot for _stricmp @ 0x0076b2ac */
extern char g_7741d0[];         /* "NullZone" @ 0x7741d0 */
extern char g_7741c8[];         /* "LeftLeg" @ 0x7741c8 */
extern char g_7741bc[];         /* "RightLeg" @ 0x7741bc */
extern char g_7741b4[];         /* "LeftArm" @ 0x7741b4 */
extern char g_7741a8[];         /* "RightArm" @ 0x7741a8 */
extern char g_77419c[];         /* "RightTorso" @ 0x77419c */
extern char g_774190[];         /* "LeftTorso" @ 0x774190 */
extern char g_774184[];         /* "CenterTorso" @ 0x774184 */
extern char g_77416c[];         /* "Head" @ 0x77416c */
extern char g_774160[];         /* "Special1" @ 0x774160 */
extern char g_774154[];         /* "Special2" @ 0x774154 */
extern char g_774400[];         /* "VehicleHull" @ 0x774400 */
extern char g_7743f0[];         /* "VehicleWeapon" @ 0x7743f0 */
extern char g_7743e0[];         /* "VehicleSpecial" @ 0x7743e0 */

__declspec(naked) int __cdecl FUN_004e7e60(void)
{
    __asm {
        PUSH ESI
        MOV ESI, dword ptr [ESP + 0x8]
        PUSH EDI
        MOV EDI, dword ptr [g_76b2ac]
        PUSH OFFSET g_7741d0
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_2
        POP EDI
        OR EAX, 0xffffffff
        POP ESI
        RET
    l_2:
        PUSH OFFSET g_7741c8
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_3
        POP EDI
        POP ESI
        RET
    l_3:
        PUSH OFFSET g_7741bc
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_4
        POP EDI
        MOV EAX, 0x1
        POP ESI
        RET
    l_4:
        PUSH OFFSET g_7741b4
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_5
        POP EDI
        MOV EAX, 0x2
        POP ESI
        RET
    l_5:
        PUSH OFFSET g_7741a8
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_6
        POP EDI
        MOV EAX, 0x3
        POP ESI
        RET
    l_6:
        PUSH OFFSET g_77419c
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_7
        POP EDI
        MOV EAX, 0x4
        POP ESI
        RET
    l_7:
        PUSH OFFSET g_774190
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_8
        POP EDI
        MOV EAX, 0x5
        POP ESI
        RET
    l_8:
        PUSH OFFSET g_774184
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_9
        POP EDI
        MOV EAX, 0x6
        POP ESI
        RET
    l_9:
        PUSH OFFSET g_77416c
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_10
        POP EDI
        MOV EAX, 0x7
        POP ESI
        RET
    l_10:
        PUSH OFFSET g_774160
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_11
        POP EDI
        MOV EAX, 0x8
        POP ESI
        RET
    l_11:
        PUSH OFFSET g_774154
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_12
        POP EDI
        MOV EAX, 0x9
        POP ESI
        RET
    l_12:
        PUSH OFFSET g_774400
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_13
        POP EDI
        MOV EAX, 0xa
        POP ESI
        RET
    l_13:
        PUSH OFFSET g_7743f0
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ l_14
        POP EDI
        MOV EAX, 0xb
        POP ESI
        RET
    l_14:
        PUSH OFFSET g_7743e0
        PUSH ESI
        CALL EDI
        ADD ESP, 0x8
        NEG EAX
        SBB EAX, EAX
        NEG EAX
        POP EDI
        ADD EAX, 0xc
        POP ESI
        RET
    }
}
