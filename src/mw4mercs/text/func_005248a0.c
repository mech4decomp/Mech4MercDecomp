/*
 * FUN_005248a0 (631 B) — Bot AI initialization helper.
 *
 * __thiscall (ECX = this). Initializes bot AI data structures, copies
 * strings, and calls into mech AI setup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_004084e0(int ptr);
extern int __fastcall FUN_004125e0(int a, int b);
extern int __fastcall FUN_00412740(int a);
extern int __fastcall FUN_00412780(int a);
extern int __fastcall FUN_004d2000(int a, int b);
extern int __fastcall FUN_004d21c0(void);
extern int __fastcall FUN_00523e60(int a);
extern int __fastcall FUN_00546750(int a, int b, int c);

__declspec(naked) void __stdcall FUN_005248a0(void)
{
    

extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_0076b420;
extern int DAT_007dd268;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
sub     esp, 0xd8
        mov     eax, dword ptr [esp + 0xdc]
        mov     edx, dword ptr [eax + 0x0c]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x10], edx
        mov edx, dword ptr [DAT_007dab40]
        push    edi
        mov edi, dword ptr [DAT_007dab44]
        xor     edx, dword ptr [edi]
        mov     edx, dword ptr [edx + 0x0c]
        mov     ebx, dword ptr [eax]
        xor     edx, 0x85739531
        add     ebx, 3
        mov     dword ptr [esp + 0x1c], edx
        jns     l_check_size
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd8
        ret     8
    l_check_size:
        cmp     ebx, 0x18
        jl      l_check_ptr
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd8
        ret     8
    l_check_ptr:
        mov     esi, dword ptr [esi]
        test    esi, esi
        mov     dword ptr [esp + 0x20], esi
        jnz     l_has_ptr
        mov     eax, dword ptr [ecx + 0x40eac]
        imul    ebx, ebx, 0x22ac
        dec     eax
        mov     dword ptr [ecx + 0x40eac], eax
        mov     byte ptr [ebx + edx + 0x205f34], 0
        mov     eax, 1
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd8
        ret     8
    l_has_ptr:
        mov     eax, ebx
        imul    eax, eax, 0x22ac
        lea     ebp, [eax + edx]
        mov     al, byte ptr [ebp + 0x205f34]
        test    al, al
        jnz     l_skip_inc
        inc     dword ptr [ecx + 0x40eac]
    l_skip_inc:
        push    ebx
        mov     byte ptr [ebp + 0x205f34], 1
        lea     ecx, [esp + 0x6c]
        mov     byte ptr [ebp + 0x205f35], 0
        push    0x76b9a8
        mov     byte ptr [ebp + 0x205f36], 1
        push    ecx
        mov     dword ptr [ebp + 0x205f38], 1
        call dword ptr [DAT_0076b420]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x0c
        lea     edi, [esp + 0x68]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp + 0x205d34]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a234
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebp + 0x205f40]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        push    0
        rep     movsb
        push    0x77a1a4
        lea     ecx, [esp + 0x2c]
        call    FUN_004d2000
        mov     cx, word ptr [esp + 0x64]
        mov eax, dword ptr [DAT_007dd268]
        mov     word ptr [ebp + 0x206040], cx
        mov     ecx, dword ptr [eax + 0x409a4]
        mov     dx, word ptr [esp + 0x66]
        mov     word ptr [ebp + 0x206042], dx
        mov     edx, dword ptr [esp + 0x20]
        lea     eax, [ecx + edx * 4 - 4]
        mov     cx, word ptr [eax]
        cmp cx, word ptr [DAT_007db0ac]
        mov     word ptr [esp + 0x18], cx
        mov     ax, word ptr [eax + 2]
        mov     word ptr [esp + 0x1a], ax
        mov     dword ptr [esp + 0x10], 0
        jnz     l_skip_variant
        cmp ax, word ptr [DAT_007db0ae]
        jnz     l_skip_variant
        push    0x76c724
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_skip_free1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free1:
        mov     eax, dword ptr [esp + 0x10]
        push    0x779f4c
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_skip_variant
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_variant
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_variant:
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ecx
        lea     edx, [esp + 0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00523e60
        mov     ecx, dword ptr [esp + 0x24]
        push    ebx
        call    FUN_00546750
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_skip_free2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free2:
        lea     ecx, [esp + 0x24]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xd8
        ret     8
    }


}
