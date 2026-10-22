/*
 * FUN_00526110 (475 B) — Bot AI slot initialization helper.
 *
 * __thiscall (ECX = this). Initializes a bot AI slot with index and
 * type, copies strings, and dispatches based on type.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_004d2000(int a, int b);
extern int __fastcall FUN_00523e60(int a);
extern int __fastcall FUN_00546750(int a, int b, int c);
extern void __stdcall FUN_004084e0(int ptr);
extern int __fastcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_00526110(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b420;
extern int DAT_007dd268;
__asm {
sub     esp, 0xd0
        mov edx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [DAT_007dab40]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [edx]
        mov     edx, dword ptr [esp + 0xe4]
        xor     eax, edi
        mov     eax, dword ptr [eax + 0x0c]
        xor     eax, 0x85739531
        lea     ebx, [edx + 3]
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], eax
        jl      l_done
        cmp     ebx, 0x18
        jge     l_done
        mov     edx, ebx
        imul    edx, edx, 0x22ac
        lea     ebp, [edx + eax]
        mov     al, byte ptr [ebp + 0x205f34]
        test    al, al
        jnz     l_skip_inc
        inc     dword ptr [ecx + 0x40eac]
    l_skip_inc:
        mov     eax, 1
        mov     byte ptr [ebp + 0x205f34], al
        mov     byte ptr [ebp + 0x205f35], 0
        mov     byte ptr [ebp + 0x205f36], al
        push    ebx
        mov     dword ptr [ebp + 0x205f38], eax
        lea     eax, [esp + 0x64]
        push    0x76b9a8
        push    eax
        call dword ptr [DAT_0076b420]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x0c
        lea     edi, [esp + 0x60]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebp + 0x205d34]
        mov     esi, edi
        mov     edi, edx
        mov edx, dword ptr [DAT_007dab44]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov ecx, dword ptr [DAT_007dab40]
        xor     ecx, dword ptr [edx]
        mov     eax, dword ptr [ecx + 0x0c]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x3508]
        sub     eax, 0
        jz      l_type0
        dec     eax
        jz      l_type1
        dec     eax
        lea     edx, [ebp + 0x205f40]
        jz      l_type2
        mov     edi, 0x77a1e4
        jmp     l_copy_path
    l_type2:
        mov     edi, 0x77a208
        jmp     l_copy_path
    l_type1:
        lea     edx, [ebp + 0x205f40]
        mov     edi, 0x77a234
        jmp     l_copy_path
    l_type0:
        lea     edx, [ebp + 0x205f40]
        mov     edi, 0x77a25c
    l_copy_path:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        push    0
        rep     movsb
        push    0x77a1a4
        lea     ecx, [esp + 0x24]
        call    FUN_004d2000
        mov     cx, word ptr [esp + 0x5c]
        mov     eax, dword ptr [esp + 0xe8]
        test    eax, eax
        mov     word ptr [ebp + 0x206040], cx
        mov     dx, word ptr [esp + 0x5e]
        mov     word ptr [ebp + 0x206042], dx
        jge     l_clamp_check
        xor     eax, eax
        jmp     l_clamp_done
    l_clamp_check:
        cmp     eax, 0x2b
        jle     l_clamp_done
        mov     eax, 0x2b
    l_clamp_done:
        mov ecx, dword ptr [DAT_007dd268]
        mov     edx, dword ptr [ecx + 0x409a8]
        mov     cx, word ptr [edx + eax * 4]
        lea     eax, [edx + eax * 4]
        mov     word ptr [esp + 0x10], cx
        mov     dx, word ptr [eax + 2]
        lea     eax, [esp + 0x14]
        push    eax
        mov     word ptr [esp + 0x16], dx
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp + 0x20], 0
        call    FUN_00523e60
        mov     ecx, dword ptr [esp + 0x20]
        push    ebx
        call    FUN_00546750
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_skip_free
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        lea     ecx, [esp + 0x1c]
        call    FUN_004d21c0
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd0
        ret     8
    }


}
