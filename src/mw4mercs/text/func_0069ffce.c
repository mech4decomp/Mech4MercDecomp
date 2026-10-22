/*
 * FUN_0069ffce (extent 0x69ffce-0x6a01d3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d970;
extern float  g_00799bf8;
extern float  g_00799bfc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_0063ae80(void);
extern void __cdecl FUN_0064de10(void);
extern void __cdecl FUN_0064dfc0(void);
extern void __cdecl FUN_006a00e0(void);
extern void __cdecl FUN_006a02d0(void);
extern void __cdecl FUN_006a02e0(void);
extern void __cdecl FUN_006a0400(void);
extern void __cdecl FUN_006a04e0(void);
extern void __cdecl FUN_006a04f0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0069ffce(void)
{
    __asm {
        nop    
        nop    
        mov    eax, 0xfa3
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
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x14
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        push    esi
        push    eax
        mov    esi, ecx
        push    ebp
        call    FUN_006a02d0
        push    0
        call    FUN_00707e70
        fcomp    qword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_00d3
        push    ebx
        push    edi
        mov    ecx, ebp
        call    FUN_0064de10
        push    eax
        call    FUN_0063ae80
        fld    qword ptr [esi + 0x10]
        fcomp    qword ptr [g_0076d970]
        mov    ebx, eax
        add    esp, 4
        fnstsw  ax
        test    ah, 0x40
        jne    L_00c4
        mov    edi, dword ptr [esi + 0x18]
        cmp    ebx, edi
        jle    L_00c4
        xor    eax, eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x20], eax
        mov    dword ptr [esp + 0x24], eax
        call    FUN_0064dfc0
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        sub    edx, eax
        sar    edx, 2
        je    L_00b7
        push    9
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        mov    eax, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [esp + 0x18]
        sub    edi, ebx
        mov    dword ptr [esp + 0x2c], edi
        fild    dword ptr [esp + 0x2c]
        sub    eax, ebp
        sar    eax, 2
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], 0
        fidiv    dword ptr [esp + 0x10]
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        fmulp st(1), st(0)
        fstp    dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x30]
        push    edx
        call    FUN_006a00e0
        mov    eax, dword ptr [esp + 0x18]
L_00b7:
        test    eax, eax
        je    L_00c4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_00c4:
        push    0
        mov    dword ptr [esi + 0x18], ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x10]
        pop    edi
        pop    ebx
L_00d3:
        pop    esi
        pop    ebp
        add    esp, 0x14
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    ebx
        mov    ebx, dword ptr [eax + 4]
        push    edi
        mov    edi, dword ptr [eax]
        cmp    edi, ebx
        je    L_014b
        push    esi
L_00f0:
        mov    eax, dword ptr [edi]
        mov    esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        je    L_0143
        fld    dword ptr [esi + 0x1bc]
        fadd    dword ptr [esp + 0x10]
        fcom    dword ptr [g_00799bf8]
        fnstsw  ax
        test    ah, 1
        je    L_011b
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_00799bf8]
L_011b:
        fcom    dword ptr [g_00799bfc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0130
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_00799bfc]
L_0130:
        push    0
        fstp    dword ptr [esi + 0x1bc]
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c0]
L_0143:
        add    edi, 4
        cmp    edi, ebx
        jne    L_00f0
        pop    esi
L_014b:
        pop    edi
        pop    ebx
        ret    8
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        push    edx
        call    FUN_006a0400
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006a04e0
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
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006a04f0
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
        ret    4
    }
}
