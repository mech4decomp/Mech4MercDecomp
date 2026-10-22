/*
 * FUN_0062df30 (2472 B) — Armature/weapon-config loader.
 *
 * Reads a config object (param_1), walks a vtable, and populates a
 * structure at ESI (0x134-byte object). Contains three near-identical
 * sub-blocks (0x62DFA9 / 0x62E2F2 / 0x62E602) that each load a
 * different named sub-config ("Armature", "Weapon", "Ammo").
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7db0a0;   /* 0x007db0a0 */
extern int g_7db0b0;   /* 0x007db0b0 */
extern short g_7db0ac; /* 0x007db0ac */
extern short g_7db0ae; /* 0x007db0ae */
extern int g_7b8c10;   /* 0x007b8c10 */
extern int g_7b8810;   /* 0x007b8810 */

extern void __cdecl FUN_00692f40(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_004d0600(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_004e61b0(void);
extern void __cdecl FUN_005b6d70(void);
extern void __cdecl FUN_00411bf0(void);

__declspec(naked) void __cdecl FUN_0062df30(void)
{
    __asm {
        sub     esp, 0x110
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x124]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x134
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00692f40
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ebp, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [g_7db0a0]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        mov     dword ptr [esi], 0x134
        mov     dword ptr [esp + 0x50], ebp
        call    FUN_004cfbd0
        xor     ebx, ebx
        push    ebx
        lea     ecx, [esp + 0xd4]
        call    FUN_0040dd50
        push    ebx
        lea     ecx, [esp + 0xd4]
        push    ecx
        push    0x78d1fc
        mov     ecx, ebp
        call    FUN_00412390
        test    al, al
        jz      L_e2a0
        mov     edx, dword ptr [esp + 0xd0]
        push    ebx
        push    edx
        lea     ecx, [esp + 0x58]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0x8c], ebx
        jz      L_e053
        cmp     dword ptr [esp + 0x6c], ebx
        jbe     L_e053
        lea     ecx, [esp + 0x50]
        call    FUN_004d24f0
        test    al, al
        jz      L_e053
        lea     ecx, [esp + 0x50]
        call    FUN_004d2310
        mov     edx, dword ptr [esp + 0x50]
        push    0x2
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x58]
        call    dword ptr [edx + 0x20]
        mov     cx, word ptr [esp + 0x1c]
        mov     eax, dword ptr [edi + 0x8]
        add     word ptr [eax + 0x2], cx
        mov     ax, word ptr [esp + 0x92]
        mov     cx, word ptr [esp + 0x1c]
        mov     dx, word ptr [esp + 0x90]
        mov     word ptr [esi + 0x96], ax
        add     word ptr [esi + 0x1a], cx
        lea     ecx, [esp + 0x50]
        mov     word ptr [esi + 0x94], dx
        call    FUN_004d2630
        test    al, al
        jnz     L_e297
        mov     edx, dword ptr [g_7db0b0]
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2840
        jmp     L_e297
L_e053:
        mov     eax, dword ptr [g_7b8c10]
        push    eax
        lea     ecx, [esp + 0x98]
        call    FUN_00415180
        push    ebx
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [esp + 0xa0], ebx
        mov     dword ptr [esp + 0xa4], ebx
        mov     dword ptr [esp + 0x98], 0x76cd9c
        call    FUN_0041ee70
        lea     ecx, [esp + 0xdc]
        push    ecx
        lea     ecx, [esp + 0x98]
        mov     dword ptr [esp + 0x98], 0x76d1f0
        call    FUN_00412b80
        mov     edx, dword ptr [g_7db0b0]
        lea     ecx, [esp + 0xd0]
        lea     eax, [esp + 0x94]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [g_7db0b0], eax
        call    FUN_004cfbd0
        push    ebx
        lea     ecx, [esp + 0x28]
        call    FUN_0041ee70
        mov     eax, dword ptr [esp + 0x24]
        push    0x2
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x20], ebx
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [g_7b8810]
        mov     ebx, dword ptr [edi + 0x8]
        mov     cx, word ptr [ebx + 0x2]
        push    edx
        push    0xc
        mov     word ptr [esp + 0x2a], cx
        call    FUN_004084c0
        mov     ebp, eax
        add     esp, 0x8
        test    ebp, ebp
        jz      L_e132
        lea     eax, [esp + 0x114]
        push    eax
        mov     ecx, ebp
        call    FUN_004c41d0
        mov     dword ptr [ebp], 0x76cd64
        mov     dword ptr [esp + 0x1c], ebp
        jmp     L_e13a
