/*
 * FUN_006a8a2f (extent 0x6a8a2f-0x6a8c40) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d598;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00604f30(void);
extern void __cdecl FUN_00605740(void);
extern void __cdecl FUN_00698b90(void);
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006991d0(void);
extern void __cdecl FUN_006992f0(void);
extern void __cdecl FUN_00699530(void);

__declspec(naked) void FUN_006a8a2f(void)
{
    __asm {
        nop    
        push    ecx
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        lea    edx, [esp + 0xc]
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x3c]
        mov    eax, dword ptr [ecx]
        push    edx
        mov    edx, dword ptr [ebx + 0x18]
        push    edx
        call    dword ptr [eax + 8]
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_8a66
        fld    dword ptr [esp + 0xc]
        fchs    
        fstp    dword ptr [esp + 0xc]
L_8a66:
        fld    dword ptr [edi + 0x40]
        fabs    
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8a85
        fld    dword ptr [esp + 0xc]
        fdiv    dword ptr [edi + 0x40]
        fstp    dword ptr [esp + 0x14]
        jmp    L_8a8d
L_8a85:
        mov    dword ptr [esp + 0x14], 0x3f800000
L_8a8d:
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x18]
        fst    dword ptr [esp + 0x18]
        fadd    dword ptr [edi + 0x20]
        fst    dword ptr [edi + 0x20]
        fcomp    dword ptr [edi + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_8b27
        fld    dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        mov    esi, dword ptr [edi + 0x34]
        mov    dword ptr [esi + 0x14], eax
        fnstsw  ax
        test    ah, 0x41
        jne    L_8aeb
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    FUN_00699530
        test    al, al
        je    L_8aeb
        mov    ecx, esi
        call    FUN_006991d0
        fdiv    dword ptr [esp + 0x14]
        mov    al, 1
        fstp    dword ptr [edi + 0x24]
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    0xc
L_8aeb:
        mov    ecx, dword ptr [ebx + 0x3c]
        push    esi
        call    FUN_00605740
        mov    eax, dword ptr [edi + 0x14]
        test    eax, eax
        je    L_8b27
        mov    edx, dword ptr [esi + 0x18]
        fld    dword ptr [esi + 0x10]
        mov    eax, dword ptr [edx + 4]
        fsub    dword ptr [eax + 8]
        mov    edi, dword ptr [edi + 0x18]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        mov    ecx, dword ptr [ebx + 0x34]
        lea    eax, [edi + edi*2]
        fdivp st(1), st(0)
        lea    ecx, [ecx + eax*8]
        fstp    dword ptr [esp]
        call    FUN_00604f30
        fstp    dword ptr [esi + 0x20]
L_8b27:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        pop    ecx
        ret    0xc
        fld    dword ptr [esp + 4]
        push    esi
        fcomp    dword ptr [g_0076d598]
        mov    esi, ecx
        fnstsw  ax
        test    ah, 0x40
        jne    L_8b9a
        fld    dword ptr [esp + 8]
        mov    ecx, dword ptr [esi + 0x34]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8b6f
        call    FUN_00699160
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop    esi
        ret    8
L_8b6f:
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp]
        call    FUN_006992f0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop    esi
        ret    8
L_8b9a:
        fld    dword ptr [esi + 0x38]
        mov    ecx, dword ptr [esi + 0x34]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8bbf
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699160
        mov    dword ptr [esi + 0x20], 0
        pop    esi
        ret    8
L_8bbf:
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_006992f0
        mov    dword ptr [esi + 0x20], 0
        pop    esi
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
        push    esi
        push    0x2c
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8c13
        mov    ecx, dword ptr [esi + 0x30]
        push    ecx
        mov    ecx, eax
        call    FUN_00698b90
        mov    dword ptr [esi + 0x34], eax
        pop    esi
        ret    4
L_8c13:
        xor    eax, eax
        mov    dword ptr [esi + 0x34], eax
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x34]
        test    ecx, ecx
        je    L_8c30
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_8c30:
        mov    dword ptr [esi + 0x34], 0
        mov    dword ptr [esi + 0x20], 0xbf800000
        pop    esi
        ret    
    }
}
