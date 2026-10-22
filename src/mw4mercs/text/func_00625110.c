/*
 * FUN_00625110 (57 B) — __thiscall, RET 8.
 *
 * If param_1 != param_2, memmove(param_1, param_2, this[1]-param_2+1)
 * via IAT 0x0076B28C, then updates this[1]. Returns param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *g_76b28c;   /* IAT: memmove */

__declspec(naked) void *__fastcall FUN_00625110(void *this, void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, eax
        mov     ebx, ecx
        jz      l_same
        push    esi
        mov     esi, dword ptr [ebx + 4]
        sub     esi, eax
        lea     ecx, [esi + 1]
        push    ecx
        push    eax
        push    edi
        call    dword ptr [g_76b28c]
        add     esp, 0xc
        add     esi, edi
        mov     dword ptr [ebx + 4], esi
        pop     esi
        mov     eax, edi
        pop     edi
        pop     ebx
        ret     8
    l_same:
        mov     eax, edi
        pop     edi
        pop     ebx
        ret     8
    }
}
