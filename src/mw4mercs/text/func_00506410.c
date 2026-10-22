/*
 * FUN_00506410 (2653 B) — Adept/MLR terrain-data loader. Reads grid
 * dimensions, loads .erf/.bsp/.material tiles via the archive/stream
 * helpers, and fills in the object's texture/cultural data fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b420;                 /* sprintf IAT */
extern unsigned int g_007db0a0;
extern unsigned int g_007db0b0;
extern unsigned int g_007daa20;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern char g_007723e8[];                /* "GameData" */
extern char g_00776f78[];                /* "WaterLevel" */
extern char g_00770958[];                /* "hudmap" */
extern char g_00776f70[];
extern char g_00776f68[];                /* "{zones}" */
extern char g_00776f3c[];                /* "Bad grid element!" fmt */
extern char g_00776f30[];                /* "%c%c.erf" */
extern char g_00776f24[];                /* "%c%c.bsp" */
extern char g_00776f14[];                /* "%c%c.material" */
extern char g_00776f08[];                /* "TextureData" */
extern char g_00776efc[];                /* "Content\\Textures\\CompostTexture\\" */
extern char g_00776ed8[];                /* "TCFFilename" */
extern char g_00776ec8[];                /* "CulturalData" */
extern void __cdecl FUN_00501eb0(void);
extern void __cdecl FUN_004cfbd0(void);
extern void *__cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411d60(void);
extern int __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_004cfc30(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_00412570(void);
extern void *__cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern int __cdecl FUN_004d24f0(void);
extern int __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412bf0(void);
extern void *__cdecl FUN_004af200(void);
extern void *__cdecl FUN_004c6920(void);
extern int __cdecl FUN_00415230(void);
extern int __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00506ee0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_004cfc90(void);
extern int __cdecl FUN_006fc4d0(void);

__declspec(naked) void FUN_00506410(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x370
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0x8]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0xb8
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        push    edi
        call    FUN_00501eb0
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        mov     edi, dword ptr [edi+0x4]
        mov     ecx, dword ptr [g_007db0a0]
        mov     ebx, eax
        push    edi
        mov     dword ptr [ebp-0x1c], ebx
        mov     dword ptr [ebp-0x4], edi
        call    FUN_004cfbd0
        push    offset g_007723e8
        mov     ecx, edi
        call    FUN_0040ecc0
        mov     esi, eax
        lea     eax, [ebx+0x34]
        push    0x0
        push    eax
        push    offset g_00776f78
        mov     ecx, esi
        mov     dword ptr [ebp-0x30], esi
        mov     dword ptr [eax], 0x0
        call    FUN_00411d60
        push    0x1
        lea     eax, [ebp+0x8]
        push    eax
        push    offset g_00770958
        mov     ecx, esi
        call    FUN_00411bf0
        mov     ecx, dword ptr [ebp+0x8]
        push    0x0
        push    ecx
        lea     ecx, [ebp-0x120]
        call    FUN_0041de80
        mov     ecx, dword ptr [g_007db0a0]
        lea     edx, [ebp-0x120]
        push    edx
        call    FUN_004cfc30
        mov     eax, dword ptr [ebp-0xfc]
        push    0x0
        lea     ecx, [ebp-0x20]
        push    ecx
        mov     dword ptr [ebp+0x8], eax
        push    offset g_00776f70
        mov     ecx, esi
        mov     byte ptr [ebx+0x38], 0x0
        call    FUN_00411bf0
        test    al, al
        jz      L_4f9
        mov     edi, dword ptr [ebp-0x20]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebx+0x38]
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     esi, dword ptr [ebp-0x30]
L_4f9:
        mov     eax, dword ptr [ebp+0x8]
        push    0x0
        push    eax
        lea     ecx, [ebp-0x1d8]
        call    FUN_004d2000
        mov     ecx, dword ptr [ebp+0x8]
        push    ecx
        lea     ecx, [ebp-0x8]
        call    FUN_00412570
        mov     edx, dword ptr [ebp-0x8]
        push    offset g_00776f68
        push    edx
        lea     ecx, [ebp-0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp-0x8]
        call    FUN_00412740
        mov     eax, dword ptr [ebp-0x18]
        test    eax, eax
        jz      L_54a
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_54a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_54a:
        mov     eax, dword ptr [ebp-0x8]
        push    0x0
        push    eax
        lea     ecx, [ebp-0x308]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp-0x19c]
        test    eax, eax
        jz      L_5a8
        mov     eax, dword ptr [ebp-0x1bc]
        test    eax, eax
        jbe     L_5a8
        lea     ecx, [ebp-0x1d8]
        call    FUN_004d24f0
        test    al, al
        jz      L_5a8
        lea     ecx, [ebp-0x1d8]
        call    FUN_004d2630
        test    al, al
        jnz     L_6a39
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [ebp-0x1d8]
        call    FUN_004d2840
        jmp     L_6a39
