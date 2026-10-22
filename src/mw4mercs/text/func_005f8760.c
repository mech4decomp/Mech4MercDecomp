/*
 * FUN_005f8760 (242 B) -- __thiscall (ECX = this). Initializes a
 * transform/weight-list object: builds a linked list of weight entries
 * from a source list, normalizes a scalar, and fills a 12-entry array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00416bc0(void *this);
extern void *__fastcall FUN_00416cc0(void *this);
extern void *__fastcall FUN_00416b60(void *this);
extern void __fastcall FUN_00416c60(void *this);

extern void *PTR_FUN_00783ec4;
extern float _DAT_0076c5b0;

__declspec(naked) void __fastcall FUN_005f8760(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ebx, [edi + 0x370]
        lea     esi, [edi + 0x304]
        push    ebx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi], 0
        call    FUN_00416bc0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], offset PTR_FUN_00783ec4
        call    FUN_00416cc0
        test    eax, eax
        jz      l_after_loop
    l_loop:
        fld     dword ptr [eax + 0x14]
        mov     ecx, dword ptr [eax + 0x28]
        test    ecx, ecx
        fadd    dword ptr [esi]
        fst     dword ptr [esi]
        jz      l_skip_add
        fadd    dword ptr [ecx + 0x14]
        lea     esi, [edi + 0x304]
        mov     dword ptr [ecx + 0x18], esi
        fstp    dword ptr [esi]
        jmp     l_cont
    l_skip_add:
        fstp    st(0)
    l_cont:
        lea     ecx, [esp + 0x10]
        mov     dword ptr [eax + 0x40], esi
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_loop
    l_after_loop:
        fld     dword ptr [edi + 0x304]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_skip_set
        mov     dword ptr [edi + 0x304], 0x3f800000
    l_skip_set:
        mov     eax, dword ptr [edi + 0x304]
        mov     dword ptr [edi + 0x308], eax
        xor     eax, eax
        mov     dword ptr [esp + 0x0c], eax
        mov     esi, 0xbf800000
    l_loop2:
        lea     ecx, [esp + 0x0c]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [edi + eax*4 + 0x30c], esi
        call    FUN_00416b60
        test    eax, eax
        jz      l_store_neg
        mov     edx, dword ptr [esp + 0x0c]
        lea     ecx, [edi + edx*4 + 0x30c]
        mov     edx, dword ptr [eax + 0x48]
        mov     dword ptr [eax + 0x3c], ecx
        mov     eax, dword ptr [esp + 0x0c]
        mov     dword ptr [ecx], edx
        jmp     l_inc
    l_store_neg:
        mov     eax, dword ptr [esp + 0x0c]
        mov     dword ptr [edi + eax*4 + 0x30c], esi
    l_inc:
        inc     eax
        cmp     eax, 0x0c
        mov     dword ptr [esp + 0x0c], eax
        jl      l_loop2
        lea     ecx, [esp + 0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret
    }
}
