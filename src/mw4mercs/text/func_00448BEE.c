/*
 * FUN_00448BEE (103 B) — __stdcall, 1 arg (ret 4), ecx=this. Initializes
 * an object: sets vtable, zeroes a region, and fills a float array with 1.0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00455070(void);
extern char g_76e858[];

__declspec(naked) void FUN_00448BEE(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00455070
        xor     edx, edx
        xor     eax, eax
        lea     edi, [esi + 0xc8]
        mov     ecx, 0x20
        mov     dword ptr [esi], offset g_76e858
        rep     stosd
        mov     byte ptr [esi + 0x188], dl
        mov     byte ptr [esi + 0x189], dl
        mov     byte ptr [esi + 0x18b], dl
        mov     byte ptr [esi + 0x18c], dl
        lea     eax, [esi + 0x148]
        mov     ecx, 8
        mov     edi, 0x3f800000
    l_1:
        mov     dword ptr [eax - 0xa0], edx
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x20], edi
        add     eax, 4
        dec     ecx
        jne     l_1
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
