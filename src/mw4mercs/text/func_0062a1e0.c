/*
 * FUN_0062a1e0 (5055 B) — Large render/update routine. __fastcall (ECX=this).
 *
 * Iterates a vector at [this+0x50] (element size 0x1c), counts non-trivial
 * entries, formats a time string, does a lot of FPU color/position math, and
 * issues many virtual + helper calls. Contains an inner jump table at
 * 0x62B5A0 (just past the function's last byte, outside the diff range).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dddb4;          /* 0x007dddb4 */
extern int g_7dab44;          /* 0x007dab44 */
extern int g_7dab40;          /* 0x007dab40 */
extern int g_7f25c0;          /* 0x007f25c0 */
extern void *g_76b420;        /* IAT: sprintf */
extern void *g_76b2d4;        /* IAT */

extern float g_76d064;        /* 0x0076d064 */
extern float g_77dff8;        /* 0x0077dff8 */
extern float g_77dff4;        /* 0x0077dff4 */
extern float g_78d0e4;        /* 0x0078d0e4 */
extern float g_78d0e0;        /* 0x0078d0e0 */
extern float g_770168;        /* 0x00770168 */
extern float g_7822e8;        /* 0x007822e8 */
extern float g_7748c8;        /* 0x007748c8 */
extern float g_77deac;        /* 0x0077deac */
extern float g_76d5f0;        /* 0x0076d5f0 */
extern float g_76ed04;        /* 0x0076ed04 */
extern float g_76d978;        /* 0x0076d978 */

extern int __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_0062ba00(void);
extern void __cdecl FUN_0062a140(void);
extern void __cdecl FUN_006236a0(void);
extern void __cdecl FUN_00624420(void);
extern void __cdecl FUN_00629f10(void);
extern void __cdecl FUN_00629f90(void);
extern void __cdecl FUN_0062a0b0(void);
extern void __cdecl FUN_00629dd0(void);
extern void __cdecl FUN_00629e70(void);
extern void __cdecl FUN_0062a010(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);

