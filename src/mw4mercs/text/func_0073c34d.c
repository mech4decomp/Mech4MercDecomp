/*
 * FUN_0073c34d (extent 0x73c34d-0x73c9cc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern float  g_0076d064;
extern float  g_0076e1f0;
extern float  g_0077a198;
extern float  g_00781f5c;
extern float  g_00781f64;
extern int    g_007b73d8;
extern int    g_007b73ec;
extern int    g_007b73f0;
extern int    g_0085894c;
extern int    g_00858950;
extern char   g_00858954;
extern int    g_00858974;
extern int    g_00859278;
extern int    g_00859d70;
extern int    g_00859d78;
extern int    g_0085a22c;
extern int    g_0085a258;
extern int    g_0085a25c;
extern float  g_0085a268;
extern int    g_0087c2a0;
extern int    g_0087c2b8;
extern int    g_0087c2bc;
extern int    g_0087c2c0;
extern char   g_008aa9e4;
extern int    g_008aaeb4;
extern int    g_008aaef8;
extern int    g_008aba74;
extern int    g_008b2520;
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_00709d40(void);
extern void __cdecl FUN_00734f60(void);
extern void __cdecl FUN_0073c300(void);
extern void __cdecl FUN_0073c320(void);

__declspec(naked) void FUN_0073c34d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    al, 1
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
        nop    
        mov    cl, byte ptr [g_008aa9e4]
        xor    eax, eax
        test    cl, cl
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_0087c2b8]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_0087c2bc]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_0087c2a0]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_00859d70]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_00858950]
        xor    eax, eax
        cmp    ecx, 3
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_0085a258]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_0085a25c]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_00859d78]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_00859278]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_007b73d8]
        test    eax, eax
        je    L_c418
        mov    eax, dword ptr [g_008aaeb4]
        test    eax, eax
        jne    L_c418
        mov    eax, 1
        ret    
L_c418:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    cl, byte ptr [g_00858954]
        xor    eax, eax
        test    cl, cl
        sete    al
        ret    
        nop    
        nop    
        mov    cl, byte ptr [g_00858954]
        xor    eax, eax
        test    cl, cl
        setne    al
        ret    
        nop    
        nop    
        fld    dword ptr [g_0085a268]
        fcomp    dword ptr [g_0077a198]
        fnstsw  ax
        test    ah, 0x40
        je    L_c459
        mov    eax, 1
        ret    
L_c459:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        push    0x3f4ccccd
        call    FUN_00709d40
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_0085a268]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x40
        je    L_c489
        mov    eax, 1
        ret    
L_c489:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        push    0x3f800000
        call    FUN_00709d40
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_0085a268]
        fcomp    dword ptr [g_00781f5c]
        fnstsw  ax
        test    ah, 0x40
        je    L_c4b9
        mov    eax, 1
        ret    
L_c4b9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        push    0x3fb33333
        call    FUN_00709d40
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_0085a268]
        fcomp    dword ptr [g_00781f64]
        fnstsw  ax
        test    ah, 0x40
        je    L_c4e9
        mov    eax, 1
        ret    
L_c4e9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        push    0x3fe66666
        call    FUN_00709d40
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_0085a268]
        fcomp    dword ptr [g_0076e1f0]
        fnstsw  ax
        test    ah, 0x40
        je    L_c519
        mov    eax, 1
        ret    
L_c519:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        push    0x40200000
        call    FUN_00709d40
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008b2520]
        shr    eax, 6
        and    eax, 1
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    cl, byte ptr [g_008b2520]
        mov    eax, 0x40
        test    cl, al
        je    L_c557
        and    dword ptr [g_008b2520], 0xffffffbf
        ret    
L_c557:
        or    dword ptr [g_008b2520], eax
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_008aba74]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_008aba74]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_008aba74]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_008aba74]
        xor    eax, eax
        cmp    ecx, 3
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_008aba74]
        xor    eax, eax
        cmp    ecx, 4
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b73ec]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    dword ptr [g_008aba74], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_008aba74], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_008aba74], 2
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_008aba74], 3
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_008aba74], 4
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b73ec]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    dword ptr [g_007b73ec], eax
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
        nop    
        mov    ecx, dword ptr [g_008aba74]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_008aba74]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b73f0]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b73f0]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    dword ptr [g_007b73f0], eax
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
        nop    
        push    esi
        mov    esi, dword ptr [g_007b73f0]
        push    0
        push    0
        push    0
        push    0x18
        mov    dword ptr [g_007b73f0], 1
        call    FUN_00704a80
        test    eax, eax
        jne    L_c6c8
        push    eax
        push    eax
        push    eax
        push    0x19
        call    FUN_00704a80
        test    eax, eax
        jne    L_c6c8
        push    eax
        push    eax
        push    eax
        push    0x1a
        call    FUN_00704a80
        test    eax, eax
        jne    L_c6c8
        mov    dword ptr [g_007b73f0], esi
        mov    al, 1
        pop    esi
        ret    
L_c6c8:
        mov    dword ptr [g_007b73f0], esi
        xor    al, al
        pop    esi
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
        nop    
        nop    
        mov    eax, dword ptr [g_0085894c]
        push    0x180
        push    0x200
        push    eax
        push    0x13
        call    FUN_00704a80
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_0085894c]
        push    0x1e0
        push    0x280
        push    eax
        push    0x13
        call    FUN_00704a80
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_0085894c]
        push    0x258
        push    0x320
        push    eax
        push    0x13
        call    FUN_00704a80
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_0085894c]
        push    0x300
        push    0x400
        push    eax
        push    0x13
        call    FUN_00704a80
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_0085894c]
        push    0x400
        push    0x500
        push    eax
        push    0x13
        call    FUN_00704a80
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_0085894c]
        push    0x4b0
        push    0x640
        push    eax
        push    0x13
        call    FUN_00704a80
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_0087c2c0]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        sub    esp, 0x18
        xor    eax, eax
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 0x10], eax
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_0085a22c]
        lea    edx, [esp + 4]
        mov    dword ptr [esp + 0x18], eax
        push    edx
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x18], 0x10005000
        call    FUN_00734f60
        __emit 0x81  // cmp dword ptr [esp+0], imm32 (explicit disp8=0)
__emit 0x7C
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x40
__emit 0x00
        sbb    eax, eax
        neg    eax
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        xor    eax, eax
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 0x10], eax
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_0085a22c]
        lea    edx, [esp + 4]
        mov    dword ptr [esp + 0x18], eax
        push    edx
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x18], 0x10005000
        call    FUN_00734f60
        __emit 0x81  // cmp dword ptr [esp+0], imm32 (explicit disp8=0)
__emit 0x7C
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x80
__emit 0x00
        sbb    eax, eax
        neg    eax
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        xor    eax, eax
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 0x10], eax
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_0085a22c]
        lea    edx, [esp + 4]
        mov    dword ptr [esp + 0x18], eax
        push    edx
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x18], 0x10005000
        call    FUN_00734f60
        __emit 0x81  // cmp dword ptr [esp+0], imm32 (explicit disp8=0)
__emit 0x7C
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x01
        sbb    eax, eax
        neg    eax
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        xor    eax, eax
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 0x10], eax
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_0085a22c]
        lea    edx, [esp + 4]
        mov    dword ptr [esp + 0x18], eax
        push    edx
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x18], 0x10005000
        call    FUN_00734f60
        __emit 0x81  // cmp dword ptr [esp+0], imm32 (explicit disp8=0)
__emit 0x7C
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x02
        sbb    eax, eax
        neg    eax
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        xor    eax, eax
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 0x10], eax
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_0085a22c]
        lea    edx, [esp + 4]
        mov    dword ptr [esp + 0x18], eax
        push    edx
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x18], 0x10005000
        call    FUN_00734f60
        __emit 0x81  // cmp dword ptr [esp+0], imm32 (explicit disp8=0)
__emit 0x7C
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x04
        sbb    eax, eax
        neg    eax
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_008aaef8]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_008aaef8]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    dword ptr [g_008aaef8], eax
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
        nop    
        mov    eax, dword ptr [esp + 8]
        cmp    eax, 3
        ja    L_c9c4
        jmp    dword ptr [eax*4 + 0x73c9cc]
        mov    eax, dword ptr [g_00858974]
        test    eax, eax
        je    L_c9aa
        cmp    byte ptr [eax], 0
        je    L_c9aa
        push    eax
        push    0x7a71bc
        push    0x8aadcc
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        mov    eax, 0x8aadcc
        ret    8
L_c9aa:
        mov    eax, 0x7a71a8
        ret    8
        call    FUN_0073c300
        and    eax, 0xff
        ret    8
        call    FUN_0073c320
L_c9c4:
        xor    eax, eax
        ret    8
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0073C9CC (62 relocated pointers)
        __emit 0x80
        __emit 0xC9
        __emit 0x73
        __emit 0x00
        __emit 0xB2
        __emit 0xC9
        __emit 0x73
        __emit 0x00
        __emit 0xC4
        __emit 0xC9
        __emit 0x73
        __emit 0x00
        __emit 0xBF
        __emit 0xC9
        __emit 0x73
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x53
        __emit 0x56
        __emit 0xBE
        __emit 0xF4
        __emit 0x18
        __emit 0x77
        __emit 0x00
        __emit 0xB8
        __emit 0x78
        __emit 0xAF
        __emit 0x85
        __emit 0x00
        __emit 0x8A
        __emit 0x10
        __emit 0x8A
        __emit 0x1E
        __emit 0x8A
        __emit 0xCA
        __emit 0x3A
        __emit 0xD3
        __emit 0x75
        __emit 0x28
        __emit 0x84
        __emit 0xC9
        __emit 0x74
        __emit 0x16
        __emit 0x8A
        __emit 0x50
        __emit 0x01
        __emit 0x8A
        __emit 0x5E
        __emit 0x01
        __emit 0x8A
        __emit 0xCA
        __emit 0x3A
        __emit 0xD3
        __emit 0x75
        __emit 0x18
        __emit 0x83
        __emit 0xC0
        __emit 0x02
        __emit 0x83
        __emit 0xC6
        __emit 0x02
        __emit 0x84
        __emit 0xC9
        __emit 0x75
        __emit 0xDC
        __emit 0x33
        __emit 0xC0
        __emit 0x33
        __emit 0xC9
        __emit 0x85
        __emit 0xC0
        __emit 0x0F
        __emit 0x94
        __emit 0xC1
        __emit 0x5E
        __emit 0x8A
        __emit 0xC1
        __emit 0x5B
        __emit 0xC3
        __emit 0x1B
        __emit 0xC0
        __emit 0x83
        __emit 0xD8
        __emit 0xFF
        __emit 0x33
        __emit 0xC9
        __emit 0x85
        __emit 0xC0
        __emit 0x0F
        __emit 0x94
        __emit 0xC1
        __emit 0x5E
        __emit 0x8A
        __emit 0xC1
        __emit 0x5B
        __emit 0xC3
        __emit 0x90
        __emit 0x83
        __emit 0xEC
        __emit 0x24
        __emit 0x53
        __emit 0x56
        __emit 0x57
        __emit 0xBE
        __emit 0xF4
        __emit 0x18
        __emit 0x77
        __emit 0x00
        __emit 0xB8
        __emit 0x78
        __emit 0xAF
        __emit 0x85
        __emit 0x00
        __emit 0x8A
        __emit 0x10
        __emit 0x8A
        __emit 0x1E
        __emit 0x8A
        __emit 0xCA
        __emit 0x3A
        __emit 0xD3
        __emit 0x75
        __emit 0x1E
        __emit 0x84
        __emit 0xC9
        __emit 0x74
        __emit 0x16
        __emit 0x8A
        __emit 0x50
        __emit 0x01
        __emit 0x8A
        __emit 0x5E
        __emit 0x01
        __emit 0x8A
        __emit 0xCA
        __emit 0x3A
        __emit 0xD3
        __emit 0x75
        __emit 0x0E
        __emit 0x83
        __emit 0xC0
        __emit 0x02
        __emit 0x83
        __emit 0xC6
        __emit 0x02
        __emit 0x84
        __emit 0xC9
        __emit 0x75
        __emit 0xDC
        __emit 0x33
        __emit 0xC0
        __emit 0xEB
        __emit 0x05
        __emit 0x1B
        __emit 0xC0
        __emit 0x83
        __emit 0xD8
        __emit 0xFF
        __emit 0x85
        __emit 0xC0
        __emit 0x0F
        __emit 0x85
        __emit 0xF2
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x6A
        __emit 0x1F
        __emit 0xE8
        __emit 0xB4
        __emit 0x27
        __emit 0xFE
        __emit 0xFF
        __emit 0x50
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x14
        __emit 0x50
        __emit 0xFF
        __emit 0x15
        __emit 0x20
        __emit 0xB3
        __emit 0x76
        __emit 0x00
        __emit 0x83
        __emit 0xC9
        __emit 0xFF
        __emit 0x33
        __emit 0xC0
        __emit 0x83
        __emit 0xC4
        __emit 0x0C
        __emit 0x8D
        __emit 0x7C
        __emit 0x24
        __emit 0x0C
        __emit 0xF2
        __emit 0xAE
        __emit 0xF7
        __emit 0xD1
        __emit 0x2B
        __emit 0xF9
        __emit 0x8B
        __emit 0xD1
        __emit 0xC1
        __emit 0xE9
        __emit 0x02
        __emit 0x8B
        __emit 0xF7
        __emit 0xBF
        __emit 0x78
        __emit 0xAF
        __emit 0x85
        __emit 0x00
        __emit 0xF3
        __emit 0xA5
        __emit 0x8B
        __emit 0xCA
        __emit 0x83
        __emit 0xE1
        __emit 0x03
        __emit 0xF3
        __emit 0xA4
        __emit 0x83
        __emit 0xC9
        __emit 0xFF
        __emit 0xBF
        __emit 0x8C
        __emit 0xCB
        __emit 0x76
        __emit 0x00
        __emit 0xF2
        __emit 0xAE
        __emit 0xF7
        __emit 0xD1
        __emit 0x2B
        __emit 0xF9
        __emit 0x8B
        __emit 0xD1
        __emit 0x83
        __emit 0xC9
        __emit 0xFF
        __emit 0x8B
        __emit 0xF7
        __emit 0xBF
        __emit 0x78
        __emit 0xAF
    }
}
