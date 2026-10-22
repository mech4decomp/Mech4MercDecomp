/*
 * FUN_0070d3f3 (extent 0x70d3f3-0x70d641) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b004;
extern int    g_0076b024;
extern int    g_0076b028;
extern int    g_0076b02c;
extern int    g_0076b0ec;
extern int    g_0076b1f8;
extern int    g_0076b214;
extern int    g_0076b23c;
extern float  g_007a1b08;
extern float  g_0085b190;
extern float  g_0085b194;
extern float  g_0085b1a8;
extern float  g_0085b1ac;
extern float  g_0085b1b0;
extern float  g_0085b1b4;
extern float  g_0085b1c8;
extern int    g_0085b1cc;
extern float  g_0085b1d0;
extern int    g_0085b1d4;
extern int    g_0085b1e8;
extern int    g_0085b1ec;
extern float  g_0085b1f0;
extern int    g_0085b1f4;
extern int    g_0085b208;
extern int    g_0085b20c;
extern void __cdecl FUN_0074c120(void);

__declspec(naked) void FUN_0070d3f3(void)
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
        sub    esp, 0x20c
        push    esi
        lea    eax, [esp + 4]
        push    eax
        push    1
        push    8
        mov    dword ptr [esp + 0x14], 0x200
        call    dword ptr [g_0076b214]
        push    eax
        call    dword ptr [g_0076b004]
        test    eax, eax
        mov    esi, dword ptr [g_0076b1f8]
        jne    L_d45a
        call    esi
        cmp    eax, 0x3f0
        jne    L_d4a3
        lea    ecx, [esp + 4]
        push    ecx
        push    8
        call    dword ptr [g_0076b23c]
        push    eax
        call    dword ptr [g_0076b02c]
        test    eax, eax
        jne    L_d45a
        pop    esi
        add    esp, 0x20c
        ret    0x10
L_d45a:
        mov    eax, dword ptr [esp + 8]
        lea    edx, [esp + 8]
        push    edx
        mov    edx, dword ptr [esp + 8]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        push    1
        push    edx
        call    dword ptr [g_0076b028]
        test    eax, eax
        jne    L_d4af
        call    esi
        cmp    eax, 0x7a
        jne    L_d498
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b0ec]
        xor    eax, eax
        pop    esi
        add    esp, 0x20c
        ret    0x10
L_d498:
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        call    dword ptr [g_0076b0ec]
L_d4a3:
        xor    eax, eax
        pop    esi
        add    esp, 0x20c
        ret    0x10
L_d4af:
        mov    edx, dword ptr [esp + 4]
        push    edx
        call    dword ptr [g_0076b0ec]
        mov    ecx, dword ptr [esp + 0x220]
        mov    edx, dword ptr [esp + 0x21c]
        lea    eax, [esp + 0xc]
        push    eax
        mov    eax, dword ptr [esp + 0x21c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x21c]
        push    edx
        mov    edx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    edx
        push    0
        call    dword ptr [g_0076b024]
        pop    esi
        add    esp, 0x20c
        ret    0x10
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
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x2c]
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        xor    eax, eax
        mov    dword ptr [esp + 4], eax
        __emit 0xDF  /* __emit: fild qword ptr [esp] zero-disp; MSVC6 drops the 00 disp byte (DF 2C 24) */
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        __emit 0x89  /* mov dword ptr [esp], ecx */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov    ecx, dword ptr [esp + 0x30]
        mov    dword ptr [esp + 4], eax
        mov    dword ptr [esp + 8], edx
        fmul    dword ptr [g_007a1b08]
        __emit 0xDF  /* __emit: fild qword ptr [esp] zero-disp; MSVC6 drops the 00 disp byte (DF 2C 24) */
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0xc], eax
        push    esi
        fmul    dword ptr [g_007a1b08]
        mov    esi, dword ptr [esp + 0x24]
        push    0x85b190
        fst    dword ptr [esp + 8]
        fild    qword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x14], eax
        fmul    dword ptr [g_007a1b08]
        fstp    dword ptr [esp + 0x30]
        fild    qword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], eax
        fmul    dword ptr [g_007a1b08]
        fstp    dword ptr [esp + 0x2c]
        fild    qword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], eax
        add    edx, esi
        fst    dword ptr [g_0085b190]
        fild    qword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x14], eax
        fst    dword ptr [esp + 0x38]
        mov    dword ptr [g_0085b1cc], edx
        mov    edx, dword ptr [esp + 0x24]
        fstp    dword ptr [g_0085b194]
        fld    st(2)
        add    ecx, edx
        mov    edx, dword ptr [esp + 0x2c]
        fstp    dword ptr [g_0085b1a8]
        fxch    st(1)
        mov    dword ptr [g_0085b1ec], edx
        mov    edx, dword ptr [esp + 8]
        fstp    dword ptr [g_0085b1ac]
        mov    dword ptr [g_0085b20c], edx
        fstp    dword ptr [g_0085b1b0]
        fild    qword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, dword ptr [esp + 0x30]
        fst    dword ptr [esp + 0x34]
        mov    dword ptr [g_0085b1e8], ecx
        mov    eax, dword ptr [esp + 0x34]
        fstp    dword ptr [g_0085b1b4]
        mov    dword ptr [g_0085b1d4], eax
        mov    eax, dword ptr [esp + 0x38]
        fstp    dword ptr [g_0085b1c8]
        fild    qword ptr [esp + 0x10]
        mov    dword ptr [g_0085b1f4], eax
        mov    dword ptr [g_0085b208], ecx
        fst    dword ptr [g_0085b1d0]
        fstp    dword ptr [g_0085b1f0]
        call    FUN_0074c120
        pop    esi
        add    esp, 0x10
        ret    0x20
    }
}
