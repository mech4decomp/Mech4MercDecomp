/*
 * FUN_00615ff0 (2106 B) — __thiscall: builds a pilot save/resource path
 * string, then constructs a large set of named sub-objects (Version,
 * GameData, Campaign, Salvage, BlackMarket, Corporation, NewsManager,
 * Lancemates, Mission, GameSetup, MechTable) via a stream/INI-style
 * builder, and optionally loads pilot data. Frees refcounted buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_00412570(void *);
extern void *__cdecl FUN_004125e0(void *, void *);
extern void __cdecl FUN_00412740(void *);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004d1f80(void *, int);
extern void __cdecl FUN_004d27a0(void *);
extern void *__cdecl FUN_0041fd80(int);
extern void __cdecl FUN_004d2110(void *, void *, int);
extern void __cdecl FUN_0041ee70(int);
extern void __cdecl FUN_00412a50(void *, void *);
extern void __cdecl FUN_004d2680(void *, int);
extern void __cdecl FUN_006187d0(void *);
extern void __cdecl FUN_00596ab0(void *);
extern void __cdecl FUN_0059f840(void *);
extern void __cdecl FUN_0059e4f0(void *);
extern void __cdecl FUN_0059c870(void *);
extern void __cdecl FUN_0059b960(void *);
extern void __cdecl FUN_005de170(void *);
extern void __cdecl FUN_006189f0(void *);
extern void __cdecl FUN_00615ea0(void *);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2ad0(void *);
extern void __cdecl FUN_006fb7c0(void *);
extern void __cdecl FUN_00412780(void *);

__declspec(naked) void FUN_00615ff0(void)
{
    __asm {
        sub     esp, 0x4fc
        push    ebx
        push    edi
        mov     edi, ecx
        push    0x77a0c8
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [esp+0x10]
        xor     eax, edx
        mov     edx, dword ptr [eax+0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0xb0]
        push    eax
        push    ecx
        lea     ecx, [esp+0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      lbl_61605a
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_61605a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_61605a:
        mov     edx, dword ptr [esp+0x10]
        push    0x78c370
        push    edx
        lea     ecx, [esp+0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      lbl_616092
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_616092
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_616092:
        mov     ebx, dword ptr [esp+0x508]
        mov     eax, dword ptr [esp+0x10]
        push    ebx
        push    eax
        lea     ecx, [esp+0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      lbl_6160cd
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_6160cd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_6160cd:
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        mov     dword ptr [esp+0x18], eax
        jz      lbl_6160dc
        inc     byte ptr [eax-1]
lbl_6160dc:
        mov     ecx, dword ptr [esp+0x18]
        push    0x779f4c
        push    ecx
        lea     ecx, [esp+0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      lbl_616114
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_616114
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_616114:
        push    esi
        push    0x1
        lea     edx, [esp+0x10]
        push    edx
        lea     ecx, [esp+0x4cc]
        mov     word ptr [esp+0x14], 0x5
        mov     word ptr [esp+0x16], 0x0
        call    FUN_004d1f80
        mov     eax, dword ptr [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x4c8]
        call    FUN_004d27a0
        lea     esi, [edi+0x74]
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c450
        lea     ecx, [esp+0x448]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x1b4]
        call    FUN_0041ee70
        push    0x773040
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        lea     ecx, [esp+0x10]
        push    ecx
        lea     edx, [esp+0x1b4]
        push    edx
        call    FUN_00412a50
        add     esp, 0x8
        push    0x0
        lea     eax, [esp+0x1b4]
        push    eax
        lea     ecx, [esp+0x444]
        call    FUN_004d2680
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [g_007dab40]
        xor     ecx, eax
        mov     eax, dword ptr [ecx+0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0x3508]
        mov     dword ptr [edi+0x7c], ecx
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c444
        lea     ecx, [esp+0x3c0]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x164]
        call    FUN_0041ee70
        lea     edx, [esp+0x160]
        push    edx
        mov     ecx, edi
        call    FUN_006187d0
        push    0x0
        lea     eax, [esp+0x164]
        push    eax
        lea     ecx, [esp+0x3bc]
        call    FUN_004d2680
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c438
        lea     ecx, [esp+0x338]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x24]
        call    FUN_0041ee70
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, dword ptr [edi+0x34]
        call    FUN_00596ab0
        push    0x0
        lea     edx, [esp+0x24]
        push    edx
        lea     ecx, [esp+0x334]
        call    FUN_004d2680
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c42c
        lea     ecx, [esp+0x2b0]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0xc4]
        call    FUN_0041ee70
        mov     ecx, dword ptr [edi+0x24]
        lea     eax, [esp+0xc0]
        push    eax
        call    FUN_0059f840
        push    0x0
        lea     ecx, [esp+0xc4]
        push    ecx
        lea     ecx, [esp+0x2ac]
        call    FUN_004d2680
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c41c
        lea     ecx, [esp+0x228]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x74]
        call    FUN_0041ee70
        mov     ecx, dword ptr [edi+0x2c]
        lea     edx, [esp+0x70]
        push    edx
        call    FUN_0059e4f0
        push    0x0
        lea     eax, [esp+0x74]
        push    eax
        lea     ecx, [esp+0x224]
        call    FUN_004d2680
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c40c
        lea     ecx, [esp+0x37c]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x4c]
        call    FUN_0041ee70
        lea     ecx, [esp+0x48]
        push    ecx
        mov     ecx, dword ptr [edi+0x1c]
        call    FUN_0059c870
        push    0x0
        lea     edx, [esp+0x4c]
        push    edx
        lea     ecx, [esp+0x378]
        call    FUN_004d2680
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c3fc
        lea     ecx, [esp+0x404]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0xec]
        call    FUN_0041ee70
        mov     ecx, dword ptr [edi+0x20]
        lea     eax, [esp+0xe8]
        push    eax
        call    FUN_0059b960
        push    0x0
        lea     ecx, [esp+0xec]
        push    ecx
        lea     ecx, [esp+0x400]
        call    FUN_004d2680
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c3ec
        lea     ecx, [esp+0x2f4]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x13c]
        call    FUN_0041ee70
        mov     ecx, dword ptr [edi+0x38]
        lea     edx, [esp+0x138]
        push    edx
        call    FUN_005de170
        push    0x0
        lea     eax, [esp+0x13c]
        push    eax
        lea     ecx, [esp+0x2f0]
        call    FUN_004d2680
        mov     al, byte ptr [esp+0x514]
        test    al, al
        jz      lbl_61647c
        push    ebp
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c2f4
        lea     ecx, [esp+0x1e8]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x118]
        call    FUN_0041ee70
        mov     edx, dword ptr [g_007dab44]
        mov     ebx, dword ptr [edx]
        mov     ecx, dword ptr [g_007dab40]
        xor     ecx, ebx
        mov     ebp, dword ptr [ecx+0x20]
        xor     ebp, 0x85739531
        mov     ebx, dword ptr [ebp]
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        lea     eax, [esp+0x118]
        push    eax
        mov     ecx, ebp
        call    dword ptr [ebx+0xc]
        push    0x0
        lea     ecx, [esp+0x118]
        push    ecx
        lea     ecx, [esp+0x1e4]
        call    FUN_004d2680
        lea     ecx, [esp+0x114]
        call    FUN_0041ef60
        lea     ecx, [esp+0x1dc]
        call    FUN_004d21c0
        mov     ebx, dword ptr [esp+0x510]
        pop     ebp
        jmp     lbl_6164b7
lbl_61647c:
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c2f4
        lea     ecx, [esp+0x1e4]
        call    FUN_004d2110
        push    0x0
        push    0x0
        lea     ecx, [esp+0x1e0]
        call    FUN_004d2680
        lea     ecx, [esp+0x1d8]
        mov     byte ptr [edi+0x70], 0x0
        call    FUN_004d21c0
lbl_6164b7:
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c3e0
        lea     ecx, [esp+0x48c]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x9c]
        call    FUN_0041ee70
        lea     edx, [esp+0x98]
        push    edx
        mov     ecx, edi
        call    FUN_006189f0
        push    0x0
        lea     eax, [esp+0x9c]
        push    eax
        lea     ecx, [esp+0x488]
        call    FUN_004d2680
        push    0x0
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c3d4
        lea     ecx, [esp+0x26c]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp+0x18c]
        call    FUN_0041ee70
        lea     ecx, [esp+0x188]
        push    ecx
        mov     ecx, edi
        call    FUN_00615ea0
        push    0x0
        lea     edx, [esp+0x18c]
        push    edx
        lea     ecx, [esp+0x268]
        call    FUN_004d2680
        lea     ecx, [esp+0x188]
        call    FUN_0041ef60
        lea     ecx, [esp+0x260]
        call    FUN_004d21c0
        lea     ecx, [esp+0x98]
        call    FUN_0041ef60
        lea     ecx, [esp+0x480]
        call    FUN_004d21c0
        lea     ecx, [esp+0x138]
        call    FUN_0041ef60
        lea     ecx, [esp+0x2e8]
        call    FUN_004d21c0
        lea     ecx, [esp+0xe8]
        call    FUN_0041ef60
        lea     ecx, [esp+0x3f8]
        call    FUN_004d21c0
        lea     ecx, [esp+0x48]
        call    FUN_0041ef60
        lea     ecx, [esp+0x370]
        call    FUN_004d21c0
        lea     ecx, [esp+0x70]
        call    FUN_0041ef60
        lea     ecx, [esp+0x21c]
        call    FUN_004d21c0
        lea     ecx, [esp+0xc0]
        call    FUN_0041ef60
        lea     ecx, [esp+0x2a4]
        call    FUN_004d21c0
        lea     ecx, [esp+0x20]
        call    FUN_0041ef60
        lea     ecx, [esp+0x32c]
        call    FUN_004d21c0
        lea     ecx, [esp+0x160]
        call    FUN_0041ef60
        lea     ecx, [esp+0x3b4]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      lbl_61663d
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_61663d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_61663d:
        lea     ecx, [esp+0x1b0]
        call    FUN_0041ef60
        lea     ecx, [esp+0x43c]
        call    FUN_004d21c0
        lea     ecx, [esp+0x4c4]
        call    FUN_004d21c0
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp+0x1c]
        push    ecx
        mov     ecx, eax
        call    FUN_004d2ad0
        mov     al, byte ptr [esp+0x510]
        test    al, al
        jz      lbl_6167d8
        push    0x77a0c8
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        mov     edx, dword ptr [g_007dab44]
        mov     esi, dword ptr [edx]
        mov     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [esp+0x10]
        xor     eax, esi
        mov     eax, dword ptr [eax+0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0xb0]
        push    ecx
        push    edx
        lea     ecx, [esp+0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x18]
        test    eax, eax
        jz      lbl_6166e2
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_6166e2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_6166e2:
        mov     eax, dword ptr [esp+0x10]
        push    0x78c370
        push    eax
        lea     ecx, [esp+0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x18]
        test    eax, eax
        jz      lbl_61671a
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_61671a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_61671a:
        mov     ecx, dword ptr [edi+0x6c]
        mov     edx, dword ptr [esp+0x10]
        push    ecx
        push    edx
        lea     ecx, [esp+0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x18]
        test    eax, eax
        jz      lbl_616751
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_616751
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_616751:
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        mov     dword ptr [esp+0xc], eax
        jz      lbl_616760
        inc     byte ptr [eax-1]
lbl_616760:
        mov     eax, dword ptr [esp+0xc]
        push    0x779f4c
        push    eax
        lea     ecx, [esp+0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x18]
        test    eax, eax
        jz      lbl_616798
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_616798
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_616798:
        mov     ecx, dword ptr [esp+0xc]
        push    ecx
        call    FUN_006fb7c0
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jz      lbl_6167bd
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_6167bd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_6167bd:
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      lbl_6167d8
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_6167d8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_6167d8:
        mov     eax, dword ptr [edi+0x6c]
        cmp     eax, ebx
        lea     ecx, [edi+0x6c]
        pop     esi
        jz      lbl_6167e9
        push    ebx
        call    FUN_00412780
lbl_6167e9:
        mov     eax, dword ptr [esp+0x18]
        test    eax, eax
        pop     edi
        pop     ebx
        jz      lbl_616806
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_616806
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_616806:
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      lbl_616821
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_616821
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_616821:
        add     esp, 0x4fc
        ret     0xc
    }
}
