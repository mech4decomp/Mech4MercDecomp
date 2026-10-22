/*
 * FUN_004a6eee (extent 0x4a6eee-0x4a70ea) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da884;
extern int    g_007da920;
extern int    g_007da990;
extern int    g_007da998;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00487e30(void);
extern void __cdecl FUN_004a6d70(void);
extern void __cdecl FUN_004a9430(void);
extern void __cdecl FUN_004a95e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a6eee(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x2c0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6f29
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a6d70
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_6f29:
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
        call    FUN_004a9430
        lea    eax, [esi + 0x2bc]
        push    eax
        push    edi
        call    FUN_00412a50
        mov    edx, dword ptr [eax]
        add    esp, 8
        push    4
        add    esi, 0x2b8
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
        call    FUN_004a95e0
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [edi + 0x2b8]
        mov    edi, dword ptr [edi + 0x2b4]
        mov    dword ptr [esi + 0x2b8], ecx
        mov    dword ptr [esi + 0x2b4], edi
        call    FUN_006f49a0
        inc    word ptr [edi + 0x10]
        pop    edi
        pop    esi
        ret    4
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    esi, ecx
        push    edi
        lea    ecx, [esi + 0x2bc]
        call    FUN_00412740
        mov    ecx, dword ptr [esi + 0x2b4]
        xor    ebx, ebx
        cmp    ecx, ebx
        je    L_6ff7
        dec    word ptr [ecx + 0x10]
        cmp    word ptr [ecx + 0x10], bx
        jne    L_6ff7
        cmp    ecx, ebx
        je    L_6ff7
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_6ff7:
        mov    ecx, dword ptr [g_007da884]
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        mov    edi, eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x1c]
        mov    dword ptr [esi + 0x2b4], edi
        mov    dword ptr [esi + 0x2b8], ebx
        mov    ebp, eax
        test    ebp, ebp
        jle    L_7084
L_701c:
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
        jle    L_707f
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [edx + 4]
        mov    edx, eax
L_7046:
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
        fcom    dword ptr [esi + 0x2b8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_7077
        fstp    dword ptr [esi + 0x2b8]
        jmp    L_7079
L_7077:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_7079:
        add    ecx, 0xc
        dec    edx
        jne    L_7046
L_707f:
        inc    ebx
        cmp    ebx, ebp
        jl    L_701c
L_7084:
        fld    dword ptr [esi + 0x2b8]
        pop    edi
        fsqrt    
        fstp    dword ptr [esi + 0x2b8]
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
        je    L_70de
        mov    eax, dword ptr [g_007da998]
        push    eax
        push    0x7b3048
        push    0x527
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4a7190
        mov    dword ptr [esi + 0x18], 0x4a6ef0
        mov    dword ptr [g_007da990], esi
        pop    esi
        ret    
L_70de:
        mov    dword ptr [g_007da990], 0
        pop    esi
        ret    
    }
}
