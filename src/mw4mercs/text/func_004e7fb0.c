/*
 * FUN_004E7FB0 (107 B) — Part/location id -> name string dispatcher.
 *
 * __cdecl, 1 int param at [ESP+0x4]. Jump-table switch returning a part-name
 * string pointer (inverse of FUN_004e7e60). Jump table data lives at
 * 0x4e801c (outside the 107-byte function region, not compared).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7741dc[];         /* "Null" @ 0x7741dc */
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
extern char g_772c5c[];         /* "Default" @ 0x772c5c */

__declspec(naked) char *__cdecl FUN_004e7fb0(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        INC EAX
        CMP EAX, 0xd
        JA l_default
        JMP dword ptr [EAX*0x4 + 0x4e801c]
        MOV EAX, OFFSET g_7741dc
        RET
        MOV EAX, OFFSET g_7741c8
        RET
        MOV EAX, OFFSET g_7741bc
        RET
        MOV EAX, OFFSET g_7741b4
        RET
        MOV EAX, OFFSET g_7741a8
        RET
        MOV EAX, OFFSET g_77419c
        RET
        MOV EAX, OFFSET g_774190
        RET
        MOV EAX, OFFSET g_774184
        RET
        MOV EAX, OFFSET g_77416c
        RET
        MOV EAX, OFFSET g_774160
        RET
        MOV EAX, OFFSET g_774154
        RET
        MOV EAX, OFFSET g_774400
        RET
        MOV EAX, OFFSET g_7743f0
        RET
        MOV EAX, OFFSET g_7743e0
        RET
    l_default:
        MOV EAX, OFFSET g_772c5c
        RET
    }
}
