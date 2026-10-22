/*
 * FUN_006ac280 (extent 0x6ac280-0x6ac3f3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_005accc0(void);
extern void __cdecl FUN_005acd20(void);
extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006992f0(void);

__declspec(naked) void FUN_006ac280(void)
{
    __asm {
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_c294
        fld    dword ptr [ecx + 0x28]
        ret    
L_c294:
        fld    dword ptr [ecx + 0x20]
        fdiv    dword ptr [ecx + 0x10]
        fmul    dword ptr [ecx + 0x2c]
        fadd    dword ptr [ecx + 0x28]
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
        fld    dword ptr [ecx + 0x10]
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
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_c2d9
        call    FUN_00699160
        ret    4
L_c2d9:
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 8]
        __emit 0xD9  // fstp dword ptr [esp] (no-disp form; ref uses D9 1C 24)
        __emit 0x1C
        __emit 0x24
        call    FUN_006992f0
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
        push    ecx
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ebx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebx, dword ptr [esi + 0x10]
        shl    ebx, 3
        cmp    eax, -0x14
        je    L_c31d
        lea    ebx, [ebx + eax - 8]
L_c31d:
        push    1
        push    0
        push    9
        mov    dword ptr [esp + 0x24], 0
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    1
        push    9
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    FUN_0041edd0
        mov    edx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [edx + 0x408]
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_005acd20
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, edi
        call    FUN_005accc0
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_c3aa
        lea    eax, [eax + esi - 8]
L_c3aa:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x28]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, ebx
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
        pop    ecx
        ret    
    }
}
