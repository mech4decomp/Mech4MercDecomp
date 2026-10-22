/*
 * FUN_00682189 (extent 0x682189-0x6824c9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00798a80;
extern int    g_007f25c0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c2790(void);
extern void __cdecl FUN_005c4c20(void);
extern void __cdecl FUN_005c5110(void);
extern void __cdecl FUN_005c5510(void);
extern void __cdecl FUN_005c5b70(void);
extern void __cdecl FUN_005c6550(void);
extern void __cdecl FUN_005c6bd0(void);
extern void __cdecl FUN_00682d80(void);
extern void __cdecl FUN_00682dd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00682189(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b98
        je    L_21a9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_21a9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 4]
        fld    dword ptr [ecx + 0x3d8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2212
        fld    dword ptr [ecx + 0x4f0]
        fsub    dword ptr [edx]
        fld    dword ptr [ecx + 0x4f4]
        fsub    dword ptr [edx + 4]
        fld    dword ptr [ecx + 0x4f8]
        fsub    dword ptr [edx + 8]
        fld    st(2)
        fmul st(0), st(3)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fld    dword ptr [g_00798a80]
        fmul    dword ptr [g_00798a80]
        fcompp    
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_222e
L_2212:
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        push    edx
        call    FUN_005c5b70
        mov    dword ptr [esi + 8], 0
L_222e:
        pop    esi
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
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        mov    edx, dword ptr [ecx + 0x4fc]
        mov    eax, dword ptr [esp + 4]
        add    ecx, 0x4fc
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c4c20
        ret    4
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        push    edx
        call    FUN_005c5110
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c5510
        ret    4
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005c6bd0
        mov    dword ptr [esi + 8], 0
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c2790
        ret    4
        mov    eax, dword ptr [ecx + 4]
        mov    ecx, dword ptr [eax + 0x368]
        test    ecx, ecx
        setne    al
        ret    
        nop    
        mov    eax, dword ptr [ecx + 4]
        fld    dword ptr [eax + 0x3d8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_230c
        mov    eax, 1
        ret    
L_230c:
        xor    eax, eax
        ret    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_2323
        mov    eax, dword ptr [ecx + 4]
        mov    eax, dword ptr [eax + 0x170]
        jmp    L_2331
L_2323:
        mov    ecx, dword ptr [ecx + 4]
        add    ecx, 0x1c8
        call    FUN_0041fd80
L_2331:
        mov    ecx, dword ptr [esp + 8]
        test    ecx, ecx
        push    eax
        jne    L_2345
        call    FUN_00682dd0
        add    esp, 4
        ret    8
L_2345:
        call    FUN_00682d80
        add    esp, 4
        ret    8
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        mov    eax, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_005c6550
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        mov    eax, dword ptr [eax + 0x170]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        push    esi
        mov    esi, dword ptr [eax + 0x170]
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        neg    al
        sbb    eax, eax
        and    eax, esi
        pop    esi
        ret    
        mov    ecx, dword ptr [ecx + 4]
        add    ecx, 0x1c8
        jmp    FUN_0041fd80
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        push    esi
        add    ecx, 0x1c8
        call    FUN_0041fd80
        mov    esi, eax
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        neg    al
        sbb    eax, eax
        and    eax, esi
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
        mov    eax, dword ptr [ecx + 4]
        mov    eax, dword ptr [eax + 0x514]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        fld    dword ptr [eax + 0x518]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        fld    dword ptr [eax + 0x1bc]
        jmp    FUN_0075db4a
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        mov    eax, dword ptr [ecx + 0x364]
        sub    esp, 0xc
        test    eax, eax
        je    L_24bf
        cmp    byte ptr [eax + 0x1a], 1
        je    L_24bf
        fld    dword ptr [ecx + 0x4f8]
        fld    dword ptr [ecx + 0x4f4]
        fld    dword ptr [ecx + 0x4f0]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_0076c5b0]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x40
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jne    L_24bf
        mov    eax, dword ptr [ecx + 0x170]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        fsub    dword ptr [ecx + 0x4f0]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 4], edx
        fld    dword ptr [esp + 4]
        fsub    dword ptr [ecx + 0x4f4]
        mov    dword ptr [esp + 8], eax
        fld    dword ptr [esp + 8]
        fsub    dword ptr [ecx + 0x4f8]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        add    esp, 0xc
        ret    
L_24bf:
        fld    dword ptr [g_0076c5b0]
        add    esp, 0xc
        ret    
    }
}
