/*
 * FUN_00524260 (255 B) — Variant initialization helper.
 *
 * __thiscall (ECX = this). Initializes variant-related fields based on
 * a mode parameter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_00524260(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 4]
        mov eax, dword ptr [DAT_007dab44]
        push    ebx
        mov ebx, dword ptr [DAT_007dab40]
        push    ebp
        push    esi
        mov     esi, dword ptr [edx]
        mov     edx, dword ptr [eax]
        xor     edx, ebx
        mov     eax, dword ptr [edx + 0xc]
        add     edx, 0xc
        xor     eax, 0x85739531
        xor     ebx, ebx
        mov     byte ptr [eax + 0xc1], bl
        mov     eax, dword ptr [edx]
        xor     eax, 0x85739531
        push    edi
        mov     edi, dword ptr [edx]
        mov     dword ptr [eax + 0x3028], esi
        mov     eax, dword ptr [edx]
        xor     edi, 0x85739531
        mov     ebp, dword ptr [edi + 0x50]
        xor     eax, 0x85739531
        cmp     esi, 0x2
        mov     dword ptr [ecx + 0x40ee0], esi
        jz      l_mode_2_or_3
        cmp     esi, 0x3
        jz      l_mode_2_or_3
        mov     edx, dword ptr [edx]
        xor     edx, 0x85739531
        mov     dword ptr [edx + 0x5580], 0x8
        add     eax, 0x205f34
        mov     edx, 0x7
l_zero_loop1:
        mov     byte ptr [eax], bl
        add     eax, 0x22ac
        dec     edx
        jnz     l_zero_loop1
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0xe4], ebx
        mov     dword ptr [ebp + 0xe8], ebx
        pop     ebp
        mov     dword ptr [ecx + 0x40eb0], ebx
        mov     eax, 0x1
        pop     ebx
        ret     0x8
l_mode_2_or_3:
        mov     edi, dword ptr [edx]
        xor     edi, 0x85739531
        mov     dword ptr [edi + 0x5580], ebx
        add     eax, 0x205f34
        mov     edi, 0x7
l_zero_loop2:
        mov     byte ptr [eax], bl
        add     eax, 0x22ac
        dec     edi
        jnz     l_zero_loop2
        cmp     esi, 0x3
        mov     eax, 0x1
        mov     dword ptr [ebp + 0xe4], eax
        mov     dword ptr [ebp + 0xe8], 0x2
        mov     dword ptr [ecx + 0x40eb0], ebx
        mov     dword ptr [ecx + 0x40eac], ebx
        jnz     l_done
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0xc1], al
l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }


}
