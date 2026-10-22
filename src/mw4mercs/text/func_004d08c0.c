/*
 * FUN_004d08c0 (1413 B) — MLR network subsystem: resource/mission loader
 * dispatcher. __thiscall (this=ECX), RET 0x18 (6 dword params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fb780(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_006fbce0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_004d0e50(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_004d2ae0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0041f8d0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00412ca0(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_004922d0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_00412f80(void);

extern unsigned char g_007b8ef0;
extern unsigned int  g_007b8810;
extern unsigned int  g_007db0b8;
extern unsigned int  g_007da884;
extern unsigned int  g_007b8c10;
extern unsigned int  g_007b87f4;
extern void         *g_0076b2a8;   /* IAT: strrchr */

__declspec(naked) void FUN_004d08c0(void)
{
    __asm {
        sub     esp, 0x20c
        mov     eax, dword ptr [esp + 0x21c]
        push    ebp
        mov     ebp, ecx
        mov     cx, ax
        inc     eax
        cmp     cx, -1
        push    esi
        mov     esi, dword ptr [esp + 0x218]
        mov     dword ptr [esp + 0x8], ebp
        mov     dword ptr [esp + 0x224], eax
        jnz     L_4d0975
        push    0x77245c
        call    FUN_006fc4d0
        test    al, al
        jnz     L_4d0909
        push    0x77245c
        call    FUN_006fb780
L_4d0909:
        push    0x77244c
        mov     byte ptr [g_007b8ef0], 0
        call    FUN_006fc4d0
        test    al, al
        jnz     L_4d0928
        push    0x77244c
        call    FUN_006fb780
L_4d0928:
        push    0x772438
        mov     byte ptr [g_007b8ef0], 0
        call    FUN_006fc4d0
        test    al, al
        jnz     L_4d0947
        push    0x772438
        call    FUN_006fb780
L_4d0947:
        push    0x76c724
        mov     byte ptr [g_007b8ef0], 0
        call    FUN_006fc4d0
        test    al, al
        jnz     L_4d0966
        push    0x76c724
        call    FUN_006fb780
L_4d0966:
        push    esi
        mov     ecx, ebp
        mov     byte ptr [g_007b8ef0], 0
        call    FUN_004cfbd0
L_4d0975:
        push    edi
        push    0x76b768
        mov     ecx, esi
        call    FUN_0040ecc0
        mov     esi, eax
        xor     edi, edi
        cmp     esi, edi
        jz      L_4d0e1d
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_4d09b6
        mov     edx, dword ptr [esi + 0x18]
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, eax
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax], 0x76cc9c
        mov     dword ptr [esp + 0x20], edx
        jmp     L_4d09bc
L_4d09b6:
        mov     dword ptr [esp + 0x20], edi
        mov     edx, edi
L_4d09bc:
        push    ebx
L_4d09bd:
        mov     ecx, dword ptr [edx + 0x8]
        cmp     ecx, edi
        jz      L_4d0e13
        mov     eax, dword ptr [ecx]
        cmp     eax, edi
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [edx + 0x8], ecx
        jz      L_4d0e13
        mov     edx, dword ptr [eax + 0x14]
        push    edi
        push    0x1
        push    edx
        lea     ecx, [esp + 0x138]
        call    FUN_0040dca0
        mov     eax, dword ptr [esp + 0x12c]
        push    eax
        call    FUN_006fbce0
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x234]
        mov     ebx, edx
        cmp     ebx, eax
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], ebx
        jg      L_4d0a2f
        jl      L_4d0a1e
        cmp     ecx, dword ptr [esp + 0x230]
        jnc     L_4d0a2f
L_4d0a1e:
        mov     ecx, dword ptr [esp + 0x230]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax
        mov     ebx, eax
L_4d0a2f:
        lea     edx, [esp + 0x12c]
        push    edx
        mov     ecx, ebp
        call    FUN_004cfbd0
        mov     eax, dword ptr [g_007b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, edi
        jz      L_4d0a72
        lea     ecx, [esp + 0x170]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0x170]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     dword ptr [esp + 0x20], eax
        jmp     L_4d0a78
