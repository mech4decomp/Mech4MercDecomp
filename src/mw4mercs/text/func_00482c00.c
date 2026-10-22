/*
 * FUN_00482C00 (89 B) — MLR method (__thiscall, RET 0xC).
 *
 * Complex method with vtable dispatch:
 * - Calls FUN_004206B0 on param1->field_20
 * - Calls vtable[0x14](field_9C, 4)
 * - Calls FUN_00423E00 on param1 + 0x1c
 * - Calls vtable[0x18]()
 * - If result != 0, calls vtable[0x0C](this, param1 + 4)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_004206b0(void *this, int param);
extern void FUN_00423e00(void *param);

__declspec(naked) void FUN_00482c00(void *this, void *param1)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, [esp + 0x10]
        mov     eax, [edi + 0x20]
        mov     esi, ecx
        push    eax
        lea     ecx, [esi + 0x24]
        call    FUN_004206b0
        mov     eax, [esi + 0x9c]
        mov     ecx, [eax]
        mov     edx, [esi]
        push    4
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        mov     edx, [esp + 0x14]
        mov     ebx, [esi]
        push    0
        push    edx
        push    ecx
        lea     eax, [edi + 0x1c]
        mov     ecx, esp
        push    eax
        call    FUN_00423e00
        mov     ecx, esi
        call    dword ptr [ebx + 0x18]
        test    eax, eax
        jz      l_done
        mov     ecx, [esp + 0x18]
        mov     edx, [ecx]
        add     edi, 4
        push    edi
        push    esi
        call    dword ptr [edx + 0x0c]
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x0c
    }
}
