/*
 * FUN_0074dda0 (69 B) — DirectInput device GUID to name mapping.
 *
 * Compares the incoming pointer against four known GUID addresses and
 * returns the corresponding device-name string; defaults to "Unknown".
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* GUID data addresses in .rdata */
extern const char _guid_keyboard;    /* @ 0x7afce8 */
extern const char _guid_mouse;       /* @ 0x7afcb8 */
extern const char _guid_joystick;    /* @ 0x7afca0 */
extern const char _guid_joystick2;   /* @ 0x7afcd0 */

/* String constants in .rdata */
extern const char _str_keyboard;     /* "c_dfDIKeyboard"  @ 0x7abe50 */
extern const char _str_mouse;        /* "c_dfDIMouse"     @ 0x7abe44 */
extern const char _str_joystick;     /* "c_dfDIJoystick"  @ 0x7abe34 */
extern const char _str_joystick2;    /* "c_dfDIJoystick2" @ 0x7abe24 */
extern const char _str_unknown;      /* "Unknown"         @ 0x79e7f8 */

__declspec(naked) char *__stdcall FUN_0074dda0(void *param_1)
{
    __asm {
        MOV  EAX, DWORD PTR [ESP + 4]
        CMP  EAX, OFFSET _guid_keyboard
        JNZ  L_mouse
        MOV  EAX, OFFSET _str_keyboard
        RET  4
    L_mouse:
        CMP  EAX, OFFSET _guid_mouse
        JNZ  L_joystick
        MOV  EAX, OFFSET _str_mouse
        RET  4
    L_joystick:
        CMP  EAX, OFFSET _guid_joystick
        JNZ  L_joystick2
        MOV  EAX, OFFSET _str_joystick
        RET  4
    L_joystick2:
        CMP  EAX, OFFSET _guid_joystick2
        MOV  EAX, OFFSET _str_joystick2
        JZ   L_done
        MOV  EAX, OFFSET _str_unknown
    L_done:
        RET  4
    }
}
