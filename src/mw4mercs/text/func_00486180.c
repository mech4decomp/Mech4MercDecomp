/*
 * FUN_00486180 (52 B) — MLR singleton init.
 *
 * Allocates 0x14 bytes, if successful calls FUN_004151C0 to construct
 * a "MidLevelRenderer::MLRPointCloud" object, stores result in DAT_007DA714.
 * If allocation fails, sets DAT_007DA714 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004151c0(void *this, int type, const char *name, void *param);

extern int DAT_007da714;
extern int DAT_007da720;

__declspec(naked) void FUN_00486180(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_set_null
        mov     ecx, dword ptr [DAT_007da720]   ; mov ecx, [0x007da720]
        push    ecx
        push    0x76fbe0
        push    0x4d
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007da714], eax   ; mov [0x007da714], eax
        ret
    l_set_null:
        mov     dword ptr [DAT_007da714], 0     ; mov dword ptr [0x007da714], 0
        ret
    }
}
