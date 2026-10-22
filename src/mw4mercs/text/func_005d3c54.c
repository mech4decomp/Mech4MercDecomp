/*
 * FUN_005d3c54 (extent 0x5d3c54-0x5d4d5c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern float  g_0076d064;
extern float  g_0076d3c8;
extern float  g_0076d598;
extern int    g_007b220c;
extern int    g_007f2440;
extern int    g_007f244c;
extern int    g_007f24cc;
extern int    g_007f24d8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_005b8920(void);
extern void __cdecl FUN_005dcd00(void);
extern void __cdecl FUN_005dcd40(void);
extern void __cdecl FUN_00687fd0(void);
extern void __cdecl FUN_00688430(void);
extern void __cdecl FUN_00688710(void);
extern void __cdecl FUN_00688790(void);
extern void __cdecl FUN_00689a10(void);
extern void __cdecl FUN_0068a0d0(void);
extern void __cdecl FUN_0068a0f0(void);
extern void __cdecl FUN_0068a990(void);
extern void __cdecl FUN_0068a9e0(void);
extern void __cdecl FUN_0068b380(void);
extern void __cdecl FUN_0068b510(void);
extern void __cdecl FUN_0068c1f0(void);
extern void __cdecl FUN_0068c2b0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005d3c54(void)
{
    __asm {
        /* jump-table DATA (patched absolute addresses) - literal bytes.
           MSVC6 inline asm has no data directive (dd), so emit as bytes. */
        __emit 0x4D  /* -> 0x005D3C4D */
        __emit 0x3C
        __emit 0x5D
        __emit 0x00
        __emit 0xDE  /* -> 0x005D39DE */
        __emit 0x39
        __emit 0x5D
        __emit 0x00
        __emit 0x14  /* -> 0x005D3B14 */
        __emit 0x3B
        __emit 0x5D
        __emit 0x00
        __emit 0x26  /* -> 0x005D3A26 */
        __emit 0x3A
        __emit 0x5D
        __emit 0x00
        __emit 0xCF  /* -> 0x005D3ACF */
        __emit 0x3A
        __emit 0x5D
        __emit 0x00
        __emit 0x30  /* -> 0x005D3B30 */
        __emit 0x3B
        __emit 0x5D
        __emit 0x00
        __emit 0x8E  /* -> 0x005D3B8E */
        __emit 0x3B
        __emit 0x5D
        __emit 0x00
        __emit 0xAC  /* -> 0x005D3BAC */
        __emit 0x3B
        __emit 0x5D
        __emit 0x00
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
        sub    esp, 8
        push    esi
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        je    L_3d52
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        je    L_3ca9
        cmp    dword ptr [eax + 8], 1
        je    L_3d52
L_3ca9:
        mov    eax, dword ptr [edi + 0x360]
        mov    ecx, dword ptr [eax + 0x410]
        mov    esi, dword ptr [eax + 0x40c]
        sub    ecx, esi
        sar    ecx, 2
        je    L_3cc9
        mov    edx, esi
        cmp    dword ptr [edx], 0
        jne    L_3cd9
L_3cc9:
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x1c4]
        pop    edi
        pop    esi
        add    esp, 8
        ret    
L_3cd9:
        mov    ecx, dword ptr [g_007f244c]
        push    ecx
        call    FUN_006f4950
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3d06
        mov    edx, dword ptr [g_007f2440]
        push    edi
        push    edx
        mov    ecx, eax
        call    FUN_0068c2b0
        mov    esi, eax
        jmp    L_3d08
L_3d06:
        xor    esi, esi
L_3d08:
        push    0
        mov    byte ptr [esi + 0x1b], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 8]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_3d32
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_3d34
L_3d32:
        xor    eax, eax
L_3d34:
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
L_3d52:
        pop    edi
        pop    esi
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        jne    L_3d7b
L_3d71:
        pop    edi
        xor    al, al
        pop    ebx
        add    esp, 8
        ret    0x14
