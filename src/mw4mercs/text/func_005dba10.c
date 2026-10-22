/*
 * FUN_005DBA10 (128 B) - Destructor / cleanup.
 *
 * __thiscall (ECX = this). Sets vtable ptr, frees sub-object at +0x2E4,
 * frees a library handle at +0x2E8 (via IAT FreeLibrary), calls
 * FUN_00637B10, frees +0x2D4, then destroys sub-objects at +0x1C8 and this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_0064c620(void *this);
extern void __stdcall FUN_004084e0(int ptr);
extern void __fastcall FUN_00637b10(void);
extern void __fastcall FUN_0041fc90(void *this);
extern void __fastcall FUN_004f4770(void *this);

__declspec(naked) void __fastcall FUN_005dba10(void *this)
{
    

extern int DAT_0076b0b8;
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x2e4]
        test    edi, edi
        mov     dword ptr [esi], 0x78831c
        jz      l_skip1
        mov     ecx, edi
        call    FUN_0064c620
        push    edi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x2e4], 0
    l_skip1:
        mov     eax, dword ptr [esi + 0x2e8]
        test    eax, eax
        jz      l_skip2
        push    eax
        mov     dword ptr [esi + 0x2ec], 0
        call dword ptr [DAT_0076b0b8]
        mov     dword ptr [esi + 0x2e8], 0
    l_skip2:
        call    FUN_00637b10
        mov     eax, dword ptr [esi + 0x2d4]
        test    eax, eax
        jz      l_skip3
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip3:
        lea     ecx, [esi + 0x1c8]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_004f4770
        pop     edi
        pop     esi
        ret
    }


}
