/*
 * FUN_004DAF20 (99 B) — __stdcall, 2 args (ret 8), ecx=this. Copies a
 * 0xc-dword struct, converts a float field, and calls two methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004daa20(void);

__declspec(naked) void FUN_004DAF20(void)
{
    __asm {
        sub     esp, 0x3c
        mov     eax, dword ptr [esp + 0x40]
        mov     edx, dword ptr [eax + 0x2c]
        fld     dword ptr [eax + 0xc]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0x18]
        rep     movsd
        fstp    dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax + 0x1c]
        push    0
        mov     eax, ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, edx
        push    2
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [esp + 0x58]
        push    1
        mov     dword ptr [esp + 0x50], ecx
        push    edx
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x44], eax
        call    FUN_0041fde0
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, ebx
        call    FUN_004daa20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret     8
    }
}