L_3d7b:
        mov    eax, dword ptr [edi + 0x35c]
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        fild    dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        jle    L_3d9d
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_3da5
L_3d9d:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_3da5:
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_3dc4
        mov    dword ptr [esp + 0x18], 0xbf800000
        jmp    L_3ddd
L_3dc4:
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3ddd
        mov    dword ptr [esp + 0x18], 0x3f800000
L_3ddd:
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        mov    ebx, dword ptr [esp + 0x14]
        je    L_3e26
        cmp    dword ptr [eax + 8], 2
        jne    L_3e26
        mov    ecx, dword ptr [eax + 0x28]
        cmp    ecx, dword ptr [ebx + 0x30]
        jne    L_3e26
        mov    cl, byte ptr [eax + 0x1a]
        test    cl, cl
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0xc], edx
        je    L_3d71
        mov    cl, byte ptr [eax + 0x1b]
        test    cl, cl
        je    L_3e1c
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x1c4]
L_3e1c:
        pop    edi
        mov    al, 1
        pop    ebx
        add    esp, 8
        ret    0x14
L_3e26:
        mov    ecx, dword ptr [g_007f244c]
        push    esi
        push    ecx
        call    FUN_006f4950
        push    0x50
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3e54
        mov    edx, dword ptr [g_007f2440]
        push    edi
        push    edx
        mov    ecx, eax
        call    FUN_0068b510
        mov    esi, eax
        jmp    L_3e56
L_3e54:
        xor    esi, esi
L_3e56:
        push    ebx
        mov    ecx, esi
        call    FUN_0068c1f0
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x20]
        mov    dl, byte ptr [esp + 0x28]
        push    0
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x20], ecx
        mov    byte ptr [esi + 0x1b], dl
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_3ea3
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_3ea5
L_3ea3:
        xor    eax, eax
L_3ea5:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
        pop    esi
        pop    edi
        xor    al, al
        pop    ebx
        add    esp, 8
        ret    0x14
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        jne    L_3eeb
L_3ee1:
        pop    edi
        xor    al, al
        pop    ebx
        add    esp, 8
        ret    0x14
L_3eeb:
        mov    eax, dword ptr [edi + 0x35c]
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        fild    dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        jle    L_3f0d
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_3f15
L_3f0d:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_3f15:
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_3f34
        mov    dword ptr [esp + 0x18], 0xbf800000
        jmp    L_3f4d
L_3f34:
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3f4d
        mov    dword ptr [esp + 0x18], 0x3f800000
L_3f4d:
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        mov    ebx, dword ptr [esp + 0x14]
        je    L_3f96
        cmp    dword ptr [eax + 8], 9
        jne    L_3f96
        mov    ecx, dword ptr [eax + 0x28]
        cmp    ecx, dword ptr [ebx + 0x30]
        jne    L_3f96
        mov    cl, byte ptr [eax + 0x1a]
        test    cl, cl
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0xc], edx
        je    L_3ee1
        mov    cl, byte ptr [eax + 0x1b]
        test    cl, cl
        je    L_3f8c
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x1c4]
L_3f8c:
        pop    edi
        mov    al, 1
        pop    ebx
        add    esp, 8
        ret    0x14
L_3f96:
        mov    ecx, dword ptr [g_007f244c]
        push    esi
        push    ecx
        call    FUN_006f4950
        push    0x44
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3fc4
        mov    edx, dword ptr [g_007f2440]
        push    edi
        push    edx
        mov    ecx, eax
        call    FUN_0068a9e0
        mov    esi, eax
        jmp    L_3fc6
L_3fc4:
        xor    esi, esi
L_3fc6:
        push    ebx
        mov    ecx, esi
        call    FUN_0068b380
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x20]
        mov    dl, byte ptr [esp + 0x28]
        push    0
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x20], ecx
        mov    byte ptr [esi + 0x1b], dl
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_4013
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_4015
L_4013:
        xor    eax, eax
