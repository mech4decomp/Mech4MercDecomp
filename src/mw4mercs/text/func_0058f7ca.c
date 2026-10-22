/*
 * FUN_0058f7ca (extent 0x58f7ca-0x58f959) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0077016c;
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004e7b80(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005ac140(void);

__declspec(naked) void FUN_0058f7ca(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    dword ptr [esp + 4], 0
        lea    esi, [ecx + 0x370]
L_f7e0:
        lea    eax, [esp + 4]
        push    eax
        mov    ecx, esi
        call    FUN_00416b60
        test    eax, eax
        je    L_f7f7
        mov    ecx, eax
        call    FUN_004e7b80
L_f7f7:
        mov    eax, dword ptr [esp + 4]
        inc    eax
        cmp    eax, 0xb
        mov    dword ptr [esp + 4], eax
        jl    L_f7e0
        pop    esi
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_f851
        mov    eax, dword ptr [ecx + 0x5b8]
        cmp    eax, 1
        jne    L_f832
        mov    edx, dword ptr [ecx]
        push    0
        push    3
        call    dword ptr [edx + 0x88]
        ret    
L_f832:
        test    eax, eax
        jne    L_f851
        mov    dword ptr [ecx + 0x5b8], 2
        mov    ecx, dword ptr [ecx + 0x3b0]
        test    ecx, ecx
        je    L_f851
        push    1
        call    FUN_00559be0
L_f851:
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
        mov    eax, dword ptr [ecx + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_f8a1
        mov    eax, dword ptr [ecx + 0x5b8]
        cmp    eax, 2
        jne    L_f882
        mov    edx, dword ptr [ecx]
        push    0
        push    3
        call    dword ptr [edx + 0x88]
        ret    
L_f882:
        test    eax, eax
        jne    L_f8a1
        mov    dword ptr [ecx + 0x5b8], 1
        mov    ecx, dword ptr [ecx + 0x3b0]
        test    ecx, ecx
        je    L_f8a1
        push    1
        call    FUN_00559be0
L_f8a1:
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
        mov    eax, dword ptr [ecx + 0x908]
        test    eax, eax
        je    L_f8c1
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax + 0x28], ecx
L_f8c1:
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x408]
        push    eax
        call    FUN_005ac140
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
        push    ecx
        fld    dword ptr [g_0076c5b0]
        __emit 0xC7  // mov dword ptr [esp+0], 0 - MSVC6 drops 00 disp byte (c7 04 24 vs ref c7 44 24 00)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xD9  // fld dword ptr [esp+0] - MSVC6 drops 00 disp byte (d9 04 24 vs ref d9 44 24 00)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        xor    eax, eax
L_f905:
        mov    edx, dword ptr [ecx + eax*4 + 0x944]
        cmp    edx, -1
        __emit 0x89  // mov dword ptr [esp], edx - MSVC6 drops 00 disp byte on [esp]
        __emit 0x54
        __emit 0x24
        __emit 0x00
        je    L_f93c
        cmp    eax, 6
        jne    L_f930
        fild    dword ptr [ecx + 0x95c]
        fmul    dword ptr [g_0077016c]
        faddp st(2), st(0)
        fadd    dword ptr [g_0077016c]
        jmp    L_f93c
L_f930:
        __emit 0xDB  // fild dword ptr [esp+0] - MSVC6 drops 00 disp byte (db 04 24 vs ref db 44 24 00)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        faddp st(2), st(0)
        fadd    dword ptr [g_0076d064]
L_f93c:
        inc    eax
        cmp    eax, 0xb
        jl    L_f905
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_f955
        fxch    st(1)
        fdiv st(0), st(1)
        fxch    st(1)
L_f955:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    ecx
        ret    
    }
}
