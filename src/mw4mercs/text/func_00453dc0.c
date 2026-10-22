/*
 * FUN_00453dc0 (extent 0x453dc0-0x454eb3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076ea28;
extern float  g_0076eb10;
extern int    g_007b9590;
extern int    g_007b98cc;
extern int    g_007b98d0;
extern int    g_007da724;
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00450b10(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_00487ce0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00453dc0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xbc
        mov    eax, dword ptr [g_007b9590]
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3df7
        mov    ecx, dword ptr [g_007da724]
        push    ecx
        push    1
        mov    ecx, eax
        call    FUN_00487830
        mov    dword ptr [ebp - 0x74], eax
        jmp    L_3dfe
L_3df7:
        mov    dword ptr [ebp - 0x74], 0
L_3dfe:
        push    ebx
        push    esi
        push    edi
        call    FUN_006f49a0
        mov    edx, dword ptr [g_007b98d0]
        push    edx
        call    FUN_006f4950
        push    0x70
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3e32
        mov    ecx, dword ptr [g_007b98cc]
        push    ecx
        mov    ecx, eax
        call    FUN_00450b10
        mov    esi, eax
        jmp    L_3e34
L_3e32:
        xor    esi, esi
L_3e34:
        lea    ecx, [ebp - 0x58]
        mov    dword ptr [ebp - 0x18], esi
        call    FUN_00491280
        mov    eax, dword ptr [ebp - 0x58]
        mov    ecx, dword ptr [ebp - 0x54]
        mov    edx, dword ptr [ebp - 0x50]
        mov    edi, dword ptr [ebp - 0x48]
        and    eax, 0xffff3fff
        and    ecx, 0xffffffef
        or    eax, 0x10000
        or    edx, 0x1c000
        and    eax, 0xffffc000
        and    ecx, 0xfffffff0
        or    edi, 0x10
        mov    dword ptr [ebp - 0x58], eax
        or    edx, 0x3fff
        or    ecx, 2
        or    edi, 0xf
        mov    dword ptr [ebp - 0x54], ecx
        push    0
        lea    eax, [ebp - 0x58]
        mov    dword ptr [ebp - 0x50], edx
        mov    dword ptr [ebp - 0x48], edi
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        mov    eax, dword ptr [ebp + 0x1c]
        cmp    eax, 2
        mov    edi, dword ptr [esi + 0xc]
        jne    L_46a9
        mov    ebx, dword ptr [edi + 0x14]
        cmp    ebx, 5
        je    L_3f30
        push    0x3c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3ecd
        push    0x454eb0
        push    5
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [ebp + 0x1c], esi
        jmp    L_3ed4
L_3ecd:
        mov    dword ptr [ebp + 0x1c], 0
L_3ed4:
        mov    eax, dword ptr [edi + 0x10]
        test    eax, eax
        je    L_3f23
        cmp    ebx, 5
        mov    eax, 5
        ja    L_3ee7
        mov    eax, ebx
L_3ee7:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_3f17
        mov    edx, dword ptr [ebp + 0x1c]
        lea    ecx, [eax + eax*2]
        lea    esi, [edx + ecx*4]
        mov    ecx, dword ptr [edi + 0x10]
        sub    ecx, edx
        mov    dword ptr [ebp - 0x24], ecx
        lea    ebx, [eax + 1]
L_3f02:
        mov    edx, dword ptr [ebp - 0x24]
        add    edx, esi
        push    edx
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_3f02
L_3f17:
        mov    eax, dword ptr [edi + 0x10]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3f23:
        mov    eax, dword ptr [ebp + 0x1c]
        mov    dword ptr [edi + 0x10], eax
        mov    dword ptr [edi + 0x14], 5
L_3f30:
        mov    ebx, dword ptr [edi + 4]
        cmp    ebx, 9
        je    L_3f7c
        push    9
        call    FUN_004084d0
        mov    ecx, dword ptr [edi]
        add    esp, 4
        test    ecx, ecx
        mov    esi, eax
        je    L_3f73
        cmp    ebx, 9
        mov    eax, 9
        ja    L_3f56
        mov    eax, ebx
L_3f56:
        mov    edx, eax
        dec    eax
        test    edx, edx
        je    L_3f6a
L_3f5d:
        mov    dl, byte ptr [ecx + eax]
        mov    byte ptr [eax + esi], dl
        mov    edx, eax
        dec    eax
        test    edx, edx
        jne    L_3f5d
L_3f6a:
        push    ecx
        call    FUN_004084e0
        add    esp, 4
L_3f73:
        mov    dword ptr [edi], esi
        mov    dword ptr [edi + 4], 9
L_3f7c:
        mov    ebx, dword ptr [edi + 0x1c]
        cmp    ebx, 5
        je    L_3ff1
        push    0x28
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3fa5
        push    0x423b70
        push    5
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_3fa7
L_3fa5:
        xor    esi, esi
L_3fa7:
        mov    ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        je    L_3fe7
        cmp    ebx, 5
        mov    edx, 5
        ja    L_3fba
        mov    edx, ebx
L_3fba:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_3fdb
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_3fc7:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_3fc7
L_3fdb:
        mov    eax, dword ptr [edi + 0x18]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3fe7:
        mov    dword ptr [edi + 0x18], esi
        mov    dword ptr [edi + 0x1c], 5
L_3ff1:
        mov    ebx, dword ptr [edi + 0x24]
        cmp    ebx, 5
        je    L_4048
        push    0x14
        call    FUN_004084d0
        mov    edx, dword ptr [edi + 0x20]
        add    esp, 4
        test    edx, edx
        mov    esi, eax
        je    L_403e
        cmp    ebx, 5
        mov    ecx, 5
        ja    L_4018
        mov    ecx, ebx
L_4018:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_4032
        lea    eax, [esi + ecx*4]
        sub    edx, esi
        inc    ecx
L_4025:
        mov    ebx, dword ptr [edx + eax]
        mov    dword ptr [eax], ebx
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_4025
L_4032:
        mov    eax, dword ptr [edi + 0x20]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_403e:
        mov    dword ptr [edi + 0x20], esi
        mov    dword ptr [edi + 0x24], 5
L_4048:
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx]
        push    1
        push    3
        push    0
        call    dword ptr [edx + 0xc]
        fld    dword ptr [ebp + 0x10]
        fsin    
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        push    0
        push    0
        mov    dword ptr [ebp - 0x40], ecx
        push    0
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [ebp - 0x3c], edx
        mov    dword ptr [ebp - 0x38], eax
        mov    dword ptr [ebp - 0x34], 0
        fld    dword ptr [ebp + 8]
        fmul st(0), st(1)
        fstp    dword ptr [ebp + 0x1c]
        fld    dword ptr [ebp + 0xc]
        fmul st(0), st(1)
        fstp    dword ptr [ebp + 0x10]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_0040c9c0
        mov    esi, dword ptr [edi + 0x10]
        lea    ecx, [ebp - 0x30]
        push    ecx
        mov    ecx, esi
        call    FUN_0040c410
        mov    edx, dword ptr [ebp + 0x1c]
        mov    ebx, dword ptr [ebp + 8]
        push    0
        push    edx
        push    ebx
        lea    ecx, [ebp - 0x30]
        call    FUN_0040c9c0
        lea    eax, [ebp - 0x30]
        push    eax
        lea    ecx, [esi + 0xc]
        call    FUN_0040c410
        fld    dword ptr [ebp + 0x1c]
        push    0
        fchs    
        push    ecx
        fstp    dword ptr [esp]
        push    ebx
        lea    ecx, [ebp - 0x30]
        call    FUN_0040c9c0
        lea    ecx, [ebp - 0x30]
        push    ecx
        lea    ecx, [esi + 0x18]
        call    FUN_0040c410
        mov    edx, dword ptr [ebp + 0x10]
        mov    ebx, dword ptr [ebp + 0xc]
        push    0
        push    edx
        push    ebx
        lea    ecx, [ebp - 0x30]
        call    FUN_0040c9c0
        lea    eax, [ebp - 0x30]
        push    eax
        lea    ecx, [esi + 0x24]
        call    FUN_0040c410
        fld    dword ptr [ebp + 0x10]
        push    0
        fchs    
        push    ecx
        fstp    dword ptr [esp]
        push    ebx
        lea    ecx, [ebp - 0x30]
        call    FUN_0040c9c0
        lea    ecx, [ebp - 0x30]
        push    ecx
        lea    ecx, [esi + 0x30]
        call    FUN_0040c410
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 0x14]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp + 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    edx, dword ptr [edi + 0x20]
        mov    eax, dword ptr [ebp + 0x1c]
        mov    dword ptr [edx], eax
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 0x18]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp + 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    ecx, dword ptr [edi + 0x20]
        mov    edx, dword ptr [ebp + 0x1c]
        mov    dword ptr [ecx + 4], edx
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 0x18]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp + 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    eax, dword ptr [edi + 0x20]
        mov    ecx, dword ptr [ebp + 0x1c]
        lea    edx, [ebp - 0x40]
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [ebp + 0x18], edx
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 0x18]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp + 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    eax, dword ptr [edi + 0x20]
        mov    ecx, dword ptr [ebp + 0x1c]
        lea    edx, [ebp - 0x40]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [ebp + 0x18], edx
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 0x18]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp + 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp + 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp + 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp + 0x1c], ecx
        mov    eax, dword ptr [edi + 0x20]
        mov    ecx, dword ptr [ebp + 0x1c]
        mov    dword ptr [eax + 0x10], ecx
        mov    eax, dword ptr [edi + 0x18]
        mov    esi, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0xc], 0
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [eax], edx
        mov    dword ptr [ebp - 8], 0
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [ebp - 0xc], 0
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [ebp - 8], 0
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [ebp - 0xc], 0
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [ebp - 8], 0
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [ebp - 0xc], 0
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [eax + 0x18], edx
        mov    dword ptr [ebp - 8], 0
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [eax + 0x1c], ecx
        mov    dword ptr [ebp - 0xc], 0
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [eax + 0x20], edx
        mov    dword ptr [ebp - 8], 0
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [eax + 0x24], ecx
        mov    eax, dword ptr [edi]
        mov    byte ptr [eax], 0
        mov    ebx, 1
        mov    byte ptr [eax + 1], bl
        mov    cl, 2
        mov    byte ptr [eax + 2], cl
        mov    byte ptr [eax + 3], bl
        mov    byte ptr [eax + 4], 3
        mov    dl, 4
        mov    byte ptr [eax + 5], dl
        mov    byte ptr [eax + 6], bl
        mov    byte ptr [eax + 7], dl
        mov    edx, dword ptr [esi]
        mov    byte ptr [eax + 8], cl
        mov    eax, dword ptr [edi + 0x10]
        push    5
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x20]
        mov    edx, dword ptr [esi]
        push    5
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xa4]
        mov    edx, dword ptr [esi]
        push    5
        mov    eax, dword ptr [edi + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x2c]
        mov    eax, dword ptr [edi]
        mov    edx, dword ptr [esi]
        push    9
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
        jmp    L_4e6b
L_46a9:
        lea    esi, [eax + eax + 1]
        cmp    esi, dword ptr [edi + 0x14]
        mov    dword ptr [ebp - 0x70], edi
        mov    dword ptr [ebp - 0x24], esi
        je    L_4760
        test    esi, esi
        jbe    L_474a
        lea    ecx, [esi + esi*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        test    ebx, ebx
        je    L_46ec
        push    0x454eb0
        push    esi
        push    0xc
        push    ebx
        call    FUN_00406c90
        mov    dword ptr [ebp - 0x14], ebx
        jmp    L_46f3
L_46ec:
        mov    dword ptr [ebp - 0x14], 0
L_46f3:
        mov    eax, dword ptr [edi + 0x10]
        test    eax, eax
        je    L_4742
        mov    eax, dword ptr [edi + 0x14]
        cmp    esi, eax
        jae    L_4703
        mov    eax, esi
L_4703:
        mov    edx, eax
        dec    eax
        test    edx, edx
        je    L_4736
        mov    edx, dword ptr [ebp - 0x14]
        lea    ecx, [eax + eax*2]
        lea    esi, [edx + ecx*4]
        mov    ecx, dword ptr [edi + 0x10]
        sub    ecx, edx
        mov    dword ptr [ebp - 0x10], ecx
        lea    ebx, [eax + 1]
L_471e:
        mov    edx, dword ptr [ebp - 0x10]
        add    edx, esi
        push    edx
        mov    ecx, esi
        call    FUN_0040c410
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_471e
        mov    esi, dword ptr [ebp - 0x24]
L_4736:
        mov    eax, dword ptr [edi + 0x10]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4742:
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [edi + 0x10], eax
        jmp    L_475d
L_474a:
        mov    ecx, dword ptr [edi + 0x10]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0x10], 0
L_475d:
        mov    dword ptr [edi + 0x14], esi
L_4760:
        mov    ebx, dword ptr [ebp + 0x1c]
        mov    eax, dword ptr [edi + 4]
        lea    ebx, [ebx + ebx*8]
        cmp    ebx, eax
        mov    dword ptr [ebp - 8], ebx
        je    L_47ce
        test    ebx, ebx
        jbe    L_47ba
        push    ebx
        call    FUN_004084d0
        mov    dword ptr [ebp - 4], eax
        mov    eax, dword ptr [edi]
        add    esp, 4
        test    eax, eax
        je    L_47b3
        mov    eax, dword ptr [edi + 4]
        cmp    ebx, eax
        jae    L_478f
        mov    eax, ebx
L_478f:
        mov    edx, eax
        dec    eax
        test    edx, edx
        je    L_47a8
L_4796:
        mov    ecx, dword ptr [edi]
        mov    cl, byte ptr [eax + ecx]
        mov    edx, dword ptr [ebp - 4]
        mov    byte ptr [eax + edx], cl
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        jne    L_4796
L_47a8:
        mov    eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_47b3:
        mov    edx, dword ptr [ebp - 4]
        mov    dword ptr [edi], edx
        jmp    L_47cb
L_47ba:
        mov    eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi], 0
L_47cb:
        mov    dword ptr [edi + 4], ebx
L_47ce:
        cmp    esi, dword ptr [edi + 0x1c]
        je    L_4861
        test    esi, esi
        jbe    L_484b
        lea    ecx, [esi*8]
        push    ecx
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        test    ebx, ebx
        je    L_4801
        push    0x423b70
        push    esi
        push    8
        push    ebx
        call    FUN_00406c90
        jmp    L_4803
L_4801:
        xor    ebx, ebx
L_4803:
        mov    ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        mov    dword ptr [ebp - 4], ebx
        je    L_4846
        mov    edx, dword ptr [edi + 0x1c]
        cmp    esi, edx
        jae    L_4816
        mov    edx, esi
L_4816:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_483a
        lea    eax, [ebx + edx*8]
        sub    ecx, ebx
        inc    edx
L_4823:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_4823
        mov    ebx, dword ptr [ebp - 4]
L_483a:
        mov    eax, dword ptr [edi + 0x18]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4846:
        mov    dword ptr [edi + 0x18], ebx
        jmp    L_485e
L_484b:
        mov    ecx, dword ptr [edi + 0x18]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0x18], 0
L_485e:
        mov    dword ptr [edi + 0x1c], esi
L_4861:
        cmp    esi, dword ptr [edi + 0x24]
        je    L_48d3
        test    esi, esi
        jbe    L_48bd
        lea    edx, [esi*4]
        push    edx
        call    FUN_004084d0
        mov    edx, dword ptr [edi + 0x20]
        add    esp, 4
        test    edx, edx
        mov    ebx, eax
        mov    dword ptr [ebp - 0x10], ebx
        je    L_48b8
        mov    ecx, dword ptr [edi + 0x24]
        cmp    esi, ecx
        jae    L_488f
        mov    ecx, esi
L_488f:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_48ac
        lea    eax, [ebx + ecx*4]
        sub    edx, ebx
        inc    ecx
L_489c:
        mov    ebx, dword ptr [edx + eax]
        mov    dword ptr [eax], ebx
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_489c
        mov    ebx, dword ptr [ebp - 0x10]
L_48ac:
        mov    eax, dword ptr [edi + 0x20]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_48b8:
        mov    dword ptr [edi + 0x20], ebx
        jmp    L_48d0
L_48bd:
        mov    ecx, dword ptr [edi + 0x20]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0x20], 0
L_48d0:
        mov    dword ptr [edi + 0x24], esi
L_48d3:
        mov    eax, dword ptr [ebp + 0x1c]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx]
        lea    eax, [eax + eax*2]
        push    1
        push    eax
        push    0
        mov    dword ptr [ebp - 0x1c], eax
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        push    0
        push    0
        mov    dword ptr [ebp - 0x98], ecx
        push    0
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [ebp - 0x94], edx
        mov    dword ptr [ebp - 0x90], eax
        mov    dword ptr [ebp - 0x8c], 0
        call    FUN_0040c9c0
        lea    ecx, [ebp - 0x30]
        push    ecx
        mov    ecx, dword ptr [edi + 0x10]
        call    FUN_0040c410
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 0x14]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 4], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 4], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 4], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 4], ecx
        fld    dword ptr [ebp + 0x10]
        fsin    
        mov    edx, dword ptr [edi + 0x20]
        mov    eax, dword ptr [ebp - 4]
        mov    ecx, dword ptr [edi + 0x18]
        mov    dword ptr [edx], eax
        mov    dword ptr [ebp - 0x80], 0
        mov    edx, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 0x7c], 0
        mov    eax, dword ptr [ebp - 0x7c]
        mov    dword ptr [ecx], edx
        mov    dword ptr [ecx + 4], eax
        mov    eax, dword ptr [ebp + 0x1c]
        xor    edx, edx
        cmp    eax, edx
        mov    dword ptr [ebp + 0x10], edx
        fld    dword ptr [ebp + 8]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x78]
        fld    dword ptr [ebp + 0xc]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x88]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jle    L_4e28
        fild    dword ptr [ebp + 0x1c]
        mov    edi, dword ptr [ebp - 0x1c]
        lea    ecx, [ebp - 0x98]
        mov    dword ptr [ebp - 0xa4], ecx
        mov    cl, al
        fstp    qword ptr [ebp - 0x2c]
        inc    cl
        mov    dword ptr [ebp - 0xac], edx
        mov    dword ptr [ebp - 0xa8], edx
        mov    dword ptr [ebp - 0xa0], edx
        mov    dword ptr [ebp - 0x9c], edx
        mov    byte ptr [ebp + 0x17], cl
        lea    ecx, [eax*4 + 4]
        mov    dword ptr [ebp - 0x14], edx
        lea    edx, [eax*8 + 8]
        lea    eax, [eax + eax*2 + 3]
        shl    eax, 2
        mov    dword ptr [ebp - 4], edx
        mov    dword ptr [ebp - 0x6c], 8
        mov    dword ptr [ebp - 0x60], ecx
        mov    dword ptr [ebp - 0x5c], 4
        mov    dword ptr [ebp - 0x68], eax
        mov    dword ptr [ebp - 0x64], 0xc
L_4ac3:
        fild    dword ptr [ebp + 0x10]
        mov    edx, dword ptr [ebp + 8]
        push    edx
        push    ecx
        fmul    qword ptr [g_0076eb10]
        fdiv    qword ptr [ebp - 0x2c]
        fld    st(0)
        fcos    
        fstp    dword ptr [ebp - 0x84]
        fsin    
        fstp    dword ptr [ebp - 0x20]
        fld    dword ptr [ebp - 0x84]
        fmul    dword ptr [ebp - 0x78]
        fstp    dword ptr [esp]
        fld    dword ptr [ebp - 0x20]
        push    ecx
        fmul    dword ptr [ebp - 0x78]
        lea    ecx, [ebp - 0xbc]
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        mov    eax, dword ptr [ebp - 0x70]
        mov    esi, dword ptr [eax + 0x10]
        mov    edx, dword ptr [ebp - 0x64]
        lea    ecx, [ebp - 0xbc]
        push    ecx
        lea    ecx, [esi + edx]
        call    FUN_0040c410
        fld    dword ptr [ebp - 0x84]
        fmul    dword ptr [ebp - 0x88]
        mov    eax, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [ebp - 0x20]
        push    ecx
        fmul    dword ptr [ebp - 0x88]
        lea    ecx, [ebp - 0x3c]
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        mov    edx, dword ptr [ebp - 0x68]
        lea    ecx, [ebp - 0x3c]
        push    ecx
        lea    ecx, [esi + edx]
        call    FUN_0040c410
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 0x18]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    edx, dword ptr [ebp - 0x70]
        mov    eax, dword ptr [edx + 0x20]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    esi, dword ptr [ebp - 0x5c]
        mov    dword ptr [eax + esi], ecx
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp - 0xa4]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x7c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x7c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x10], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x7c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x7c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x10], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x7c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x7c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x10], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x7c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x7c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x10], ecx
        mov    eax, dword ptr [edx + 0x20]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    esi, dword ptr [ebp - 0x60]
        mov    dword ptr [eax + esi], ecx
        mov    eax, dword ptr [edx + 0x18]
        mov    ecx, dword ptr [ebp - 0x6c]
        mov    esi, dword ptr [ebp - 0xac]
        mov    dword ptr [eax + ecx], esi
        mov    esi, dword ptr [ebp - 0xa8]
        mov    dword ptr [eax + ecx + 4], esi
        mov    ecx, dword ptr [ebp - 4]
        mov    esi, dword ptr [ebp - 0xa0]
        mov    dword ptr [eax + ecx], esi
        mov    esi, dword ptr [ebp - 0x9c]
        mov    dword ptr [eax + ecx + 4], esi
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x14]
        mov    cl, al
        inc    cl
        inc    eax
        mov    byte ptr [esi + edx], 0
        mov    byte ptr [esi + edx + 1], cl
        mov    dword ptr [ebp - 0x20], eax
        cdq    
        idiv    dword ptr [ebp + 0x1c]
        mov    eax, dword ptr [ebp - 0x14]
        add    edi, 6
        mov    bl, dl
        inc    bl
        mov    byte ptr [esi + eax + 2], bl
        mov    al, byte ptr [ebp + 0x1c]
        mov    byte ptr [esi + edi - 6], cl
        add    al, dl
        mov    edx, dword ptr [ebp - 0x68]
        inc    al
        mov    byte ptr [esi + edi - 5], al
        mov    byte ptr [esi + edi - 4], bl
        mov    bl, byte ptr [ebp + 0x17]
        mov    byte ptr [esi + edi - 3], cl
        mov    cl, byte ptr [ebp + 0x10]
        add    cl, bl
        mov    ebx, dword ptr [ebp - 0x5c]
        mov    byte ptr [esi + edi - 2], cl
        mov    byte ptr [esi + edi - 1], al
        mov    esi, dword ptr [ebp - 0x64]
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, 0xc
        add    esi, ecx
        add    edx, ecx
        mov    dword ptr [ebp - 0x64], esi
        mov    esi, dword ptr [ebp - 0x60]
        mov    ecx, 4
        add    ebx, ecx
        add    esi, ecx
        mov    dword ptr [ebp - 0x68], edx
        mov    edx, dword ptr [ebp - 0x6c]
        mov    dword ptr [ebp - 0x5c], ebx
        mov    ebx, dword ptr [ebp - 4]
        mov    ecx, 8
        mov    dword ptr [ebp - 0x60], esi
        mov    esi, dword ptr [ebp - 0x14]
        add    edx, ecx
        add    ebx, ecx
        mov    ecx, dword ptr [ebp + 0x1c]
        add    esi, 3
        cmp    eax, ecx
        mov    dword ptr [ebp + 0x10], eax
        mov    dword ptr [ebp - 0x6c], edx
        mov    dword ptr [ebp - 4], ebx
        mov    dword ptr [ebp - 0x14], esi
        jl    L_4ac3
        mov    edi, dword ptr [ebp - 0x70]
L_4e28:
        mov    ebx, dword ptr [ebp - 0x24]
        mov    esi, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [edi + 0x10]
        mov    edx, dword ptr [esi]
        push    ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x20]
        mov    edx, dword ptr [esi]
        push    ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xa4]
        mov    eax, dword ptr [edi + 0x18]
        mov    edx, dword ptr [esi]
        push    ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x2c]
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
        mov    ebx, 1
L_4e6b:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x94]
        mov    edi, dword ptr [ebp - 0x74]
        push    esi
        mov    ecx, edi
        call    FUN_00487ce0
        dec    word ptr [esi + 8]
        cmp    word ptr [esi + 8], 0
        jne    L_4e96
        test    esi, esi
        je    L_4e96
        mov    eax, dword ptr [esi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [eax]
L_4e96:
        call    FUN_006f49a0
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        ret    
    }
}
