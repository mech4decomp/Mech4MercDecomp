/*
 * FUN_0042903b (extent 0x42903b-0x4292cd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007b9658;
extern int    g_007b965c;
extern int    g_007b9660;
extern int    g_007b9664;
extern int    g_007b9668;
extern int    g_007b966c;
extern int    g_007b9670;
extern int    g_007b9674;
extern int    g_008bd548;
extern int    g_008bd54c;
extern int    g_008bd550;
extern int    g_008bd554;
extern void __cdecl FUN_00482160(void);
extern void __cdecl FUN_004821a0(void);
extern void __cdecl FUN_00490460(void);

__declspec(naked) void FUN_0042903b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00482160
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004821a0
        ret    4
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    ecx
        mov    eax, dword ptr [ebp + 8]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00490460
        fld    dword ptr [esi + 0x54]
        fld    dword ptr [esi + 0x64]
        fld    dword ptr [esi + 0x74]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    dword ptr [ebp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    eax, dword ptr [ebp + 8]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 4], eax
        fld    dword ptr [ebp - 4]
        mov    ecx, 0x3f800000
        fstp    dword ptr [ebp + 8]
        fld    dword ptr [ebp + 8]
        mov    dword ptr [esi + 0x8c], ecx
        fcomp    dword ptr [esi + 0x80]
        fnstsw  ax
        test    ah, 0x41
        je    L_90dc
        mov    dword ptr [esi + 0x8c], ecx
L_90c6:
        fld    dword ptr [esi + 8]
        fmul    dword ptr [esi + 0x8c]
        fstp    dword ptr [esi + 0x8c]
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    4
L_90dc:
        fld    dword ptr [ebp + 8]
        fcomp    dword ptr [esi + 0x84]
        fnstsw  ax
        test    ah, 1
        je    L_9103
        fld    dword ptr [esi + 0x84]
        fsub    dword ptr [ebp + 8]
        fmul    dword ptr [esi + 0x88]
        fstp    dword ptr [esi + 0x8c]
        jmp    L_90c6
L_9103:
        mov    dword ptr [esi + 0x8c], 0xbf800000
        pop    esi
        mov    esp, ebp
        pop    ebp
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
        sub    esp, 0xc
        fld    dword ptr [ecx + 0x8c]
        lea    eax, [ecx + 0xc]
        mov    edx, dword ptr [eax]
        fcomp    dword ptr [g_0076c5b0]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 8], eax
        fnstsw  ax
        mov    dword ptr [esp + 4], edx
        test    ah, 1
        jne    L_91a2
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fmul    dword ptr [ecx + 0x8c]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [ecx + 0x8c]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [ecx + 0x8c]
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 4]
        fstp    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
L_91a2:
        add    esp, 0xc
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        fld    dword ptr [ecx + 0x8c]
        lea    eax, [ecx + 0xc]
        mov    edx, dword ptr [eax]
        fcomp    dword ptr [g_0076c5b0]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 8], eax
        fnstsw  ax
        mov    dword ptr [esp + 4], edx
        test    ah, 1
        jne    L_921f
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [esp + 0x10]
        fmul    dword ptr [ecx + 0x8c]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [ecx + 0x8c]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [ecx + 0x8c]
        fstp    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
L_921f:
        add    esp, 0xc
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
        mov    eax, 8
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
        xor    eax, eax
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
        __emit 0xE9  // jmp L_9260 (rel32; MSVC6 emits eb rel8 for this short target)
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
L_9260:
        mov    eax, dword ptr [g_008bd548]
        mov    ecx, dword ptr [g_008bd54c]
        mov    edx, dword ptr [g_008bd550]
        mov    dword ptr [g_007b9668], eax
        mov    eax, dword ptr [g_008bd554]
        mov    dword ptr [g_007b966c], ecx
        mov    dword ptr [g_007b9670], edx
        mov    dword ptr [g_007b9674], eax
        ret    
        nop    
        nop    
        nop    
        __emit 0xE9  // jmp L_92a0 (rel32; MSVC6 emits eb rel8 for this short target)
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
L_92a0:
        mov    eax, dword ptr [g_008bd548]
        mov    ecx, dword ptr [g_008bd54c]
        mov    edx, dword ptr [g_008bd550]
        mov    dword ptr [g_007b9658], eax
        mov    eax, dword ptr [g_008bd554]
        mov    dword ptr [g_007b965c], ecx
        mov    dword ptr [g_007b9660], edx
        mov    dword ptr [g_007b9664], eax
        ret    
    }
}