L_4d0a72:
        mov     dword ptr [esp + 0x20], edi
        mov     eax, edi
L_4d0a78:
        mov     ecx, dword ptr [eax + 0x8]
        cmp     ecx, edi
        jz      L_4d0a8d
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [esp + 0x2c], edx
        jmp     L_4d0a91
L_4d0a8d:
        mov     dword ptr [esp + 0x2c], edi
L_4d0a91:
        mov     edx, dword ptr [esp + 0x2c]
        mov     ebp, dword ptr [edx + 0x14]
        push    ebp
        xor     esi, esi
        call    FUN_006fc4d0
        test    al, al
        jz      L_4d0aae
        push    ebp
        call    FUN_006fbce0
        mov     edi, eax
        mov     esi, edx
L_4d0aae:
        cmp     esi, ebx
        jg      L_4d0ac1
        jl      L_4d0aba
        cmp     edi, dword ptr [esp + 0x14]
        jnc     L_4d0ac1
L_4d0aba:
        mov     byte ptr [esp + 0x28], 0x1
        jmp     L_4d0ac6
L_4d0ac1:
        mov     byte ptr [esp + 0x28], 0x0
L_4d0ac6:
        push    ebp
        lea     ecx, [esp + 0x20]
        mov     byte ptr [g_007b8ef0], 0
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x1c]
        push    0x2e
        push    eax
        call    dword ptr [g_0076b2a8]
        add     esp, 0x8
        test    eax, eax
        jz      L_4d0b10
        or      ecx, 0xffffffff
        lea     edx, [eax + 0x1]
        xor     eax, eax
        mov     edi, 0x772434
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
L_4d0b10:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jnz     L_4d0b23
        mov     byte ptr [esp + 0x28], 0x1
L_4d0b23:
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x224]
        mov     ecx, dword ptr [esp + 0x22c]
        push    0x1
        push    edx
        mov     edx, dword ptr [esp + 0x24]
        push    0x1
        push    eax
        push    ecx
        mov     ecx, dword ptr [g_007db0b8]
        push    edx
        push    ebp
        mov     byte ptr [g_007b8ef0], 0
        call    FUN_004d2d00
        push    0x0
        push    ebp
        lea     ecx, [esp + 0xf0]
        mov     esi, eax
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x124]
        test    eax, eax
        jz      L_4d0b7b
        mov     eax, dword ptr [esp + 0x104]
        test    eax, eax
        ja      L_4d0bfa
L_4d0b7b:
        mov     ebx, dword ptr [esp + 0x228]
        mov     edi, dword ptr [ebx + 0x24]
        mov     eax, dword ptr [ebx + 0x20]
        sub     edi, eax
        lea     ecx, [ebx + 0x10]
        jz      L_4d0bc3
        mov     eax, dword ptr [ecx]
        push    edi
        push    edi
        call    dword ptr [eax + 0x4]
        sub     eax, edi
        push    eax
        lea     ecx, [esp + 0xb4]
        call    FUN_0041e690
        push    ebx
        lea     ecx, [esp + 0xac]
        push    ecx
        lea     ecx, [esp + 0xf0]
        call    FUN_004d2680
        lea     ecx, [esp + 0xa8]
        jmp     L_4d0bf5
L_4d0bc3:
        push    0x1
        push    0x1
        push    0x76b768
        lea     ecx, [esp + 0xd4]
        call    FUN_0041e690
        push    0x0
        lea     edx, [esp + 0xcc]
        push    edx
        lea     ecx, [esp + 0xf0]
        call    FUN_004d2680
        lea     ecx, [esp + 0xc8]
L_4d0bf5:
        call    FUN_0041e710
