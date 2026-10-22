/*
 * FUN_004a2ad5 (extent 0x4a2ad5-0x4a2c38) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern int    g_007da97c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004a29d0(void);
extern void __cdecl FUN_004a3b70(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a2ad5(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x18c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2b20
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007da97c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004a29d0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_2b20:
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
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        push    edi
        mov    ebx, ecx
        push    eax
        call    FUN_004a3b70
        mov    ecx, dword ptr [ebx + 0x10]
        mov    al, byte ptr [ecx + 0x138]
        fld    dword ptr [ecx + 0x128]
        test    al, al
        mov    edx, dword ptr [ebx + 0x98]
        mov    dword ptr [esp + 0x10], edx
        je    L_2ba0
        mov    esi, dword ptr [ecx + 0x134]
        xor    edx, edx
        test    esi, esi
        jbe    L_2b83
        mov    edi, dword ptr [ecx + 0x130]
L_2b6e:
        fld    dword ptr [edi]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_2b83
        inc    edx
        add    edi, 0xc
        cmp    edx, esi
        jb    L_2b6e
L_2b83:
        fld    dword ptr [esp + 0x10]
        lea    eax, [edx + edx*2]
        mov    edx, dword ptr [ecx + 0x130]
        fsub    dword ptr [edx + eax*4 - 0xc]
        lea    eax, [edx + eax*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fmulp st(1), st(0)
L_2ba0:
        mov    eax, dword ptr [ebx + 0x98]
        fst    dword ptr [ebx + 0xf0]
        fld    dword ptr [ecx + 0x144]
        mov    dword ptr [esp + 0x10], eax
        mov    al, byte ptr [ecx + 0x154]
        test    al, al
        je    L_2c04
        mov    esi, dword ptr [ecx + 0x150]
        xor    edx, edx
        test    esi, esi
        jbe    L_2be7
        mov    edi, dword ptr [ecx + 0x14c]
L_2bd2:
        fld    dword ptr [edi]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_2be7
        inc    edx
        add    edi, 0xc
        cmp    edx, esi
        jb    L_2bd2
L_2be7:
        mov    eax, dword ptr [ecx + 0x14c]
        fld    dword ptr [esp + 0x10]
        lea    edx, [edx + edx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea    eax, [eax + edx*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fmulp st(1), st(0)
L_2c04:
        fmul st(0), st(1)
        mov    ecx, dword ptr [ebx + 0xf4]
        mov    eax, dword ptr [ecx + 0x18]
        mov    cl, byte ptr [eax]
        fst    dword ptr [ebx + 0xec]
        pop    edi
        fld    st(0)
        or    cl, 2
        fmul st(0), st(1)
        pop    esi
        fld    st(2)
        mov    byte ptr [eax], cl
        fmul st(0), st(3)
        faddp st(1), st(0)
        fsqrt    
        fstp    dword ptr [ebx + 0xe4]
        pop    ebx
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        ret    4
    }
}
