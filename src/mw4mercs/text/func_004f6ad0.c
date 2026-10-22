/*
 * FUN_004f6ad0 (3525 B) — __thiscall MLR/Adept object builder (large).
 * Constructs a render object (EDI) from 4 stack args, populating bounding
 * boxes, sub-object arrays, and per-type constant tables via a jump table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_007b227c;
extern int g_007dc6e0;
extern int g_007da848;
extern int g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007dab44;
extern int g_007dab40;
extern int g_007dc688;
extern int g_007dc740;
extern float g_007b97e8;
extern int g_007b97ec;
extern int g_007b97f0;
extern int g_007dc794;
extern int g_007daa28;
extern int g_007daa2c;
extern int g_007daa30;
extern int g_007daa34;
extern int g_007da85c;
extern int g_007b2228;
extern float g_00775980;
extern float g_00775558;
extern int g_008bd548;
extern int g_008bd54c;
extern int g_008bd550;
extern int g_008bd554;
extern int g_007b9668;
extern int g_007b966c;
extern int g_007b9670;
extern int g_007b9674;
extern int g_007b9658;
extern int g_007b965c;
extern int g_007b9660;
extern int g_007b9664;

extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004c8eb0(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004fbe20(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004e1750(void);
extern void __cdecl FUN_0048f380(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004fbf30(void);
extern void __cdecl FUN_004d2330(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004f88d0(void);
extern void __cdecl FUN_004e2aa0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004d6350(void);
extern void __cdecl FUN_0044cdf0(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_0048ff20(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0042bcd0(void);
extern void __cdecl FUN_004af200(void);
extern void __cdecl FUN_004c6920(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00480d50(void);
extern void __cdecl FUN_004f7a60(void);

__declspec(naked) void FUN_004f6ad0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xf4
        mov     eax, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     edi, ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_004d9940
        xor     esi, esi
        or      eax, 0xffffffff
        mov     word ptr [edi + 0x16a], ax
        mov     word ptr [edi + 0x16c], si
        mov     word ptr [edi + 0x16e], ax
        mov     word ptr [edi + 0x170], si
        mov     word ptr [edi + 0x172], ax
        mov     word ptr [edi + 0x174], si
        mov     word ptr [edi + 0x176], ax
        mov     word ptr [edi + 0x178], si
        mov     word ptr [edi + 0x17a], ax
        mov     word ptr [edi + 0x17c], si
        mov     word ptr [edi + 0x17e], ax
        mov     word ptr [edi + 0x180], si
        mov     dword ptr [edi + 0x188], esi
        mov     dword ptr [edi + 0x184], esi
        push    0x1
        lea     ebx, [edi + 0x19c]
        mov     dword ptr [edi + 0x18c], esi
        mov     dword ptr [edi + 0x190], esi
        push    esi
        mov     ecx, ebx
        mov     dword ptr [edi + 0x194], esi
        mov     dword ptr [edi + 0x198], esi
        call    FUN_00416990
        mov     dword ptr [ebx], 0x775a44
        lea     ebx, [edi + 0x1d4]
        push    esi
        mov     ecx, ebx
        mov     dword ptr [edi + 0x1d0], esi
        mov     dword ptr [edi + 0x1cc], esi
        call    FUN_0041fc80
        mov     dword ptr [ebx], 0x7716ac
        lea     ebx, [edi + 0x1dc]
        push    esi
        mov     ecx, ebx
        call    FUN_0041fc80
        push    0x8
        mov     dword ptr [ebx], 0x7716ac
        push    edi
        mov     dword ptr [edi], 0x775984
        call    FUN_004c8eb0
        push    0xa0
        call    FUN_004084d0
        add     esp, 0xc
        cmp     eax, esi
        jz      L6BE4
        mov     ecx, eax
        call    FUN_004fbe20
        jmp     L6BE6
L6BE4:
        xor     eax, eax
L6BE6:
        push    0x4
        push    eax
        call    FUN_004c8eb0
        mov     edx, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        add     esp, 0x8
        call    dword ptr [edx + 0x4]
        mov     cl, byte ptr [eax + 0x108]
        mov     byte ptr [edi + 0x169], cl
        mov     cl, byte ptr [eax + 0x107]
        test    cl, cl
        mov     dword ptr [ebp - 0x4], eax
        jz      L6C22
        mov     edx, dword ptr [ebp + 0xc]
        mov     al, byte ptr [edx + 0x80]
        mov     byte ptr [edi + 0x169], al
L6C22:
        mov     cl, byte ptr [edi + 0x169]
        mov     edx, dword ptr [edi + 0xd8]
        test    cl, cl
        setz    cl
        mov     byte ptr [g_007b227c], cl
        mov     ecx, dword ptr [g_007dc6e0]
        push    edx
        call    FUN_004e1750
        mov     ecx, dword ptr [g_007da848]
        push    esi
        push    0x7733f8
        call    FUN_0048f380
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [g_007db0ac]
        cmp     word ptr [edx + 0x64], ax
        mov     cx, word ptr [g_007db0ae]
        lea     esi, [edx + 0x64]
        mov     word ptr [edi + 0x176], ax
        mov     word ptr [edi + 0x178], cx
        jnz     L6C82
        cmp     word ptr [esi + 0x2], cx
        jz      L6CDE
L6C82:
        push    0x1
        push    esi
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x10]
        lea     eax, [ebp - 0xb0]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004fbf30
        mov     cx, word ptr [esi + 0x2]
        mov     ax, word ptr [esi]
        mov     word ptr [edi + 0x178], cx
        lea     ecx, [ebp - 0xb0]
        mov     word ptr [edi + 0x176], ax
        call    FUN_004d2330
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d21c0
L6CDE:
        mov     edx, dword ptr [ebp + 0xc]
        lea     esi, [edx + 0x74]
        push    0x1
        push    esi
        lea     ecx, [ebp - 0xf4]
        call    FUN_004d1f80
        mov     eax, dword ptr [ebp + 0x10]
        push    0x1
        push    eax
        lea     ecx, [ebp - 0xf4]
        push    ecx
        call    FUN_004d9910
        mov     ebx, eax
        push    0x7
        push    ebx
        call    FUN_004c8eb0
        mov     edx, dword ptr [ebx]
        add     esp, 0x14
        push    0x0
        mov     ecx, ebx
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x1c]
        xor     edx, 0x85739531
        push    edx
        mov     ecx, edi
        call    FUN_004f88d0
        mov     cx, word ptr [esi + 0x2]
        mov     ax, word ptr [esi]
        mov     word ptr [edi + 0x170], cx
        mov     ecx, ebx
        mov     word ptr [edi + 0x16e], ax
        call    FUN_004e2aa0
        mov     edx, dword ptr [g_007dc688]
        push    edx
        call    FUN_006f4950
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        add     eax, 0x70
        cmp     word ptr [eax], cx
        mov     word ptr [edi + 0x16a], cx
        mov     word ptr [edi + 0x16c], dx
        jnz     L6D92
        cmp     word ptr [eax + 0x2], dx
        jz      L6E42
L6D92:
        push    0x1
        push    eax
        lea     ecx, [ebp - 0x58]
        call    FUN_004d1f80
        mov     eax, dword ptr [ebp - 0x44]
        mov     ecx, dword ptr [ebp - 0x40]
        add     eax, 0x2
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x44], eax
        jbe     L6DB0
        mov     dword ptr [ebp - 0x40], eax
L6DB0:
        mov     ecx, dword ptr [ebp - 0x48]
        mov     edx, dword ptr [ebp - 0x3c]
        sub     ecx, eax
        add     ecx, edx
        jz      L6E16
L6DBC:
        mov     edx, dword ptr [ebp + 0x10]
        push    0x1
        mov     dword ptr [ebp + 0x8], eax
        push    edx
        lea     eax, [ebp - 0x58]
        push    eax
        call    FUN_004d9910
        mov     edx, dword ptr [ebx]
        mov     esi, eax
        mov     ecx, dword ptr [esi + 0x10]
        and     ecx, 0xffffffef
        or      ecx, 0x8
        add     esp, 0xc
        mov     dword ptr [esi + 0x10], ecx
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx + 0x28]
        push    esi
        lea     ecx, [edi + 0x184]
        call    FUN_004179b0
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ebp - 0x44]
        mov     ecx, dword ptr [ebp - 0x40]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x44], eax
        jbe     L6E0A
        mov     dword ptr [ebp - 0x40], eax
L6E0A:
        mov     edx, dword ptr [ebp - 0x48]
        mov     ecx, dword ptr [ebp - 0x3c]
        sub     edx, eax
        add     edx, ecx
        jnz     L6DBC
L6E16:
        mov     eax, dword ptr [ebp + 0xc]
        mov     cx, word ptr [eax + 0x70]
        mov     dx, word ptr [eax + 0x72]
        add     eax, 0x70
        mov     word ptr [edi + 0x16a], cx
        lea     ecx, [ebp - 0x58]
        mov     word ptr [edi + 0x16c], dx
        call    FUN_004d2330
        lea     ecx, [ebp - 0x58]
        call    FUN_004d21c0
L6E42:
        call    FUN_006f49a0
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [g_007db0ac]
        cmp     word ptr [esi + 0x60], cx
        mov     dx, word ptr [g_007db0ae]
        lea     eax, [esi + 0x60]
        mov     word ptr [edi + 0x172], cx
        mov     word ptr [edi + 0x174], dx
        jnz     L6E78
        cmp     word ptr [eax + 0x2], dx
        jz      L6F43
L6E78:
        push    0x1
        push    eax
        lea     ecx, [ebp - 0x58]
        call    FUN_004d1f80
        mov     eax, dword ptr [ebp - 0x44]
        mov     ecx, dword ptr [ebp - 0x40]
        add     eax, 0x2
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x44], eax
        jbe     L6E96
        mov     dword ptr [ebp - 0x40], eax
L6E96:
        mov     ecx, dword ptr [ebp - 0x48]
        mov     edx, dword ptr [ebp - 0x3c]
        sub     ecx, eax
        add     ecx, edx
        jz      L6EFB
L6EA2:
        mov     edx, dword ptr [ebp + 0x10]
        push    0x1
        mov     esi, eax
        push    edx
        lea     eax, [ebp - 0x58]
        push    eax
        call    FUN_004d9910
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [esi]
        and     ecx, 0xfffffff7
        or      ecx, 0x10
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, dword ptr [ebp - 0x44]
        add     ecx, edx
        mov     edx, dword ptr [ebp - 0x40]
        add     esp, 0xc
        cmp     ecx, edx
        mov     dword ptr [ebp - 0x44], ecx
        jbe     L6ED6
        mov     dword ptr [ebp - 0x40], ecx
L6ED6:
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax]
        or      ecx, 0x100000
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
        mov     ecx, dword ptr [ebp - 0x48]
        mov     eax, dword ptr [ebp - 0x44]
        mov     edx, dword ptr [ebp - 0x3c]
        sub     ecx, eax
        add     ecx, edx
        jnz     L6EA2
        mov     esi, dword ptr [ebp + 0xc]
L6EFB:
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6350
        mov     cx, word ptr [esi + 0x60]
        mov     dx, word ptr [esi + 0x62]
        mov     word ptr [edi + 0x172], cx
        lea     ecx, [ebp - 0x58]
        mov     word ptr [edi + 0x174], dx
        call    FUN_004d21c0
        mov     ecx, dword ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
L6F43:
        cmp     word ptr [esi + 0x7c], cx
        lea     eax, [esi + 0x7c]
        mov     dword ptr [ebp + 0x8], eax
        jnz     L6F59
        cmp     word ptr [eax + 0x2], dx
        jz      L7049
L6F59:
        cmp     word ptr [esi + 0x78], cx
        lea     eax, [esi + 0x78]
        jnz     L6F6C
        cmp     word ptr [eax + 0x2], dx
        jz      L7049
L6F6C:
        push    0x1
        push    eax
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d1f80
        mov     edx, dword ptr [ebp - 0xb0]
        push    0x4
        lea     eax, [ebp + 0x10]
        push    eax
        lea     ecx, [ebp - 0xb0]
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp + 0x10]
        lea     esi, [edi + 0x18c]
        push    eax
        mov     ecx, esi
        call    FUN_0044cdf0
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jbe     L6FC1
        mov     edx, dword ptr [esi]
        lea     ecx, [eax*8 + 0x0]
        mov     eax, dword ptr [ebp - 0xb0]
        push    ecx
        push    edx
        lea     ecx, [ebp - 0xb0]
        call    dword ptr [eax + 0x20]
L6FC1:
        mov     ecx, dword ptr [ebp + 0x8]
        push    0x1
        push    ecx
        lea     ecx, [ebp - 0x58]
        call    FUN_004d1f80
        mov     eax, dword ptr [ebp - 0x58]
        push    0x4
        lea     edx, [ebp + 0x10]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    dword ptr [eax + 0x20]
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        lea     esi, [edi + 0x194]
        mov     ecx, esi
        call    FUN_0044cdf0
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jbe     L700A
        lea     edx, [eax*8 + 0x0]
        mov     eax, dword ptr [esi]
        push    edx
        mov     edx, dword ptr [ebp - 0x58]
        push    eax
        lea     ecx, [ebp - 0x58]
        call    dword ptr [edx + 0x20]
L700A:
        mov     eax, dword ptr [edi + 0x190]
        test    eax, eax
        jz      L7036
        mov     eax, dword ptr [edi + 0x198]
        test    eax, eax
        jz      L7036
        lea     ecx, [ebp - 0x58]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d21c0
        jmp     L71D1
L7036:
        lea     ecx, [ebp - 0x58]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d21c0
L7049:
        mov     esi, dword ptr [edi + 0x198]
        xor     eax, eax
        mov     al, byte ptr [ebx + 0x16a]
        xor     ecx, ecx
        cmp     esi, 0x4
        mov     cl, byte ptr [ebx + 0x16b]
        mov     dword ptr [ebp + 0x10], eax
        fild    dword ptr [ebp + 0x10]
        fsub    dword ptr [g_00775980]
        mov     dword ptr [ebp + 0x10], ecx
        fstp    dword ptr [ebp + 0x8]
        fild    dword ptr [ebp + 0x10]
        fsub    dword ptr [g_00775980]
        fstp    dword ptr [ebp + 0x10]
        jz      L70EA
        push    0x20
        call    FUN_004084d0
        mov     ebx, eax
        mov     eax, dword ptr [edi + 0x194]
        add     esp, 0x4
        test    eax, eax
        jz      L70DA
        cmp     esi, 0x4
        mov     edx, 0x4
        ja      L70A4
        mov     edx, esi
L70A4:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L70CB
L70AB:
        mov     ecx, dword ptr [edi + 0x194]
        lea     eax, [ebx + edx*8]
        sub     ecx, ebx
        inc     edx
L70B7:
        mov     esi, dword ptr [ecx + eax*1]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + eax*1 + 0x4]
        mov     dword ptr [eax + 0x4], esi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L70B7
L70CB:
        mov     eax, dword ptr [edi + 0x194]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L70DA:
        mov     dword ptr [edi + 0x194], ebx
        mov     dword ptr [edi + 0x198], 0x4
L70EA:
        mov     eax, dword ptr [edi + 0x194]
        fld     dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0x10]
        fsub    dword ptr [g_00775980]
        mov     esi, dword ptr [edi + 0x190]
        cmp     esi, 0x4
        mov     ecx, 0x3d800000
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [eax + 0x10], edx
        mov     edx, dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 0x10]
        fld     dword ptr [ebp + 0x8]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [ebp + 0x8]
        fsub    dword ptr [g_00775980]
        mov     dword ptr [eax + 0x18], edx
        mov     dword ptr [eax + 0x1c], ecx
        fstp    dword ptr [ebp + 0x8]
        jz      L71A3
        push    0x20
        call    FUN_004084d0
        mov     ebx, eax
        mov     eax, dword ptr [edi + 0x18c]
        add     esp, 0x4
        test    eax, eax
        jz      L7193
        cmp     esi, 0x4
        mov     edx, 0x4
        ja      L715D
        mov     edx, esi
L715D:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L7184
L7164:
        mov     ecx, dword ptr [edi + 0x18c]
        lea     eax, [ebx + edx*8]
        sub     ecx, ebx
        inc     edx
L7170:
        mov     esi, dword ptr [ecx + eax*1]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + eax*1 + 0x4]
        mov     dword ptr [eax + 0x4], esi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L7170
L7184:
        mov     eax, dword ptr [edi + 0x18c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L7193:
        mov     dword ptr [edi + 0x18c], ebx
        mov     dword ptr [edi + 0x190], 0x4
L71A3:
        mov     eax, dword ptr [edi + 0x18c]
        mov     edx, dword ptr [ebp + 0x10]
        mov     ecx, 0x3e000000
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [eax + 0x10], edx
        mov     edx, dword ptr [ebp + 0x10]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [eax + 0x18], edx
        mov     dword ptr [eax + 0x1c], ecx
L71D1:
        mov     edx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edx + 0x2c]
        lea     eax, [edx + 0x2c]
        mov     dword ptr [g_007daa28], ecx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [g_007daa2c], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [g_007daa30], ecx
        mov     dword ptr [g_007daa34], eax
        fld     dword ptr [g_00775558]
        mov     esi, dword ptr [ebp + 0x8]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x6c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x6c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + 0x10], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x6c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x6c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x10]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x10], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x6c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x6c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x10]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x10], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x6c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x6c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x10]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x10], ecx
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [g_007dab44]
        mov     ebx, dword ptr [g_007dab40]
        mov     dword ptr [g_007da85c], ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, ebx
        lea     eax, [ecx + 0xc]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     bl, byte ptr [ecx + 0x17]
        test    bl, bl
        jz      L741C
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        mov     eax, dword ptr [ecx + 0x1c]
        dec     eax
        cmp     eax, 0x3
        ja      L741C
        jmp     dword ptr [eax*4 + 0x4f7898]
L732A:
        mov     ecx, 0x43fa0000
        mov     eax, 0x44960000
        mov     dword ptr [edi + 0x1b4], ecx
        mov     dword ptr [edi + 0x1b8], eax
        mov     dword ptr [edi + 0x1bc], 0x43c80000
        mov     dword ptr [edi + 0x1c0], 0x44898000
        mov     dword ptr [edi + 0x1c4], ecx
        mov     dword ptr [edi + 0x1c8], eax
        jmp     L7461
L7365:
        mov     ecx, 0x437a0000
        mov     eax, 0x44480000
        mov     dword ptr [edi + 0x1b4], ecx
        mov     dword ptr [edi + 0x1b8], eax
        mov     dword ptr [edi + 0x1bc], 0x43160000
        mov     dword ptr [edi + 0x1c0], 0x442f0000
        mov     dword ptr [edi + 0x1c4], ecx
        mov     dword ptr [edi + 0x1c8], eax
        jmp     L7461
L73A0:
        mov     eax, 0x42480000
        mov     ecx, 0x437a0000
        mov     dword ptr [edi + 0x1b4], eax
        mov     dword ptr [edi + 0x1b8], ecx
        mov     dword ptr [edi + 0x1bc], eax
        mov     dword ptr [edi + 0x1c0], ecx
        mov     dword ptr [edi + 0x1c4], 0x42c80000
        mov     dword ptr [edi + 0x1c8], 0x43960000
        mov     dword ptr [g_007b2228], 0x0
        jmp     L7461
L73E2:
        mov     eax, 0x42480000
        mov     ecx, 0x42c80000
        mov     dword ptr [edi + 0x1b4], eax
        mov     dword ptr [edi + 0x1b8], ecx
        mov     dword ptr [edi + 0x1bc], eax
        mov     dword ptr [edi + 0x1c0], ecx
        mov     dword ptr [edi + 0x1c4], eax
        mov     dword ptr [edi + 0x1c8], ecx
        mov     dword ptr [g_007b2228], 0x0
        jmp     L7461
L741C:
        mov     eax, dword ptr [edx + 0x7c]
        mov     ecx, dword ptr [edx + 0x80]
        mov     dword ptr [edi + 0x1b4], eax
        mov     eax, dword ptr [edx + 0x88]
        mov     dword ptr [edi + 0x1b8], ecx
        mov     ecx, dword ptr [edx + 0x8c]
        mov     dword ptr [edi + 0x1bc], eax
        mov     eax, dword ptr [edx + 0x94]
        mov     dword ptr [edi + 0x1c0], ecx
        mov     ecx, dword ptr [edx + 0x98]
        mov     dword ptr [edi + 0x1c4], eax
        mov     dword ptr [edi + 0x1c8], ecx
L7461:
        mov     ecx, edi
        call    FUN_004f7a60
        mov     esi, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [esi + 0xf0]
        mov     eax, dword ptr [esi + 0xec]
        mov     ecx, dword ptr [esi + 0xe8]
        push    edx
        push    eax
        push    ecx
        push    0x5
        call    FUN_00480d50
        xor     eax, eax
        mov     dword ptr [edi + 0x1e4], eax
        mov     word ptr [ebp + 0x16], ax
        mov     al, byte ptr [edi + 0x169]
        add     esp, 0x10
        test    al, al
        mov     word ptr [ebp + 0x14], 0xffff
        jz      L74B4
        mov     ax, word ptr [esi + 0x20]
        mov     word ptr [ebp + 0x14], ax
        mov     cx, word ptr [esi + 0x22]
        jmp     L74C0
L74B4:
        mov     ax, word ptr [esi + 0x1c]
        mov     word ptr [ebp + 0x14], ax
        mov     cx, word ptr [esi + 0x1e]
L74C0:
        cmp     ax, word ptr [g_007db0ac]
        mov     word ptr [ebp + 0x16], cx
        jnz     L74DA
        cmp     cx, word ptr [g_007db0ae]
        jz      L755F
L74DA:
        push    0x1
        lea     edx, [ebp + 0x14]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_004d1f80
        lea     eax, [ebp - 0x58]
        push    eax
        call    FUN_00421e60
        mov     ecx, dword ptr [ebp - 0x48]
        mov     edx, dword ptr [ebp - 0x44]
        mov     ebx, eax
        mov     eax, dword ptr [ebp - 0x3c]
        sub     ecx, edx
        add     esp, 0x4
        add     ecx, eax
        jz      L7557
L7505:
        lea     edx, [ebp - 0x58]
        push    ebx
        push    edx
        call    FUN_0048ff20
        and     dword ptr [eax + 0x78], 0xfffffdff
        mov     ecx, dword ptr [g_007dc740]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [ecx]
        add     esp, 0x8
        push    eax
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        push    esi
        lea     ecx, [edi + 0x1cc]
        call    FUN_004179b0
        mov     eax, dword ptr [edi + 0x1e4]
        test    eax, eax
        jnz     L7545
        mov     dword ptr [edi + 0x1e4], esi
L7545:
        mov     eax, dword ptr [ebp - 0x48]
        mov     edx, dword ptr [ebp - 0x44]
        mov     ecx, dword ptr [ebp - 0x3c]
        sub     eax, edx
        add     eax, ecx
        jnz     L7505
        mov     esi, dword ptr [ebp - 0x4]
L7557:
        lea     ecx, [ebp - 0x58]
        call    FUN_004d21c0
L755F:
        mov     eax, dword ptr [edi + 0x1e4]
        test    eax, eax
        jz      L7596
        mov     eax, dword ptr [eax + 0x10]
        fld     dword ptr [eax + 0x20]
        add     eax, 0x18
        fld     dword ptr [eax + 0x18]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [eax + 0x28]
        mov     ecx, dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ebp - 0x8]
        fstp    dword ptr [g_007b97e8]
        mov     dword ptr [g_007b97ec], ecx
        mov     dword ptr [g_007b97f0], edx
L7596:
        mov     al, byte ptr [edi + 0x169]
        test    al, al
        push    0x0
        jz      L75B2
        mov     eax, dword ptr [esi + 0x110]
        mov     ecx, dword ptr [esi + 0x100]
        push    eax
        push    ecx
        jmp     L75C0
L75B2:
        mov     edx, dword ptr [esi + 0x10c]
        mov     eax, dword ptr [esi + 0xfc]
        push    edx
        push    eax
L75C0:
        call    FUN_0042bcd0
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dx, word ptr [ecx + 0x68]
        lea     eax, [edi + 0x17a]
        mov     word ptr [eax], dx
        mov     dx, word ptr [ecx + 0x6a]
        mov     word ptr [eax + 0x2], dx
        mov     dx, word ptr [ecx + 0x6c]
        mov     cx, word ptr [ecx + 0x6e]
        lea     esi, [edi + 0x17e]
        mov     word ptr [esi], dx
        mov     dx, word ptr [eax]
        add     esp, 0xc
        cmp     dx, word ptr [g_007db0ac]
        mov     word ptr [esi + 0x2], cx
        jnz     L760E
        mov     cx, word ptr [eax + 0x2]
        cmp     cx, word ptr [g_007db0ae]
        jz      L7654
L760E:
        push    0x1
        push    eax
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d1f80
        lea     edx, [ebp - 0xb0]
        push    0x0
        push    edx
        call    FUN_004af200
        add     esp, 0x4
        push    eax
        lea     eax, [ebp - 0xb0]
        push    eax
        call    FUN_004c6920
        add     esp, 0xc
        push    eax
        lea     ecx, [edi + 0x1d4]
        call    FUN_0041fcd0
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d21c0
L7654:
        mov     cx, word ptr [g_007db0ac]
        cmp     word ptr [esi], cx
        jnz     L766D
        mov     dx, word ptr [g_007db0ae]
        cmp     word ptr [esi + 0x2], dx
        jz      L76B3
L766D:
        push    0x1
        push    esi
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d1f80
        lea     eax, [ebp - 0xb0]
        push    0x0
        push    eax
        call    FUN_004af200
        add     esp, 0x4
        push    eax
        lea     ecx, [ebp - 0xb0]
        push    ecx
        call    FUN_004c6920
        add     esp, 0xc
        push    eax
        lea     ecx, [edi + 0x1dc]
        call    FUN_0041fcd0
        lea     ecx, [ebp - 0xb0]
        call    FUN_004d21c0
L76B3:
        mov     al, byte ptr [edi + 0x169]
        test    al, al
        jz      L77E2
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [eax + 0x5c]
        lea     edx, [eax + 0x6c]
        add     eax, 0x5c
        mov     dword ptr [g_007dc794], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [g_007daa28], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [g_007daa2c], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [ebp + 0x10], eax
        mov     dword ptr [g_007daa30], ecx
        mov     dword ptr [g_007daa34], edx
        fld     dword ptr [g_00775558]
        mov     esi, dword ptr [ebp + 0x10]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + 0x8]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + 0x8]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + 0xc], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + 0x8]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + 0x8]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + 0x8]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + 0x8]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + 0x8]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + 0x8]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [g_007da85c], eax
        jmp     L77EC
L77E2:
        mov     dword ptr [g_007dc794], 0x0
L77EC:
        mov     ecx, dword ptr [ebp - 0x4]
        add     ecx, 0x6c
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [ebp - 0x68], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [ebp - 0x64], eax
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [g_008bd548]
        mov     dword ptr [ebp - 0x60], edx
        mov     edx, dword ptr [g_008bd54c]
        mov     dword ptr [ebp - 0x5c], eax
        mov     eax, dword ptr [g_008bd550]
        mov     dword ptr [ebp - 0x14], ecx
        mov     ecx, dword ptr [g_008bd554]
        mov     dword ptr [ebp - 0x10], edx
        mov     edx, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0x8], ecx
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [g_007b9668], edx
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [g_007b966c], eax
        mov     eax, dword ptr [ebp - 0x68]
        mov     dword ptr [g_007b9670], ecx
        mov     ecx, dword ptr [ebp - 0x64]
        mov     dword ptr [g_007b9674], edx
        mov     edx, dword ptr [ebp - 0x60]
        mov     dword ptr [g_007b9658], eax
        mov     eax, dword ptr [ebp - 0x5c]
        mov     dword ptr [g_007b965c], ecx
        lea     ecx, [ebp - 0xf4]
        mov     dword ptr [g_007b9660], edx
        mov     dword ptr [g_007b9664], eax
        mov     byte ptr [edi + 0x168], 0x1
        mov     byte ptr [edi + 0x1b0], 0x0
        call    FUN_004d21c0
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
