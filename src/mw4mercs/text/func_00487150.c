/*
 * FUN_00487150 (52 B) — MLRShape singleton init.
 *
 * Allocates 0x14 bytes, calls FUN_004151C0 to construct a
 * "MidLevelRenderer::MLRShape" object, stores result in
 * g_mlrshape_singleton (0x007DA724).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004151c0(void *this, int type, const char *name, void *param);

extern int DAT_007b8c10;
extern int DAT_007da724;

__declspec(naked) void FUN_00487150(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_set_null
        mov     ecx, dword ptr [DAT_007b8c10]   ; mov ecx, [0x007b8c10]
        push    ecx
        push    0x76fc54                     ; "MidLevelRenderer::MLRShape"
        push    0x4b
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007da724], eax   ; mov [0x007da724], eax
        ret
    l_set_null:
        mov     dword ptr [DAT_007da724], 0     ; mov dword ptr [0x007da724], 0
        ret
    }
}
