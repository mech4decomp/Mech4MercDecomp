/*
 * FUN_004AF2A0 (91 B) — TreeElement init.
 *   Calls FUN_006F4710 to register "TreeLOD", allocates 0x18 bytes,
 *   initializes, stores to global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004151c0(int id, const char *name, int param);
extern int __cdecl FUN_006f4710(const char *name, int a, int b);

extern int DAT_007da9e8;
extern int DAT_007da9f0;
extern int DAT_007dab18;
extern int DAT_007da9f4;

__declspec(naked) void __stdcall FUN_004af2a0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007da9e8]
        push    esi
        push    eax
        push    0
        push    0x77054c
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [DAT_007da9f0], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_set_null
        mov     ecx, dword ptr [DAT_007dab18]
        push    ecx
        push    0x77052c
        push    0x91
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4afa30
        mov     dword ptr [DAT_007da9f4], esi
        pop     esi
        ret
    l_set_null:
        mov     dword ptr [DAT_007da9f4], 0
        pop     esi
        ret
    }
}