L_5a8:
        lea     ecx, [ebp-0x68]
        call    FUN_00412b30
        lea     edx, [ebp-0x120]
        push    edx
        lea     ecx, [ebp-0x68]
        call    FUN_00412bf0
        lea     eax, [ebp-0x120]
        push    0x0
        push    eax
        call    FUN_004af200
        add     esp, 0x4
        push    eax
        lea     ecx, [ebp-0x120]
        push    ecx
        call    FUN_004c6920
        mov     edx, dword ptr [ebp-0x120]
        add     esp, 0xc
        push    0x0
        lea     ecx, [ebp-0x120]
        mov     edi, eax
        call    dword ptr [edx+0xc]
        mov     dword ptr [ebp-0x118], 0xffffffec
        mov     cl, byte ptr [edi+0x150]
        mov     al, byte ptr [edi+0x151]
        xor     dx, dx
        movzx   si, cl
        mov     dl, al
        mov     byte ptr [ebp-0x28], cl
        mov     byte ptr [ebp-0x14], al
        imul    esi, edx
        cmp     al, 0x1a
        ja      L_63b
        cmp     cl, 0x1a
        ja      L_63b
        test    si, si
        jz      L_63b
        mov     eax, dword ptr [g_007daa20]
        mov     ecx, dword ptr [edi+0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_657
L_63b:
        mov     eax, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ecx]
        push    eax
        push    edx
        push    offset g_00776f3c
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      L_657
        int     3
L_657:
        xor     eax, eax
        and     esi, 0xffff
        push    esi
        lea     ecx, [ebp-0x10]
        mov     dword ptr [ebp-0x10], eax
        mov     dword ptr [ebp-0xc], eax
        call    FUN_00506ee0
        test    edi, edi
        jz      L_67a
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
L_67a:
        mov     esi, dword ptr [ebp-0x28]
        xor     ecx, ecx
        xor     eax, eax
        and     esi, 0xff
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x28], esi
        jbe     L_9ae
        mov     edx, dword ptr [ebp-0x14]
        and     edx, 0xff
        mov     dword ptr [ebp-0x4], edx
L_9a7:
        test    edx, edx
        jbe     L_9a2
        lea     esi, [eax+eax*2]
        shl     esi, 0x2
        add     eax, edx
        lea     ebx, [ecx+0x41]
        mov     edi, 0x41
        mov     dword ptr [ebp-0x14], eax
L_6ba:
        push    edi
        push    ebx
        lea     ecx, [ebp-0x7c]
        push    offset g_00776f30
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        push    0x0
        lea     edx, [ebp-0x7c]
        push    edx
        lea     ecx, [ebp-0xf0]
        call    FUN_0041de80
        mov     eax, dword ptr [ebp-0xcc]
        push    0x0
        push    eax
        lea     ecx, [ebp-0x2c4]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp-0x288]
        test    eax, eax
        jz      L_716
        mov     eax, dword ptr [ebp-0x2a8]
        test    eax, eax
        jbe     L_716
        lea     ecx, [ebp-0x2c4]
        call    FUN_004d24f0
        test    al, al
        jnz     L_757
