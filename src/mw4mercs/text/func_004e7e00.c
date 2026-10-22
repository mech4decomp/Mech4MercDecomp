/*
 * FUN_004E7E00 (59 B) — Damage-mode id -> name string dispatcher.
 *
 * __cdecl, 1 int param at [ESP+0x4]. Jump-table switch returning a mode-name
 * string pointer. Jump table data lives at 0x4e7e3c (outside the 59-byte
 * function region, not compared).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7743b8[];         /* "GimpLeftDamageMode" @ 0x7743b8 */
extern char g_7743a4[];         /* "GimpRightDamageMode" @ 0x7743a4 */
extern char g_77438c[];         /* "DestructionDamageMode" @ 0x77438c */
extern char g_774378[];         /* "HeadShotDamageMode" @ 0x774378 */
extern char g_774360[];         /* "DetachableDamageMode" @ 0x774360 */
extern char g_77434c[];         /* "EngineDamageMode" @ 0x77434c */
extern char g_7743cc[];         /* "GeneralDamageMode" @ 0x7743cc */

__declspec(naked) char *__cdecl FUN_004e7e00(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        DEC EAX
        CMP EAX, 0x6
        JA l_default
        JMP dword ptr [EAX*0x4 + 0x4e7e3c]
        MOV EAX, OFFSET g_7743b8
        RET
        MOV EAX, OFFSET g_7743a4
        RET
        MOV EAX, OFFSET g_77438c
        RET
        MOV EAX, OFFSET g_774378
        RET
        MOV EAX, OFFSET g_774360
        RET
        MOV EAX, OFFSET g_77434c
        RET
    l_default:
        MOV EAX, OFFSET g_7743cc
        RET
    }
}
