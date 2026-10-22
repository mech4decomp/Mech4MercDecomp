/*
 * FUN_00524360 (395 B) — Variant slot initialization.
 *
 * __thiscall (ECX = this). Initializes a variant slot by index, setting up
 * name strings and mode-specific fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_004d2000(int a, int b, int c);
extern int __fastcall FUN_004d21c0(void);

__declspec(naked) void FUN_00524360(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b420;
__asm {
sub     esp, 0xc8
        mov     eax, dword ptr [esp + 0xcc]
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        push    ebx
        mov     ebx, ecx
        mov ecx, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 4], eax
        mov     eax, dword ptr [ecx]
        push    edi
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [edx]
        xor     ecx, 0x85739531
        test    eax, eax
        jge     l_check_upper
        pop     edi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0xc8
        ret     0x8
l_check_upper:
        cmp     eax, 0x18
        jl      l_valid_index
        pop     edi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0xc8
        ret     0x8
l_valid_index:
        mov     edx, eax
        imul    edx, edx, 0x22ac
        push    ebp
        lea     ebp, [edx + ecx]
        mov     cl, byte ptr [ebp + 0x205f34]
        test    cl, cl
        push    esi
        jnz     l_skip_inc
        inc     dword ptr [ebx + 0x40eb0]
l_skip_inc:
        cmp     dword ptr [ebx + 0x40ee0], 0x2
        mov     byte ptr [ebp + 0x205f34], 0x1
        mov     byte ptr [ebp + 0x205f36], 0x1
        jnz     l_skip_zero
        mov     dword ptr [ebp + 0x205f38], 0
l_skip_zero:
        push    eax
        cmp     eax, 0x3
        lea     edx, [esp + 0x5c]
        setge   cl
        push    0x76b9a8
        push    edx
        mov     byte ptr [ebp + 0x207fcc], cl
        call dword ptr [DAT_0076b420]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp + 0x58]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp + 0x205d34]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx]
        cmp     eax, 0x3
        ja      l_after_switch
        jmp     dword ptr [eax*4 + 0x5244ec]
l_case0:
        mov     eax, dword ptr [ebx + 0x40eb0]
        dec     eax
        mov     byte ptr [ebp + 0x205f34], 0
        mov     dword ptr [ebx + 0x40eb0], eax
        jmp     l_after_switch
l_case1:
        lea     edx, [ebp + 0x205f40]
        mov     edi, 0x77a2d4
        jmp     l_copy_name
l_case2:
        lea     edx, [ebp + 0x205f40]
        mov     edi, 0x77a25c
        jmp     l_copy_name
l_case3:
        lea     edx, [ebp + 0x205f40]
        mov     edi, 0x77a1e4
l_copy_name:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
l_after_switch:
        push    0x0
        push    0x77a1a4
        lea     ecx, [esp + 0x1c]
        call    FUN_004d2000
        mov     cx, word ptr [esp + 0x54]
        mov     word ptr [ebp + 0x206040], cx
        mov     dx, word ptr [esp + 0x56]
        lea     ecx, [esp + 0x14]
        mov     word ptr [ebp + 0x206042], dx
        call    FUN_004d21c0
        pop     esi
        pop     ebp
        pop     edi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0xc8
        ret     0x8
    }


}
