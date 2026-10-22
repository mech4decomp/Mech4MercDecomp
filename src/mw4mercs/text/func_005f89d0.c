/*
 * FUN_005f89d0 (371 B) -- __thiscall (ECX = this), plain RET.
 * Destructor: sets vtable, releases sub-objects, calls virtual
 * destructors and container teardown helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *PTR_FUN_0078aa84;
extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_00580560(void *this);
extern void __fastcall FUN_005fc130(void *ptr, int count);
extern void __fastcall FUN_0041fc90(void *this);
extern void __fastcall FUN_00417980(void *this);
extern void __fastcall FUN_0059db20(void *ptr, int count);
extern void __fastcall FUN_004169c0(void *this);
extern void __fastcall FUN_0066abe0(void *this);
extern void __fastcall FUN_005fc990(void *this);
extern void __fastcall FUN_004179f0(void *this);

__declspec(naked) void __fastcall FUN_005f89d0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x2f4]
        test    ecx, ecx
        push    edi
        mov     dword ptr [esi], offset PTR_FUN_0078aa84
        jz      l_skip1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip1:
        mov     eax, dword ptr [esi + 0x2c0]
        test    eax, eax
        jz      l_skip2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip2:
        mov     eax, dword ptr [esi + 0x2c4]
        test    eax, eax
        jz      l_skip3
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip3:
        mov     edx, dword ptr [esi + 0x370]
        lea     edi, [esi + 0x370]
        mov     ecx, edi
        call    dword ptr [edx + 8]
        mov     eax, dword ptr [esi + 0x384]
        lea     ebx, [esi + 0x384]
        mov     ecx, ebx
        call    dword ptr [eax + 8]
        lea     ebp, [esi + 0x3a0]
        mov     ecx, ebp
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x408]
        test    ecx, ecx
        jz      l_skip4
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_skip4:
        mov     eax, dword ptr [esi + 0x2c8]
        test    eax, eax
        jz      l_skip5
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip5:
        mov     ecx, dword ptr [esi + 0x2cc]
        test    ecx, ecx
        jz      l_skip6
        mov     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x10], eax
        call    FUN_00580560
        mov     eax, dword ptr [esi + 0x2cc]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip6:
        mov     eax, dword ptr [esi + 0x40c]
        mov     edx, dword ptr [esi + 0x414]
        lea     ecx, [esi + 0x414]
        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    FUN_005fc130
        lea     ecx, [esi + 0x400]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x3f8]
        call    FUN_00417980
        mov     eax, dword ptr [esi + 0x3c4]
        mov     edx, dword ptr [esi + 0x3cc]
        lea     ecx, [esi + 0x3cc]
        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        call    FUN_0059db20
        mov     ecx, ebp
        call    FUN_00417980
        lea     ecx, [esi + 0x398]
        call    FUN_00417980
        mov     ecx, ebx
        call    FUN_004169c0
        mov     ecx, edi
        call    FUN_004169c0
        lea     ecx, [esi + 0x364]
        call    FUN_00417980
        lea     ecx, [esi + 0x35c]
        call    FUN_00417980
        lea     ecx, [esi + 0x354]
        call    FUN_00417980
        lea     ecx, [esi + 0x34c]
        call    FUN_00417980
        lea     ecx, [esi + 0x2d0]
        call    FUN_0066abe0
        mov     ecx, esi
        call    FUN_005fc990
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