L_4015:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
        pop    esi
        pop    edi
        xor    al, al
        pop    ebx
        add    esp, 8
        ret    0x14
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        jne    L_405b
L_4051:
        pop    edi
        xor    al, al
        pop    ebx
        add    esp, 8
        ret    0x14
L_405b:
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        mov    ebx, dword ptr [esp + 0x14]
        je    L_4099
        cmp    dword ptr [eax + 8], 3
        jne    L_4099
        mov    ecx, dword ptr [eax + 0x28]
        cmp    ecx, dword ptr [ebx + 0x30]
        jne    L_4099
        mov    cl, byte ptr [eax + 0x1a]
        test    cl, cl
        je    L_4051
        mov    cl, byte ptr [eax + 0x1b]
        test    cl, cl
        je    L_408f
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x1c4]
L_408f:
        pop    edi
        mov    al, 1
        pop    ebx
        add    esp, 8
        ret    0x14
L_4099:
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x44
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_40c6
        mov    ecx, dword ptr [g_007f2440]
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_0068a0f0
        mov    esi, eax
        jmp    L_40c8
L_40c6:
        xor    esi, esi
L_40c8:
        push    ebx
        mov    ecx, esi
        call    FUN_0068a990
        mov    eax, dword ptr [edi + 0x35c]
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        fild    dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        jle    L_40f3
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_40fb
L_40f3:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_40fb:
        fcom    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_4112
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
        jmp    L_4127
L_4112:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4127
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_4127:
        mov    eax, dword ptr [esp + 0x20]
        fstp    dword ptr [esi + 0xc]
        mov    cl, byte ptr [esp + 0x28]
        push    0
        mov    dword ptr [esi + 0x20], eax
        mov    byte ptr [esi + 0x1b], cl
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_4168
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_416a
L_4168:
        xor    eax, eax
L_416a:
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
        pop    esi
        pop    edi
        xor    al, al
        pop    ebx
        add    esp, 8
        ret    0x14
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
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        jne    L_41c2
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0x7fffffff
        pop    ebx
        add    esp, 8
        ret    8
L_41c2:
        mov    ebp, dword ptr [edi + 0x35c]
        mov    eax, dword ptr [ebp + 0x78]
        lea    ecx, [ebp + 0x78]
        call    dword ptr [eax + 4]
        fild    dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x20]
        test    ecx, ecx
        jle    L_41e5
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_41ed
L_41e5:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_41ed:
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x20]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_420c
        mov    dword ptr [esp + 0x20], 0xbf800000
        jmp    L_4225
L_420c:
        fld    dword ptr [esp + 0x20]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4225
        mov    dword ptr [esp + 0x20], 0x3f800000
L_4225:
        mov    esi, dword ptr [edi + 0x364]
        test    esi, esi
        mov    ebx, dword ptr [esp + 0x1c]
        je    L_426f
        cmp    dword ptr [esi + 8], 4
        jne    L_426f
        mov    al, byte ptr [esi + 0x1a]
        test    al, al
        jne    L_426f
        mov    ecx, dword ptr [esi + 0x20]
        mov    edx, dword ptr [ecx + 0x30]
        cmp    edx, dword ptr [ebx + 0x30]
        jne    L_426f
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x40
        je    L_426f
        push    ebp
        mov    ecx, esi
        call    FUN_0068a0d0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
L_426f:
        mov    ecx, dword ptr [g_007f244c]
        push    ecx
        call    FUN_006f4950
        push    0x30
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_429c
        mov    edx, dword ptr [g_007f2440]
        push    edi
        push    edx
        mov    ecx, eax
        call    FUN_00689a10
        mov    esi, eax
        jmp    L_429e
L_429c:
        xor    esi, esi
