/*
 * FUN_00767163 (extent 0x767163-0x76742b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_007b220c;
extern int    g_008bd588;
extern int    g_008bd58c;
extern int    g_008bd590;
extern int    g_008bd598;
extern int    g_008bd59c;
extern int    g_008bd5a0;
extern int    g_008bd5a8;
extern int    g_008bd5ac;
extern int    g_008bd5b0;
extern int    g_008bd5b8;
extern int    g_008bd5bc;
extern int    g_008bd5c0;
extern int    g_008bd5c8;
extern int    g_008bd5cc;
extern int    g_008bd5d0;
extern int    g_008bd5d8;
extern int    g_008bd5dc;
extern int    g_008bd5e0;
extern int    g_008bd5e8;
extern int    g_008bd5ec;
extern int    g_008bd5f0;
extern int    g_008bd5f4;
extern int    g_008bd5f8;
extern int    g_008bd5fc;

__declspec(naked) void FUN_00767163(void)
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
        sub    esp, 0xc
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x18]
        fld    dword ptr [eax]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 4]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [esp + 0x14]
        fsub    dword ptr [ecx + 8]
        mov    ecx, dword ptr [esp + 0x1c]
        fld    dword ptr [eax]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 4]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [ecx + 8]
        fst    dword ptr [esp + 8]
        fmul    dword ptr [esp + 8]
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fst    dword ptr [esp + 0x10]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_71e0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        add    esp, 0xc
        ret    
L_71e0:
        fxch    st(2)
        fmul    dword ptr [esp + 8]
        fxch    st(3)
        fmul st(0), st(2)
        faddp st(3), st(0)
        fmul st(0), st(3)
        faddp st(2), st(0)
        fxch    st(1)
        fdiv    dword ptr [esp + 0x10]
        fchs    
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        add    esp, 0xc
        ret    
        /* __emit: forward jmp to L_7210; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7210:
        mov    dword ptr [g_008bd5d8], 0
        mov    dword ptr [g_008bd5dc], 0
        mov    dword ptr [g_008bd5e0], 0x3f800000
        ret    
        nop    
        /* __emit: forward jmp to L_7240; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7240:
        mov    dword ptr [g_008bd5c8], 0
        mov    dword ptr [g_008bd5cc], 0
        mov    dword ptr [g_008bd5d0], 0xbf800000
        ret    
        nop    
        /* __emit: forward jmp to L_7270; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7270:
        mov    dword ptr [g_008bd5b8], 0x3f800000
        mov    dword ptr [g_008bd5bc], 0
        mov    dword ptr [g_008bd5c0], 0
        ret    
        nop    
        /* __emit: forward jmp to L_72a0; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_72a0:
        mov    dword ptr [g_008bd5a8], 0xbf800000
        mov    dword ptr [g_008bd5ac], 0
        mov    dword ptr [g_008bd5b0], 0
        ret    
        nop    
        /* __emit: forward jmp to L_72d0; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_72d0:
        mov    dword ptr [g_008bd598], 0
        mov    dword ptr [g_008bd59c], 0x3f800000
        mov    dword ptr [g_008bd5a0], 0
        ret    
        nop    
        /* __emit: forward jmp to L_7300; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_7300:
        mov    dword ptr [g_008bd588], 0
        mov    dword ptr [g_008bd58c], 0xbf800000
        mov    dword ptr [g_008bd590], 0
        ret    
        nop    
        sub    esp, 0xc
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 0x14]
        fld    dword ptr [ecx]
        fsub    dword ptr [edx]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [edx + 4]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [edx + 4]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [edx + 8]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [edx + 8]
        fst    dword ptr [esp + 8]
        fmul    dword ptr [esp + 8]
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fld    dword ptr [esp + 4]
        fmul    dword ptr [esp + 4]
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fstp    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [eax + 8]
        add    esp, 0xc
        ret    0xc
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
        /* __emit: forward jmp to L_73c0; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_73c0:
        mov    dword ptr [g_008bd5e8], 0
        mov    dword ptr [g_008bd5ec], 0
        mov    dword ptr [g_008bd5f0], 0
        mov    dword ptr [g_008bd5f4], 0
        mov    dword ptr [g_008bd5f8], 0
        mov    dword ptr [g_008bd5fc], 0
        ret    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    dword ptr [eax + 0x10], edx
        mov    edx, dword ptr [ecx + 0x14]
        mov    dword ptr [eax + 0x14], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    4
    }
}
