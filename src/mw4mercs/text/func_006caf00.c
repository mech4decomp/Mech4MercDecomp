/*
 * FUN_006CAF00 — set two log dimension globals (0x0082F358, 0x0082F35C).
 *
 * __stdcall RET 0x8 (2 params).  Loads both params into EAX/ECX before
 * storing (matches reference register choice and store order).
 *
 * CFLAGS: /O1 (pinned)
 * Match: TBD
 */

#include <mw4/common.h>

extern int g_log_w;   /* 0x0082F358 */
extern int g_log_h;   /* 0x0082F35C */

__declspec(naked) void __stdcall texture_set_log_dims(int w, int h)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [g_log_w], eax
        mov     dword ptr [g_log_h], ecx
        ret     8
    }
}