L_429e:
        mov    eax, dword ptr [esi]
        push    ebx
        mov    ecx, esi
        mov    byte ptr [esi + 0x1b], 0
        call    dword ptr [eax + 0x10]
        mov    ecx, dword ptr [esp + 0x20]
        push    0
        mov    dword ptr [esi + 0xc], ecx
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_42e1
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_42e3
L_42e1:
        xor    eax, eax
L_42e3:
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        mov    edx, dword ptr [edi + 0x35c]
        push    edx
        mov    ecx, esi
        call    FUN_0068a0d0
        mov    esi, eax
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebp
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        jne    L_433b
L_4331:
        pop    edi
        xor    al, al
        pop    ebp
        add    esp, 0xc
        ret    0x14
L_433b:
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        mov    ebp, dword ptr [esp + 0x18]
        je    L_4379
        cmp    dword ptr [eax + 8], 2
        jne    L_4379
        mov    ecx, dword ptr [eax + 0x28]
        cmp    ecx, dword ptr [ebp + 0x30]
        jne    L_4379
        mov    cl, byte ptr [eax + 0x1a]
        test    cl, cl
        je    L_4331
        mov    cl, byte ptr [eax + 0x1b]
        test    cl, cl
        je    L_436f
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x1c4]
L_436f:
        pop    edi
        mov    al, 1
        pop    ebp
        add    esp, 0xc
        ret    0x14
L_4379:
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x50
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_43a6
        mov    ecx, dword ptr [g_007f2440]
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_0068b510
        mov    esi, eax
        jmp    L_43a8
L_43a6:
        xor    esi, esi
L_43a8:
        push    ebx
        push    ebp
        mov    ecx, esi
        call    FUN_0068c1f0
        mov    ebx, dword ptr [edi + 0x35c]
        mov    edx, dword ptr [ebx + 0x78]
        lea    ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        fild    dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        jle    L_43d4
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_43dc
L_43d4:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_43dc:
        fcom    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_43f3
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
        jmp    L_4408
L_43f3:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4408
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_4408:
        mov    eax, dword ptr [esp + 0x28]
        fstp    dword ptr [esi + 0xc]
        mov    cl, byte ptr [esp + 0x30]
        mov    dword ptr [esi + 0x20], eax
        mov    eax, dword ptr [ebx + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    byte ptr [esi + 0x1b], cl
        mov    dword ptr [esp + 0x10], edx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x14], ecx
        mov    edx, dword ptr [eax + 0x2c]
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_005b8920
        push    0
        mov    dword ptr [esi + 0x2c], eax
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        pop    ebx
        je    L_447c
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_447e
L_447c:
        xor    eax, eax
L_447e:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
        pop    esi
        pop    edi
        xor    al, al
        pop    ebp
        add    esp, 0xc
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebp
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        jne    L_44cb
L_44c1:
        pop    edi
        xor    al, al
        pop    ebp
        add    esp, 0xc
        ret    0x14
L_44cb:
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        mov    ebp, dword ptr [esp + 0x18]
        je    L_4509
        cmp    dword ptr [eax + 8], 9
        jne    L_4509
        mov    ecx, dword ptr [eax + 0x28]
        cmp    ecx, dword ptr [ebp + 0x30]
        jne    L_4509
        mov    cl, byte ptr [eax + 0x1a]
        test    cl, cl
        je    L_44c1
        mov    cl, byte ptr [eax + 0x1b]
        test    cl, cl
        je    L_44ff
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x1c4]
L_44ff:
        pop    edi
        mov    al, 1
        pop    ebp
        add    esp, 0xc
        ret    0x14
L_4509:
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x44
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4536
        mov    ecx, dword ptr [g_007f2440]
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_0068a9e0
        mov    esi, eax
        jmp    L_4538
L_4536:
        xor    esi, esi
L_4538:
        push    ebx
        push    ebp
        mov    ecx, esi
        call    FUN_0068b380
        mov    ebx, dword ptr [edi + 0x35c]
        mov    edx, dword ptr [ebx + 0x78]
        lea    ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        fild    dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        jle    L_4564
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_456c
L_4564:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_456c:
        fcom    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_4583
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
        jmp    L_4598