L_4d0bfa:
        lea     ecx, [esp + 0xe8]
        call    FUN_004d21c0
        mov     eax, dword ptr [g_007da884]
        mov     ecx, dword ptr [eax + 0x44]
        mov     edx, dword ptr [g_007b8c10]
        mov     dword ptr [esp + 0x34], ecx
        push    edx
        lea     ecx, [esp + 0x74]
        lea     edi, [eax + 0x4]
        call    FUN_00415180
        xor     eax, eax
        push    eax
        lea     ecx, [esp + 0x84]
        mov     dword ptr [esp + 0x7c], eax
        mov     dword ptr [esp + 0x80], eax
        mov     dword ptr [esp + 0x74], 0x76cd9c
        call    FUN_0041ee70
        push    edi
        lea     ecx, [esp + 0x74]
        mov     dword ptr [esp + 0x74], 0x76d1f0
        call    FUN_00412b80
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_004d0e50
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     bl, al
        call    FUN_004084e0
        add     esp, 0x4
        mov     ecx, esi
        call    FUN_004d2a90
        mov     ecx, esi
        call    FUN_004d2ae0
        test    bl, bl
        jz      L_4d0cec
        push    0x0
        lea     ecx, [esp + 0x180]
        call    FUN_0040dd50
        mov     ecx, dword ptr [esp + 0x30]
        lea     edx, [esp + 0x17c]
        push    edx
        call    FUN_0041f8d0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x22c]
        push    eax
        mov     eax, dword ptr [esp + 0x22c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x22c]
        push    edx
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        lea     edx, [esp + 0x190]
        push    edx
        call    FUN_004d08c0
        lea     ecx, [esp + 0x17c]
        call    FUN_0040de20
        jmp     L_4d0d9d
L_4d0cec:
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_00415180
        xor     edi, edi
        push    edi
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x44], edi
        mov     dword ptr [esp + 0x48], edi
        mov     dword ptr [esp + 0x3c], 0x76cd9c
        call    FUN_0041ee70
        mov     ecx, dword ptr [esp + 0x228]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     dword ptr [esp + 0x3c], 0x76d1f0
        call    FUN_00412b80
        push    ebp
        lea     ecx, [esp + 0x3c]
        call    FUN_00412ca0
        push    edi
        lea     ecx, [esp + 0x1d0]
        call    FUN_0040dd50
        mov     ecx, dword ptr [esp + 0x30]
        lea     edx, [esp + 0x1cc]
        push    edx
        call    FUN_0041f8d0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x22c]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x22c]
        push    edx
        lea     eax, [esp + 0x44]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        lea     edx, [esp + 0x1e0]
        push    edx
        call    FUN_004d08c0
        lea     ecx, [esp + 0x1cc]
        call    FUN_0040de20
        lea     ecx, [esp + 0x38]
        call    FUN_00412b60
L_4d0d9d:
        test    esi, esi
        jz      L_4d0da9
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
L_4d0da9:
        mov     ecx, dword ptr [esp + 0x34]
        push    ecx
        mov     ecx, dword ptr [g_007da884]
        call    FUN_004922d0
        mov     eax, dword ptr [g_007da884]
        lea     edx, [esp + 0x70]
        push    edx
        lea     ecx, [eax + 0x4]
        call    FUN_00412b80
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_004cfc90
        lea     ecx, [esp + 0x70]
        call    FUN_00412b60
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_4d0df8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d0df8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d0df8:
        lea     ecx, [esp + 0x12c]
        call    FUN_0040de20
        mov     edx, dword ptr [esp + 0x24]
        mov     ebp, dword ptr [esp + 0x10]
        xor     edi, edi
        jmp     L_4d09bd
L_4d0e13:
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        pop     ebx
L_4d0e1d:
        cmp     word ptr [esp + 0x228], di
        pop     edi
        jnz     L_4d0e3a
        mov     ecx, dword ptr [g_007b87f4]
        call    FUN_00412f80
        mov     ecx, ebp
        call    FUN_004cfc90
L_4d0e3a:
        pop     esi
        pop     ebp
        add     esp, 0x20c
        ret     0x18
    }
}
