/*
 * FUN_006CF3A0 — destructor/cleanup for the large structure.
 *
 * __fastcall (ECX = this), no return value.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

void __fastcall FUN_006d4460(void);

__declspec(naked) void __fastcall func_006cf3a0(void *this_ptr)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        xor     eax, eax
        lea     edx, [ecx + 0x100c]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 8], eax
        lea     ebp, [ecx + 0x18]
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], 4
    L_outer:
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jbe     L_skip_bits
        mov     edi, ebp
        mov     esi, 1
        mov     ebx, 0x20
        add     ebp, 0x380
    L_bit_loop:
        ; test esi, eax
        _emit 0x85
        _emit 0xC6
        jz      L_bit_clear
        mov     ecx, dword ptr [edi]
        call    FUN_006d4460
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
    L_bit_clear:
        add     edi, 0x1c
        shl     esi, 1
        dec     ebx
        jnz     L_bit_loop
        jmp     L_next
    L_skip_bits:
        add     ebp, 0x380
    L_next:
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        add     esi, 4
        dec     eax
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], eax
        jnz     L_outer
        lea     edi, [ecx + 0xe0c]
        xor     eax, eax
        mov     ecx, 0x80
        rep stosd
        xor     ecx, ecx
        mov     dword ptr [edx], ecx
        pop     edi
        mov     dword ptr [edx + 4], ecx
        pop     esi
        mov     dword ptr [edx + 8], ecx
        pop     ebp
        mov     dword ptr [edx + 0xc], ecx
        pop     ebx
        add     esp, 0x14
        ret
    }
}
