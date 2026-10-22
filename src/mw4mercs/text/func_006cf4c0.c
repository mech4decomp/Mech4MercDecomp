/*
 * FUN_006CF4C0 — allocate a slot and store 6 params in a struct array.
 *
 * __thiscall (ECX = this), RET 0x18.
 *
 * Calls FUN_006CF450 to get a free slot index. If < 0, returns 0.
 * Stores params at computed offsets in the struct array.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

int __fastcall FUN_006cf450(void);

__declspec(naked) int __stdcall func_006cf4c0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006cf450
        test    eax, eax
        jge     L_ok
        xor     al, al
        pop     esi
        ret     0x18
    L_ok:
        mov     edx, dword ptr [esp + 8]
        lea     ecx, [eax * 8]
        sub     ecx, eax
        mov     dword ptr [esi + ecx * 4 + 0xc], edx
        mov     edx, dword ptr [esp + 0xc]
        lea     ecx, [esi + ecx * 4]
        mov     dword ptr [ecx + 0x10], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x14], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x18], edx
        mov     dword ptr [edx + 0xc], 1
        lea     edx, [eax + 1]
        push    edi
        lea     edi, [edx * 8]
        sub     edi, edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + edi * 4], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [ecx + 0x20], edx
        pop     edi
        mov     dword ptr [ecx + 0x24], eax
        mov     al, 1
        pop     esi
        ret     0x18
    }
}