L_4583:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4598
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_4598:
        mov    eax, dword ptr [esp + 0x28]
        fstp    dword ptr [esi + 0xc]
        mov    cl, byte ptr [esp + 0x30]
        mov    dword ptr [esi + 0x20], eax
        mov    eax, dword ptr [ebx + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    byte ptr [esi + 0x1b], cl
        mov    dword ptr [esp + 0x10], edx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x14], ecx
        mov    edx, dword ptr [eax + 0x2c]
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_005b8920
        push    0
        mov    dword ptr [esi + 0x2c], eax
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        pop    ebx
        je    L_460c
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_460e
L_460c:
        xor    eax, eax
L_460e:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
        pop    esi
        pop    edi
        xor    al, al
        pop    ebp
        add    esp, 0xc
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebp
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        jne    L_465b
L_4651:
        pop    edi
        xor    al, al
        pop    ebp
        add    esp, 0xc
        ret    0x14
L_465b:
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        mov    ebp, dword ptr [esp + 0x18]
        je    L_4699
        cmp    dword ptr [eax + 8], 3
        jne    L_4699
        mov    ecx, dword ptr [eax + 0x28]
        cmp    ecx, dword ptr [ebp + 0x30]
        jne    L_4699
        mov    cl, byte ptr [eax + 0x1a]
        test    cl, cl
        je    L_4651
        mov    cl, byte ptr [eax + 0x1b]
        test    cl, cl
        je    L_468f
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x1c4]
L_468f:
        pop    edi
        mov    al, 1
        pop    ebp
        add    esp, 0xc
        ret    0x14
L_4699:
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x44
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_46c6
        mov    ecx, dword ptr [g_007f2440]
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_0068a0f0
        mov    esi, eax
        jmp    L_46c8
L_46c6:
        xor    esi, esi
L_46c8:
        push    ebx
        push    ebp
        mov    ecx, esi
        call    FUN_0068a990
        mov    ebx, dword ptr [edi + 0x35c]
        mov    edx, dword ptr [ebx + 0x78]
        lea    ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        fild    dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        jle    L_46f4
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_46fc
L_46f4:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_46fc:
        fcom    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_4713
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
        jmp    L_4728
L_4713:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4728
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_4728:
        mov    eax, dword ptr [esp + 0x28]
        fstp    dword ptr [esi + 0xc]
        mov    cl, byte ptr [esp + 0x30]
        mov    dword ptr [esi + 0x20], eax
        mov    eax, dword ptr [ebx + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    byte ptr [esi + 0x1b], cl
        mov    dword ptr [esp + 0x10], edx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x14], ecx
        mov    edx, dword ptr [eax + 0x2c]
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_005b8920
        push    0
        mov    dword ptr [esi + 0x2c], eax
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        pop    ebx
        je    L_479c
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_479e
L_479c:
        xor    eax, eax
L_479e:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
        pop    esi
        pop    edi
        xor    al, al
        pop    ebp
        add    esp, 0xc
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        je    L_492d
        mov    eax, dword ptr [g_007f24d8]
        mov    ebp, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_4807
        mov    eax, dword ptr [ebp + 0x170]
        mov    eax, dword ptr [eax + 0x30]
        jmp    L_480a
L_4807:
        mov    eax, dword ptr [ebp + 0x30]
L_480a:
        mov    ecx, dword ptr [edi + 0x364]
        test    ecx, ecx
        je    L_4846
        cmp    dword ptr [ecx + 8], 5
        jne    L_4846
        mov    edx, dword ptr [ecx + 0x20]
        cmp    dword ptr [edx + 0x30], eax
        jne    L_4846
        fld    dword ptr [ecx + 0x24]
        fild    dword ptr [esp + 0x1c]
        fcompp    
        fnstsw  ax
        test    ah, 0x40
        je    L_4846
        fld    dword ptr [ecx + 0x28]
        fild    dword ptr [esp + 0x20]
        fcompp    
        fnstsw  ax
        test    ah, 0x40
        jne    L_492d
