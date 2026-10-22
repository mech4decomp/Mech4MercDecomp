/*
 * FUN_005f8860 (113 B) -- __thiscall (ECX = this), RET 4.
 * Fills a 12-entry array with -1.0f, calls a virtual method on the
 * object at this+0x78, then copies a set of global constants and
 * object fields into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007b8d6c;
extern int DAT_007b8d68;
extern int DAT_007b8d70;

__declspec(naked) void __fastcall FUN_005f8860(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     eax, 0xbf800000
        lea     edi, [esi + 0x30c]
        mov     ecx, 0xb
        rep stosd
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [DAT_007b8d6c]
        xor     cl, cl
        mov     byte ptr [esi + 0x2f8], cl
        mov     byte ptr [esi + 0x2f9], cl
        mov     ecx, dword ptr [DAT_007b8d68]
        mov     dword ptr [esi + 0x2a4], ecx
        mov     ecx, dword ptr [DAT_007b8d70]
        mov     dword ptr [esi + 0x2a8], edx
        mov     edx, dword ptr [eax + 0x6c]
        mov     dword ptr [esi + 0x2ac], ecx
        mov     ecx, dword ptr [eax + 0x74]
        mov     dword ptr [esi + 0x3b8], edx
        mov     edx, dword ptr [eax + 0x78]
        pop     edi
        mov     dword ptr [esi + 0x3bc], ecx
        mov     dword ptr [esi + 0x3c0], edx
        pop     esi
        ret     4
    }
}
