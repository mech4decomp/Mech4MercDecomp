/*
 * FUN_0049aaa2 (extent 0x49aaa2-0x49ae8b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern int    g_007da968;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004941d0(void);
extern void __cdecl FUN_00494440(void);
extern void __cdecl FUN_0049aa10(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0049aaa2(void)
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
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_aae9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_0049aa10
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_aae9:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
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
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004941d0
        mov    eax, dword ptr [esi + 0xa0]
        test    eax, eax
        jne    L_ab3c
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [g_007da968]
        mov    edx, dword ptr [ecx]
        push    ebx
        xor    ebx, ebx
        mov    bl, byte ptr [eax + 0xb9]
        mov    eax, dword ptr [eax + 0xbc]
        push    ebx
        push    eax
        call    dword ptr [edx]
        mov    dword ptr [esi + 0xa0], eax
        pop    ebx
L_ab3c:
        pop    esi
        ret    4
        push    ebp
        mov    ebp, esp
        sub    esp, 0x54
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        test    byte ptr [edi + 0x9c], 1
        jne    L_ab5f
        xor    al, al
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_ab5f:
        mov    eax, dword ptr [ebp + 8]
        push    eax
        mov    ecx, edi
        call    FUN_00494440
        test    al, al
        jne    L_ab77
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_ab77:
        mov    ecx, dword ptr [edi + 0x10]
        fld    dword ptr [edi + 0x90]
        mov    dword ptr [ebp - 0x4c], 0xbf800000
        mov    dword ptr [ebp - 0x50], 0xbf800000
        mov    dword ptr [ebp - 0x54], 0xbf800000
        mov    esi, dword ptr [ecx + 0x68]
        xor    edx, edx
        test    esi, esi
        jbe    L_abb2
        mov    ebx, dword ptr [ecx + 0x64]
L_aba1:
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 1
        jne    L_abb2
        inc    edx
        add    ebx, 0xc
        cmp    edx, esi
        jb    L_aba1
L_abb2:
        mov    eax, dword ptr [ecx + 0x64]
        lea    edx, [edx + edx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea    eax, [eax + edx*4 - 0xc]
        xor    edx, edx
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [ebp - 0x54]
        mov    esi, dword ptr [ecx + 0x74]
        test    esi, esi
        fld    dword ptr [edi + 0x90]
        jbe    L_abec
        mov    ebx, dword ptr [ecx + 0x70]
L_abdb:
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 1
        jne    L_abec
        inc    edx
        add    ebx, 0xc
        cmp    edx, esi
        jb    L_abdb
L_abec:
        mov    eax, dword ptr [ecx + 0x70]
        lea    edx, [edx + edx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea    eax, [eax + edx*4 - 0xc]
        xor    edx, edx
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [ebp - 0x50]
        mov    esi, dword ptr [ecx + 0x80]
        test    esi, esi
        fld    dword ptr [edi + 0x90]
        jbe    L_ac29
        mov    ebx, dword ptr [ecx + 0x7c]
L_ac18:
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 1
        jne    L_ac29
        inc    edx
        add    ebx, 0xc
        cmp    edx, esi
        jb    L_ac18
L_ac29:
        mov    eax, dword ptr [ecx + 0x7c]
        lea    edx, [edx + edx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea    eax, [eax + edx*4 - 0xc]
        mov    edx, dword ptr [ebp + 8]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    eax, dword ptr [edx + 0x14]
        mov    dword ptr [ebp - 4], eax
        lea    edx, [edi + 0x58]
        lea    eax, [ebp - 0x48]
        fstp    dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 8], edx
        mov    dword ptr [ebp + 8], eax
        mov    edx, dword ptr [ebp - 8]
        push    esi
        mov    esi, dword ptr [ebp - 4]
        mov    eax, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        fld    dword ptr [edi + 0x90]
        mov    esi, dword ptr [ecx + 0x8c]
        xor    edx, edx
        test    esi, esi
        jbe    L_adfe
        mov    ebx, dword ptr [ecx + 0x88]
L_aded:
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 1
        jne    L_adfe
        inc    edx
        add    ebx, 0xc
        cmp    edx, esi
        jb    L_aded
L_adfe:
        mov    eax, dword ptr [ecx + 0x88]
        lea    edx, [edx + edx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea    eax, [eax + edx*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        lea    eax, [ebp - 0x54]
        push    eax
        mov    eax, dword ptr [edi + 0xa0]
        fstp    dword ptr [ebp - 0x18]
        push    eax
        fld    dword ptr [edi + 0x90]
        fld    st(0)
        fmul    dword ptr [ecx + 0x9c]
        fadd    dword ptr [ecx + 0xa0]
        fmul st(0), st(1)
        fadd    dword ptr [ecx + 0x98]
        fmul st(0), st(1)
        fadd    dword ptr [ecx + 0x94]
        fstp    dword ptr [ebp - 0x14]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edi + 0x90]
        fld    st(0)
        fmul    dword ptr [ecx + 0xb0]
        fadd    dword ptr [ecx + 0xb4]
        fmul st(0), st(1)
        fadd    dword ptr [ecx + 0xac]
        fmul st(0), st(1)
        fadd    dword ptr [ecx + 0xa8]
        mov    ecx, dword ptr [g_007da968]
        fstp    dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ecx]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
