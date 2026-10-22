/*
 * FUN_005E49F0 (765 B) - Missile homing/guidance update (__thiscall, RET 8).
 *
 * If not locked and the timer is within range, computes the direction to
 * the target, normalizes vectors, and updates the missile's orientation
 * and target position fields. Heavy FPU usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_004fafc0(void);
extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004daa20(void);

__declspec(naked) void __stdcall FUN_005e49f0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x64
        push    ebx
        mov     ebx, ecx
        mov     al, byte ptr [ebx + 0x299]
        test    al, al
        push    esi
        push    edi
        jnz     l_skip_guidance
        fld     dword ptr [ebx + 0x290]
        fcomp   dword ptr [ebx + 0x294]
        fnstsw  ax
        test    ah, 0x1
        jz      l_skip_guidance
        mov     eax, dword ptr [ebx + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x1c], ecx
        mov     edx, dword ptr [eax + 0x1c]
        lea     ecx, [ebp - 0x1c]
        push    ecx
        mov     dword ptr [ebp - 0x18], edx
        mov     eax, dword ptr [eax + 0x2c]
        lea     edi, [ebx + 0x284]
        push    edi
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x14], eax
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
        jnz     l_normalize
        fstp    st(0)
    l_skip_guidance:
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_004fafc0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    l_normalize:
        fsqrt
        lea     esi, [ebx + 0x198]
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x3D
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        fld     dword ptr [ebp - 0x10]
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0xc]
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [esi + 0x8]
        fld     dword ptr [esi + 0x4]
        fld     dword ptr [esi]
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
        jnz     l_normalize2
        mov     ecx, dword ptr [ebp + 0xc]
        fstp    st(0)
        mov     edx, dword ptr [ebp + 0x8]
        fstp    st(0)
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_004fafc0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    l_normalize2:
        fsqrt
        push    esi
        lea     ecx, [ebx + 0x29c]
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x3D
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        fld     st(0)
        fmul    dword ptr [esi]
        fstp    dword ptr [ebp - 0x28]
        fld     st(0)
        fmul    dword ptr [ebx + 0x19c]
        fstp    dword ptr [ebp - 0x24]
        fmul    dword ptr [ebx + 0x1a0]
        fst     dword ptr [ebp - 0x20]
        fmul    st, st(1)
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x34]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        call    FUN_00767430
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_004fafc0
        fld     dword ptr [esi + 0x8]
        fld     dword ptr [esi + 0x4]
        fld     dword ptr [esi]
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
        fmul    dword ptr [esi]
        fstp    dword ptr [ebp - 0x34]
        fld     st(0)
        fmul    dword ptr [ebx + 0x19c]
        fstp    dword ptr [ebp - 0x30]
        fmul    dword ptr [ebx + 0x1a0]
        fmul    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x24]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x28]
        faddp   st(1), st(0)
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      l_ret3
        mov     eax, dword ptr [ebx + 0xd8]
        fld     dword ptr [edi]
        mov     edx, dword ptr [eax + 0x8c]
        mov     dword ptr [ebp - 0x1c], edx
        fsub    dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [eax + 0x9c]
        mov     dword ptr [ebp - 0x18], ecx
        mov     edx, dword ptr [eax + 0xac]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [edi + 0x4]
        mov     dword ptr [ebp - 0x14], edx
        fsub    dword ptr [ebp - 0x18]
        lea     esi, [eax + 0x20]
        mov     ecx, 0xc
        push    1
        fstp    dword ptr [ebp - 0xc]
        lea     eax, [ebp - 0x10]
        fld     dword ptr [edi + 0x8]
        lea     edi, [ebp - 0x64]
        fsub    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x8]
        rep     movsd
        xor     esi, esi
        push    esi
        push    2
        push    eax
        lea     ecx, [ebp - 0x64]
        call    FUN_0041fde0
        lea     ecx, [ebp - 0x64]
        push    ecx
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
        pop     edi
        fstp    dword ptr [ebx + 0x188]
        mov     dword ptr [ebx + 0x184], esi
        mov     dword ptr [ebx + 0x180], esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    l_ret2:
        fstp    st(0)
    l_ret3:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