L_716:
        lea     ecx, [ebp-0x370]
        call    FUN_00412b30
        lea     ecx, [ebp-0xf0]
        push    ecx
        lea     ecx, [ebp-0x370]
        call    FUN_00412bf0
        lea     edx, [ebp-0x370]
        push    edx
        lea     eax, [ebp-0xf0]
        push    eax
        lea     ecx, [ebp-0x2c4]
        call    FUN_004d2680
        lea     ecx, [ebp-0x370]
        call    FUN_00412b60
L_757:
        lea     ecx, [ebp-0x68]
        push    ecx
        lea     ecx, [ebp-0x2c4]
        call    FUN_004d2840
        mov     edx, dword ptr [ebp-0x10]
        mov     cx, word ptr [ebp-0x284]
        lea     eax, [esi+edx]
        mov     word ptr [eax], cx
        mov     dx, word ptr [ebp-0x282]
        push    edi
        push    ebx
        mov     word ptr [eax+0x2], dx
        lea     eax, [ebp-0x7c]
        push    offset g_00776f24
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        push    0x0
        lea     ecx, [ebp-0x7c]
        push    ecx
        lea     ecx, [ebp-0x194]
        call    FUN_0041de80
        mov     edx, dword ptr [ebp-0x170]
        push    0x0
        push    edx
        lea     ecx, [ebp-0x280]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp-0x244]
        test    eax, eax
        jz      L_7dd
        mov     eax, dword ptr [ebp-0x264]
        test    eax, eax
        jbe     L_7dd
        lea     ecx, [ebp-0x280]
        call    FUN_004d24f0
        test    al, al
        jnz     L_81e
L_7dd:
        lea     ecx, [ebp-0x158]
        call    FUN_00412b30
        lea     eax, [ebp-0x194]
        push    eax
        lea     ecx, [ebp-0x158]
        call    FUN_00412bf0
        lea     ecx, [ebp-0x158]
        push    ecx
        lea     edx, [ebp-0x194]
        push    edx
        lea     ecx, [ebp-0x280]
        call    FUN_004d2680
        lea     ecx, [ebp-0x158]
        call    FUN_00412b60
L_81e:
        lea     eax, [ebp-0x68]
        push    eax
        lea     ecx, [ebp-0x280]
        call    FUN_004d2840
        mov     ecx, dword ptr [ebp-0x10]
        mov     dx, word ptr [ebp-0x240]
        lea     eax, [esi+ecx+0x4]
        push    edi
        mov     word ptr [eax], dx
        mov     cx, word ptr [ebp-0x23e]
        push    ebx
        lea     edx, [ebp-0x7c]
        push    offset g_00776f14
        push    edx
        mov     word ptr [eax+0x2], cx
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        lea     eax, [ebp-0x7c]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jnz     L_88b
        mov     ecx, dword ptr [ebp-0x10]
        mov     dx, word ptr [g_007db0ac]
        lea     eax, [esi+ecx+0x8]
        mov     cx, word ptr [g_007db0ae]
        mov     word ptr [eax], dx
        mov     word ptr [eax+0x2], cx
        jmp     L_955
L_88b:
        push    0x0
        lea     edx, [ebp-0x7c]
        push    edx
        lea     ecx, [ebp-0x338]
        call    FUN_0041de80
        mov     eax, dword ptr [ebp-0x314]
        push    0x0
        push    eax
        lea     ecx, [ebp-0x23c]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp-0x200]
        test    eax, eax
        jz      L_8d3
        mov     eax, dword ptr [ebp-0x220]
        test    eax, eax
        jbe     L_8d3
        lea     ecx, [ebp-0x23c]
        call    FUN_004d24f0
        test    al, al
        jnz     L_914
