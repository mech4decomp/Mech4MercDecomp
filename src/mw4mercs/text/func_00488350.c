/*
 * FUN_00488350 (87 B) — MLRSortByOrder init.
 *
 * __cdecl. Allocates a 0x14-byte block, constructs it as
 * "MidLevelRenderer::MLRSortByOrder", then initializes globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_004084d0(int size);
extern int __fastcall FUN_004151c0(int *this, int size, const char *name, int param4);

extern int DAT_007b9560;
extern int DAT_007da734;
extern int DAT_007da738;
extern int DAT_007da73c;
extern int DAT_007da740;
extern int DAT_007da7fc;

__declspec(naked) void FUN_00488350(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      l_alloc_fail
        mov     ecx, dword ptr [DAT_007da7fc]
        push    ecx
        push    0x0076fcd4
        push    0x44
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007da738], eax
        jmp     l_done_alloc
    l_alloc_fail:
        mov     dword ptr [DAT_007da738], 0x00000000
    l_done_alloc:
        mov     edx, dword ptr [DAT_007b9560]
        lea     eax, [edx + edx * 1]
        mov     dword ptr [DAT_007da73c], 0x00000000
        mov     dword ptr [DAT_007da740], 0x00000000
        mov     dword ptr [DAT_007da734], eax
        ret
    }
}
