/*
 * FUN_0074ddf0 (69 B) — DirectInput device type to name mapping.
 *
 * Switch on the low byte of the incoming value (0..4) and return the
 * corresponding device-name string; default "Unknown". Uses a jump table
 * at 0x74de38 (data, outside this function's byte range).
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* Jump table data in .rdata @ 0x74de38 (5 dword entries, outside fn range) */
extern int g_jumptable_74de38[];

/* String constants in .rdata. Named with their address (str_<va>) so the
   resolver's address-in-name path picks the exact VA; the generic _str_*
   names collide with FUN_0074dda0's (different strings, different VAs). */
extern const char str_7abe80;        /* "ALL"      @ 0x7abe80 */
extern const char str_7abe74;        /* "DEVICE"   @ 0x7abe74 */
extern const char str_7abe68;        /* "MOUSE"    @ 0x7abe68 */
extern const char str_7abe60;        /* "KEYBOARD" @ 0x7abe60 */
extern const char str_7abb00;        /* "JOYSTICK" @ 0x7abb00 */
extern const char str_79e7f8;        /* "Unknown"  @ 0x79e7f8 */

__declspec(naked) char *__stdcall FUN_0074ddf0(unsigned char param_1)
{
    __asm {
        MOV  EAX, DWORD PTR [ESP + 4]
        AND  EAX, 0xFF
        CMP  EAX, 4
        JA   L_default
        JMP  DWORD PTR [EAX*4 + g_jumptable_74de38]
    L_case0:
        MOV  EAX, OFFSET str_7abe80
        RET  4
    L_case1:
        MOV  EAX, OFFSET str_7abe74
        RET  4
    L_case2:
        MOV  EAX, OFFSET str_7abe68
        RET  4
    L_case3:
        MOV  EAX, OFFSET str_7abe60
        RET  4
    L_case4:
        MOV  EAX, OFFSET str_7abb00
        RET  4
    L_default:
        MOV  EAX, OFFSET str_79e7f8
        RET  4
    }
}
