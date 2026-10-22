/*
 * FUN_00480B50 (92 B) — Object destructor / cleanup.
 *
 * __fastcall (ECX = this). Frees sub-object at this+0x0C,
 * then sets vtable pointer at this to 0x76D3F0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(int ptr);
extern void __fastcall FUN_00423b10(void *param1);
extern void __fastcall FUN_00423b20(void *param1);
extern void __fastcall FUN_00423b30(void *param1);

__declspec(naked) void __fastcall FUN_00480b50(void *param1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x0c]
        test    esi, esi
        jz      l_set_vtable
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      l_check_field20
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_check_field20:
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        jz      l_dtor_sub
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_dtor_sub:
        lea     ecx, [esi + 0x18]
        call    FUN_00423b30
        lea     ecx, [esi + 0x10]
        call    FUN_00423b20
        lea     ecx, [esi + 8]
        call    FUN_00423b10
        mov     ecx, esi
        call    FUN_00423b10
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_set_vtable:
        mov     dword ptr [edi], 0x76d3f0
        pop     edi
        pop     esi
        ret
    }
}
