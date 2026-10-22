/*
 * FUN_006CB0B0 — setter: stores param_1 into global 0x0082F384 (g_log_mode).
 *
 * __stdcall, RET 0x4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006cb0b0(int val)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        _emit 0xA3
        _emit 0x84
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        ret     4
    }
}
