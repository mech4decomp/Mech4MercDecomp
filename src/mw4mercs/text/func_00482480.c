/*
 * FUN_00482480 (52 B) — MLRInfiniteLight singleton init.
 *
 * Allocates 0x14 bytes, calls FUN_004151C0 to construct a
 * "MidLevelRenderer::MLRInfiniteLight" object, stores result in
 * g_inflight_singleton (0x007DA6A8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004151c0(void *this, int type, const char *name, void *param);

extern int DAT_007da850;
extern int DAT_007da6a8;

__declspec(naked) void FUN_00482480(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_set_null
        mov     ecx, dword ptr [DAT_007da850]   ; mov ecx, [0x007da850]
        push    ecx
        push    0x76fa90                     ; "MidLevelRenderer::MLRInfiniteLight"
        push    0x50
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007da6a8], eax   ; mov [0x007da6a8], eax
        ret
    l_set_null:
        mov     dword ptr [DAT_007da6a8], 0     ; mov dword ptr [0x007da6a8], 0
        ret
    }
}