L_e132:
        mov     dword ptr [esp + 0x1c], 0x0
L_e13a:
        mov     ecx, dword ptr [esp + 0x38]
L_e13e:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edx + 0x8]
        test    eax, eax
        jz      L_e1a3
        mov     ebp, dword ptr [eax]
        test    ebp, ebp
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [edx + 0x8], ecx
        jz      L_e19f
        push    0x0
        lea     edx, [esp + 0x17]
        push    edx
        push    0x78d1ec
        mov     ecx, ebp
        mov     byte ptr [esp + 0x1f], 0x0
        call    FUN_00411ec0
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L_e13a
        mov     ecx, dword ptr [g_7db0a0]
        push    ebx
        push    ebp
        lea     eax, [esp + 0x2c]
        push    eax
        call    FUN_004d0600
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x38]
        add     ecx, eax
        cmp     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x38], ecx
        jbe     L_e13e
        mov     dword ptr [esp + 0x3c], ecx
        jmp     L_e13e
L_e19f:
        mov     ecx, dword ptr [esp + 0x38]
L_e1a3:
        sub     ecx, dword ptr [esp + 0x34]
        cmp     ecx, 0x2
        jbe     L_e221
        mov     edx, dword ptr [esp + 0x24]
        push    0x0
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x2c], 0xffffffec
        mov     ax, word ptr [ebx + 0x2]
        sub     ax, word ptr [esp + 0x22]
        push    0x2
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x20], eax
        call    dword ptr [edx + 0x24]
        lea     eax, [esp + 0x94]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_004d2680
        mov     ax, word ptr [esp + 0x92]
        mov     dx, word ptr [esp + 0x90]
        mov     cx, word ptr [esp + 0x18]
        mov     word ptr [esi + 0x96], ax
        add     word ptr [esi + 0x1a], cx
        mov     word ptr [esi + 0x94], dx
        jmp     L_e23c
L_e221:
        mov     dx, word ptr [g_7db0ac]
        mov     ax, word ptr [g_7db0ae]
        mov     word ptr [esi + 0x94], dx
        mov     word ptr [esi + 0x96], ax
L_e23c:
        lea     ecx, [esp + 0x50]
        call    FUN_004d2630
        test    al, al
        jnz     L_e25a
        lea     ecx, [esp + 0x94]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        call    FUN_00412e70
L_e25a:
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     dword ptr [g_7db0b0], edx
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x94]
        call    FUN_00412b60
        mov     ebp, dword ptr [esp + 0x4c]
        xor     ebx, ebx
L_e297:
        lea     ecx, [esp + 0x50]
        call    FUN_004d21c0
L_e2a0:
        lea     ecx, [esp + 0xd0]
        call    FUN_0040de20
        push    ebx
        lea     ecx, [esp + 0xd4]
        call    FUN_0040dd50
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        push    ebx
        lea     eax, [esp + 0xd4]
        push    eax
        mov     word ptr [esi + 0x11c], cx
        push    0x78d1e0
        mov     ecx, ebp
        mov     word ptr [esi + 0x11e], dx
        call    FUN_00412390
        test    al, al
        jz      L_e5b1
        mov     ecx, dword ptr [esp + 0xd0]
        push    ebx
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0x8c], ebx
        jz      L_e39c
        cmp     dword ptr [esp + 0x6c], ebx
        jbe     L_e39c
        lea     ecx, [esp + 0x50]
        call    FUN_004d24f0
        test    al, al
        jz      L_e39c
        lea     ecx, [esp + 0x50]
        call    FUN_004d2310
        mov     eax, dword ptr [esp + 0x50]
        push    0x2
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x58]
        call    dword ptr [eax + 0x20]
        mov     cx, word ptr [esp + 0x14]
        mov     edi, dword ptr [edi + 0x8]
        add     word ptr [edi + 0x2], cx
        mov     ax, word ptr [esp + 0x92]
        mov     cx, word ptr [esp + 0x14]
        mov     dx, word ptr [esp + 0x90]
        mov     word ptr [esi + 0x11e], ax
        add     word ptr [esi + 0x1a], cx
        lea     ecx, [esp + 0x50]
        mov     word ptr [esi + 0x11c], dx
        call    FUN_004d2630
        test    al, al
        jnz     L_e5a8
        mov     edx, dword ptr [g_7db0b0]
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2840
        jmp     L_e5a8