__declspec(naked) void __fastcall FUN_0062a1e0(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2b4
        push    ebx
        mov     ebx, ecx
        mov     edx, dword ptr [ebx + 0x50]
        mov     ecx, dword ptr [ebx + 0x54]
        push    esi
        lea     esi, [ebx + 0x50]
        sub     ecx, edx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        push    edi
        xor     edi, edi
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [ebp - 0x90], ebx
        mov     dword ptr [ebp - 0xc], edi
        jz      exit
        mov     ecx, dword ptr [esi]
        jmp     a224
    a221:
        mov     ecx, dword ptr [ebp - 0x34]
    a224:
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 4]
        sub     eax, 2
        jz      a23b
        sub     eax, 6
        jz      a23b
        sub     eax, 0x2c
        jz      a23b
        inc     dword ptr [ebp - 0xc]
    a23b:
        mov     edx, dword ptr [esi]
        add     ecx, 0x1c
        mov     dword ptr [ebp - 0x34], ecx
        mov     ecx, dword ptr [esi + 4]
        sub     ecx, edx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        inc     edi
        add     edx, eax
        cmp     edi, edx
        jc      a221
        mov     eax, dword ptr [ebp - 0xc]
        test    eax, eax
        jz      exit
        mov     ecx, dword ptr [g_7dddb4]
        mov     eax, dword ptr [ebx + 0x74]
        test    eax, eax
        mov     dword ptr [ebp - 0xbc], ecx
        mov     dword ptr [g_7dddb4], 0
        jnz     a291
        cmp     dword ptr [ebx + 0x78], 0xbff00000
        jz      a2ec
    a291:
        fld     qword ptr [ebx + 0x74]
        call    FUN_0075db4a
        mov     ecx, eax
        cdq
        mov     edi, 0x3c
        idiv    edi
        mov     eax, 0x88888889
        and     edx, 0xffff
        push    edx
        imul    ecx
        add     edx, ecx
        sar     edx, 5
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        and     edx, 0xffff
        push    edx
        lea     ecx, [ebp - 0x2b4]
        push    0x78d0e8
        push    ecx
        call    dword ptr [g_76b420]
        mov     ecx, dword ptr [ebx + 0x7c]
        add     esp, 0x10
        push    0
        push    0
        lea     edx, [ebp - 0x2b4]
        push    edx
        call    FUN_00560420
    a2ec:
        mov     edx, dword ptr [ebp - 0xc]
        lea     eax, [ebx + 0x14]
        add     edx, 2
        push    eax
        lea     ecx, [ebp - 0x44]
        mov     dword ptr [ebp - 0xc], edx
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x44]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      a31d
        fld     dword ptr [ebp - 0x44]
        fmul    dword ptr [g_77dff8]
        fstp    dword ptr [ebp - 0x44]
    a31d:
        fld     dword ptr [ebp - 0x40]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      a339
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [g_77dff4]
        fstp    dword ptr [ebp - 0x40]
    a339:
        lea     ecx, [ebp - 0x44]
        push    ecx
        lea     ecx, [ebp - 0xb8]
        call    FUN_0040c5d0
        lea     edx, [ebp - 0xb8]
        push    edx
        lea     ecx, [ebp - 0x1c]
        call    FUN_0040c410
        lea     edi, [ebx + 0x20]
        push    edi
        lea     ecx, [ebp - 0x44]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x44]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      a37f
        fld     dword ptr [ebp - 0x44]
        fmul    dword ptr [g_77dff8]
        fstp    dword ptr [ebp - 0x44]
    a37f:
        fld     dword ptr [ebp - 0x40]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      a39b
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [g_77dff4]
        fstp    dword ptr [ebp - 0x40]
    a39b:
        lea     eax, [ebp - 0x44]
        push    eax
        lea     ecx, [ebp - 0xb8]
        call    FUN_0040c5d0
        lea     ecx, [ebp - 0xb8]
        push    ecx
        lea     ecx, [ebp - 0x54]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x54]
        mov     eax, dword ptr [ebp - 0xc]
        shl     eax, 4
        mov     dword ptr [ebp - 0x34], eax
        fstp    dword ptr [ebp - 0x44]
        fild    dword ptr [ebp - 0x34]
        lea     edx, [ebp - 0x44]
        push    edx
        mov     ecx, edi
        fstp    dword ptr [ebp - 0x40]
        mov     dword ptr [ebp - 0x3c], 0x3f666666
        call    FUN_0040c410
        push    edi
        lea     ecx, [ebp - 0x44]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x44]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      a405
        fld     dword ptr [ebp - 0x44]
        fmul    dword ptr [g_77dff8]
        fstp    dword ptr [ebp - 0x44]
    a405:
        fld     dword ptr [ebp - 0x40]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      a421
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [g_77dff4]
        fstp    dword ptr [ebp - 0x40]
    a421:
        lea     eax, [ebp - 0x44]
        push    eax
        lea     ecx, [ebp - 0xb8]
        call    FUN_0040c5d0
        lea     ecx, [ebp - 0xb8]
        push    ecx
        lea     ecx, [ebp - 0x54]
        call    FUN_0040c410
        mov     eax, dword ptr [ebx + 0x34]
        xor     ecx, ecx
        mov     cl, ah
        xor     edx, edx
        mov     dword ptr [ebp - 0x34], eax
        mov     dl, byte ptr [ebp - 0x32]
        mov     dword ptr [ebp - 0x58], ecx
        mov     ecx, eax
        shr     eax, 0x18
        mov     edi, eax
        lea     eax, [edx + edx*1]
        mov     edx, 0xff
        and     ecx, 0xff
        cmp     eax, edx
        mov     dword ptr [ebp - 0x7c], edx
        ja      a470
        mov     dword ptr [ebp - 0x7c], eax
    a470:
        mov     eax, dword ptr [ebp - 0x58]
        add     eax, eax
        cmp     eax, edx
        mov     dword ptr [ebp - 0x58], edx
        ja      a47f
        mov     dword ptr [ebp - 0x58], eax
    a47f:
        add     ecx, ecx
        cmp     ecx, edx
        mov     dword ptr [ebp - 0x74], edx
        ja      a48b
        mov     dword ptr [ebp - 0x74], ecx
    a48b:
        fld     dword ptr [ebp - 0x18]
        push    0xff009600
        fadd    dword ptr [g_78d0e4]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x54]
        push    eax
        call    FUN_0075db4a
        mov     dword ptr [ebp - 0x34], eax
        fild    dword ptr [ebp - 0x34]
        fadd    dword ptr [ebp - 0x1c]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x18]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x1c]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e5c0
        fld     dword ptr [ebp - 0x50]
        mov     edx, dword ptr [ebp - 0x7c]
        mov     eax, dword ptr [ebp - 0x58]
        mov     ecx, dword ptr [ebp - 0x74]
        shl     edi, 8
        add     edi, edx
        shl     edi, 8
        add     edi, eax
        shl     edi, 8
        add     edi, ecx
        push    edi
        call    FUN_0075db4a
        inc     eax
        mov     dword ptr [ebp - 0x34], eax
        fild    dword ptr [ebp - 0x34]
        fadd    dword ptr [ebp - 0x18]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x54]
        push    eax
        call    FUN_0075db4a
        mov     dword ptr [ebp - 0x34], eax
        fild    dword ptr [ebp - 0x34]
        fadd    dword ptr [ebp - 0x1c]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x18]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x1c]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eb90
        fld     dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebp - 0x18]
        fadd    dword ptr [g_770168]
        mov     eax, dword ptr [ebx + 0x70]
        mov     edi, dword ptr [eax]
        add     esp, 0x28
        push    1
        push    0x3f666666
        push    ecx
        push    ecx
        lea     ecx, [ebp - 0x44]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebx + 0x70]
        call    dword ptr [edi + 0x14]
        mov     edi, dword ptr [ebx + 0x7c]
        mov     edx, dword ptr [edi]
        lea     eax, [ebp - 0x48]
        push    eax
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        mov     edi, dword ptr [edi]
        push    1
        push    0x3f666666
        fld     dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp - 0x4]
        fadd    dword ptr [ebp - 0x54]
        mov     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x20], 0
        fisub   dword ptr [ebp - 0x24]
        push    edx
        push    ecx
        lea     ecx, [ebp - 0x44]
        fsub    dword ptr [g_770168]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebx + 0x7c]
        call    dword ptr [edi + 0x14]
        fld     dword ptr [ebp - 0x18]
        fadd    dword ptr [g_78d0e0]
        mov     eax, dword ptr [ebx + 0x68]
        mov     edi, dword ptr [eax]
        push    1
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x1c]
        lea     ecx, [ebp - 0x44]
        fadd    dword ptr [g_770168]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebx + 0x68]
        call    dword ptr [edi + 0x14]
        mov     ecx, ebx
        call    FUN_0062a140
        mov     edi, dword ptr [ebx + 0x8c]
        mov     edx, dword ptr [edi]
        mov     byte ptr [ebp - 0x5], al
        lea     eax, [ebp - 0x88]
        push    eax
        lea     ecx, [ebp - 0x70]
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        fld     dword ptr [ebp - 0x1c]
        fadd    dword ptr [ebp - 0x54]
        mov     edx, dword ptr [ebp - 0x70]
        mov     ecx, dword ptr [ebx + 0x84]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ebp - 0x24], edx
        mov     dword ptr [ebp - 0x20], 0
        fisub   dword ptr [ebp - 0x24]
        lea     edx, [ebp - 0x88]
        push    edx
        lea     edx, [ebp - 0x68]
        push    edx
        fsub    dword ptr [g_770168]
        fstp    dword ptr [ebp - 0x7c]
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp - 0x68]
        mov     dword ptr [ebp - 0x24], eax
        mov     al, byte ptr [ebp - 0x5]
        test    al, al
        mov     dword ptr [ebp - 0x20], 0
        fild    qword ptr [ebp - 0x24]
        fsubr   dword ptr [ebp - 0x7c]
        fsub    dword ptr [g_770168]
        fstp    dword ptr [ebp - 0x84]
        jnz     a68b
        fld     dword ptr [ebp - 0x84]
        fsub    dword ptr [g_7822e8]
        fstp    dword ptr [ebp - 0x84]
    a68b:
        mov     ecx, dword ptr [ebx + 0x80]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x88]
        push    eax
        lea     eax, [ebp - 0x60]
        push    eax
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [ebp - 0x60]
        mov     al, byte ptr [ebp - 0x5]
        test    al, al
        mov     dword ptr [ebp - 0x24], ecx
        mov     dword ptr [ebp - 0x20], 0
        fild    qword ptr [ebp - 0x24]
        fsubr   dword ptr [ebp - 0x84]
        fsub    dword ptr [g_7748c8]
        fstp    dword ptr [ebp - 0x80]
        jnz     a6d3
        fld     dword ptr [ebp - 0x80]
        fsub    dword ptr [g_7822e8]
        fstp    dword ptr [ebp - 0x80]
    a6d3:
        fld     dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x7c]
        fadd    dword ptr [g_78d0e0]
        mov     edi, dword ptr [edi]
        push    1
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        lea     ecx, [ebp - 0x44]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebx + 0x8c]
        call    dword ptr [edi + 0x14]
        fld     dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebx + 0x84]
        fadd    dword ptr [g_78d0e0]
        mov     edi, dword ptr [eax]
        mov     eax, dword ptr [ebp - 0x84]
        push    1
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [ebp - 0x44]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebx + 0x84]
        call    dword ptr [edi + 0x14]
        fld     dword ptr [ebp - 0x18]
        fadd    dword ptr [g_78d0e0]
        mov     eax, dword ptr [ebx + 0x80]
        mov     edi, dword ptr [eax]
        push    1
        push    0x3f666666
        push    ecx
        mov     ecx, dword ptr [ebp - 0x80]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [ebp - 0x44]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebx + 0x80]
        call    dword ptr [edi + 0x14]
        mov     edi, dword ptr [ebx + 0x6c]
        mov     edx, dword ptr [edi]
        lea     eax, [ebp - 0x48]
        push    eax
        lea     ecx, [ebp - 0x64]
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [ebp - 0x64]
        mov     al, byte ptr [ebp - 0x5]
        test    al, al
        mov     dword ptr [ebp - 0x24], edx
        mov     dword ptr [ebp - 0x20], 0
        fild    qword ptr [ebp - 0x24]
        fsubr   dword ptr [ebp - 0x80]
        fsub    dword ptr [g_7748c8]
        fstp    dword ptr [ebp - 0x78]
        jnz     a7c5
        fld     dword ptr [ebp - 0x78]
        fsub    dword ptr [g_7822e8]
        fstp    dword ptr [ebp - 0x78]
    a7c5:
        fld     dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x78]
        fadd    dword ptr [g_78d0e0]
        mov     edi, dword ptr [edi]
        push    1
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [ebp - 0x44]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebx + 0x6c]
        call    dword ptr [edi + 0x14]
        mov     edx, dword ptr [ebp - 0x64]
        mov     edi, dword ptr [ebx + 0x88]
        lea     eax, [ebp - 0x88]
        shr     edx, 1
        push    eax
        lea     ecx, [ebp - 0x6c]
        mov     dword ptr [ebp - 0x64], edx
        mov     edx, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [ebp - 0x6c]
        mov     al, byte ptr [ebp - 0x5]
        test    al, al
        mov     dword ptr [ebp - 0x24], edx
        mov     dword ptr [ebp - 0x20], 0
        fild    qword ptr [ebp - 0x24]
        fsubr   dword ptr [ebp - 0x78]
        fsub    dword ptr [g_77deac]
        fstp    dword ptr [ebp - 0x74]
        jz      a871
        fld     dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x74]
        fadd    dword ptr [g_78d0e0]
        mov     edi, dword ptr [edi]
        push    1
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [ebp - 0x44]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebx + 0x88]
        call    dword ptr [edi + 0x14]
    a871:
        mov     ecx, dword ptr [ebp - 0x70]
        mov     eax, dword ptr [ebp - 0x6c]
        mov     edi, dword ptr [ebp - 0x68]
        mov     edx, dword ptr [ebp - 0x60]
        shr     ecx, 1
        shr     edx, 1
        mov     dword ptr [ebp - 0x70], ecx
        mov     ecx, dword ptr [g_7dab44]
        shr     eax, 1
        mov     dword ptr [ebp - 0x6c], eax
        mov     eax, dword ptr [g_7dab40]
        shr     edi, 1
        mov     dword ptr [ebp - 0x60], edx
        mov     dword ptr [ebp - 0x68], edi
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     ecx, dword ptr [edx + 0xc]
        lea     eax, [edx + 0xc]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x16]
        test    dl, dl
        jz      a8c3
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        mov     dword ptr [ebp - 0x34], eax
        jmp     a8d1
    a8c3:
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x54]
        mov     dword ptr [ebp - 0x34], edx
    a8d1:
        fld     dword ptr [ebp - 0x18]
        mov     eax, dword ptr [esi]
        fadd    dword ptr [g_76d5f0]
        mov     ecx, dword ptr [esi + 4]
        sub     ecx, eax
        mov     eax, 0x92492493
        fstp    dword ptr [ebp - 0x18]
        imul    ecx
        fld     dword ptr [ebp - 0x1c]
        fadd    dword ptr [g_76d5f0]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x18]
        fadd    dword ptr [g_76ed04]
        add     edx, ecx
        sar     edx, 4
        fstp    dword ptr [ebp - 0x58]
        mov     eax, edx
        fld     dword ptr [ebp - 0x54]
        shr     eax, 0x1f
        add     edx, eax
        fsub    dword ptr [g_76d978]
        mov     dword ptr [ebp - 0x28], 0
        mov     dword ptr [ebp - 0x5c], 0xff323296
        fstp    dword ptr [ebp - 0x54]
        mov     dword ptr [ebp - 0xc], 0x96323296
        mov     dword ptr [ebp - 0x38], 0
        jz      b58c
    a93d:
        xor     edi, edi
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x58]
        mov     eax, dword ptr [esi]
        mov     dword ptr [ebp - 0x30], ecx
        mov     dword ptr [ebp - 0x2c], edx
        mov     ecx, dword ptr [eax + edi*1]
        mov     edx, dword ptr [ecx + 8]
        test    edx, edx
        jge     aea5
        mov     edx, ecx
        mov     eax, dword ptr [edx + 8]
        add     eax, 8
        cmp     eax, 7
        ja      a9f6
        /* __emit: MSVC6 re-bases FF 24 85 [eax*4+imm32] via EBX; emit the
           reference dispatch bytes verbatim (jump table at 0x62B5A0). */
