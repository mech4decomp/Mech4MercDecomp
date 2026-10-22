/*
 * FUN_00766290 (extent 0x766290-0x76640c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00766290(void);

__declspec(naked) void FUN_00766290(void)
{
    __asm {
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_62a7
        fld    dword ptr [edx]
        jmp    L_62aa
L_62a7:
        fld    dword ptr [edx + 4]
L_62aa:
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_62bf
        fld    dword ptr [edx + 8]
        jmp    L_62c2
L_62bf:
        fld    dword ptr [edx + 0xc]
L_62c2:
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_62d7
        fld    dword ptr [edx + 0x10]
        jmp    L_62da
L_62d7:
        fld    dword ptr [edx + 0x14]
L_62da:
        fmul    dword ptr [ecx + 8]
        fxch    st(2)
        fmul    dword ptr [ecx]
        faddp st(2), st(0)
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [esp + 8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_6300
        mov    eax, 1
        ret    8
L_6300:
        xor    eax, eax
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
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6327
        fld    dword ptr [edx]
        jmp    L_632a
L_6327:
        fld    dword ptr [edx + 4]
L_632a:
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_633f
        fld    dword ptr [edx + 8]
        jmp    L_6342
L_633f:
        fld    dword ptr [edx + 0xc]
L_6342:
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6357
        fld    dword ptr [edx + 0x10]
        jmp    L_635a
L_6357:
        fld    dword ptr [edx + 0x14]
L_635a:
        fmul    dword ptr [ecx + 8]
        fxch    st(2)
        fmul    dword ptr [ecx]
        faddp st(2), st(0)
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [esp + 8]
        fadd    dword ptr [ecx + 0xc]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_6380
        mov    eax, 1
        ret    8
L_6380:
        xor    eax, eax
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [ecx + 8]
        fld    dword ptr [edx + 4]
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
        fsub    dword ptr [ecx + 0xc]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_63ba
        fchs    
L_63ba:
        fld    dword ptr [esp + 8]
        fadd    dword ptr [edx + 0xc]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_63d4
        mov    eax, 1
        ret    8
L_63d4:
        xor    eax, eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [ebp + 8]
        push    eax
        push    edx
        call    FUN_00766290
        test    al, al
        je    L_6406
        push    0x7afd00
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6406
        int 3    
L_6406:
        xor    al, al
        pop    ebp
        ret    8
    }
}
