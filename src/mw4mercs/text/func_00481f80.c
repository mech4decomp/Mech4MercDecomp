/*
 * FUN_00481F80 (52 B) — MLRInfiniteLightWithFalloff singleton init.
 *
 * Allocates 0x14 bytes, calls FUN_004151C0 to construct a
 * "MidLevelRenderer::MLRInfiniteLightWithFalloff" object, stores result in
 * g_inflight_falloff_singleton (0x007DA6A4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004151c0(void *this, int type, const char *name, void *param);

extern int DAT_007da850;   /* g_inflight_falloff_singleton */
extern int DAT_007da6a4;   /* g_inflight_falloff_singleton */

__declspec(naked) void FUN_00481f80(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_set_null
        mov     ecx, dword ptr [DAT_007da850]   ; mov ecx, [0x007da850]
        push    ecx
        push    0x76f9e8                     ; "MidLevelRenderer::MLRInfiniteLightWithFalloff"
        push    0x51
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007da6a4], eax   ; mov [0x007da6a4], eax
        ret
    l_set_null:
        mov     dword ptr [DAT_007da6a4], 0     ; mov dword ptr [0x007da6a4], 0
        ret
    }
}
