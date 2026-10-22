/*
 * FUN_006a1ab4 (extent 0x6a1ab4-0x6a1d1e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00799c88;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f1f84;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0065e530(void);
extern void __cdecl FUN_0069e980(void);
extern void __cdecl FUN_006a02d0(void);
extern void __cdecl FUN_006a02e0(void);
extern void __cdecl FUN_006a0400(void);
extern void __cdecl FUN_006a0810(void);
extern void __cdecl FUN_006a1d20(void);
extern void __cdecl FUN_006a2230(void);
extern void __cdecl FUN_006a2280(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00766d10(void);

__declspec(naked) void FUN_006a1ab4(void)
{
    __asm {
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
        mov    eax, 0xfa1
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 0x5f4]
        test    ecx, 0xfffffffc
        je    L_1af7
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x2c]
        cmp    al, 1
        je    L_1b94
L_1af7:
        mov    ebx, dword ptr [esp + 0x10]
        push    esi
        push    ebx
        mov    ecx, edi
        call    FUN_006a02d0
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        jne    L_1b2d
        test    dword ptr [esi + 0x5f4], 0xfffffffc
        je    L_1b2d
        mov    eax, dword ptr [esi + 0x170]
        mov    edx, dword ptr [edi]
        push    eax
        push    ebx
        mov    ecx, edi
        call    dword ptr [edx + 0x14]
L_1b2d:
        push    ebx
        mov    ecx, edi
        call    FUN_0065e530
        mov    esi, eax
        test    esi, esi
        je    L_1b94
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_1b94
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x2c]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x2c]
        je    L_1b94
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x384]
        test    ecx, ecx
        je    L_1b94
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        cmp    esi, dword ptr [eax + 0x384]
        jne    L_1b94
        push    esi
        push    ebx
        lea    ecx, [edi + 0x30]
        call    FUN_0069e980
L_1b94:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006a02e0
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x1c
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x30]
        push    esi
        mov    esi, dword ptr [esp + 0x38]
        push    edi
        mov    edi, dword ptr [esp + 0x34]
        push    esi
        push    ebp
        push    edi
        mov    ebx, ecx
        push    eax
        call    FUN_006a0400
        mov    ecx, dword ptr [esp + 0x30]
        push    ecx
        push    esi
        call    FUN_006a0810
        add    esp, 8
        test    eax, eax
        jne    L_1d14
        push    eax
        call    FUN_00707e70
        fcomp    qword ptr [ebx + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1ced
        mov    eax, dword ptr [ebp + 0xd8]
        mov    edx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        fstp    dword ptr [esp + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        fld    dword ptr [g_00799c88]
        mov    ecx, edx
        mov    dword ptr [esp + 0x14], edx
        mov    edx, eax
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x20], ecx
        lea    eax, [esp + 0x3c]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        fstp    dword ptr [esp + 0x30]
        mov    ecx, edi
        mov    dword ptr [esp + 0x2c], edx
        call    FUN_00766d10
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_1ced
        push    0
        call    FUN_00707e70
        fstp    qword ptr [ebx + 0x14]
        push    0x1c
        call    FUN_004084d0
        mov    edx, dword ptr [edi]
        mov    ecx, dword ptr [edi + 8]
        mov    esi, eax
        mov    eax, dword ptr [edi + 4]
        mov    dword ptr [esi], edx
        add    esp, 4
        lea    edx, [edi + 0xc]
        mov    dword ptr [esi + 8], ecx
        push    edx
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esi + 4], eax
        call    FUN_0040c410
        mov    eax, dword ptr [edi + 0x18]
        mov    ecx, dword ptr [ebx + 0x10]
        lea    edi, [ebx + 0x10]
        mov    dword ptr [esp + 0x3c], ecx
        push    0
        mov    ecx, edi
        mov    dword ptr [esi + 0x18], eax
        call    FUN_006a2280
        or    esi, 1
        mov    dword ptr [edi], esi
        mov    esi, dword ptr [esp + 0x3c]
        push    0
        lea    ecx, [esp + 0x40]
        call    FUN_006a2280
        lea    ecx, [esp + 0x3c]
        call    FUN_006a2230
        mov    edx, esi
        and    edx, 1
        cmp    dl, 1
        jne    L_1ced
        mov    eax, esi
        and    esi, 0xfffffffc
        push    esi
        and    eax, 2
        call    FUN_004084e0
        add    esp, 4
L_1ced:
        push    0
        call    FUN_00707e70
        fcomp    qword ptr [ebx + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1d14
        push    0
        call    FUN_00707e70
        fstp    qword ptr [ebx + 0x1c]
        mov    ecx, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, ebx
        call    FUN_006a1d20
L_1d14:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
        ret    0x10
    }
}
