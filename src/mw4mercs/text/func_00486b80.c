/*
 * FUN_00486B80 (87 B) — MLR cleanup helper (__fastcall, ECX=this).
 *
 * Frees three pairs of (ptr, flag) fields at offsets 0/4, 8/0xC, 0x10/0x14,
 * then calls FUN_004811A0(0) on field at offset 0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_004811a0(int param1);

__declspec(naked) void __fastcall FUN_00486b80(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, [esi + 4]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      l_check2
        mov     eax, [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     [esi], edi
        mov     [esi + 4], edi
    l_check2:
        cmp     [esi + 0x0c], edi
        jz      l_check3
        mov     ecx, [esi + 8]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     [esi + 8], edi
        mov     [esi + 0x0c], edi
    l_check3:
        cmp     [esi + 0x14], edi
        jz      l_call_sub
        mov     edx, [esi + 0x10]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     [esi + 0x10], edi
        mov     [esi + 0x14], edi
    l_call_sub:
        push    edi
        lea     ecx, [esi + 0x18]
        call    FUN_004811a0
        pop     edi
        pop     esi
        ret
    }
}
