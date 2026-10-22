/*
 * FUN_005255d0 (568 B) — Bot AI initialization helper (variant 2).
 *
 * __thiscall (ECX = this). Initializes bot data structures with a loop
 * over 24 entries, copies strings, and calls into vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00417a40(int param1);
extern int __fastcall FUN_00417aa0(int param1);
extern void __fastcall FUN_004129c0(void);
extern void __fastcall FUN_00412950(void);
extern void __stdcall FUN_004084e0(int ptr);
extern int __stdcall FUN_00412780(int param1);
extern int __fastcall FUN_00412570(int param1);
extern int __fastcall FUN_004125e0(int a, int b);
extern int __fastcall FUN_00412740(int a);
extern int __fastcall FUN_0052e010(int param1);

__declspec(naked) void __stdcall FUN_005255d0(void)
{
    

extern int DAT_007f1fb8;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax + 8]
        push    ebx
        mov     ebx, dword ptr [eax + 0x0c]
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [eax + 4]
        mov eax, dword ptr [DAT_007f1fb8]
        add     eax, 0x10
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 8], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x1c], edx
        mov edx, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x0c], 0x0077a080
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax + 0x0c]
        push    esi
        xor     eax, 0x85739531
        push    edi
        lea     esi, [eax + 0x205d24]
        mov     edi, 0x18
    l_loop_init:
        mov     ecx, esi
        call    FUN_0052e010
        add     esi, 0x22ac
        dec     edi
        jnz     l_loop_init
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [ecx]
        mov     dword ptr [ebx], 0xffffffff
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x40eb0], 0
        call    FUN_00417a40
        cmp     esi, eax
        jnc     l_no_match
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00417aa0
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jz      l_skip_inc1
        inc     byte ptr [eax - 1]
    l_skip_inc1:
        lea     ecx, [esp + 0x24]
        call    FUN_004129c0
        lea     ecx, [esp + 0x24]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov eax, dword ptr [DAT_007dab44]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0x40970]
        mov ebp, dword ptr [DAT_007dab40]
        rep     movsd
        mov     ecx, edx
        mov     edx, dword ptr [esp + 0x10]
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [eax]
        mov     edi, dword ptr [edx + 0x38]
        xor     esi, ebp
        mov     ecx, dword ptr [esi + 0x0c]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [esi + 0x0c]
        xor     ecx, 0x85739531
        push    eax
        add     ecx, 0xa8
        call    FUN_00412780
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x0c]
        xor     eax, 0x85739531
        mov     byte ptr [eax + 0x3531], 0
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        mov     dword ptr [ebx], edi
        jz      l_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        jmp     l_free
    l_no_match:
        push    0x77a378
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x24]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00412740
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
        mov     edi, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0x40970]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [ebp + 0x40970]
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        push    eax
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x0c]
        xor     ecx, 0x85739531
        add     ecx, 0xa8
        call    FUN_00412780
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x0c]
        xor     edx, 0x85739531
        mov     byte ptr [edx + 0x3531], 0
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      l_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
    l_free:
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x10
        ret     8
    }


}
