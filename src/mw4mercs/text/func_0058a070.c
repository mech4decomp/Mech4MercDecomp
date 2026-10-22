/*
 * FUN_0058a070 (2000 B) — Game object update/physics function.
 *
 * __thiscall (ECX = this), RET 0xC (3 params: float param_2, int param_3).
 * Complex FPU calculations for object movement, rotation, and collision.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0058a070(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_100419427(void);
extern void __cdecl FUN_100507f2c(void);
extern void __cdecl FUN_1004193ef(void);
extern void __cdecl FUN_100507ece(void);
extern void __cdecl FUN_100419391(void);
extern void __cdecl FUN_10041ab94(void);
extern void __cdecl FUN_1004192f0(void);
extern int DAT_0077b63c;
extern int DAT_0076c5b0;
extern int DAT_007b5410;
extern int DAT_0076d070;
extern void __cdecl FUN_10041c46a(void);
extern void __cdecl FUN_10040c77e(void);
extern void __cdecl FUN_10041c596(void);
extern void __cdecl FUN_100419bca(void);
extern void __cdecl FUN_100419db9(void);
extern void __cdecl FUN_10041c4fd(void);
extern void __cdecl FUN_10041c4e4(void);
extern int DAT_007b540c;
extern int DAT_0076d59c;
extern void __cdecl FUN_10040c725(void);
extern int DAT_0076d064;
extern int DAT_007b8d08;
extern int DAT_007b8d0c;
extern int DAT_007b8d10;
extern void __cdecl FUN_100419c06(void);
extern int DAT_007dc728;
extern void __cdecl FUN_1004e2ac3(void);
extern int DAT_0077a198;
extern int DAT_007b8d68;
extern int DAT_007b8d70;
extern void __cdecl FUN_10041c154(void);
extern int DAT_0078235c;
extern void __cdecl FUN_1004e2993(void);
extern void __cdecl FUN_10041c085(void);
extern int DAT_007b220c;
extern int DAT_007dc700;
extern void __cdecl FUN_100414bfb(void);
extern void __cdecl FUN_10040c302(void);
extern void __cdecl FUN_10041bf35(void);
extern void __cdecl FUN_1004da266(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        sub     esp, 0x1b8
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, [eax]
        xor     ecx, edx
        mov     edx, [ecx + 0xc]
        push    edi
        mov     edi, [esi + 0xd8]
        xor     edx, 0x85739531
        mov     bl, [edx + 0x17]
        push    0x7b9460
        lea     ecx, [esp + 0xe4]
        add     edi, 0x80
        call FUN_100419427
        mov     eax, [esi + 0x4c0]
        test    eax, eax
        jz      label_0x0058a11b
        mov     ecx, [esi + 0x4c4]
        test    ecx, ecx
        jnz     label_0x0058a117
        test    bl, bl
        jnz     label_0x0058a117
        mov     ecx, [esi + 0x838]
        lea     eax, [esp + 0x194]
        push    eax
        call FUN_100507f2c
        push    eax
        lea     ecx, [esp + 0x120]
        call FUN_1004193ef
        mov     ecx, [esp + 0x128]
        mov     edx, [esp + 0x138]
        mov     eax, [esp + 0x148]
        mov     [esp + 0xec], ecx
        mov     [esp + 0xfc], edx
        mov     [esp + 0x10c], eax
        jmp     label_0x0058a18c

label_0x0058a117:
        test    eax, eax
        jnz     label_0x0058a16e

label_0x0058a11b:
        mov     eax, [esi + 0x4c4]
        test    eax, eax
        jz      label_0x0058a16e
        test    bl, bl
        jnz     label_0x0058a16e
        lea     ecx, [esp + 0x194]
        push    ecx
        mov     ecx, [esi + 0x83c]
        call FUN_100507ece
        push    eax
        lea     ecx, [esp + 0x120]
        call FUN_100419391
        mov     edx, [esp + 0x128]
        mov     eax, [esp + 0x138]
        mov     ecx, [esp + 0x148]
        mov     [esp + 0xec], edx
        mov     [esp + 0xfc], eax
        jmp     label_0x0058a185

label_0x0058a16e:
        mov     edx, [edi + 0xc]
        mov     [esp + 0xec], edx
        mov     eax, [edi + 0x1c]
        mov     [esp + 0xfc], eax
        mov     ecx, [edi + 0x2c]

label_0x0058a185:
        mov     [esp + 0x10c], ecx

label_0x0058a18c:
        push    edi
        lea     ecx, [esp + 0x38]
        call FUN_10041ab94
        mov     edx, [esi]
        mov     ecx, esi
        call dword ptr [edx + 0x110]
        mov     ecx, [esi + 0x868]
        fmul    dword ptr [esp + 0x1c8]
        mov     eax, 0x1
        cmp     ecx, eax
        fld st(0)
        fmul    dword ptr [esi + 0x430]
        fstp    dword ptr [esp + 0x68]
        fld st(0)
        fmul    dword ptr [esi + 0x434]
        fstp    dword ptr [esp + 0x6c]
        fmul    dword ptr [esi + 0x438]
        fstp    dword ptr [esp + 0x70]
        jnz     label_0x0058a1e8
        fld     dword ptr [esp + 0x68]
        fadd    dword ptr [esi + 0x850]
        fstp    dword ptr [esi + 0x850]

label_0x0058a1e8:
        cmp     [esi + 0x864], eax
        jnz     label_0x0058a200
        fld     dword ptr [esp + 0x68]
        fadd    dword ptr [esi + 0x84c]
        fstp    dword ptr [esi + 0x84c]

label_0x0058a200:
        push    edi
        lea     ecx, [esp + 0x14]
        call FUN_1004192f0
        mov     ebx, [esi + 0x99c]
        test    ebx, ebx
        jz      label_0x0058a23f
        mov     eax, [ebx + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x6
        jnz     label_0x0058a23f
        fld     dword ptr [esi + 0x16c]
        fcomp dword ptr [DAT_0077b63c]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x0058a25c
        mov     dword ptr [esi + 0x16c], 0x41f00000
        jmp     label_0x0058a25c

label_0x0058a23f:
        fld     dword ptr [esi + 0x16c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x0058a25c
        mov     dword ptr [esi + 0x16c], 0x0

label_0x0058a25c:
        fld dword ptr [DAT_007b5410]
        mov     eax, [esp + 0x1cc]
        fmul    dword ptr [esi + 0x184]
        push    edi
        push    eax
        lea     ecx, [esp + 0x7c]
        fmul    dword ptr [esp + 0x1d0]
        fmul dword ptr [DAT_0076d070]
        fadd    dword ptr [esi + 0x16c]
        fstp    dword ptr [eax + 0x4]
        call FUN_10041c46a
        fld     dword ptr [esp + 0x74]
        lea     ecx, [esp + 0x74]
        fmul    dword ptr [esp + 0x1c8]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        fstp    dword ptr [esp + 0x7c]
        lea     ecx, [esp + 0x18]
        fld     dword ptr [esp + 0x80]
        fmul    dword ptr [esp + 0x1d0]
        fstp    dword ptr [esp + 0x80]
        fld     dword ptr [esp + 0x84]
        fmul    dword ptr [esp + 0x1d0]
        fstp    dword ptr [esp + 0x84]
        call FUN_10040c77e
        fld dword ptr [DAT_007b5410]
        lea     eax, [esp + 0xe0]
        fmul    dword ptr [esi + 0x184]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        fmul    dword ptr [esp + 0x1d0]
        lea     ecx, [esp + 0x154]
        fadd    dword ptr [esi + 0x16c]
        fstp    dword ptr [esi + 0x16c]
        call FUN_10041c596
        lea     ecx, [esp + 0x164]
        call FUN_100419bca
        lea     edx, [esp + 0x68]
        push    edx
        lea     ecx, [esp + 0x168]
        call FUN_100419db9
        lea     eax, [esp + 0x164]
        push    eax
        lea     ecx, [esp + 0x150]
        push    ecx
        lea     ecx, [esp + 0x118]
        call FUN_10041c4fd
        lea     edx, [esp + 0xe0]
        push    edx
        lea     eax, [esp + 0x114]
        push    eax
        lea     ecx, [esp + 0x18]
        call FUN_10041c4e4
        mov     al, [esi + 0x5c0]
        test    al, al
        jz      label_0x0058a383
        fld     dword ptr [esi + 0x5c4]
        mov     byte ptr [esi + 0x5c0], 0x0
        fstp    dword ptr [esp + 0x34]
        jmp     label_0x0058a38f

label_0x0058a383:
        fld     dword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x34]

label_0x0058a38f:
        fld     dword ptr [esp + 0x38]
        mov     edx, [esi]
        fadd    dword ptr [esp + 0x6c]
        lea     eax, [esp + 0x8c]
        push    eax
        mov     eax, [esp + 0x1cc]
        fstp    dword ptr [esp + 0x3c]
        lea     ecx, [esp + 0x84]
        fld     dword ptr [esp + 0x40]
        push    ecx
        fadd    dword ptr [esp + 0x78]
        push    eax
        mov     ecx, esi
        fstp    dword ptr [esp + 0x48]
        call dword ptr [edx + 0x164]
        test    al, al
        jz      label_0x0058a40f
        mov     ecx, [esp + 0x90]
        mov     edx, [esp + 0x8c]
        mov     eax, [esp + 0x94]
        mov     [esp + 0x38], ecx
        mov     ecx, [esp + 0x80]
        mov     [esp + 0x34], edx
        mov     edx, [esp + 0x84]
        mov     [esp + 0x3c], eax
        mov     eax, [esp + 0x88]
        mov     [esp + 0x10], ecx
        mov     [esp + 0x14], edx
        mov     [esp + 0x18], eax

label_0x0058a40f:
        mov     eax, [esi + 0x10]
        and     eax, 0x7
        cmp     eax, 0x4
        jz      label_0x0058a428
        test    eax, eax
        jz      label_0x0058a428
        mov     dword ptr [esp + 0x64], 0x42200000
        jmp     label_0x0058a44b

label_0x0058a428:
        mov eax, dword ptr [DAT_007b540c]
        test    eax, eax
        jnz     label_0x0058a43b
        mov     dword ptr [esp + 0x64], 0x42200000
        jmp     label_0x0058a44b

label_0x0058a43b:
        fld     dword ptr [esi + 0x458]
        fadd dword ptr [DAT_0076d59c]
        fstp    dword ptr [esp + 0x64]

label_0x0058a44b:
        mov     ecx, 0x7b8d08
        call FUN_10040c725
        fsqrt
        mov     ecx, [esp + 0x10]
        mov     edx, [esp + 0x18]
        mov     [esp + 0x4c], ecx
        mov     [esp + 0x54], edx
        lea     ecx, [esp + 0x158]
        lea     edx, [esp + 0x34]
        lea     eax, [esp + 0x4c]
        mov     [esp + 0x9c], ecx
        push    edx
        lea     ecx, [esp + 0xb4]
        mov     [esp + 0x9c], eax
        mov     dword ptr [esp + 0xa4], 0x0
        mov     [esp + 0xac], esi
        mov     dword ptr [esp + 0xb0], 0x1000
        fdivr dword ptr [DAT_0076d064]
        fld st(0)
        fmul dword ptr [DAT_007b8d08]
        fstp    dword ptr [esp + 0x5c]
        fld st(0)
        fmul dword ptr [DAT_007b8d0c]
        fstp    dword ptr [esp + 0x60]
        fmul dword ptr [DAT_007b8d10]
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esi + 0x458]
        fstp    dword ptr [esp + 0x54]
        call FUN_100419c06
        mov ecx, dword ptr [DAT_007dc728]
        lea     eax, [esp + 0x98]
        push    eax
        call FUN_1004e2ac3
        mov     ecx, eax
        test    ecx, ecx
        jnz     label_0x0058a688

        mov     eax, [esi + 0x10]
        and     eax, 0x7
        cmp     eax, 0x4
        jz      label_0x0058a514
        test    eax, eax
        jnz     label_0x0058a63a

label_0x0058a514:
        cmp dword ptr [DAT_007b540c], 0x2
        jnz     label_0x0058a63a
        mov     al, [esi + 0x930]
        test    al, al
        jnz     label_0x0058a63a
        mov     al, [esi + 0x931]
        test    al, al
        jnz     label_0x0058a63a
        fld     dword ptr [esp + 0x1c8]
        mov     ecx, [edi + 0xc]
        fadd dword ptr [DAT_0077a198]
        mov     eax, [edi + 0x2c]
        mov     edx, [edi + 0x1c]
        mov     [esp + 0x1c], ecx
        mov ecx, dword ptr [DAT_007b8d68]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0xc]
        mov     [esp + 0x24], eax
        fmul    dword ptr [esi + 0x184]
        mov     [esp + 0x20], edx
        mov edx, dword ptr [DAT_007b8d70]
        push    edi
        fmul dword ptr [DAT_007b5410]
        lea     eax, [esp + 0x2c]
        mov     [esp + 0x2c], ecx
        push    eax
        fmul dword ptr [DAT_0076d070]
        lea     ecx, [esp + 0x48]
        mov     [esp + 0x38], edx
        fadd    dword ptr [esi + 0x16c]
        fstp    dword ptr [esp + 0x34]
        call FUN_10041c154
        fld     dword ptr [esp + 0x40]
        lea     edx, [esp + 0x98]
        fmul    dword ptr [esp + 0xc]
        push    edx
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x44]
        fadd    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x28]
        mov     ecx, [esp + 0x28]
        mov     [esp + 0x58], ecx
        mov ecx, dword ptr [DAT_007dc728]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x24]
        fadd    dword ptr [esi + 0x458]
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [esi + 0x458]
        fadd dword ptr [DAT_0078235c]
        fstp    dword ptr [esp + 0x68]
        call FUN_1004e2993
        test    eax, eax
        jnz     label_0x0058a63a
        mov     ecx, [esi + 0xe0]
        mov     eax, [ecx]
        push    0x0
        push    0x9
        call dword ptr [eax + 0x4]

label_0x0058a63a:
        mov     ecx, [esp + 0x10]
        mov     edx, [esp + 0x14]
        mov     eax, [esp + 0x18]
        mov     [esp + 0xbc], ecx
        lea     ecx, [esp + 0xb0]
        mov     [esp + 0xcc], edx
        push    ecx
        lea     edx, [esi + 0x168]
        push    edx
        lea     ecx, [esi + 0x198]
        mov     [esp + 0xe4], eax
        call FUN_10041c085
        mov     byte ptr [esi + 0x930], 0x0
        mov     byte ptr [esi + 0x931], 0x0
        jmp     label_0x0058a825

label_0x0058a688:
        fld     dword ptr [esp + 0x64]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     label_0x0058a721
        mov eax, dword ptr [DAT_007dc700]
        mov     ecx, [ecx + 0x4]
        push    eax
        call FUN_100414bfb
        test    al, al
        jnz     label_0x0058a721
        fld     dword ptr [esi + 0x16c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x0058a721
        mov     eax, [edi + 0x1c]
        fld     dword ptr [edi + 0xc]
        mov     ecx, [edi + 0x2c]
        fstp    dword ptr [esp + 0xbc]
        fld     dword ptr [esi + 0x19c]
        mov     edx, eax
        fcomp dword ptr [DAT_0076c5b0]
        mov     [esp + 0x2c], eax
        mov     eax, ecx
        mov     [esp + 0xdc], eax
        mov     [esp + 0x30], ecx
        fnstsw  ax
        mov     [esp + 0xcc], edx
        test    ah, 0x41
        jnz     label_0x0058a70d
        mov     dword ptr [esi + 0x19c], 0x0

label_0x0058a70d:
        lea     ecx, [esp + 0xb0]
        push    ecx
        lea     edx, [esi + 0x198]
        push    edx
        jmp     label_0x0058a81a

label_0x0058a721:
        fld     dword ptr [esp + 0x58]
        lea     eax, [esp + 0x28]
        fmul    dword ptr [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0x50]
        push    ecx
        fstp    dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x18]
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [esp + 0x6c]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x68]
        fmul    dword ptr [esp + 0x6c]
        fstp    dword ptr [esp + 0x38]
        call FUN_10040c302
        test    ebx, ebx
        fld     dword ptr [edi + 0xc]
        fsubr   dword ptr [esp + 0x10]
        mov     edx, [edi + 0x1c]
        fld     dword ptr [esp + 0x14]
        mov     eax, [edi + 0x2c]
        mov     [esp + 0x2c], edx
        fsub    dword ptr [esp + 0x2c]
        mov     [esp + 0x30], eax
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x1c8]
        fdivr dword ptr [DAT_0076d064]
        fstp    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x24]
        jz      label_0x0058a7c2
        mov     ecx, [ebx + 0xe0]
        cmp     dword ptr [ecx + 0x14], 0x6
        jz      label_0x0058a7d7

label_0x0058a7c2:
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x0058a7d7
        fstp st(0)
        fld dword ptr [DAT_0076c5b0]

label_0x0058a7d7:
        mov     edx, [esp + 0x10]
        fstp    dword ptr [esi + 0x19c]
        mov     eax, [esp + 0x14]
        mov     ecx, [esp + 0x18]
        mov     [esp + 0xbc], edx
        mov     edx, [esp + 0x1c]
        mov     [esp + 0xcc], eax
        lea     eax, [esi + 0x198]
        mov     [eax], edx
        lea     edx, [esp + 0xb0]
        mov     [esp + 0xdc], ecx
        mov     ecx, [esp + 0x24]
        push    edx
        mov     [eax + 0x8], ecx
        push    eax

label_0x0058a81a:
        lea     ecx, [esi + 0x168]
        call FUN_10041bf35

label_0x0058a825:
        lea     eax, [esp + 0xb0]
        push    eax
        mov     ecx, esi
        call FUN_1004da266
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x1b8
        ret     0xc
    }


}
