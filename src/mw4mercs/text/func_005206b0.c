/*
 * FUN_005206B0 (1411 B) — Campaign save game function.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Reads a set of pointers from the param struct, opens a database
 * (FUN_00547490), builds a save path string, and writes the campaign
 * state via a series of database/string helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00547490(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fb780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0061a160(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0061aa30(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_0050aba0(void);
extern void __cdecl FUN_0050a5c0(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_00547560(void);
extern void __cdecl FUN_006fb7a0(void);

extern int DAT_007dab44; /* 0x007DAB44 */
extern int DAT_007dab40; /* 0x007DAB40 */
extern int DAT_007db0b8; /* 0x007DB0B8 */
extern int DAT_007dd230; /* 0x007DD230 */

__declspec(naked) void __cdecl FUN_005206b0(void)
{
    __asm {
        sub     esp, 0x13c
        mov     eax, dword ptr [esp + 0x140]
        mov     edx, dword ptr [eax + 0x8]
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     ecx, dword ptr [eax + 0x4]
        push    esi
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0xc]
        mov     ebp, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [edx]
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x14]
        push    0x1
        push    ebp
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], eax
        call    FUN_00547490
        add     esp, 0x8
        test    al, al
        jnz     l_520709
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xfffffffe
        pop     ebx
        add     esp, 0x13c
        ret     8

    l_520709:
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        push    edi
        xor     ecx, dword ptr [edx]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0xb0
        call    FUN_00412780
        push    0x77a0c8
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jnz     l_520752
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fb780
    l_520752:
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      l_520786
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520786
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520786:
        mov     eax, dword ptr [esp + 0x10]
        push    0x76c5a8
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      l_5207be
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_5207be
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_5207be:
        mov     ecx, dword ptr [ebx + 0x40ee4]
        test    ecx, ecx
        jz      l_5207ce
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_5207ce:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      l_5207dd
        inc     byte ptr [eax - 1]
    l_5207dd:
        mov     eax, dword ptr [esp + 0x14]
        push    0x77a0bc
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      l_520815
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520815
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520815:
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jz      l_520bed
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [DAT_007db0b8]
        push    0x0
        push    0x0
        push    0x0
        push    0x3f
        push    0x7
        push    0x0
        push    edx
        call    FUN_004d2d00
        mov     edi, eax
        push    0x0
        push    edi
        push    0x77a0a8
        lea     ecx, [esp + 0xd0]
        mov     dword ptr [ebx + 0x40ee4], edi
        call    FUN_004d2110
        mov     eax, dword ptr [esp + 0x100]
        test    eax, eax
        jz      l_520875
        mov     eax, dword ptr [esp + 0xe0]
        test    eax, eax
        ja      l_5208b3
    l_520875:
        test    edi, edi
        jz      l_520881
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
    l_520881:
        lea     ecx, [esp + 0xc4]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_5208a8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_5208a8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_5208a8:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jmp     l_520b4a

    l_5208b3:
        lea     ecx, [esp + 0xc4]
        call    FUN_004d21c0
        mov     ecx, dword ptr [ebx + 0x40ee8]
        test    ecx, ecx
        jz      l_5208cf
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_5208cf:
        push    0x0
        push    edi
        push    0x77a0a8
        lea     ecx, [esp + 0x8c]
        call    FUN_004d2110
        lea     ecx, [esp + 0x80]
        call    FUN_004d2310
        push    0x88c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_520913
        lea     ecx, [esp + 0x80]
        push    ecx
        mov     ecx, eax
        call    FUN_0061a160
        mov     esi, eax
        jmp     l_520915
    l_520913:
        xor     esi, esi
    l_520915:
        push    ebp
        lea     ecx, [esi + 0x6c]
        mov     dword ptr [ebx + 0x40ee8], esi
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ecx]
        xor     ebp, ebp
        mov     dword ptr [esi + 0x14], eax
        push    ebp
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esi + 0x78], edx
        call    FUN_0041ee70
        lea     eax, [esp + 0x58]
        push    eax
        mov     ecx, esi
        call    FUN_0061aa30
        push    ebp
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     ecx, [esp + 0x88]
        call    FUN_004d2680
        mov     ecx, dword ptr [DAT_007dd230]
        call    FUN_0050aba0
        push    ebp
        push    edi
        push    0x77a158
        lea     ecx, [esp + 0x114]
        call    FUN_004d2110
        push    ebp
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee70
        mov     ecx, dword ptr [DAT_007dd230]
        lea     edx, [esp + 0x30]
        push    edx
        call    FUN_0050a5c0
        mov     eax, dword ptr [esp + 0x30]
        push    ebp
        lea     ecx, [esp + 0x34]
        call    dword ptr [eax + 0xc]
        push    ebp
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x110]
        mov     dword ptr [esp + 0x40], 0xffffffec
        call    FUN_004d2680
        mov     ecx, edi
        call    FUN_004d2a90
        cmp     esi, ebp
        jz      l_5209d7
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        mov     dword ptr [ebx + 0x40ee8], ebp
    l_5209d7:
        cmp     edi, ebp
        jz      l_5209e9
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
        mov     dword ptr [ebx + 0x40ee4], ebp
    l_5209e9:
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        xor     ecx, dword ptr [edx]
        lea     eax, [ecx + 0x44]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      l_520a1e
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      l_520a14
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_520a14:
        push    0x11
        call    FUN_004c8e90
        add     esp, 0x4
    l_520a1e:
        push    0x77a0c8
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebp
        jz      l_520a64
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520a64
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520a64:
        push    0x77a0c8
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     esi, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebp
        jz      l_520aaa
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520aaa
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520aaa:
        push    0x1
        push    esi
        call    FUN_00547490
        add     esp, 0x8
        test    al, al
        jz      l_520ae4
        mov     eax, dword ptr [esp + 0x10]
        push    0x1
        push    eax
        call    FUN_00547560
        add     esp, 0x8
        test    al, al
        jz      l_520ae4
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        call    FUN_006fb7a0
        and     eax, 0xff
        mov     esi, eax
        jnz     l_520b63
    l_520ae4:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      l_520aff
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520aff
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520aff:
        lea     ecx, [esp + 0x30]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x108]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x58]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x80]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      l_520b44
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520b44
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520b44:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
    l_520b4a:
        jz      l_520c23
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520c23
        jmp     l_520c1a

    l_520b63:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      l_520b7e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520b7e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520b7e:
        lea     ecx, [esp + 0x30]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x108]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x58]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x80]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      l_520bc3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520bc3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520bc3:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      l_520bde
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520bde
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520bde:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x13c
        ret     8

    l_520bed:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_520c08
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520c08
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520c08:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_520c23
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520c23
    l_520c1a:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520c23:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x13c
        ret     8
    }
}
