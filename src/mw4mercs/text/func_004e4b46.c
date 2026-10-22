/*
 * FUN_004e4b46 (extent 0x4e4b46-0x4e4c53) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_007da864;
extern float  g_007da868;
extern void __cdecl FUN_004b5da0(void);
extern void __cdecl FUN_0075db56(void);

__declspec(naked) void FUN_004e4b46(void)
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
        sub    esp, 0x40
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x30]
        mov    eax, dword ptr [ecx]
        lea    edx, [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [edi + 0x2c]
        push    edx
        call    dword ptr [eax + 8]
        fild    dword ptr [g_007da864]
        mov    ebp, dword ptr [edi + 0x38]
        mov    eax, dword ptr [ebp + 4]
        fmul    dword ptr [g_007da868]
        xor    esi, esi
        test    eax, eax
        fstp    dword ptr [esp + 0xc]
        jbe    L_4c21
        mov    ecx, dword ptr [edi + 0x34]
        push    ebx
        mov    dword ptr [esp + 0x1c], ecx
        lea    edi, [ecx + 4]
L_4b94:
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [edi]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [ecx + esi*8]
        faddp st(1), st(0)
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [edi]
        fld    dword ptr [esp + 0x30]
        fmul    dword ptr [ecx + esi*8]
        faddp st(1), st(0)
        fadd    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_4bfe
        mov    eax, dword ptr [ebp]
        fld    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x10]
        lea    ebx, [eax + esi*8]
        call    FUN_0075db56
        fstp    dword ptr [ebx]
        fld    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x10]
        call    FUN_0075db56
        fstp    dword ptr [ebx + 4]
        mov    ecx, dword ptr [esp + 0x1c]
        jmp    L_4c11
L_4bfe:
        mov    edx, dword ptr [ebp]
        lea    eax, [edx + esi*8]
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 4], edx
L_4c11:
        mov    eax, dword ptr [ebp + 4]
        inc    esi
        add    edi, 8
        cmp    esi, eax
        jb    L_4b94
        pop    ebx
L_4c21:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x40
        ret    
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004b5da0
        mov    eax, esi
        pop    esi
        ret    4
    }
}
