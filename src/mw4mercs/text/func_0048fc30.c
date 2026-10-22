/*
 * FUN_0048fc30 (52 B) — Init function.
 * Allocates 0x14 bytes, if success calls FUN_004151c0(0x45, "MidLevelRenderer::MLRLight", DAT_007b8c08)
 * and stores result in DAT_007da850. Otherwise sets DAT_007da850 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __cdecl FUN_004084d0(int size);
extern int * __fastcall FUN_004151c0(int *param_1, int a, const char *b, int c);

extern int DAT_007da850;
extern int DAT_007b8c08;

#define STR_76ff14   0x0076ff14

__declspec(naked) void FUN_0048fc30(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      l_set_null
        mov     ecx, dword ptr [DAT_007b8c08]   ; mov ecx, [0x007b8c08]
        push    ecx
        push    STR_76ff14
        push    0x45
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007da850], eax   ; mov [0x007da850], eax
        ret
    l_set_null:
        mov     dword ptr [DAT_007da850], 0     ; mov [0x007da850], 0
        ret
    }
}
