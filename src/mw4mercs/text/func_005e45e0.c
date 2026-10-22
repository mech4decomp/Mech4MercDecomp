/*
 * FUN_005E45E0 (1002 B) - Missile update/tick (__thiscall, RET 8).
 *
 * Advances the missile timer, dispatches on the missile type via a jump
 * table, and performs homing/guidance math (vector normalization, dot
 * products) with heavy FPU usage. Sets the "locked" flag at +0x299 and
 * updates target position fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ed240(void);
extern void __cdecl FUN_005e5700(void);
extern void __cdecl FUN_005e5280(void);
extern void __cdecl FUN_005e49f0(void);
extern void __cdecl FUN_005e4cf0(void);
extern void __cdecl FUN_005e58b0(void);
extern void __cdecl FUN_005e5af0(void);
extern void __cdecl FUN_005e59b0(void);
extern void __cdecl FUN_005e5a50(void);
extern void __cdecl FUN_005e5bd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004daa20(void);

__declspec(naked) void __stdcall FUN_005e45e0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x7c
        fld     qword ptr [ebp + 0x8]
        push    ebx
        mov     ebx, ecx
        fsub    qword ptr [ebx + 0xe4]
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        fadd    dword ptr [ebx + 0x290]
        push    edi
        fstp    dword ptr [ebx + 0x290]
        call    dword ptr [eax + 0x4]
        mov     esi, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_005ed240
        mov     ecx, dword ptr [ebx + 0xe0]
        mov     eax, dword ptr [ecx + 0x14]
        add     eax, -0x6
        cmp     eax, 0x6
        ja      l_case_default
        jmp     dword ptr [eax*4 + 0x5e49cc]
    l_case6:
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e5700
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e5280
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e49f0
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e4cf0
        jmp     l_case_default
    l_case8:
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e58b0
        jmp     l_after_switch
    l_case9:
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e5af0
        jmp     l_after_switch
    l_case10:
        mov     ecx, ebx
        call    FUN_005e59b0
        jmp     l_after_switch
    l_caseB:
        mov     ecx, ebx
        call    FUN_005e5a50
        jmp     l_after_switch
    l_case7:
        fld     dword ptr [ebx + 0x290]
        mov     edx, dword ptr [ebp - 0x4]
        fcomp   dword ptr [edx + 0x7c]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_case7_inner
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    l_case7_inner:
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e5bd0
    l_after_switch:
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e5280
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005e49f0
    l_case_default:
        mov     al, byte ptr [ebx + 0x299]
        test    al, al
        jnz     l_ret
        lea     ecx, [ebx + 0x258]
        call    FUN_0041fd80
        test    eax, eax
        jnz     l_ret
        fld     dword ptr [ebx + 0x270]
        fsub    dword ptr [ebx + 0x288]
        fabs
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD9
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_ret
        mov     eax, dword ptr [ebx + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x34], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [ebp - 0x30], edx
        mov     eax, dword ptr [eax + 0x2c]
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x2c], eax
        push    ecx
        lea     eax, [ebx + 0x26c]
        push    eax
        lea     ecx, [ebp - 0x10]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     st(0)
        fabs
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD9
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      l_ret2
        fsqrt
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x3D
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        fld     dword ptr [ebp - 0x10]
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0xc]
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x8]
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x14]
        fstp    st(0)
        fld     dword ptr [ebx + 0x1a0]
        fld     dword ptr [ebx + 0x19c]
        fld     dword ptr [ebx + 0x198]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fld     st(0)
        fabs
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD9
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      l_ret2
        fsqrt
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x3D
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        fld     st(0)
        fmul    dword ptr [ebx + 0x198]
        fstp    dword ptr [ebp - 0x28]
        fld     st(0)
        fmul    dword ptr [ebx + 0x19c]
        fstp    dword ptr [ebp - 0x24]
        fmul    dword ptr [ebx + 0x1a0]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x1c]
        faddp   st(1), st(0)
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x1D
        _emit   0x94
        _emit   0x90
        _emit   0x78
        _emit   0x00
        fnstsw  ax
        test    ah, 0x1
        jnz     l_ret
        mov     eax, dword ptr [ebx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        mov     ecx, dword ptr [eax + 0xac]
        fld     dword ptr [ebx + 0x284]
        fsub    st, st(1)
        mov     dword ptr [ebp - 0x3c], edx
        mov     dword ptr [ebp - 0x38], ecx
        lea     esi, [eax + 0x20]
        fstp    dword ptr [ebp - 0x28]
        mov     ecx, 0xc
        lea     edi, [ebp - 0x7c]
        fstp    st(0)
        push    1
        fld     dword ptr [ebx + 0x288]
        lea     edx, [ebp - 0x28]
        fsub    dword ptr [ebp - 0x3c]
        mov     byte ptr [ebx + 0x299], 0x1
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebx + 0x28c]
        fsub    dword ptr [ebp - 0x38]
        fstp    dword ptr [ebp - 0x20]
        rep     movsd
        xor     esi, esi
        push    esi
        push    2
        push    edx
        lea     ecx, [ebp - 0x7c]
        call    FUN_0041fde0
        lea     eax, [ebp - 0x7c]
        push    eax
        mov     ecx, ebx
        call    FUN_004daa20
        fld     dword ptr [ebx + 0x170]
        fld     dword ptr [ebx + 0x16c]
        fld     dword ptr [ebx + 0x168]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        mov     dword ptr [ebx + 0x17c], esi
        fstp    dword ptr [ebx + 0x170]
        fld     dword ptr [ebx + 0x188]
        mov     dword ptr [ebx + 0x178], esi
        fld     dword ptr [ebx + 0x184]
        mov     dword ptr [ebx + 0x174], esi
        fld     dword ptr [ebx + 0x180]
        mov     dword ptr [ebx + 0x16c], esi
        fld     st(0)
        mov     dword ptr [ebx + 0x168], esi
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebx + 0xd8]
        fstp    dword ptr [ebx + 0x188]
        mov     dword ptr [ebx + 0x184], esi
        mov     dword ptr [ebx + 0x180], esi
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [ebp - 0x1c]
        add     eax, 0x80
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x0D
        _emit   0x6C
        _emit   0x09
        _emit   0x78
        _emit   0x00
        mov     edx, dword ptr [eax + 0x2c]
        fld     dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x48], ecx
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x0D
        _emit   0x6C
        _emit   0x09
        _emit   0x78
        _emit   0x00
        mov     dword ptr [ebp - 0x44], edx
        pop     edi
        pop     esi
        fstp    dword ptr [ebp - 0x3c]
        fld     dword ptr [ebp - 0x14]
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x0D
        _emit   0x6C
        _emit   0x09
        _emit   0x78
        _emit   0x00
        fstp    dword ptr [ebp - 0x38]
        fadd    st, st(1)
        fstp    dword ptr [ebx + 0x26c]
        mov     eax, dword ptr [ebx + 0x26c]
        mov     dword ptr [ebx + 0x284], eax
        fstp    st(0)
        fld     dword ptr [ebp - 0x3c]
        fadd    dword ptr [ebp - 0x48]
        fstp    dword ptr [ebx + 0x270]
        mov     ecx, dword ptr [ebx + 0x270]
        fld     dword ptr [ebp - 0x38]
        mov     dword ptr [ebx + 0x288], ecx
        fadd    dword ptr [ebp - 0x44]
        fstp    dword ptr [ebx + 0x274]
        mov     edx, dword ptr [ebx + 0x274]
        mov     dword ptr [ebx + 0x28c], edx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    l_ret2:
        fstp    st(0)
    l_ret:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