L_4846:
        mov    eax, dword ptr [g_007f244c]
        push    eax
        call    FUN_006f4950
        push    0x44
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4872
        mov    ecx, dword ptr [g_007f2440]
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_00688790
        mov    esi, eax
        jmp    L_4874
L_4872:
        xor    esi, esi
L_4874:
        mov    edx, dword ptr [esi]
        push    ebp
        mov    ecx, esi
        mov    byte ptr [esi + 0x1b], 0
        call    dword ptr [edx + 0x10]
        fild    dword ptr [esp + 0x1c]
        mov    eax, dword ptr [edi + 0x35c]
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        fstp    dword ptr [esi + 0x24]
        fild    dword ptr [esp + 0x20]
        fstp    dword ptr [esi + 0x28]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        jle    L_48bd
        fild    dword ptr [esp + 0x24]
        fdiv    dword ptr [eax + 0x2bc]
        fcom    dword ptr [g_0076d3c8]
        fnstsw  ax
        test    ah, 1
        je    L_48c5
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_48bd:
        fld    dword ptr [g_0076d3c8]
        jmp    L_48da
L_48c5:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_48da
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_48da:
        push    0
        fstp    dword ptr [esi + 0x40]
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_490d
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_490f
L_490d:
        xor    eax, eax
L_490f:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
L_492d:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 8
        ret    0x10
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
        sub    esp, 8
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x2f2]
        test    al, al
        je    L_4a0a
        mov    eax, dword ptr [esi + 0x364]
        test    eax, eax
        je    L_4968
        cmp    dword ptr [eax + 8], 6
        je    L_4a0a
L_4968:
        mov    eax, dword ptr [g_007f244c]
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4995
        mov    ecx, dword ptr [g_007f2440]
        push    esi
        push    ecx
        mov    ecx, eax
        call    FUN_00688710
        mov    edi, eax
        jmp    L_4997
L_4995:
        xor    edi, edi
L_4997:
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        mov    byte ptr [edi + 0x1b], 0
        je    L_49af
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x118]
        jmp    L_49b9
L_49af:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x11c]
L_49b9:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1c4]
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 8]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_49e9
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_49eb
L_49e9:
        xor    eax, eax
L_49eb:
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, esi
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x14], edi
        call    FUN_005dcd00
        call    FUN_006f49a0
        pop    edi
L_4a0a:
        pop    esi
        add    esp, 8
        ret    4
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
        nop    
        sub    esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        je    L_4bad
        mov    ebx, dword ptr [esp + 0x28]
        mov    esi, dword ptr [edi + 0x364]
        test    esi, esi
        mov    eax, dword ptr [ebx]
        mov    ecx, dword ptr [ebx + 4]
        mov    edx, dword ptr [ebx + 8]
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], ecx
        mov    dword ptr [esp + 0x20], edx
        je    L_4ab6
        cmp    dword ptr [esi + 8], 7
        jne    L_4ab6
        mov    eax, dword ptr [esi + 0x20]
        mov    ecx, dword ptr [esi + 0x24]
        mov    edx, dword ptr [esi + 0x28]
        mov    dword ptr [esp + 0xc], eax
        mov    eax, dword ptr [g_007b220c]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x18], edx
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        je    L_4ab6
        mov    al, byte ptr [esi + 0x1a]
        test    al, al
        je    L_4bad
        mov    al, byte ptr [esi + 0x1b]
        test    al, al
        je    L_4aab
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x1c4]
L_4aab:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        add    esp, 0x18
        ret    0x10
L_4ab6:
        mov    ecx, dword ptr [g_007f244c]
        push    ecx
        call    FUN_006f4950
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4ae3
        mov    edx, dword ptr [g_007f2440]
        push    edi
        push    edx
        mov    ecx, eax
        call    FUN_00688430
        mov    esi, eax
        jmp    L_4ae5
