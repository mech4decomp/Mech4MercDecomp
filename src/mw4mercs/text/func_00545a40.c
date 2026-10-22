/*
 * FUN_00545A40 (900 B) — __thiscall, RET 8.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004ce190(int a, int b, int c, int d);
extern void __fastcall FUN_0041ee70(int a, int b);
extern void __fastcall FUN_0041f030(int a, int b, int c);
extern int __fastcall FUN_004d6490(int param_1);
extern void __fastcall FUN_00419460(int param_1, int param_2);
extern int __fastcall FUN_004f3b00(int param_1, int param_2);
extern void __fastcall FUN_00419480(int param_1, int param_2);
extern void __fastcall FUN_0041acb0(int param_1, int param_2);
extern void __fastcall FUN_0053ec40(int param_1, int param_2, int param_3);
extern void __fastcall FUN_0053ec20(int param_1);
extern void __fastcall FUN_0041ef60(int param_1);

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;

__declspec(naked) void __fastcall FUN_00545a40(void *this, int param_1, int param_2)
{
    __asm {
        sub     esp, 0xa8
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0xb4]
        mov     eax, ecx
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     edx, dword ptr [ebp + edx*8 + 0x3584]
        test    edx, edx
        push    esi
        push    edi
        mov     byte ptr [esp + 0x10], cl
        jz      l_done
        mov     bl, byte ptr [esp + 0xc0]
        test    bl, bl
        jnz     l_skip_early
        mov     esi, dword ptr [ebp + 0x50]
        mov     edi, dword ptr [esi + 0x38]
        test    edi, edi
        jz      l_skip_early
        mov     edx, dword ptr [edx + 0x170]
        mov     edx, dword ptr [edx + 0x4c8]
        cmp     edx, dword ptr [esi + 0x3c]
        jl      l_skip_early
        mov     ecx, dword ptr [esi + 0xa8]
        test    ecx, ecx
        jz      l_done
        mov     edx, dword ptr [DAT_007dab40]
        push    1
        push    0
        push    0x23
        push    eax
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa8
        ret     8
    l_skip_early:
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov     edi, dword ptr [DAT_007dab40]
        push    1
        push    0
        push    0x30
        push    ecx
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
        push    0x100
        lea     ecx, [esp + 0x28]
        call    FUN_0041ee70
        push    1
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [ebp + edx*8 + 0x3584]
        mov     ecx, dword ptr [eax + 0x16c]
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [DAT_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6490
        push    0x7b9460
        lea     ecx, [esp + 0x5c]
        mov     esi, eax
        call    FUN_00419460
        lea     eax, [esp + 0x88]
        push    eax
        mov     ecx, esi
        call    FUN_004f3b00
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0x58]
        rep     movsd
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        lea     edx, [esp + 0x58]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_0041acb0
        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     edx, dword ptr [ebp + ecx*8 + 0x3584]
        mov     eax, dword ptr [edx + 0x170]
        inc     dword ptr [eax + 0x4c8]
        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        test    bl, bl
        mov     edx, dword ptr [ebp + ecx*8 + 0x3584]
        mov     eax, dword ptr [edx + 0x170]
        mov     ecx, dword ptr [eax + 0x4c8]
        mov     dword ptr [esp + 0x14], ecx
        jz      l_skip_zero
        mov     dword ptr [esp + 0x14], 0
    l_skip_zero:
        push    4
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     edx, [esp + 0x58]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x24]
        push    0
        lea     ecx, [esp + 0x28]
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     ebx, dword ptr [DAT_007dab40]
        and     eax, 0xff
        mov     esi, eax
        shl     esi, 7
        add     esi, eax
        mov     dword ptr [esp + 0x2c], 0xffffffec
        mov     edx, dword ptr [ecx]
        xor     edx, ebx
        mov     ecx, dword ptr [edx]
        shl     esi, 3
        sub     esi, eax
        mov     eax, dword ptr [ebp + esi*8 + 0x3584]
        mov     eax, dword ptr [eax + 0x170]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x18]
        xor     edi, edi
        mov     esi, 8
        lea     ebx, [ebp + 0x353c]
    l_loop:
        cmp     byte ptr [ebx], 0
        jz      l_loop_next
        mov     edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     edi, ecx
        jz      l_loop_next
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x3c]
        sub     eax, ecx
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        add     ecx, 0x3c3c
        shl     eax, 3
        add     dword ptr [esi + ecx], eax
        add     dword ptr [ecx + 0xc00], eax
        mov     ecx, dword ptr [edx]
        push    1
        lea     eax, [esp + 0x28]
        push    eax
        push    0x1a
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004ce190
    l_loop_next:
        add     esi, 4
        inc     edi
        add     ebx, 0x2038
        cmp     esi, 0x404
        jl      l_loop
        mov     eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebp
        push    edx
        call    FUN_0053ec40
        mov     edx, dword ptr [esp + 0x24]
        push    0
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x18]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [esp + 0x38], 0xffffffec
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 4], edx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [eax + 8], ecx
        call    FUN_0053ec20
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax]
        and     ecx, 0xff
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa8
        ret     8
    }
}
