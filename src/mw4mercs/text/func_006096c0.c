/*
 * FUN_006096C0 (57 B) — __thiscall, RET 4.
 *
 * Looks up a sub-object via FUN_00416B60, decrements a refcount at +0x30,
 * and if it drops below 1, releases it via FUN_00415CA0 and a virtual call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__fastcall FUN_00416b60(void *this, void *param);
extern void __fastcall FUN_00415ca0(void *this, void *obj);

__declspec(naked) void __fastcall FUN_006096c0(void *this, void *param)
{
    __asm {
        push    esi
        push    edi
        lea     edi, [ecx + 0x28]
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, edi
        call    FUN_00416b60
        mov     esi, eax
        test    esi, esi
        jz      l_done
        mov     ecx, dword ptr [esi + 0x30]
        dec     ecx
        mov     eax, ecx
        test    eax, eax
        mov     dword ptr [esi + 0x30], ecx
        jg      l_done
        push    esi
        mov     ecx, edi
        call    FUN_00415ca0
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
    l_done:
        pop     edi
        pop     esi
        ret     4
    }
}