L_e39c:
        mov     eax, dword ptr [g_7b8c10]
        push    eax
        lea     ecx, [esp + 0x98]
        call    FUN_00415180
        push    ebx
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [esp + 0xa0], ebx
        mov     dword ptr [esp + 0xa4], ebx
        mov     dword ptr [esp + 0x98], 0x76cd9c
        call    FUN_0041ee70
        lea     ecx, [esp + 0xdc]
        push    ecx
        lea     ecx, [esp + 0x98]
        mov     dword ptr [esp + 0x98], 0x76d1f0
        call    FUN_00412b80
        mov     edx, dword ptr [g_7db0b0]
        lea     ecx, [esp + 0xd0]
        lea     eax, [esp + 0x94]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [g_7db0b0], eax
        call    FUN_004cfbd0
        push    0x2
        lea     ecx, [esp + 0x28]
        call    FUN_0041ee70
        mov     eax, dword ptr [esp + 0x24]
        push    0x2
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x28], ebx
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [g_7b8810]
        mov     edi, dword ptr [edi + 0x8]
        mov     bp, word ptr [edi + 0x2]
        push    ecx
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_e475
        lea     edx, [esp + 0x114]
        mov     dword ptr [eax + 0x4], edx
        mov     ecx, dword ptr [esp + 0x114]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x76cd64
        mov     ebx, eax
L_e475:
        mov     ecx, dword ptr [esp + 0x38]
L_e479:
        mov     eax, dword ptr [ebx + 0x8]
        test    eax, eax
        jz      L_e4ba
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ebx + 0x8], edx
        jz      L_e4b6
        push    edi
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        lea     eax, [esp + 0x2c]
        push    eax
        call    FUN_004d0600
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x38]
        add     ecx, eax
        cmp     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x38], ecx
        jbe     L_e479
        mov     dword ptr [esp + 0x3c], ecx
        jmp     L_e479
L_e4b6:
        mov     ecx, dword ptr [esp + 0x38]
L_e4ba:
        sub     ecx, dword ptr [esp + 0x34]
        cmp     ecx, 0x2
        jbe     L_e536
        mov     edx, dword ptr [esp + 0x24]
        push    0x0
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x2c], 0xffffffec
        mov     ax, word ptr [edi + 0x2]
        sub     ax, bp
        push    0x2
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [edx + 0x24]
        lea     eax, [esp + 0x94]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_004d2680
        mov     ax, word ptr [esp + 0x92]
        mov     dx, word ptr [esp + 0x90]
        mov     cx, word ptr [esp + 0x14]
        mov     word ptr [esi + 0x11e], ax
        add     word ptr [esi + 0x1a], cx
        mov     word ptr [esi + 0x11c], dx
        jmp     L_e551
L_e536:
        mov     dx, word ptr [g_7db0ac]
        mov     ax, word ptr [g_7db0ae]
        mov     word ptr [esi + 0x11c], dx
        mov     word ptr [esi + 0x11e], ax
L_e551:
        lea     ecx, [esp + 0x50]
        call    FUN_004d2630
        test    al, al
        jnz     L_e56f
        lea     ecx, [esp + 0x94]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        call    FUN_00412e70
L_e56f:
        mov     edx, dword ptr [esp + 0x18]
        push    ebx
        mov     dword ptr [g_7db0b0], edx
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x94]
        call    FUN_00412b60
        mov     ebp, dword ptr [esp + 0x4c]
        xor     ebx, ebx
L_e5a8:
        lea     ecx, [esp + 0x50]
        call    FUN_004d21c0
L_e5b1:
        lea     ecx, [esp + 0xd0]
        call    FUN_0040de20
        push    ebx
        lea     ecx, [esp + 0xd4]
        call    FUN_0040dd50
        mov     cx, word ptr [g_7db0ae]
        mov     ax, word ptr [g_7db0ac]
        push    ebx
        lea     edx, [esp + 0xd4]
        push    edx
        mov     word ptr [esi + 0x11a], cx
        push    0x78d1d0
        mov     ecx, ebp
        mov     word ptr [esi + 0x118], ax
        call    FUN_00412390
        test    al, al
        jz      L_e82a
        mov     eax, dword ptr [esp + 0xd0]
        push    ebx
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0x8c], ebx
        jz      L_e673
        cmp     dword ptr [esp + 0x6c], ebx
        jbe     L_e673
        lea     ecx, [esp + 0x50]
        call    FUN_004d24f0
        test    al, al
        jz      L_e673
        mov     cx, word ptr [esp + 0x90]
        mov     dx, word ptr [esp + 0x92]
        mov     word ptr [esi + 0x118], cx
        lea     ecx, [esp + 0x50]
        mov     word ptr [esi + 0x11a], dx
        call    FUN_004d2630
        test    al, al
        jnz     L_e821
        mov     eax, dword ptr [g_7db0b0]
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_004d2840
        jmp     L_e821
