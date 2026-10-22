/*
 * FUN_005ad8d0 (2278 B) — Large update/state function with two switches.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0040c5d0(void *param);
extern void __stdcall FUN_006782c0(void);
extern void __stdcall FUN_00428850(void *param);
extern void __stdcall FUN_0041c7d0(void *a, void *b);
extern void __stdcall FUN_0040c9e0(void *a, void *b);
extern void __stdcall FUN_0040c410(void *param);
extern void __stdcall FUN_0040cb00(void);
extern void __stdcall FUN_00551870(void *param);
extern void __stdcall FUN_005aeeb0(void);
extern void __stdcall FUN_0040d560(void *param);
extern void __stdcall FUN_004e2f40(void *param);
extern void __stdcall FUN_004e8dc0(void *a, void *b);
extern void __stdcall FUN_0041c540(void *a, void *b, void *c);
extern void __stdcall FUN_00767550(void *param);
extern void __stdcall FUN_0041acb0(void *param);
extern void __stdcall FUN_005aed00(void *param);
extern void __stdcall FUN_00419e70(void);
extern void __stdcall FUN_0041a070(void *param);
extern void __stdcall FUN_004daa20(void *param);
extern void __stdcall FUN_004c40e0(void *a, void *b, void *c, void *d);
extern void __stdcall FUN_00678280(void);

__declspec(naked) void __stdcall FUN_005ad8d0(void)
{
    

extern int DAT_007b8cec;
extern int DAT_007b8ce8;
extern int DAT_007b8cf0;
extern int DAT_007b220c;
extern int DAT_0077de8c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc728;
extern int DAT_0076d064;
extern int DAT_007dc6e0;
extern int DAT_007f20d0;
__asm {
sub     esp, 0x138
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    0x7b8d88
        lea     ecx, [esp + 0x40]
        call    FUN_0040c5d0
        mov eax, dword ptr [DAT_007b8cec]
        mov ecx, dword ptr [DAT_007b8ce8]
        mov edx, dword ptr [DAT_007b8cf0]
        mov     dword ptr [esp + 0x4c], eax
        mov     eax, dword ptr [edi + 0x168]
        cmp     eax, 0x3
        mov     dword ptr [esp + 0x48], ecx
        mov     dword ptr [esp + 0x50], edx
        ja      L_5adbc2
        jmp     dword ptr [eax*4 + 0x5ae1b8]

L_5ad91d:
        mov     al, byte ptr [edi + 0x200]
        test    al, al
        lea     esi, [edi + 0x200]
        jz      L_5ad934
        mov     ecx, esi
        call    FUN_006782c0
L_5ad934:
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x104]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x100]
        jmp     L_5adbb8

L_5ad950:
        mov     al, byte ptr [edi + 0x260]
        test    al, al
        lea     esi, [edi + 0x260]
        jz      L_5ad967
        mov     ecx, esi
        call    FUN_006782c0
L_5ad967:
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x70]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x6c]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0040c5d0
        mov     edx, dword ptr [edi + 0x170]
        mov     eax, dword ptr [edx + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0xd4]
        call    FUN_00428850
        mov     al, byte ptr [edi + 0x1f0]
        test    al, al
        jz      L_5ad9c5
        lea     ecx, [esp + 0xd0]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x44]
        call    FUN_0041c7d0
        jmp     L_5adbc2
L_5ad9c5:
        mov     eax, dword ptr [esp + 0xdc]
        mov     ecx, dword ptr [esp + 0xec]
        mov     edx, dword ptr [esp + 0xfc]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ecx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x20], edx
        call    FUN_0040c9e0
        jmp     L_5adbc2

L_5ad9fe:
        mov     al, byte ptr [edi + 0x260]
        test    al, al
        lea     esi, [edi + 0x260]
        jz      L_5ada15
        mov     ecx, esi
        call    FUN_006782c0
L_5ada15:
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x88]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x84]
        push    edx
        lea     ecx, [esp + 0x7c]
        call    FUN_0040c5d0
        mov     al, byte ptr [edi + 0x190]
        test    al, al
        lea     ebx, [edi + 0x190]
        jz      L_5ada4d
        mov     ecx, ebx
        call    FUN_006782c0
L_5ada4d:
        lea     eax, [ebx + 0xc]
        push    eax
        lea     ecx, [esp + 0x94]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x90]
        push    ecx
        lea     edx, [esp + 0x7c]
        push    edx
        lea     ecx, [esp + 0x44]
        call    FUN_0040c9e0
        fld     dword ptr [ebx + 0x4]
        fcomp   dword ptr [ebx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5adbc2
        mov     esi, dword ptr [edi + 0x180]
        inc     esi
        mov     ebp, esi
        mov     dword ptr [edi + 0x180], esi
        mov     esi, dword ptr [edi + 0x178]
        mov     edx, dword ptr [esi + 0x168]
        mov     ecx, dword ptr [esi + 0x16c]
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     ebp, edx
        jnc     L_5adbc2
        mov     eax, dword ptr [esi + 0x168]
        lea     ebp, [ebp + ebp*2]
        shl     ebp, 0x2
        mov     ecx, ebp
        add     ecx, eax
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x38], 0x0
        call    FUN_0040c410
        mov     edx, dword ptr [esi + 0x168]
        lea     eax, [edx + ebp - 0xc]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007b220c]
        mov     dword ptr [esp + 0x38], ecx
        lea     ecx, [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x30]
        call    FUN_0040cb00
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5adb64
        fld     dword ptr [edi + 0x188]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_5adb64
        lea     ecx, [esp + 0x28]
        call    FUN_0040cb00
        fsqrt
        fdiv    dword ptr [edi + 0x188]
        fstp    dword ptr [esp + 0x34]
L_5adb64:
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        sub     esp, 0xc
        lea     eax, [esp + 0x2c]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     edx, [esp + 0x2c]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        mov     ecx, ebx
        call    FUN_005aeeb0
        jmp     L_5adbc2

L_5adb90:
        mov     al, byte ptr [edi + 0x200]
        test    al, al
        lea     esi, [edi + 0x200]
        jz      L_5adba7
        mov     ecx, esi
        call    FUN_006782c0
L_5adba7:
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x64]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x60]
L_5adbb8:
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0040c410
L_5adbc2:
        push    0x7b8d88
        lea     ecx, [esp + 0x58]
        call    FUN_0040c5d0
        mov     eax, dword ptr [edi + 0x16c]
        dec     eax
        jz      L_5addb3
        dec     eax
        jz      L_5adc1e
        dec     eax
        jnz     L_5ade5a
L_5adbe7:
        mov     al, byte ptr [edi + 0x230]
        test    al, al
        lea     esi, [edi + 0x230]
        jz      L_5adbfe
        mov     ecx, esi
        call    FUN_006782c0
L_5adbfe:
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x64]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x60]
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_0040c410
        jmp     L_5ade5a

L_5adc1e:
        mov     al, byte ptr [edi + 0x290]
        test    al, al
        lea     esi, [edi + 0x290]
        jz      L_5adc35
        mov     ecx, esi
        call    FUN_006782c0
L_5adc35:
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x7c]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x78]
        push    edx
        lea     ecx, [esp + 0x88]
        call    FUN_0040c5d0
        mov     al, byte ptr [edi + 0x1c0]
        test    al, al
        lea     ebx, [edi + 0x1c0]
        jz      L_5adc6a
        mov     ecx, ebx
        call    FUN_006782c0
L_5adc6a:
        lea     eax, [ebx + 0xc]
        push    eax
        lea     ecx, [esp + 0x94]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x90]
        push    ecx
        lea     edx, [esp + 0x88]
        push    edx
        lea     ecx, [esp + 0x5c]
        call    FUN_0040c9e0
        fld     dword ptr [ebx + 0x4]
        fcomp   dword ptr [ebx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5ade5a
        mov     esi, dword ptr [edi + 0x184]
        inc     esi
        mov     ebp, esi
        mov     dword ptr [edi + 0x184], esi
        mov     esi, dword ptr [edi + 0x17c]
        mov     edx, dword ptr [esi + 0x168]
        mov     ecx, dword ptr [esi + 0x16c]
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     ebp, edx
        jnc     L_5ade5a
        mov     eax, dword ptr [esi + 0x168]
        lea     ebp, [ebp + ebp*2]
        shl     ebp, 0x2
        mov     ecx, ebp
        add     ecx, eax
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x38], 0x0
        call    FUN_0040c410
        mov     edx, dword ptr [esi + 0x168]
        lea     eax, [edx + ebp - 0xc]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x28]
        mov ecx, dword ptr [DAT_007b220c]
        mov     dword ptr [esp + 0x38], ecx
        lea     ecx, [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x18]
        call    FUN_0040cb00
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5add84
        fld     dword ptr [edi + 0x18c]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_5add84
        lea     ecx, [esp + 0x10]
        call    FUN_0040cb00
        fsqrt
        fdiv    dword ptr [edi + 0x18c]
        fstp    dword ptr [esp + 0x34]
L_5add84:
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        sub     esp, 0xc
        lea     eax, [esp + 0x2c]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     edx, [esp + 0x44]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        mov     ecx, ebx
        call    FUN_005aeeb0
        jmp     L_5ade5a

L_5addb3:
        mov     al, byte ptr [edi + 0x290]
        test    al, al
        lea     esi, [edi + 0x290]
        jz      L_5addca
        mov     ecx, esi
        call    FUN_006782c0
L_5addca:
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x70]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x6c]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [edi + 0x174]
        mov     edx, dword ptr [ecx + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0xd4]
        call    FUN_00428850
        mov     al, byte ptr [edi + 0x1f1]
        test    al, al
        jz      L_5ade26
        lea     eax, [esp + 0xd0]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x5c]
        call    FUN_0041c7d0
        jmp     L_5ade5a
L_5ade26:
        mov     edx, dword ptr [esp + 0xdc]
        mov     eax, dword ptr [esp + 0xec]
        mov     ecx, dword ptr [esp + 0xfc]
        mov     dword ptr [esp + 0x10], edx
        lea     edx, [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        push    edx
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x1c], ecx
        push    eax
        lea     ecx, [esp + 0x5c]
        call    FUN_0040c9e0
L_5ade5a:
        push    0x7b8d08
        lea     ecx, [esp + 0xac]
        mov     dword ptr [esp + 0xb8], 0x42c80000
        call    FUN_0040d560
        lea     ecx, [esp + 0x3c]
        push    ecx
        lea     ecx, [esp + 0xa0]
        call    FUN_0040c410
        fld     dword ptr [esp + 0xa0]
        fadd dword ptr [DAT_0077de8c]
        mov ecx, dword ptr [DAT_007dab44]
        lea     edx, [esp + 0x9c]
        mov     dword ptr [esp + 0xb8], edx
        lea     eax, [esp + 0x13c]
        fstp    dword ptr [esp + 0xa0]
        xor     ebx, ebx
        mov     dword ptr [esp + 0xbc], eax
        mov eax, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0xc0], ebx
        mov     dword ptr [esp + 0xc8], ebx
        mov     dword ptr [esp + 0xcc], 0x1000
        mov     esi, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dc728]
        lea     edx, [esp + 0xb8]
        push    edx
        xor     esi, eax
        call    FUN_004e2f40
        mov     ecx, dword ptr [esi + 0x1c]
        xor     ecx, 0x85739531
        cmp     eax, ecx
        jnz     L_5adf39
        mov     eax, dword ptr [esp + 0xb4]
        lea     edx, [esp + 0x60]
        push    edx
        push    eax
        lea     ecx, [esp + 0xa4]
        call    FUN_004e8dc0
        fld     dword ptr [esp + 0x64]
        fadd dword ptr [DAT_0076d064]
        fld     dword ptr [esp + 0x40]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x1
        jz      L_5adf37
        fstp    dword ptr [esp + 0x40]
        jmp     L_5adf39
L_5adf37:
        fstp    st(0)
L_5adf39:
        cmp     dword ptr [edi + 0x16c], ebx
        jz      L_5adfb9
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      L_5adf6d
        mov     ecx, dword ptr [edi + 0xd8]
        add     ecx, 0x80
        push    ecx
        jmp     L_5adfc6
L_5adf6d:
        fld     dword ptr [esp + 0x54]
        lea     edx, [esp + 0x10]
        fsub    dword ptr [esp + 0x3c]
        push    edx
        lea     ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x5c]
        fsub    dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x60]
        fsub    dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00767550
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x48], eax
        mov     dword ptr [esp + 0x4c], ecx
        mov     dword ptr [esp + 0x50], 0x0
        jmp     L_5adfcf
L_5adfb9:
        mov     edx, dword ptr [edi + 0xd8]
        add     edx, 0x80
        push    edx
L_5adfc6:
        lea     ecx, [esp + 0x4c]
        call    FUN_0041acb0
L_5adfcf:
        mov     eax, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esp + 0x58]
        mov     edx, dword ptr [esp + 0x5c]
        mov     dword ptr [edi + 0x1f4], eax
        mov     al, byte ptr [edi + 0x2c0]
        test    al, al
        mov     dword ptr [edi + 0x1f8], ecx
        mov     dword ptr [edi + 0x1fc], edx
        jz      L_5ae015
        mov     al, byte ptr [edi + 0x2c4]
        test    al, al
        lea     esi, [edi + 0x2c4]
        jz      L_5ae00e
        mov     ecx, esi
        call    FUN_00678280
L_5ae00e:
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x4c]
L_5ae015:
        mov     al, byte ptr [edi + 0x2c1]
        test    al, al
        jz      L_5ae03d
        mov     al, byte ptr [edi + 0x2dc]
        test    al, al
        lea     esi, [edi + 0x2dc]
        jz      L_5ae036
        mov     ecx, esi
        call    FUN_00678280
L_5ae036:
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x48]
L_5ae03d:
        mov     al, byte ptr [edi + 0x2c2]
        test    al, al
        jz      L_5ae065
        mov     al, byte ptr [edi + 0x2f4]
        test    al, al
        lea     esi, [edi + 0x2f4]
        jz      L_5ae05e
        mov     ecx, esi
        call    FUN_00678280
L_5ae05e:
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x50]
L_5ae065:
        lea     eax, [esp + 0x48]
        push    eax
        mov     ecx, edi
        call    FUN_005aed00
        lea     ecx, [esp + 0x10c]
        call    FUN_00419e70
        lea     ecx, [esp + 0x48]
        push    ecx
        lea     ecx, [esp + 0x110]
        call    FUN_0041a070
        mov     edx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x118], edx
        lea     edx, [esp + 0x10c]
        mov     dword ptr [esp + 0x138], ecx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x12c], eax
        call    FUN_004daa20
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax + 0x48]
        mov     al, byte ptr [edi + 0x340]
        test    al, al
        jz      L_5ae195
        mov     al, byte ptr [edi + 0x310]
        test    al, al
        mov ecx, dword ptr [DAT_007dc6e0]
        mov     ebp, dword ptr [ecx + 0x4c]
        lea     esi, [edi + 0x310]
        jz      L_5ae0f5
        mov     ecx, esi
        call    FUN_00678280
L_5ae0f5:
        fld     dword ptr [esi + 0xc]
        mov eax, dword ptr [DAT_007f20d0]
        push    ecx
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [eax + 0x30]
        lea     edx, [esp + 0x3c]
        fstp    dword ptr [esp]
        fld     dword ptr [eax + 0x28]
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [eax + 0x24]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x24]
        fstp    dword ptr [esp]
        call    FUN_004c40e0
        cmp     dword ptr [edi + 0x30c], ebx
        mov esi, dword ptr [DAT_007dc6e0]
        jnz     L_5ae14b
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x2c], 0x0
        mov     dword ptr [esp + 0x30], 0x0
        jmp     L_5ae163
L_5ae14b:
        mov     dword ptr [esp + 0x28], 0x3f800000
        mov     dword ptr [esp + 0x2c], 0x3f800000
        mov     dword ptr [esp + 0x30], 0x3f800000
L_5ae163:
        mov     al, byte ptr [edi + 0x328]
        test    al, al
        lea     ebp, [edi + 0x328]
        jz      L_5ae17a
        mov     ecx, ebp
        call    FUN_00678280
L_5ae17a:
        fld     dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x30]
        fstp    dword ptr [esi + 0x64]
        mov     dword ptr [esi + 0x68], eax
        mov     dword ptr [esi + 0x6c], ecx
        mov     dword ptr [esi + 0x70], edx
L_5ae195:
        mov     esi, dword ptr [edi + 0xd8]
        add     esi, 0x50
        add     edi, 0xf4
        mov     ecx, 0xc
        rep movsd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x138
        ret
    }


}
