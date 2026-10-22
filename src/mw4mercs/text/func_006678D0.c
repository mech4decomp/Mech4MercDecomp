/*
 * FUN_006678D0 (1987 B) — anim: animation/sequence setup routine with
 * string-table lookups and FPU parameter scaling. __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0066a150(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004d05d0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_0062f6e0(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411a80(void);
extern void __cdecl FUN_00412820(void);
extern void __cdecl FUN_004d5590(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern unsigned int g_007b8c10;
extern unsigned int g_007db0b0;
extern unsigned int g_007db0a0;
extern float g_0076c5b0;
extern float g_0077a1a0;

__declspec(naked) void FUN_006678D0(void)
{
    __asm {
        sub     esp, 0x1b4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c8]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x674
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_0066a150
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     cx, word ptr [g_007db0ae]
        mov     edi, dword ptr [edi + 4]
        mov     ebp, eax
        mov     ax, word ptr [g_007db0ac]
        mov     word ptr [ebp + 0x626], cx
        push    0x7723e8
        mov     ecx, edi
        mov     word ptr [ebp + 0x624], ax
        call    FUN_0040ed60
        mov     esi, eax
        xor     ebx, ebx
        push    ebx
        lea     ecx, [esp + 0x178]
        mov     dword ptr [esp + 0x28], esi
        call    FUN_0040dd50
        push    ebx
        lea     edx, [esp + 0x178]
        push    edx
        push    0x795598
        mov     ecx, esi
        call    FUN_00412390
        test    al, al
        je      L_6679ea
        mov     eax, dword ptr [g_007b8c10]
        mov     esi, dword ptr [g_007db0b0]
        push    eax
        lea     ecx, [esp + 0x68]
        call    FUN_004d05d0
        push    ebx
        lea     ecx, [esp + 0x78]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x180]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x68], 0x76d1f0
        call    FUN_00412b80
        push    0x18
        lea     eax, [esp + 0x178]
        push    eax
        lea     ecx, [esp + 0x34]
        lea     edx, [esp + 0x6c]
        push    ecx
        mov     dword ptr [g_007db0b0], edx
        call    FUN_0062f6e0
        mov     dx, word ptr [eax]
        mov     ax, word ptr [eax + 2]
        add     esp, 0xc
        lea     ecx, [esp + 0x64]
        push    ecx
        mov     ecx, esi
        mov     word ptr [ebp + 0x624], dx
        mov     word ptr [ebp + 0x626], ax
        mov     dword ptr [g_007db0b0], esi
        call    FUN_00412e70
        lea     ecx, [esp + 0x64]
        call    FUN_00412b60
        mov     esi, dword ptr [esp + 0x24]
L_6679ea:
        mov     ecx, dword ptr [edi]
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     word ptr [ebp + 0x630], dx
        mov     word ptr [ebp + 0x632], ax
        call    FUN_00412570
        mov     edx, dword ptr [esp + 0x28]
        push    0x79558c
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00412740
        lea     ecx, [esp + 0x24]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x28]
        push    ebx
        push    eax
        lea     ecx, [esp + 0xe8]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0x11c], ebx
        je      L_667a8e
        cmp     dword ptr [esp + 0xfc], ebx
        jbe     L_667a8e
        lea     ecx, [esp + 0xe0]
        call    FUN_004d24f0
        test    al, al
        je      L_667a8e
        mov     cx, word ptr [esp + 0x120]
        mov     word ptr [ebp + 0x630], cx
        mov     dx, word ptr [esp + 0x122]
        mov     word ptr [ebp + 0x632], dx
        jmp     L_667cdd
L_667a8e:
        push    ebx
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee70
        push    ebx
        lea     eax, [esp + 0x28]
        push    eax
        push    0x795574
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        je      L_667b1e
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x30]
        push    4
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x24], 0xffffffff
        call    dword ptr [eax + 0x24]
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        call    FUN_00412a50
        mov     edx, dword ptr [esp + 0x38]
        add     esp, 8
        push    1
        lea     eax, [esp + 0x1b]
        push    eax
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x1f], 1
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        je      L_667b1e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_667b1e
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_667b1e:
        push    0x795564
        mov     ecx, esi
        call    FUN_00411a80
        mov     edi, dword ptr [eax]
        mov     dword ptr [esp + 0x1c], eax
L_667b30:
        cmp     edi, ebx
        je      L_667c7a
        mov     eax, dword ptr [edi]
        cmp     eax, ebx
        mov     edi, dword ptr [edi + 4]
        je      L_667c7a
        mov     eax, dword ptr [eax + 0x18]
        push    eax
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00412780
        push    0x774288
        push    ebx
        lea     ecx, [esp + 0x64]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00412820
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x5c]
        cmp     eax, ebx
        je      L_667b93
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_667b93
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_667b93:
        push    0x774288
        push    1
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00412820
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x58]
        cmp     eax, ebx
        je      L_667bd1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_667bd1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_667bd1:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_004d5590
        mov     edx, dword ptr [esp + 0x34]
        add     esp, 4
        push    4
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x34], eax
        call    dword ptr [edx + 0x24]
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x38]
        add     esp, 8
        push    1
        lea     edx, [esp + 0x1b]
        push    edx
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x1f], bl
        call    dword ptr [eax + 0x24]
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        je      L_667c37
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_667c37
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_667c37:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        je      L_667c52
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_667c52
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_667c52:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_667b30
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_667b30
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_667b30
L_667c7a:
        mov     ecx, dword ptr [esp + 0x44]
        sub     ecx, dword ptr [esp + 0x40]
        je      L_667cba
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xe8]
        call    FUN_004d2680
        mov     cx, word ptr [esp + 0x120]
        mov     word ptr [ebp + 0x630], cx
        mov     dx, word ptr [esp + 0x122]
        mov     word ptr [ebp + 0x632], dx
L_667cba:
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, ebx
        je      L_667cd4
        call    FUN_00417980
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_667cd4:
        lea     ecx, [esp + 0x30]
        call    FUN_0041ef60
L_667cdd:
        push    ebx
        lea     ecx, [esp + 0x64]
        push    ecx
        push    0x795558
        mov     ecx, esi
        mov     dword ptr [ebp + 0x63c], 0xffffffff
        call    FUN_00411bf0
        test    al, al
        je      L_667d39
        mov     edx, dword ptr [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        call    FUN_00412ab0
        mov     dword ptr [ebp + 0x63c], eax
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 4
        cmp     eax, ebx
        je      L_667d39
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_667d39
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_667d39:
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     word ptr [ebp + 0x62c], cx
        push    ebx
        lea     ecx, [esp + 0x128]
        mov     word ptr [ebp + 0x62e], dx
        call    FUN_0040dd50
        push    ebx
        lea     eax, [esp + 0x128]
        push    eax
        push    0x79554c
        mov     ecx, esi
        call    FUN_00412390
        test    al, al
        je      L_668049
        mov     ecx, dword ptr [esp + 0x124]
        push    ebx
        push    ecx
        lea     ecx, [esp + 0xa4]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0xd8], ebx
        je      L_667e00
        cmp     dword ptr [esp + 0xb8], ebx
        jbe     L_667e00
        lea     ecx, [esp + 0x9c]
        call    FUN_004d24f0
        test    al, al
        je      L_667e00
        mov     dx, word ptr [esp + 0xdc]
        mov     ax, word ptr [esp + 0xde]
        lea     ecx, [esp + 0x9c]
        mov     word ptr [ebp + 0x62c], dx
        mov     word ptr [ebp + 0x62e], ax
        call    FUN_004d2630
        test    al, al
        jne     L_66803d
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [esp + 0xa0]
        call    FUN_004d2840
        jmp     L_66803d
L_667e00:
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        lea     ecx, [esp + 0x68]
        call    FUN_00415180
        push    ebx
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x70], ebx
        mov     dword ptr [esp + 0x74], ebx
        mov     dword ptr [esp + 0x68], 0x76cd9c
        call    FUN_0041ee70
        lea     eax, [esp + 0x130]
        push    eax
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x68], 0x76d1f0
        call    FUN_00412b80
        mov     ecx, dword ptr [g_007db0b0]
        lea     eax, [esp + 0x124]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [g_007db0a0]
        lea     edx, [esp + 0x64]
        push    eax
        mov     dword ptr [g_007db0b0], edx
        call    FUN_004cfbd0
        push    ebx
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee70
        push    0x79554c
        lea     ecx, [esp + 0x128]
        call    FUN_0040ed60
        push    ebx
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     esi, eax
        push    0x79553c
        mov     ecx, esi
        mov     dword ptr [esp + 0x2c], 0x3f800000
        mov     dword ptr [esp + 0x1c], 0x32
        mov     dword ptr [esp + 0x24], 0x3f000000
        call    FUN_00411d60
        fld     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        je      L_667eca
        mov     dword ptr [esp + 0x20], 0
L_667eca:
        mov     eax, dword ptr [esp + 0x30]
        push    4
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x38]
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x795524
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        mov     edi, 0x64
        jge     L_667f01
        mov     dword ptr [esp + 0x10], ebx
        jmp     L_667f09
L_667f01:
        cmp     eax, edi
        jle     L_667f09
        mov     dword ptr [esp + 0x10], edi
L_667f09:
        fild    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x30]
        push    4
        lea     edx, [esp + 0x1c]
        fmul    dword ptr [g_0077a1a0]
        push    edx
        lea     ecx, [esp + 0x38]
        fstp    dword ptr [esp + 0x20]
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x795510
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jge     L_667f49
        mov     dword ptr [esp + 0x10], ebx
        jmp     L_667f51
L_667f49:
        cmp     eax, edi
        jle     L_667f51
        mov     dword ptr [esp + 0x10], edi
L_667f51:
        fild    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x30]
        push    4
        lea     edx, [esp + 0x1c]
        fmul    dword ptr [g_0077a1a0]
        push    edx
        lea     ecx, [esp + 0x38]
        fstp    dword ptr [esp + 0x20]
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x795500
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], 0x40000000
        call    FUN_00411d60
        mov     eax, dword ptr [esp + 0x30]
        push    4
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x38]
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [esp + 0x44]
        sub     ecx, dword ptr [esp + 0x40]
        je      L_667ffb
        lea     edx, [esp + 0x64]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xa4]
        call    FUN_004d2680
        lea     ecx, [esp + 0x9c]
        call    FUN_004d2630
        test    al, al
        jne     L_667fdb
        lea     ecx, [esp + 0x64]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        call    FUN_00412e70
L_667fdb:
        mov     dx, word ptr [esp + 0xdc]
        mov     ax, word ptr [esp + 0xde]
        mov     word ptr [ebp + 0x62c], dx
        mov     word ptr [ebp + 0x62e], ax
        jmp     L_668017
L_667ffb:
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     word ptr [ebp + 0x62c], cx
        mov     word ptr [ebp + 0x62e], dx
L_668017:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [g_007db0a0]
        mov     dword ptr [g_007db0b0], eax
        call    FUN_004cfc90
        lea     ecx, [esp + 0x30]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x64]
        call    FUN_00412b60
L_66803d:
        lea     ecx, [esp + 0x9c]
        call    FUN_004d21c0
L_668049:
        lea     ecx, [esp + 0x124]
        call    FUN_0040de20
        lea     ecx, [esp + 0xe0]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        cmp     eax, ebx
        pop     ebx
        je      L_668080
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_668080
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_668080:
        lea     ecx, [esp + 0x164]
        call    FUN_0040de20
        add     esp, 0x1b4
        ret
    }
}