__emit 0xFF
__emit 0x24
__emit 0x85
__emit 0xA0
__emit 0xB5
__emit 0x62
__emit 0x00
    case0:
        mov     dword ptr [ebp - 0x5c], 0xff323296
        mov     dword ptr [ebp - 0xc], 0x96323296
        jmp     aa08
    case1:
        mov     dword ptr [ebp - 0x5c], 0xff643232
        mov     dword ptr [ebp - 0xc], 0x96643232
        jmp     aa08
    case2:
        mov     dword ptr [ebp - 0x5c], 0xff329632
        mov     dword ptr [ebp - 0xc], 0x96329632
        jmp     aa08
    case3:
        mov     dword ptr [ebp - 0x5c], 0xffc8c832
        mov     dword ptr [ebp - 0xc], 0x96c8c832
        jmp     aa08
    case4:
        mov     dword ptr [ebp - 0x5c], 0xff963296
        mov     dword ptr [ebp - 0xc], 0x96963296
        jmp     aa08
    case5:
        mov     dword ptr [ebp - 0x5c], 0xff326496
        mov     dword ptr [ebp - 0xc], 0x96326496
        jmp     aa08
    case6:
        mov     dword ptr [ebp - 0x5c], 0xff643264
        mov     dword ptr [ebp - 0xc], 0x96643264
        jmp     aa08
    case7:
        mov     dword ptr [ebp - 0x5c], 0xff00c864
        mov     dword ptr [ebp - 0xc], 0x9600c864
        jmp     aa08
    a9f6:
        push    0x78d0c8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      aa08
        int     3
    aa08:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + edi*1]
        mov     ecx, dword ptr [ecx + 4]
        add     eax, edi
        sub     ecx, 2
        jz      b55d
        sub     ecx, 6
        jz      b55d
        sub     ecx, 0x2c
        jz      b55d
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [edx + 8]
        push    eax
        mov     ecx, ebx
        call    FUN_00629f10
        mov     dword ptr [ebp - 0x8c], eax
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [edi + eax*1]
        mov     eax, dword ptr [ecx + 8]
        push    eax
        mov     ecx, ebx
        call    FUN_00629f90
        push    0xa
        lea     edx, [ebp - 0xac]
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x8c]
        push    edx
        push    eax
        call    dword ptr [g_76b2d4]
        mov     ecx, dword ptr [esi]
        add     esp, 0xc
        push    0
        lea     ebx, [edi + ecx*1]
        mov     ecx, dword ptr [ebx + 0xc]
        push    0
        lea     edx, [ebp - 0xac]
        push    edx
        call    FUN_00560420
        mov     ecx, dword ptr [ebp - 0x10]
        push    0xa
        lea     eax, [ebp - 0xac]
        push    eax
        push    ecx
        call    dword ptr [g_76b2d4]
        mov     ecx, dword ptr [ebx + 0x10]
        add     esp, 0xc
        push    0
        push    0
        lea     edx, [ebp - 0xac]
        push    edx
        call    FUN_00560420
        mov     al, byte ptr [ebp - 0x5]
        test    al, al
        jz      aaf1
        mov     eax, dword ptr [ebx]
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [ebp - 0x90]
        push    eax
        call    FUN_0062a0b0
        push    0xa
        lea     ecx, [ebp - 0xac]
        push    ecx
        push    eax
        call    dword ptr [g_76b2d4]
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [edi + edx*1 + 0x18]
        add     esp, 0xc
        push    0
        lea     ebx, [edi + edx*1]
        push    0
        lea     eax, [ebp - 0xac]
        push    eax
        call    FUN_00560420
    aaf1:
        fld     dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [ebp - 0x5c]
        fadd    dword ptr [g_78d0e0]
        push    ecx
        fsub    dword ptr [g_76d064]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp - 0x54]
        push    eax
        fadd    dword ptr [g_76d5f0]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x2c]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x30]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e5c0
        mov     ecx, dword ptr [ebx]
        add     esp, 0x14
        push    0
        push    0
        call    FUN_006236a0
        mov     ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00560420
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebx + 4]
        push    edx
        push    eax
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx + 4]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ecx, dword ptr [ebp - 0x38]
        push    ecx
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 4]
        mov     ebx, dword ptr [eax]
        push    1
        sub     esp, 0xc
        lea     edx, [ebp - 0x30]
        mov     ecx, esp
        push    edx
        mov     dword ptr [ebp - 0x10], eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x10]
        call    dword ptr [ebx + 0x14]
        mov     al, byte ptr [ebp - 0x5]
        test    al, al
        jz      ac5b
        mov     ecx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [ebp - 0x1c]
        push    ecx
        mov     ecx, dword ptr [edi + eax*1 + 0x18]
        lea     ebx, [edi + eax*1 + 0x18]
        push    edx
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ecx]
        lea     edx, [ebp - 0x48]
        push    edx
        lea     edx, [ebp - 0x4]
        push    edx
        call    dword ptr [eax + 0xc]
        shr     dword ptr [ebp - 0x4], 1
        mov     eax, dword ptr [ebp - 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 0x18]
        mov     ebx, dword ptr [eax]
        mov     edx, dword ptr [ebp - 0x6c]
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x10], eax
        xor     eax, eax
        push    1
        mov     dword ptr [ebp - 0xcc], edx
        mov     dword ptr [ebp - 0xc8], eax
        fild    qword ptr [ebp - 0xcc]
        push    0x3f666666
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4]
        fadd    dword ptr [ebp - 0x74]
        mov     dword ptr [ebp - 0xec], ecx
        mov     dword ptr [ebp - 0xe8], eax
        push    ecx
        fisub   dword ptr [ebp - 0xec]
        lea     ecx, [ebp - 0x148]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x10]
        call    dword ptr [ebx + 0x14]
    ac5b:
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [edi + edx*1]
        lea     ebx, [edi + edx*1]
        push    0xa
        lea     eax, [ebp - 0xac]
        push    eax
        call    FUN_00624420
        push    eax
        call    dword ptr [g_76b2d4]
        add     esp, 0xc
        push    0
        push    0
        lea     ecx, [ebp - 0xac]
        push    ecx
        mov     ecx, dword ptr [ebx + 8]
        call    FUN_00560420
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebx + 8]
        push    edx
        push    eax
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx + 8]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ebx, dword ptr [ebx + 8]
        mov     edx, dword ptr [ebx]
        lea     eax, [ebp - 0x48]
        push    eax
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xc]
        shr     dword ptr [ebp - 0x4], 1
        mov     edx, dword ptr [ebp - 0x38]
        push    edx
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 8]
        mov     ebx, dword ptr [eax]
        mov     ecx, dword ptr [ebp - 0x64]
        mov     edx, dword ptr [ebp - 0x4]
        push    1
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x2c]
        push    0x3f666666
        push    eax
        xor     eax, eax
        mov     dword ptr [ebp - 0xfc], ecx
        mov     dword ptr [ebp - 0xf8], eax
        fild    qword ptr [ebp - 0xfc]
        mov     dword ptr [ebp - 0x10c], edx
        mov     dword ptr [ebp - 0x108], eax
        push    ecx
        fadd    dword ptr [ebp - 0x78]
        lea     ecx, [ebp - 0x1a8]
        fisub   dword ptr [ebp - 0x10c]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x10]
        call    dword ptr [ebx + 0x14]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [ebp - 0x1c]
        push    ecx
        mov     ecx, dword ptr [edi + eax*1 + 0xc]
        lea     ebx, [edi + eax*1 + 0xc]
        push    edx
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ebx, dword ptr [ebx]
        mov     eax, dword ptr [ebx]
        lea     ecx, [ebp - 0x48]
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0xc]
        shr     dword ptr [ebp - 0x4], 1
        mov     eax, dword ptr [ebp - 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 0xc]
        mov     ebx, dword ptr [eax]
        mov     edx, dword ptr [ebp - 0x60]
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x10], eax
        xor     eax, eax
        push    1
        mov     dword ptr [ebp - 0xc4], edx
        mov     dword ptr [ebp - 0xc0], eax
        fild    qword ptr [ebp - 0xc4]
        push    0x3f666666
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4]
        fadd    dword ptr [ebp - 0x80]
        mov     dword ptr [ebp - 0xd4], ecx
        mov     dword ptr [ebp - 0xd0], eax
        push    ecx
        fisub   dword ptr [ebp - 0xd4]
        lea     ecx, [ebp - 0x1b4]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x10]
        call    dword ptr [ebx + 0x14]
        mov     eax, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [ebp - 0x1c]
        push    eax
        lea     ebx, [edi + edx*1 + 0x10]
        push    ecx
        mov     ecx, dword ptr [ebx]
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ebx, dword ptr [ebx]
        mov     edx, dword ptr [ebx]
        lea     eax, [ebp - 0x48]
        push    eax
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xc]
        shr     dword ptr [ebp - 0x4], 1
        mov     edx, dword ptr [ebp - 0x38]
        push    edx
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 0x10]
        mov     ebx, dword ptr [eax]
        mov     ecx, dword ptr [ebp - 0x68]
        mov     edx, dword ptr [ebp - 0x4]
        push    1
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x2c]
        push    0x3f666666
        push    eax
        xor     eax, eax
        mov     dword ptr [ebp - 0x114], ecx
        mov     dword ptr [ebp - 0x110], eax
        fild    qword ptr [ebp - 0x114]
        mov     dword ptr [ebp - 0x11c], edx
        mov     dword ptr [ebp - 0x118], eax
        push    ecx
        fadd    dword ptr [ebp - 0x84]
        lea     ecx, [ebp - 0x16c]
        fisub   dword ptr [ebp - 0x11c]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     b548
    aea5:
        mov     ecx, dword ptr [eax + edi*1]
        mov     ecx, dword ptr [ecx + 4]
        sub     ecx, 2
        jz      b55d
        sub     ecx, 6
        jz      b55d
        sub     ecx, 0x2c
        jz      b55d
        mov     edx, dword ptr [eax + edi*1]
        add     edx, 0x18
        push    edx
        mov     ecx, ebx
        call    FUN_00629dd0
        mov     dword ptr [ebp - 0x8c], eax
        mov     eax, dword ptr [esi]
        mov     eax, dword ptr [eax + edi*1]
        add     eax, 0x18
        push    eax
        mov     ecx, ebx
        call    FUN_00629e70
        mov     edx, dword ptr [ebp - 0x8c]
        push    0xa
        lea     ecx, [ebp - 0xac]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x10], eax
        call    dword ptr [g_76b2d4]
        mov     ebx, dword ptr [esi]
        mov     ecx, dword ptr [ebx + edi*1 + 0xc]
        add     esp, 0xc
        push    0
        push    0
        lea     eax, [ebp - 0xac]
        add     ebx, edi
        push    eax
        call    FUN_00560420
        mov     edx, dword ptr [ebp - 0x10]
        push    0xa
        lea     ecx, [ebp - 0xac]
        push    ecx
        push    edx
        call    dword ptr [g_76b2d4]
        mov     ecx, dword ptr [ebx + 0x10]
        add     esp, 0xc
        push    0
        push    0
        lea     eax, [ebp - 0xac]
        push    eax
        call    FUN_00560420
        mov     al, byte ptr [ebp - 0x5]
        test    al, al
        jz      af8d
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + edi*1]
        add     ecx, 0x18
        push    ecx
        mov     ecx, dword ptr [ebp - 0x90]
        call    FUN_0062a010
        push    0xa
        lea     edx, [ebp - 0xac]
        push    edx
        push    eax
        call    dword ptr [g_76b2d4]
        mov     eax, dword ptr [esi]
        add     esp, 0xc
        push    0
        push    0
        lea     ecx, [ebp - 0xac]
        lea     ebx, [edi + eax*1]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x18]
        call    FUN_00560420
    af8d:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ebx]
        xor     eax, edx
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x18]
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     dword ptr [ebp - 0x10], 0
        push    edx
        call    FUN_004cdfa0
        test    eax, eax
        mov     dword ptr [ebp - 0x20], eax
        jz      b07a
        mov     ecx, dword ptr [ebx]
        add     ecx, 0x18
        push    ecx
        mov     ecx, eax
        call    FUN_004ceeb0
        test    eax, eax
        mov     dword ptr [ebp - 0x8c], eax
        jz      b07a
        mov     ecx, dword ptr [g_7f25c0]
        push    ecx
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        jz      b07a
        mov     eax, dword ptr [ebp - 0x8c]
        mov     cl, byte ptr [eax + 0xdc]
        test    cl, cl
        mov     dword ptr [ebp - 0x10], eax
        jz      b07a
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ebp - 0x20]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     eax, eax
        mov     al, byte ptr [edx + 0x28]
        xor     ecx, 0x85739531
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        fld     dword ptr [ecx + edx*8 + 0x35a4]
        call    FUN_0075db4a
        test    eax, eax
        jge     b04b
        xor     eax, eax
        jmp     b057
    b04b:
        cmp     eax, 0x2710
        jle     b057
        mov     eax, 0x2710
    b057:
        push    eax
        lea     eax, [ebp - 0xac]
        push    0x76b9a8
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0xc
        push    0
        push    0
        lea     ecx, [ebp - 0xac]
        push    ecx
        jmp     b083
    b07a:
        push    0
        push    0
        push    0x76b9b0
    b083:
        mov     ecx, dword ptr [ebx + 0x14]
        call    FUN_00560420
        mov     eax, dword ptr [ebp - 0x10]
        test    eax, eax
        jz      b0c1
        mov     ecx, dword ptr [ebp - 0x34]
        mov     edx, dword ptr [ecx + 0x38]
        test    edx, edx
        jz      b0c1
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        test    dl, 1
        jz      b0c1
        mov     eax, dword ptr [eax + 0x4c8]
        cmp     eax, dword ptr [ecx + 0x3c]
        jl      b0c1
        mov     ecx, dword ptr [ebx + 4]
        mov     dword ptr [ecx + 0x104], 0xff0000
        jmp     b0ce
    b0c1:
        mov     edx, dword ptr [ebx + 4]
        mov     dword ptr [edx + 0x104], 0xffffff
    b0ce:
        fld     dword ptr [ebp - 0x2c]
        mov     eax, dword ptr [ebp - 0xc]
        fadd    dword ptr [g_78d0e0]
        push    eax
        fsub    dword ptr [g_76d064]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x30]
        fadd    dword ptr [ebp - 0x54]
        push    eax
        fadd    dword ptr [g_76d5f0]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x2c]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x30]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e5c0
        mov     ecx, dword ptr [ebx]
        add     esp, 0x14
        push    0
        push    0
        call    FUN_006236a0
        mov     ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00560420
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x1c]
        push    ecx
        mov     ecx, dword ptr [ebx + 4]
        push    edx
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx + 4]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     eax, dword ptr [ebp - 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_0062ba00
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_770168]
        mov     eax, dword ptr [eax + 4]
        mov     ebx, dword ptr [eax]
        push    1
        push    0x3f666666
        push    ecx
        push    ecx
        lea     ecx, [ebp - 0x19c]
        fstp    dword ptr [esp]
        mov     dword ptr [ebp - 0x20], eax
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x20]
        call    dword ptr [ebx + 0x14]
        mov     al, byte ptr [ebp - 0x5]
        test    al, al
        jz      b259
        mov     eax, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [ebp - 0x1c]
        push    eax
        lea     ebx, [edi + edx*1 + 0x18]
        push    ecx
        mov     ecx, dword ptr [ebx]
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x48]
        push    eax
        lea     eax, [ebp - 0x4]
        push    eax
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x38]
        shr     eax, 1
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 0x18]
        mov     ebx, dword ptr [eax]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [ebp - 0x6c]
        mov     dword ptr [ebp - 0xdc], eax
        xor     eax, eax
        mov     dword ptr [ebp - 0xd8], eax
        fild    qword ptr [ebp - 0xdc]
        mov     dword ptr [ebp - 0x12c], ecx
        push    1
        mov     dword ptr [ebp - 0x128], eax
        fadd    dword ptr [ebp - 0x74]
        push    0x3f666666
        push    edx
        push    ecx
        fisub   dword ptr [ebp - 0x12c]
        lea     ecx, [ebp - 0x184]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x20]
        call    dword ptr [ebx + 0x14]
    b259:
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [edi + edx*1]
        lea     ebx, [edi + edx*1]
        push    0xa
        lea     eax, [ebp - 0xac]
        push    eax
        call    FUN_00624420
        push    eax
        call    dword ptr [g_76b2d4]
        add     esp, 0xc
        push    0
        push    0
        lea     ecx, [ebp - 0xac]
        push    ecx
        mov     ecx, dword ptr [ebx + 8]
        call    FUN_00560420
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebx + 8]
        push    edx
        push    eax
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx + 8]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ebx, dword ptr [ebx + 8]
        mov     edx, dword ptr [ebx]
        lea     eax, [ebp - 0x48]
        push    eax
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xc]
        shr     dword ptr [ebp - 0x4], 1
        mov     edx, dword ptr [ebp - 0x38]
        push    edx
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 8]
        mov     ebx, dword ptr [eax]
        mov     ecx, dword ptr [ebp - 0x64]
        mov     edx, dword ptr [ebp - 0x4]
        push    1
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [ebp - 0x2c]
        push    0x3f666666
        push    eax
        xor     eax, eax
        mov     dword ptr [ebp - 0x13c], ecx
        mov     dword ptr [ebp - 0x138], eax
        fild    qword ptr [ebp - 0x13c]
        mov     dword ptr [ebp - 0xf4], edx
        mov     dword ptr [ebp - 0xf0], eax
        push    ecx
        fadd    dword ptr [ebp - 0x78]
        lea     ecx, [ebp - 0x154]
        fisub   dword ptr [ebp - 0xf4]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x20]
        call    dword ptr [ebx + 0x14]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [ebp - 0x1c]
        push    ecx
        mov     ecx, dword ptr [edi + eax*1 + 0x14]
        lea     ebx, [edi + eax*1 + 0x14]
        push    edx
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ebx, dword ptr [ebx]
        mov     eax, dword ptr [ebx]
        lea     ecx, [ebp - 0x48]
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0xc]
        shr     dword ptr [ebp - 0x4], 1
        mov     eax, dword ptr [ebp - 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 0x14]
        mov     ebx, dword ptr [eax]
        mov     edx, dword ptr [ebp - 0x70]
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x20], eax
        xor     eax, eax
        push    1
        mov     dword ptr [ebp - 0x134], edx
        mov     dword ptr [ebp - 0x130], eax
        fild    qword ptr [ebp - 0x134]
        push    0x3f666666
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4]
        fadd    dword ptr [ebp - 0x7c]
        mov     dword ptr [ebp - 0x104], ecx
        mov     dword ptr [ebp - 0x100], eax
        push    ecx
        fisub   dword ptr [ebp - 0x104]
        lea     ecx, [ebp - 0x160]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x20]
        call    dword ptr [ebx + 0x14]
        mov     eax, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [ebp - 0x1c]
        push    eax
        lea     ebx, [edi + edx*1 + 0xc]
        push    ecx
        mov     ecx, dword ptr [ebx]
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ebx, dword ptr [ebx]
        mov     edx, dword ptr [ebx]
        lea     eax, [ebp - 0x48]
        push    eax
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xc]
        shr     dword ptr [ebp - 0x4], 1
        mov     edx, dword ptr [ebp - 0x38]
        push    edx
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 0xc]
        mov     ebx, dword ptr [eax]
        mov     ecx, dword ptr [ebp - 0x60]
        mov     edx, dword ptr [ebp - 0x4]
        push    1
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [ebp - 0x2c]
        push    0x3f666666
        push    eax
        xor     eax, eax
        mov     dword ptr [ebp - 0x124], ecx
        mov     dword ptr [ebp - 0x120], eax
        fild    qword ptr [ebp - 0x124]
        mov     dword ptr [ebp - 0xe4], edx
        mov     dword ptr [ebp - 0xe0], eax
        push    ecx
        fadd    dword ptr [ebp - 0x80]
        lea     ecx, [ebp - 0x178]
        fisub   dword ptr [ebp - 0xe4]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x20]
        call    dword ptr [ebx + 0x14]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [ebp - 0x1c]
        push    ecx
        mov     ecx, dword ptr [edi + eax*1 + 0x10]
        lea     ebx, [edi + eax*1 + 0x10]
        push    edx
        call    FUN_005603e0
        fld     dword ptr [ebp - 0x2c]
        fadd    dword ptr [ebp - 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebx]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ebx, dword ptr [ebx]
        mov     eax, dword ptr [ebx]
        lea     ecx, [ebp - 0x48]
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0xc]
        shr     dword ptr [ebp - 0x4], 1
        mov     eax, dword ptr [ebp - 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_0062ba00
        mov     eax, dword ptr [eax + 0x10]
        mov     ebx, dword ptr [eax]
        mov     edx, dword ptr [ebp - 0x68]
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x20], eax
        push    1
        xor     eax, eax
        push    0x3f666666
        mov     dword ptr [ebp - 0xb4], edx
        mov     dword ptr [ebp - 0xb0], eax
        fild    qword ptr [ebp - 0xb4]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4]
        fadd    dword ptr [ebp - 0x84]
        mov     dword ptr [ebp - 0x40], ecx
        mov     dword ptr [ebp - 0x3c], eax
        fisub   dword ptr [ebp - 0x40]
        push    ecx
        lea     ecx, [ebp - 0x190]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [ebp - 0x20]
    b548:
        call    dword ptr [ebx + 0x14]
        fld     dword ptr [ebp - 0x58]
        fadd    dword ptr [g_78d0e0]
        mov     ebx, dword ptr [ebp - 0x90]
        fstp    dword ptr [ebp - 0x58]
    b55d:
        mov     ecx, dword ptr [ebp - 0x38]
        mov     edx, dword ptr [esi]
        inc     ecx
        mov     dword ptr [ebp - 0x38], ecx
        mov     ecx, dword ptr [esi + 4]
        sub     ecx, edx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     eax, dword ptr [ebp - 0x38]
        add     edi, 0x1c
        cmp     eax, edx
        /* __emit: backward jc rel-offset miscomputed by MSVC6 (off-by-2
           because a call-reloc sits between branch and target); ref B3 F3 FF FF. */
        __emit 0x0F
        __emit 0x82
        __emit 0xB3
        __emit 0xF3
        __emit 0xFF
        __emit 0xFF
    b58c:
        mov     ecx, dword ptr [ebp - 0xbc]
        mov     dword ptr [g_7dddb4], ecx
    exit:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
