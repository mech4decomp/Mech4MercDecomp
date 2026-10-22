/*
 * FUN_00544FD0 (215 B) — __stdcall, RET 4.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int DAT_007afaf0;
extern int DAT_007afaf4;
extern int DAT_007afaf8;
extern int DAT_007afafc;

extern int __stdcall FUN_00708930(int a, int b, int c);
extern int __stdcall FUN_00704750(int a);
extern int __stdcall FUN_007089b0(int a, int b, int c);

__declspec(naked) void __stdcall FUN_00544fd0(int param_1)
{
    
__asm {
sub     esp, 0x24
        mov     ecx, dword ptr [DAT_007afaf4]
        mov     edx, dword ptr [DAT_007afaf8]
        mov     eax, dword ptr [DAT_007afaf0]
        push    0
        mov     dword ptr [esp + 0xc], ecx
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 0x10], edx
        push    ecx
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [DAT_007afafc]
        push    edx
        push    0x77b7d0
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], 0x10
        call    FUN_00708930
        /* __emit: MSVC6 encodes mov eax,[esp] as 8B 04 24, need 8B 44 24 00 */
        __emit 0x8b
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jbe     l_fallback
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 4]
        mov     ecx, eax
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 8], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0xc], edx
        add     esp, 0x24
        ret     4
    l_fallback:
        push    esi
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_00704750
        mov     esi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 4]
        mov     edx, dword ptr [esi + 8]
        mov     esi, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    0x10
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x77b7d0
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], esi
        call    FUN_007089b0
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, eax
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 8], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0xc], ecx
        pop     esi
        add     esp, 0x24
        ret     4
    }


}
