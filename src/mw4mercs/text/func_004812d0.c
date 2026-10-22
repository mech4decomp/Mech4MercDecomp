/*
 * FUN_004812D0 (52 B) — MLRSpotLight singleton init.
 *
 * Allocates 0x14 bytes, calls FUN_004151C0 to construct a
 * "MidLevelRenderer::MLRSpotLight" object, stores result in
 * g_spotlight_singleton (0x007DA69C).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004151c0(void *this, int type, const char *name, void *param);

extern int DAT_007da6a4;   /* g_spotlight_singleton */
extern int DAT_007da69c;   /* g_spotlight_singleton */

__declspec(naked) void FUN_004812d0(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_set_null
        mov     ecx, dword ptr [DAT_007da6a4]   ; mov ecx, [0x007da6a4]
        push    ecx
        push    0x76f968                     ; "MidLevelRenderer::MLRSpotLight"
        push    0x53
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007da69c], eax   ; mov [0x007da69c], eax
        ret
    l_set_null:
        mov     dword ptr [DAT_007da69c], 0     ; mov dword ptr [0x007da69c], 0
        ret
    }
}
