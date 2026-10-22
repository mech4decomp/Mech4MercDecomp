/*
 * FUN_0069f30e (extent 0x69f30e-0x69f680) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007f268c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_00580630(void);
extern void __cdecl FUN_005b9560(void);
extern void __cdecl FUN_005cc090(void);
extern void __cdecl FUN_0064dfc0(void);
extern void __cdecl FUN_006a01e0(void);
extern void __cdecl FUN_0069fad0(void);

__declspec(naked) void FUN_0069f30e(void)
{
    __asm {
        nop    
        nop    
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
        nop    
        mov    al, 1
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
        nop    
        mov    ecx, dword ptr [ecx + 4]
        jmp    FUN_0069fad0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x2c
        push    esi
        mov    esi, ecx
        lea    eax, [esp + 7]
        push    eax
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00580540
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [esi + 8]
        call    FUN_0064dfc0
        mov    eax, dword ptr [esp + 0x24]
        cmp    eax, dword ptr [esp + 0x28]
        mov    ecx, eax
        mov    dword ptr [esp + 0x10], ecx
        je    L_f54c
        push    ebx
        push    ebp
        push    edi
L_f39c:
        mov    edx, dword ptr [ecx]
        mov    ebx, dword ptr [edx + 0x3d4]
        test    ebx, ebx
        mov    dword ptr [esp + 0x2c], ebx
        je    L_f536
        mov    ecx, ebx
        call    FUN_005b9560
        xor    esi, esi
        mov    dword ptr [esp + 0x18], esi
L_f3bd:
        mov    ecx, ebx
        call    FUN_005b9560
        mov    eax, dword ptr [eax + esi]
        test    eax, eax
        je    L_f510
        lea    ecx, [eax + 0x10]
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        je    L_f510
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_f510
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_f510
        mov    dword ptr [esp + 0x14], esi
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x60]
        mov    ecx, dword ptr [esp + 0x20]
        cmp    eax, dword ptr [ecx + 0xc]
        je    L_f510
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x34]
        cmp    eax, ecx
        mov    edx, dword ptr [esp + 0x14]
        je    L_f438
L_f42d:
        cmp    dword ptr [eax], edx
        je    L_f438
        add    eax, 4
        cmp    eax, ecx
        jne    L_f42d
L_f438:
        cmp    eax, ecx
        jne    L_f510
        mov    ecx, dword ptr [esp + 0x40]
        mov    ebp, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 4]
        mov    eax, ebp
        cmp    eax, esi
        je    L_f462
L_f44f:
        cmp    dword ptr [eax], edx
        je    L_f45a
        add    eax, 4
        cmp    eax, esi
        jne    L_f44f
L_f45a:
        cmp    eax, esi
        jne    L_f510
L_f462:
        mov    edi, dword ptr [ecx + 8]
        cmp    esi, edi
        je    L_f47a
        test    esi, esi
        je    L_f46f
        mov    dword ptr [esi], edx
L_f46f:
        add    esi, 4
        mov    dword ptr [ecx + 4], esi
        jmp    L_f510
L_f47a:
        mov    eax, esi
        sub    eax, ebp
        sar    eax, 2
        cmp    eax, 1
        mov    dword ptr [esp + 0x24], 1
        mov    dword ptr [esp + 0x28], eax
        lea    ecx, [esp + 0x24]
        jb    L_f49a
        lea    ecx, [esp + 0x28]
L_f49a:
        mov    ecx, dword ptr [ecx]
        add    ecx, eax
        mov    dword ptr [esp + 0x28], ecx
        je    L_f4b8
        lea    edx, [ecx*4]
        push    edx
        call    FUN_004084d0
        add    esp, 4
        mov    ebx, eax
        jmp    L_f4ba
L_f4b8:
        xor    ebx, ebx
L_f4ba:
        mov    eax, dword ptr [esp + 0x40]
        push    eax
        push    ebx
        push    esi
        push    ebp
        call    FUN_005cc090
        add    esp, 0x10
        test    eax, eax
        je    L_f4d4
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax], ecx
L_f4d4:
        mov    edx, dword ptr [esp + 0x40]
        push    edx
        add    eax, 4
        push    eax
        push    esi
        push    esi
        call    FUN_005cc090
        sub    edi, ebp
        sar    edi, 2
        push    edi
        push    ebp
        mov    esi, eax
        mov    dword ptr [esp + 0x3c], ebp
        call    FUN_00580630
        mov    eax, dword ptr [esp + 0x58]
        mov    ecx, dword ptr [esp + 0x40]
        lea    edx, [ebx + ecx*4]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [esp + 0x44]
        add    esp, 0x18
        mov    dword ptr [eax + 4], esi
        mov    dword ptr [eax + 8], edx
L_f510:
        mov    esi, dword ptr [esp + 0x18]
        add    esi, 4
        mov    ecx, ebx
        mov    dword ptr [esp + 0x18], esi
        call    FUN_005b9560
        cmp    esi, 0x80
        jb    L_f3bd
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x1c]
L_f536:
        mov    edx, dword ptr [esp + 0x34]
        add    ecx, 4
        cmp    ecx, edx
        mov    dword ptr [esp + 0x1c], ecx
        jne    L_f39c
        pop    edi
        pop    ebp
        pop    ebx
L_f54c:
        test    eax, eax
        pop    esi
        je    L_f55a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f55a:
        mov    al, 1
        add    esp, 0x2c
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
        sub    esp, 0x20
        push    esi
        push    edi
        mov    esi, ecx
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0xf]
        push    ecx
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0
        mov    dword ptr [esp + 0x14], 0
        call    FUN_00580580
        mov    ecx, dword ptr [esi + 8]
        lea    edx, [esp + 0x10]
        push    edx
        call    FUN_0064dfc0
        mov    edi, dword ptr [esp + 0x10]
        mov    esi, dword ptr [esp + 0x14]
        cmp    edi, esi
        mov    dword ptr [esp + 0xc], 0
        mov    ecx, edi
        je    L_f640
        mov    edx, dword ptr [esp + 0x2c]
        push    ebp
L_f5ca:
        mov    eax, dword ptr [ecx]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    ebp, dword ptr [eax + 0x9c]
        fsub    dword ptr [edx]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x24], ebp
        fld    dword ptr [esp + 0x24]
        fsub    dword ptr [edx + 4]
        mov    dword ptr [esp + 0x28], eax
        fld    dword ptr [esp + 0x28]
        fsub    dword ptr [edx + 8]
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
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_f630
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_f636
L_f630:
        fstp    dword ptr [esp + 0x10]
        jmp    L_f638
L_f636:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_f638:
        add    ecx, 4
        cmp    ecx, esi
        jne    L_f5ca
        pop    ebp
L_f640:
        test    edi, edi
        je    L_f64d
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_f64d:
        fld    dword ptr [esp + 0xc]
        pop    edi
        pop    esi
        add    esp, 0x20
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_006a01e0
        mov    dword ptr [esi + 0x10], 0xfffffffe
        mov    dword ptr [esi + 0x14], 0
        mov    dword ptr [esi], 0x799bd0
        mov    eax, esi
        pop    esi
        ret    
    }
}