L_e673:
        mov     ecx, dword ptr [g_7b8c10]
        push    ecx
        lea     ecx, [esp + 0x98]
        call    FUN_00415180
        push    ebx
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [esp + 0xa0], ebx
        mov     dword ptr [esp + 0xa4], ebx
        mov     dword ptr [esp + 0x98], 0x76cd9c
        call    FUN_0041ee70
        lea     edx, [esp + 0xdc]
        push    edx
        lea     ecx, [esp + 0x98]
        mov     dword ptr [esp + 0x98], 0x76d1f0
        call    FUN_00412b80
        mov     ebp, dword ptr [g_7db0b0]
        lea     ecx, [esp + 0xd0]
        lea     eax, [esp + 0x94]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        mov     dword ptr [g_7db0b0], eax
        call    FUN_004cfbd0
        push    ebx
        lea     ecx, [esp + 0x28]
        call    FUN_0041ee70
        mov     edx, dword ptr [g_7b8810]
        push    edx
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_e72b
        lea     ecx, [esp + 0x114]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0x114]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     ebx, eax
L_e72b:
        mov     eax, dword ptr [ebx + 0x8]
        test    eax, eax
        jz      L_e774
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [ebx + 0x8], eax
        jz      L_e774
        push    0x0
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x77430c
        mov     ecx, edi
        call    FUN_00411cb0
        test    al, al
        push    edi
        jnz     L_e765
        lea     edx, [esp + 0x28]
        push    edx
        call    FUN_004e61b0
        add     esp, 0x8
        jmp     L_e72b
L_e765:
        lea     eax, [esp + 0x28]
        push    eax
        call    FUN_005b6d70
        add     esp, 0x8
        jmp     L_e72b
L_e774:
        mov     ecx, dword ptr [esp + 0x38]
        sub     ecx, dword ptr [esp + 0x34]
        jz      L_e7d0
        lea     edx, [esp + 0x94]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_004d2680
        lea     ecx, [esp + 0x50]
        call    FUN_004d2630
        test    al, al
        jnz     L_e7b0
        lea     ecx, [esp + 0x94]
        push    ecx
        mov     ecx, ebp
        call    FUN_00412e70
L_e7b0:
        mov     dx, word ptr [esp + 0x90]
        mov     ax, word ptr [esp + 0x92]
        mov     word ptr [esi + 0x118], dx
        mov     word ptr [esi + 0x11a], ax
        jmp     L_e7ec
L_e7d0:
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     word ptr [esi + 0x118], cx
        mov     word ptr [esi + 0x11a], dx
L_e7ec:
        push    ebx
        mov     dword ptr [g_7db0b0], ebp
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x94]
        call    FUN_00412b60
        mov     ebp, dword ptr [esp + 0x4c]
        xor     ebx, ebx
L_e821:
        lea     ecx, [esp + 0x50]
        call    FUN_004d21c0
L_e82a:
        lea     ecx, [esp + 0xd0]
        call    FUN_0040de20
        push    ebx
        lea     eax, [esp + 0xd0]
        push    eax
        push    0x783a18
        mov     ecx, ebp
        mov     byte ptr [esi + 0x120], 0x5f
        call    FUN_00411bf0
        test    al, al
        jz      L_e865
        mov     ecx, dword ptr [esp + 0xcc]
        mov     dl, byte ptr [ecx]
        mov     byte ptr [esi + 0x120], dl
L_e865:
        lea     eax, [esi + 0x124]
        push    ebx
        push    eax
        push    0x78d1c4
        mov     ecx, ebp
        mov     dword ptr [eax], ebx
        call    FUN_00411cb0
        lea     eax, [esi + 0x128]
        push    ebx
        push    eax
        push    0x78d1b8
        mov     ecx, ebp
        mov     dword ptr [eax], ebx
        call    FUN_00411cb0
        lea     eax, [esi + 0x12c]
        push    ebx
        push    eax
        push    0x78a930
        mov     ecx, ebp
        mov     dword ptr [eax], 0xffffffff
        call    FUN_00411cb0
        lea     eax, [esi + 0x130]
        push    ebx
        push    eax
        push    0x78d1a0
        mov     ecx, ebp
        mov     byte ptr [eax], 0x0
        call    FUN_00411ec0
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfc90
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x110
        ret
    }
}
