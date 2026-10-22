/*
 * FUN_0072d0f0 (12 B) — __stdcall(1 byte arg): stores arg to DAT_007b7121.
 *
 *   MOV AL,byte ptr [ESP+0x4]
 *   MOV [0x007b7121],AL      (A2 moffs8 form)
 *   RET 0x4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b7121;

__declspec(naked) void __stdcall FUN_0072d0f0(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        mov     byte ptr [g_007b7121], al
        ret     4
    }
}