L_4ae3:
        xor    esi, esi
L_4ae5:
        mov    eax, dword ptr [edi + 0x35c]
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        fild    dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [esp + 0x2c]
        test    ecx, ecx
        jle    L_4b07
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_4b0f
L_4b07:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_4b0f:
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x2c]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_4b2e
        mov    dword ptr [esp + 0x2c], 0xbf800000
        jmp    L_4b47
L_4b2e:
        fld    dword ptr [esp + 0x2c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4b47
        mov    dword ptr [esp + 0x2c], 0x3f800000
L_4b47:
        mov    edx, dword ptr [esi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [esp + 0x2c]
        mov    cl, byte ptr [esp + 0x34]
        push    0
        mov    dword ptr [esi + 0xc], eax
        mov    byte ptr [esi + 0x1b], cl
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_4b8d
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_4b8f
L_4b8d:
        xor    eax, eax
L_4b8f:
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
L_4bad:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x18
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebp
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2f2]
        test    al, al
        jne    L_4bdb
        pop    edi
        xor    al, al
        pop    ebp
        add    esp, 8
        ret    8
L_4bdb:
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        mov    ebp, dword ptr [esp + 0x14]
        je    L_4c05
        cmp    dword ptr [eax + 8], 8
        jne    L_4c05
        mov    ecx, dword ptr [eax + 0x20]
        mov    edx, dword ptr [ecx + 0x30]
        cmp    edx, dword ptr [ebp + 0x30]
        jne    L_4c05
        mov    al, byte ptr [eax + 0x1a]
        pop    edi
        pop    ebp
        add    esp, 8
        ret    8
L_4c05:
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4c32
        mov    ecx, dword ptr [g_007f2440]
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_00687fd0
        mov    esi, eax
        jmp    L_4c34
L_4c32:
        xor    esi, esi
L_4c34:
        mov    eax, dword ptr [edi + 0x35c]
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        fild    dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        jle    L_4c57
        fdiv    dword ptr [eax + 0x2bc]
        jmp    L_4c5f
L_4c57:
        fdiv    dword ptr [eax + 0x2c4]
        fchs    
L_4c5f:
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x1c]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 1
        je    L_4c7e
        mov    dword ptr [esp + 0x1c], 0xbf800000
        jmp    L_4c97
L_4c7e:
        fld    dword ptr [esp + 0x1c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4c97
        mov    dword ptr [esp + 0x1c], 0x3f800000
L_4c97:
        mov    eax, dword ptr [esi]
        push    ebp
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        mov    ecx, dword ptr [esp + 0x1c]
        push    0
        mov    dword ptr [esi + 0xc], ecx
        mov    byte ptr [esi + 0x1b], 0
        mov    dword ptr [edi + 0x3d8], 0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_4cda
        mov    dword ptr [eax + 4], 4
        mov    byte ptr [eax], 1
        jmp    L_4cdc
L_4cda:
        xor    eax, eax
L_4cdc:
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0x14], esi
        call    FUN_005dcd00
        call    FUN_006f49a0
        pop    esi
        pop    edi
        xor    al, al
        pop    ebp
        add    esp, 8
        ret    8
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
        sub    esp, 0x64
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x70]
        mov    esi, ecx
        push    edi
        call    FUN_005dcd40
        mov    eax, dword ptr [esi + 0x364]
        test    eax, eax
        je    L_4d37
        push    0x788128
        lea    eax, [esp + 0xc]
        push    eax
        jmp    L_4d41
L_4d37:
        push    0x788108
        lea    ecx, [esp + 0xc]
        push    ecx
L_4d41:
        call    dword ptr [g_0076b420]
        lea    edx, [esp + 0x10]
        add    esp, 8
        push    edx
        call    edi
        add    esp, 4
        pop    edi
        pop    esi
        add    esp, 0x64
        ret    4
    }
}
