/*
 * FUN_004AF9B0 (118 B) — __fastcall TreeElement destructor.
 *   Decrements refcounts, frees children, calls FUN_004C68F0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_004c68f0(void);

__declspec(naked) void __fastcall FUN_004af9b0(void)
{
    __asm {
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [edi], 0x77058c
        mov     ebp, dword ptr [edi + 0x188]
        xor     esi, esi
        test    ebp, ebp
        jbe     l_free_children
        push    ebx
        mov     ebx, dword ptr [edi + 0x184]
        xor     eax, eax
    l_loop:
        mov     ecx, dword ptr [ebx + eax * 4]
        dec     word ptr [ecx + 0x10]
        cmp     word ptr [ecx + 0x10], 0
        jnz     l_next
        test    ecx, ecx
        jz      l_next
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_next:
        inc     esi
        mov     eax, esi
        and     eax, 0xffff
        cmp     eax, ebp
        jc      l_loop
        pop     ebx
    l_free_children:
        mov     eax, dword ptr [edi + 0x184]
        test    eax, eax
        jz      l_free_lod
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_free_lod:
        mov     eax, dword ptr [edi + 0x14c]
        test    eax, eax
        jz      l_call_c68f0
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_call_c68f0:
        mov     ecx, edi
        call    FUN_004c68f0
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}
