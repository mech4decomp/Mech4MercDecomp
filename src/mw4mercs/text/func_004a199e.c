/*
 * FUN_004a199e (extent 0x4a199e-0x4a1bba) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da884;
extern int    g_007da920;
extern int    g_007da978;
extern int    g_007da980;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00487e30(void);
extern void __cdecl FUN_004a1840(void);
extern void __cdecl FUN_004a3660(void);
extern void __cdecl FUN_004a3920(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a199e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x12c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_19d9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a1840
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_19d9:
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a3660
        lea    eax, [esi + 0x128]
        push    eax
        push    edi
        call    FUN_00412a50
        mov    edx, dword ptr [eax]
        add    esp, 8
        push    4
        add    esi, 0x124
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a3920
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [edi + 0x124]
        mov    edx, dword ptr [edi + 0x120]
        mov    dword ptr [esi + 0x124], ecx
        add    edi, 0x128
        push    edi
        lea    ecx, [esi + 0x128]
        mov    dword ptr [esi + 0x120], edx
        call    FUN_00412740
        call    FUN_006f49a0
        mov    esi, dword ptr [esi + 0x120]
        inc    word ptr [esi + 0x10]
        pop    edi
        pop    esi
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    esi, ecx
        push    edi
        lea    ecx, [esi + 0x128]
        call    FUN_00412740
        mov    ecx, dword ptr [esi + 0x120]
        xor    ebx, ebx
        cmp    ecx, ebx
        je    L_1ac7
        dec    word ptr [ecx + 0x10]
        cmp    word ptr [ecx + 0x10], bx
        jne    L_1ac7
        cmp    ecx, ebx
        je    L_1ac7
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_1ac7:
        mov    ecx, dword ptr [g_007da884]
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        mov    edi, eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x1c]
        mov    dword ptr [esi + 0x120], edi
        mov    dword ptr [esi + 0x124], ebx
        mov    ebp, eax
        test    ebp, ebp
        jle    L_1b54
L_1aec:
        push    ebx
        mov    ecx, edi
        call    FUN_00487e30
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x28]
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        jle    L_1b4f
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [edx + 4]
        mov    edx, eax
L_1b16:
        fld    dword ptr [ecx + 4]
        fld    dword ptr [ecx]
        fld    dword ptr [ecx - 4]
        fld    st(2)
        fmulp st(3), st(0)
        fld    st(1)
        fmul st(0), st(2)
        faddp st(3), st(0)
        fld    st(0)
        fmul st(0), st(1)
        faddp st(3), st(0)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [esi + 0x124]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1b47
        fstp    dword ptr [esi + 0x124]
        jmp    L_1b49
L_1b47:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_1b49:
        add    ecx, 0xc
        dec    edx
        jne    L_1b16
L_1b4f:
        inc    ebx
        cmp    ebx, ebp
        jl    L_1aec
L_1b54:
        fld    dword ptr [esi + 0x124]
        pop    edi
        fsqrt    
        fstp    dword ptr [esi + 0x124]
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1bae
        mov    eax, dword ptr [g_007da980]
        push    eax
        push    0x7b2e14
        push    0x52b
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4a1c70
        mov    dword ptr [esi + 0x18], 0x4a19a0
        mov    dword ptr [g_007da978], esi
        pop    esi
        ret    
L_1bae:
        mov    dword ptr [g_007da978], 0
        pop    esi
        ret    
    }
}
