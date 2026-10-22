/*
 * FUN_005d6fd9 (extent 0x5d6fd9-0x5d720e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_005d7b50(void);
extern void __cdecl FUN_005d9ea0(void);
extern void __cdecl FUN_005d9f30(void);
extern void __cdecl FUN_005d9fc0(void);
extern void __cdecl FUN_005da000(void);
extern void __cdecl FUN_005da5d0(void);
extern void __cdecl FUN_005da800(void);
extern void __cdecl FUN_005da810(void);
extern void __cdecl FUN_005da880(void);
extern void __cdecl FUN_005da950(void);
extern void __cdecl FUN_005da980(void);
extern void __cdecl FUN_00653dc0(void);

__declspec(naked) void FUN_005d6fd9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 4]
        mov    eax, dword ptr [esp + 4]
        fmul    dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x44], eax
        mov    byte ptr [ecx + 4], 1
        fstp    dword ptr [ecx + 0x48]
        call    FUN_00653dc0
        ret    4
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x30]
        mov    esi, dword ptr [edi + 0x2c]
        sub    ecx, esi
        xor    ebx, ebx
        sar    ecx, 2
        mov    edx, 1
        cmp    ecx, edx
        mov    dword ptr [esp + 0xc], ebx
        jle    L_7043
        push    ebp
        mov    ebp, esi
L_7023:
        lea    esi, [edx*4]
        fld    dword ptr [esi + ebp]
        fcomp    dword ptr [ebx + ebp]
        fnstsw  ax
        test    ah, 1
        je    L_703d
        mov    dword ptr [esp + 0x10], edx
        mov    ebx, esi
L_703d:
        inc    edx
        cmp    edx, ecx
        jl    L_7023
        pop    ebp
L_7043:
        mov    eax, dword ptr [edi + 0x2c]
        mov    ecx, dword ptr [esp + 0xc]
        fld    dword ptr [eax + ecx*4]
        mov    ecx, edi
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [edi + 0x44]
        call    FUN_00653dc0
        fld    dword ptr [edi + 0x44]
        fld    st(0)
        fmul st(0), st(1)
        fstp    dword ptr [edi + 0x48]
        pop    edi
        pop    esi
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    ebx
        pop    ecx
        ret    
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_004d5b10
        lea    ecx, [esp + 0x10]
        lea    edi, [esi + 0x10]
        push    ecx
        xor    ebx, ebx
        lea    edx, [esp + 0x28]
        push    edx
        lea    ecx, [edi + 8]
        mov    dword ptr [edi], ebx
        mov    dword ptr [edi + 4], ebx
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_005d9fc0
        lea    eax, [esp + 0x10]
        lea    ebp, [esi + 0x1c]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        lea    ecx, [ebp + 8]
        mov    dword ptr [ebp], ebx
        mov    dword ptr [ebp + 4], ebx
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_005da000
        mov    dl, byte ptr [esp + 0x24]
        mov    dword ptr [esi + 0x28], ebx
        lea    eax, [esp + 0x24]
        mov    byte ptr [esi + 0x30], dl
        push    eax
        mov    dword ptr [esi + 0x30], ebx
        push    0x64
        mov    ecx, ebp
        mov    dword ptr [esi + 0x2c], ebx
        mov    dword ptr [esi], 0x788198
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_005da5d0
        mov    eax, dword ptr [edi]
        mov    ecx, dword ptr [edi + 8]
        sub    ecx, eax
        sar    ecx, 2
        cmp    ecx, 0xc8
        mov    dword ptr [esp + 0x10], ebx
        jae    L_7135
        lea    edx, [esp + 0x24]
        push    edx
        mov    ecx, edi
        call    FUN_005da800
        push    eax
        lea    eax, [esp + 0x14]
        push    eax
        push    0xc8
        lea    ecx, [esp + 0x20]
        call    FUN_005da810
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_005da880
        lea    ecx, [esp + 0x14]
        call    FUN_005d9ea0
        jmp    L_7194
L_7135:
        mov    ecx, dword ptr [edi + 4]
        mov    edx, ecx
        sub    edx, eax
        sar    edx, 2
        cmp    edx, 0xc8
        jae    L_7178
        cmp    eax, ecx
        je    L_7158
L_714b:
        mov    ebp, dword ptr [esp + 0x10]
        mov    dword ptr [eax], ebp
        add    eax, 4
        cmp    eax, ecx
        jne    L_714b
L_7158:
        mov    eax, dword ptr [esp + 0x24]
        push    eax
        lea    eax, [esp + 0x14]
        push    eax
        mov    eax, 0xc8
        sub    eax, edx
        push    eax
        push    ecx
        call    FUN_005da950
        add    esp, 0x10
        mov    dword ptr [edi + 4], eax
        jmp    L_7194
L_7178:
        push    ecx
        lea    ecx, [esp + 0x14]
        push    ecx
        push    0xc8
        push    eax
        call    FUN_005da980
        add    esp, 0xc
        push    eax
        mov    ecx, edi
        call    FUN_005d9f30
L_7194:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        push    0x80da58
        push    0x80da60
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x1c]
        push    0x80da54
        push    0x80da5c
        xor    ecx, 0x85739531
        mov    byte ptr [esi + 0x34], bl
        mov    dword ptr [esi + 0x38], ebx
        mov    dword ptr [esi + 0x3c], ebx
        mov    dword ptr [esi + 0x40], ebx
        mov    dword ptr [esi + 0x44], ebx
        mov    dword ptr [esi + 0x48], ebx
        call    FUN_004e27f0
        pop    edi
        mov    byte ptr [esi + 0x4c], bl
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
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
        push    esi
        mov    esi, ecx
        call    FUN_005d7b50
        test    byte ptr [esp + 8], 1
        je    L_7208
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_7208:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