L_8d3:
        lea     ecx, [ebp-0xb4]
        call    FUN_00412b30
        lea     ecx, [ebp-0x338]
        push    ecx
        lea     ecx, [ebp-0xb4]
        call    FUN_00412bf0
        lea     edx, [ebp-0xb4]
        push    edx
        lea     eax, [ebp-0x338]
        push    eax
        lea     ecx, [ebp-0x23c]
        call    FUN_004d2680
        lea     ecx, [ebp-0xb4]
        call    FUN_00412b60
L_914:
        lea     ecx, [ebp-0x68]
        push    ecx
        lea     ecx, [ebp-0x23c]
        call    FUN_004d2840
        mov     edx, dword ptr [ebp-0x10]
        mov     cx, word ptr [ebp-0x1fc]
        lea     eax, [esi+edx+0x8]
        mov     word ptr [eax], cx
        mov     dx, word ptr [ebp-0x1fa]
        lea     ecx, [ebp-0x23c]
        mov     word ptr [eax+0x2], dx
        call    FUN_004d21c0
        lea     ecx, [ebp-0x338]
        call    FUN_0041dec0
L_955:
        lea     ecx, [ebp-0x280]
        add     esi, 0xc
        call    FUN_004d21c0
        lea     ecx, [ebp-0x194]
        call    FUN_0041dec0
        lea     ecx, [ebp-0x2c4]
        call    FUN_004d21c0
        lea     ecx, [ebp-0xf0]
        call    FUN_0041dec0
        mov     ecx, dword ptr [ebp-0x4]
        inc     edi
        lea     eax, [edi-0x41]
        cmp     eax, ecx
        jc      L_6ba
        mov     ecx, dword ptr [ebp-0x18]
        mov     eax, dword ptr [ebp-0x14]
        mov     ebx, dword ptr [ebp-0x1c]
        mov     edx, dword ptr [ebp-0x4]
        mov     esi, dword ptr [ebp-0x28]
L_9a2:
        inc     ecx
        cmp     ecx, esi
        mov     dword ptr [ebp-0x18], ecx
        jc      L_9a7
L_9ae:
        mov     eax, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ebp-0x10]
        lea     ecx, [eax+eax*2]
        push    0x0
        shl     ecx, 0x2
        push    ecx
        push    edx
        lea     ecx, [ebp-0x1f8]
        call    FUN_0041e690
        lea     eax, [ebp-0x68]
        push    eax
        lea     ecx, [ebp-0x1f8]
        push    ecx
        lea     ecx, [ebp-0x308]
        call    FUN_004d2680
        lea     edx, [ebp-0x68]
        push    edx
        lea     eax, [ebp-0x120]
        push    eax
        lea     ecx, [ebp-0x1d8]
        call    FUN_004d2680
        lea     ecx, [ebp-0x308]
        call    FUN_004d2630
        test    al, al
        jnz     L_a13
        lea     ecx, [ebp-0x68]
        push    ecx
        mov     ecx, dword ptr [g_007db0b0]
        call    FUN_00412e70
L_a13:
        lea     ecx, [ebp-0x1f8]
        call    FUN_0041e710
        mov     eax, dword ptr [ebp-0x10]
        test    eax, eax
        jz      L_a2e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_a2e:
        lea     ecx, [ebp-0x68]
        call    FUN_00412b60
        mov     esi, dword ptr [ebp-0x30]
