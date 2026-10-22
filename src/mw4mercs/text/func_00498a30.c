/*
 * FUN_00498A30 (74 B) — __cdecl.
 * Allocates 0x1c bytes, initializes via FUN_004151c0, sets function pointers,
 * stores to singleton at 0x007DA964.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void * __stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004151c0(void *this, int type, const char *name, void *param);

extern int DAT_007da93c;
extern int DAT_007da964;

__declspec(naked) void FUN_00498a30(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_null
        mov     eax, dword ptr [DAT_007da93c]   ; mov eax, [0x007da93c]
        push    eax
        push    0x007b2c54
        push    0x52f
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x00498f60
        mov     dword ptr [esi + 0x18], 0x004971f0
        mov     dword ptr [DAT_007da964], esi   ; mov [0x007da964], esi
        pop     esi
        ret
    l_null:
        mov     dword ptr [DAT_007da964], 0     ; mov [0x007da964], 0
        pop     esi
        ret
    }
}
