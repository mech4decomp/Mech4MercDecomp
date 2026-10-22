/*
 * FUN_00520F80 (1268 B) — Campaign new game function.
 *
 * __thiscall (ECX = this), RET 0x18 (six stack params).
 * Checks whether a save file exists (via IAT 0x0076B298), loads or
 * creates a new campaign database (FUN_004d2d00), builds a campaign
 * object, and configures it based on a resolution switch (jump table
 * at 0x521474).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00547490(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fb780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00547560(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0061a510(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0061a160(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_0061aa30(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_0050aba0(void);
extern void __cdecl FUN_0050a5c0(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);

extern void *g_0076b298; /* 0x0076B298 — IAT entry (file-exists check) */
extern int    DAT_007db0b8; /* 0x007DB0B8 */
extern int    DAT_007dd230; /* 0x007DD230 */

__declspec(naked) void __cdecl FUN_00520f80(void)
{
    __asm {
        sub     esp, 0x164
        mov     eax, dword ptr [esp + 0x16c]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    0x1
        push    eax
        mov     dword ptr [esp + 0x20], esi
        call    FUN_00547490
        add     esp, 0x8
        test    al, al
        jnz     l_520fb6
        pop     esi
        pop     ebp
        mov     eax, 0xfffffffe
        pop     ebx
        add     esp, 0x164
        ret     0x18

    l_520fb6:
        push    0x77a0c8
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     ebp, dword ptr [esp + 0x174]
        push    0x76c5a8
        push    ebp
        call    dword ptr [g_0076b298]
        add     esp, 0x8
        test    eax, eax
        jnz     l_521436
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jnz     l_520ffa
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_006fb780
    l_520ffa:
        mov     eax, dword ptr [esp + 0xc]
        push    ebp
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_52102e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_52102e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_52102e:
        mov     ecx, dword ptr [esp + 0xc]
        push    0x76c5a8
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_521066
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_521066
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_521066:
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        jnz     l_52144a
        push    0x1
        push    ebp
        call    FUN_00547490
        add     esp, 0x8
        test    al, al
        jz      l_521436
        mov     eax, dword ptr [esp + 0xc]
        push    0x1
        push    eax
        call    FUN_00547560
        add     esp, 0x8
        test    al, al
        jz      l_521436
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_006fb780
        mov     ecx, dword ptr [esi + 0x40ee4]
        test    ecx, ecx
        mov     bl, al
        mov     byte ptr [esp + 0x1c], bl
        jz      l_5210c2
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_5210c2:
        mov     ecx, dword ptr [esi + 0x40ee8]
        test    ecx, ecx
        jz      l_5210d2
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_5210d2:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      l_5210e1
        inc     byte ptr [eax - 1]
    l_5210e1:
        mov     ecx, dword ptr [esp + 0x14]
        push    0x77a0bc
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_521119
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_521119
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_521119:
        mov     edx, dword ptr [esp + 0x14]
        push    0x0
        push    edx
        call    FUN_00547560
        add     esp, 0x8
        test    al, al
        jz      l_52141b
        test    bl, bl
        jz      l_52141b
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [DAT_007db0b8]
        push    edi
        push    0x0
        push    0x1
        push    0x0
        push    0x3f
        push    0x7
        push    0x0
        push    eax
        call    FUN_004d2d00
        mov     edi, eax
        push    0x0
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esi + 0x40ee4], edi
        call    FUN_0041ee70
        push    0x0
        lea     ecx, [esp + 0x50]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    0x0
        call    FUN_0061a510
        mov     edx, dword ptr [esp + 0x54]
        add     esp, 0x8
        push    0x0
        lea     ecx, [esp + 0x50]
        call    dword ptr [edx + 0xc]
        push    0x0
        push    edi
        push    0x77a0a8
        lea     ecx, [esp + 0xec]
        mov     dword ptr [esp + 0x60], 0xffffffec
        call    FUN_004d2110
        push    0x88c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_5211cc
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, eax
        call    FUN_0061a160
        mov     esi, eax
        jmp     l_5211ce
    l_5211cc:
        xor     esi, esi
    l_5211ce:
        mov     edx, dword ptr [esp + 0x184]
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        lea     ecx, [esi + 0x60]
        mov     dword ptr [ebx + 0x40ee8], esi
        mov     dword ptr [esi + 0x14], edx
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x17c]
        push    eax
        lea     ecx, [esi + 0x6c]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x188]
        mov     eax, dword ptr [esp + 0x180]
        mov     edx, dword ptr [esp + 0x18c]
        mov     dword ptr [esi + 0x74], ecx
        mov     dword ptr [esi + 0x78], edx
        lea     ecx, [eax + 0xffffec15]
        mov     dword ptr [esi + 0x70], eax
        lea     eax, [ecx - 1]
        cmp     eax, 0x3
        ja      l_52124e
        jmp     dword ptr [eax*4 + 0x521474]

    l_52122e:
        mov     eax, 0x21
        jmp     l_521248
    l_521235:
        mov     eax, 0x41
        jmp     l_521248
    l_52123c:
        mov     eax, 0x25
        jmp     l_521248
    l_521243:
        mov     eax, 0x27
    l_521248:
        mov     dword ptr [esi + 0x54], eax
        mov     dword ptr [esi + 0x58], eax
    l_52124e:
        push    0x1
        xor     ebp, ebp
        push    ebp
        mov     dword ptr [esi + 0x7c], ecx
        push    0x77826c
        lea     ecx, [esp + 0x130]
        call    FUN_0040dca0
        push    0x76c7f4
        lea     ecx, [esp + 0x128]
        call    FUN_0040ecc0
        cmp     eax, ebp
        jz      l_5212e6
        push    ebp
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0x77a174
        mov     ecx, eax
        mov     dword ptr [esp + 0x20], 0x320
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, 0x400
        jg      l_5212c8
        jz      l_5212bf
        cmp     eax, 0x280
        jz      l_5212ba
        cmp     eax, 0x320
        jnz     l_5212e6
        mov     dword ptr [esi + 0x30], 0x1
        jmp     l_5212e6
    l_5212ba:
        mov     dword ptr [esi + 0x30], ebp
        jmp     l_5212e6
    l_5212bf:
        mov     dword ptr [esi + 0x30], 0x2
        jmp     l_5212e6
    l_5212c8:
        cmp     eax, 0x500
        jz      l_5212df
        cmp     eax, 0x640
        jnz     l_5212e6
        mov     dword ptr [esi + 0x30], 0x4
        jmp     l_5212e6
    l_5212df:
        mov     dword ptr [esi + 0x30], 0x3
    l_5212e6:
        lea     edx, [esp + 0x74]
        push    edx
        mov     ecx, esi
        call    FUN_0061aa30
        push    ebp
        lea     eax, [esp + 0x78]
        push    eax
        lea     ecx, [esp + 0xe8]
        call    FUN_004d2680
        mov     ecx, dword ptr [DAT_007dd230]
        call    FUN_0050aba0
        push    ebp
        push    edi
        push    0x77a158
        lea     ecx, [esp + 0xa8]
        call    FUN_004d2110
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [DAT_007dd230]
        call    FUN_0050a5c0
        mov     edx, dword ptr [esp + 0x24]
        push    ebp
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0xc]
        push    ebp
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0xa4]
        mov     dword ptr [esp + 0x34], 0xffffffec
        call    FUN_004d2680
        mov     ecx, edi
        call    FUN_004d2a90
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x9c]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x124]
        call    FUN_0040de20
        lea     ecx, [esp + 0xe0]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x4c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x74]
        call    FUN_0041ef60
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      l_5213c3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_5213c3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_5213c3:
        cmp     edi, ebp
        jz      l_5213d5
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
        mov     dword ptr [ebx + 0x40ee4], ebp
    l_5213d5:
        cmp     esi, ebp
        pop     edi
        jz      l_5213e8
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        mov     dword ptr [ebx + 0x40ee8], ebp
    l_5213e8:
        mov     esi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0xc]
        and     esi, 0xff
        cmp     eax, ebp
        jz      l_52140d
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_52140d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_52140d:
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x164
        ret     0x18

    l_52141b:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_521436
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_521436
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_521436:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_521465
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_521465
        jmp     l_52145c

    l_52144a:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_521465
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_521465
    l_52145c:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_521465:
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x164
        ret     0x18
    }
}