L_6a39:
        mov     dx, word ptr [ebp-0x198]
        mov     word ptr [ebx+0x1c], dx
        mov     ax, word ptr [ebp-0x196]
        mov     word ptr [ebx+0x1e], ax
        mov     cx, word ptr [ebp-0x2c8]
        mov     word ptr [ebx+0x20], cx
        mov     dx, word ptr [ebp-0x2c6]
        mov     ecx, dword ptr [g_007db0a0]
        mov     word ptr [ebx+0x22], dx
        call    FUN_004cfc90
        push    0x0
        lea     eax, [ebp-0x24]
        push    eax
        push    offset g_00776f08
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        jz      L_6ce7
        mov     ecx, dword ptr [ebp-0x24]
        push    0x0
        push    ecx
        lea     ecx, [ebp-0x194]
        call    FUN_0041de80
        mov     edx, dword ptr [ebp-0x170]
        push    0x0
        push    edx
        lea     ecx, [ebp-0x164]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp-0x128]
        test    eax, eax
        jz      L_6af4
        mov     eax, dword ptr [ebp-0x148]
        test    eax, eax
        jbe     L_6af4
        lea     ecx, [ebp-0x164]
        call    FUN_004d24f0
        test    al, al
        jz      L_6af4
        lea     ecx, [ebp-0x164]
        call    FUN_004d2630
        test    al, al
        jnz     L_6b47
        mov     eax, dword ptr [g_007db0b0]
        push    eax
        lea     ecx, [ebp-0x164]
        call    FUN_004d2840
        jmp     L_6b47
L_6af4:
        lea     ecx, [ebp-0x68]
        call    FUN_00412b30
        lea     ecx, [ebp-0x194]
        push    ecx
        lea     ecx, [ebp-0x68]
        call    FUN_00412bf0
        lea     edx, [ebp-0x68]
        push    edx
        lea     eax, [ebp-0x194]
        push    eax
        lea     ecx, [ebp-0x164]
        call    FUN_004d2680
        lea     ecx, [ebp-0x164]
        call    FUN_004d2630
        test    al, al
        jnz     L_6b3f
        lea     ecx, [ebp-0x68]
        push    ecx
        mov     ecx, dword ptr [g_007db0b0]
        call    FUN_00412e70
L_6b3f:
        lea     ecx, [ebp-0x68]
        call    FUN_00412b60
L_6b47:
        mov     ax, word ptr [ebp-0x122]
        mov     dx, word ptr [ebp-0x124]
        mov     cx, word ptr [g_007db0ac]
        mov     word ptr [ebx+0x26], ax
        push    0x1
        lea     eax, [ebp-0x1c]
        mov     word ptr [ebx+0x24], dx
        mov     dx, word ptr [g_007db0ae]
        push    eax
        mov     word ptr [ebx+0x2c], cx
        push    offset g_00776efc
        mov     ecx, esi
        mov     word ptr [ebx+0x2e], dx
        call    FUN_00411bf0
        push    offset g_00776ed8
        lea     ecx, [ebp-0x4]
        call    FUN_00412570
        mov     ecx, dword ptr [ebp-0x1c]
        mov     edx, dword ptr [ebp-0x4]
        push    ecx
        push    edx
        lea     ecx, [ebp-0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp-0x4]
        call    FUN_00412740
        mov     eax, dword ptr [ebp-0x14]
        test    eax, eax
        jz      L_6bc5
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6bc5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6bc5:
        mov     eax, dword ptr [ebp-0x4]
        push    0x0
        push    eax
        lea     ecx, [ebp-0xf0]
        call    FUN_0041de80
        mov     ecx, dword ptr [ebp-0xcc]
        push    0x0
        push    ecx
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp-0x84]
        test    eax, eax
        jz      L_6c30
        mov     eax, dword ptr [ebp-0xa4]
        test    eax, eax
        jbe     L_6c30
        lea     ecx, [ebp-0xc0]
        call    FUN_004d24f0
        test    al, al
        jz      L_6c30
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2630
        test    al, al
        jnz     L_6c83
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2840
        jmp     L_6c83
L_6c30:
        lea     ecx, [ebp-0x68]
        call    FUN_00412b30
        lea     eax, [ebp-0xf0]
        push    eax
        lea     ecx, [ebp-0x68]
        call    FUN_00412bf0
        lea     ecx, [ebp-0x68]
        push    ecx
        lea     edx, [ebp-0xf0]
        push    edx
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2680
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2630
        test    al, al
        jnz     L_6c7b
        mov     ecx, dword ptr [g_007db0b0]
        lea     eax, [ebp-0x68]
        push    eax
        call    FUN_00412e70
