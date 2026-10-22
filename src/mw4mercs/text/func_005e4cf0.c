/*
 * FUN_005E4CF0 (1384 B) - Missile target tracking / lock-on (__thiscall, RET 8).
 *
 * Performs 3x3 matrix multiply (rotation) of the missile's orientation
 * against the target frame, computes distance to target, and manages the
 * lock-on counter at +0x2B4 / +0x2B8. Heavy FPU usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004daa20(void);

__declspec(naked) void __stdcall FUN_005e4cf0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0xf8
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        lea     ecx, [ebx + 0x258]
        mov     dword ptr [ebp - 0x28], eax
        call    FUN_0041fd80
        mov     esi, eax
        mov     eax, dword ptr [ebx + 0xc4]
        test    eax, eax
        mov     dword ptr [ebp - 0x2c], esi
        jz      l_ret
        test    esi, esi
        jz      l_check_timer
        mov     ecx, dword ptr [esi + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        jz      l_check_timer
        fld     dword ptr [ebx + 0x290]
        fcomp   dword ptr [ebx + 0x294]
        fnstsw  ax
        test    ah, 0x1
        jz      l_check_timer
        inc     dword ptr [ebx + 0x2b8]
    l_check_timer:
        fld     dword ptr [ebx + 0x290]
        fcomp   dword ptr [ebx + 0x294]
        fnstsw  ax
        test    ah, 0x1
        jz      l_ret
        test    esi, esi
        jz      l_ret
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 memory-deref */
        _emit   0xA1
        _emit   0x00
        _emit   0xC7
        _emit   0x7D
        _emit   0x00
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_ret
        mov     al, byte ptr [ebx + 0x299]
        test    al, al
        jnz     l_ret
        push    0x7b9460
        lea     ecx, [ebp - 0x68]
        call    FUN_00419460
        mov     esi, dword ptr [esi + 0xd8]
        lea     edx, [esi + 0x80]
        push    edx
        lea     ecx, [ebp - 0x68]
        call    FUN_004206b0
        push    0x7b9460
        lea     ecx, [ebp + 0xffffff68]
        call    FUN_00419460
        add     esi, 0x20
        lea     eax, [ebp - 0x68]
        lea     ecx, [ebp + 0xffffff68]
        mov     dword ptr [ebp - 0x14], esi
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     edx, dword ptr [ebp - 0x18]
        push    esi
        mov     esi, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        push    0x7b9460
        lea     ecx, [ebp + 0xffffff38]
        call    FUN_00419460
        lea     edi, [ebx + 0x284]
        push    edi
        lea     ecx, [ebp + 0xffffff38]
        call    FUN_0040d030
        lea     edx, [ebp + 0xffffff68]
        lea     eax, [ebp + 0xffffff38]
        lea     ecx, [ebp - 0x68]
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0x18], ecx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x18]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     edx, dword ptr [ebp - 0x5c]
        mov     eax, dword ptr [ebp - 0x4c]
        mov     ecx, dword ptr [ebp - 0x3c]
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [ebx + 0xc4]
        mov     dword ptr [edi + 0x4], eax
        mov     eax, dword ptr [edx + 0xd8]
        add     eax, 0x80
        push    eax
        mov     dword ptr [edi + 0x8], ecx
        push    edi
        lea     ecx, [ebp - 0x24]
        call    FUN_0041c830
        mov     eax, dword ptr [ebx + 0xd8]
        fld     dword ptr [eax + 0x5c]
        mov     ecx, dword ptr [eax + 0x6c]
        fld     dword ptr [ebp - 0x24]
        mov     edx, dword ptr [eax + 0x7c]
        fsub    st, st(1)
        add     eax, 0x50
        mov     esi, dword ptr [ebx + 0x2b4]
        cmp     esi, 0x5
        fstp    dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0x34], ecx
        mov     dword ptr [ebp - 0x30], edx
        fstp    st(0)
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x1c]
        fsub    dword ptr [ebp - 0x30]
        fst     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x4]
        jge     l_5226
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 memory-deref */
        _emit   0xA1
        _emit   0x8C
        _emit   0x26
        _emit   0x7F
        _emit   0x00
        push    eax
        mov     eax, dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jz      l_5221
        fld     dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x28]
        fcomp   dword ptr [ecx + 0x84]
        fnstsw  ax
        test    ah, 0x1
        jz      l_5221
        mov     edx, dword ptr [ebp - 0x24]
        mov     eax, dword ptr [ebp - 0x20]
        inc     esi
        push    0
        mov     dword ptr [ebx + 0x2b4], esi
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [ebp + 0xffffff08]
        rep     movsd
        mov     ecx, dword ptr [ebp - 0x1c]
        push    1
        mov     dword ptr [ebp + 0xffffff14], edx
        push    2
        lea     edx, [ebp - 0x10]
        mov     dword ptr [ebp + 0xffffff34], ecx
        push    edx
        lea     ecx, [ebp + 0xffffff08]
        mov     dword ptr [ebp + 0xffffff24], eax
        call    FUN_0041fde0
        lea     eax, [ebp + 0xffffff08]
        push    eax
        mov     ecx, ebx
        call    FUN_004daa20
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    l_5221:
        cmp     esi, 0x5
        jl      l_ret
    l_5226:
        mov     ecx, dword ptr [ebp - 0x28]
        fld     dword ptr [ecx + 0x84]
        /* __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x05
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      l_5249
        mov     dword ptr [ebx + 0x2b4], 0
    l_5249:
        inc     dword ptr [ebx + 0x2b8]
    l_ret:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