L_6c7b:
        lea     ecx, [ebp-0x68]
        call    FUN_00412b60
L_6c83:
        mov     cx, word ptr [ebp-0x80]
        mov     dx, word ptr [ebp-0x7e]
        mov     word ptr [ebx+0x2c], cx
        lea     ecx, [ebp-0xc0]
        mov     word ptr [ebx+0x2e], dx
        call    FUN_004d21c0
        lea     ecx, [ebp-0xf0]
        call    FUN_0041dec0
        mov     eax, dword ptr [ebp-0x4]
        test    eax, eax
        jz      L_6cc3
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6cc3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6cc3:
        lea     ecx, [ebp-0x164]
        call    FUN_004d21c0
        lea     ecx, [ebp-0x194]
        call    FUN_0041dec0
        mov     eax, dword ptr [g_007db0ac]
        mov     cx, word ptr [g_007db0ae]
        jmp     L_6d03
L_6ce7:
        mov     eax, dword ptr [g_007db0ac]
        mov     cx, word ptr [g_007db0ae]
        mov     word ptr [ebx+0x24], ax
        mov     word ptr [ebx+0x26], cx
        mov     word ptr [ebx+0x2c], ax
        mov     word ptr [ebx+0x2e], cx
L_6d03:
        mov     word ptr [ebx+0x30], ax
        push    0x0
        lea     eax, [ebp-0x2c]
        push    eax
        mov     word ptr [ebx+0x32], cx
        push    offset g_00776ec8
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        jz      L_6e0a
        mov     ecx, dword ptr [ebp-0x2c]
        push    0x0
        push    ecx
        lea     ecx, [ebp-0xf0]
        call    FUN_0041de80
        mov     edx, dword ptr [ebp-0xcc]
        push    0x0
        push    edx
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp-0x84]
        test    eax, eax
        jz      L_6d8f
        mov     eax, dword ptr [ebp-0xa4]
        test    eax, eax
        jbe     L_6d8f
        lea     ecx, [ebp-0xc0]
        call    FUN_004d24f0
        test    al, al
        jz      L_6d8f
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2630
        test    al, al
        jnz     L_6de2
        mov     eax, dword ptr [g_007db0b0]
        push    eax
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2840
        jmp     L_6de2
L_6d8f:
        lea     ecx, [ebp-0x68]
        call    FUN_00412b30
        lea     ecx, [ebp-0xf0]
        push    ecx
        lea     ecx, [ebp-0x68]
        call    FUN_00412bf0
        lea     edx, [ebp-0x68]
        push    edx
        lea     eax, [ebp-0xf0]
        push    eax
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2680
        lea     ecx, [ebp-0xc0]
        call    FUN_004d2630
        test    al, al
        jnz     L_6dda
        lea     ecx, [ebp-0x68]
        push    ecx
        mov     ecx, dword ptr [g_007db0b0]
        call    FUN_00412e70
L_6dda:
        lea     ecx, [ebp-0x68]
        call    FUN_00412b60
L_6de2:
        mov     dx, word ptr [ebp-0x80]
        mov     ax, word ptr [ebp-0x7e]
        lea     ecx, [ebp-0xc0]
        mov     word ptr [ebx+0x30], dx
        mov     word ptr [ebx+0x32], ax
        call    FUN_004d21c0
        lea     ecx, [ebp-0xf0]
        call    FUN_0041dec0
        jmp     L_6e20
L_6e0a:
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     word ptr [ebx+0x30], cx
        mov     word ptr [ebx+0x32], dx
L_6e20:
        mov     ecx, dword ptr [g_007db0a0]
        call    FUN_004cfc90
        lea     ecx, [ebp-0x308]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp-0x8]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jz      L_6e53
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6e53
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6e53:
        lea     ecx, [ebp-0x1d8]
        call    FUN_004d21c0
        lea     ecx, [ebp-0x120]
        call    FUN_0041dec0
        mov     esp, ebp
        pop     ebp
        ret
    }
}
