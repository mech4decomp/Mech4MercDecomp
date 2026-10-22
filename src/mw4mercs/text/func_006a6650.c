/*
 * FUN_006a6650 (752 B) ? __thiscall (ECX=this) with 3 stack params, RET 0xc.
 * Computes a lattice-distance factor via FPU math, dispatching on
 * [this+0x10] (0/1/2/3/other) through virtual calls.
 *
 * __thiscall, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00799e2c;
extern float g_0076c5b0;
extern float g_0076d064;
extern float g_0076d070;
extern char g_0082db28;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_00419480(void);

__declspec(naked) void __cdecl FUN_006a6650(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x10]
        cmp     eax, 0x3
        jnz     L_6755
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx + 0x4]
        mov     esi, dword ptr [ecx]
        mov     ecx, eax
        sub     ecx, esi
        sar     ecx, 0x2
        mov     dword ptr [ebp + 0x8], 0x3f800000
        jz      L_691d
        cmp     esi, eax
        jz      L_691d
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [g_00799e2c]
    L_6691:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    eax
        lea     eax, [ebp - 0x18]
        push    eax
        call    dword ptr [edx + 0xf8]
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c410
        push    ebx
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     ecx, [ebp - 0xc]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x24], eax
        fld     dword ptr [ebp - 0x24]
        mov     eax, dword ptr [edi + 0x4]
        mov     edx, dword ptr [edi + 0x8]
        fstp    dword ptr [ebp + 0x10]
        fld     dword ptr [ebp + 0x10]
        mov     dword ptr [ebp - 0x1c], eax
        fcomp   dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x20], edx
        fnstsw  ax
        test    ah, 0x1
        jz      L_670a
        fld     dword ptr [g_0076c5b0]
        jmp     L_672d
    L_670a:
        fld     dword ptr [ebp + 0x10]
        fcomp   dword ptr [ebp - 0x20]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_671f
        fld     dword ptr [g_0076d064]
        jmp     L_672d
    L_671f:
        fld     dword ptr [ebp + 0x10]
        fsub    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 0x1c]
        fdivp   st(1), st(0)
    L_672d:
        fcom    dword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_673c
        fstp    dword ptr [ebp + 0x8]
        jmp     L_673e
    L_673c:
        fstp    st(0)
    L_673e:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx + 0x4]
        add     esi, 0x4
        cmp     esi, eax
        /* __emit: MSVC6 miscomputes backward jnz rel32 (off-by-5) when call-relocs sit between branch and target */
        __emit  0x0F
        __emit  0x85
        __emit  0x42
        __emit  0xFF
        __emit  0xFF
        __emit  0xFF
        pop     ebx
        jmp     L_691d

    L_6755:
        sub     eax, 0x0
        jz      L_6837
        dec     eax
        jz      L_67fb
        dec     eax
        jz      L_679b
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_00419480
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edx, dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x4], edx
        jmp     L_6898
    L_679b:
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x44]
        test    eax, eax
        jnz     L_67b9
        fld     dword ptr [g_0076d070]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    L_67b9:
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x44]
        mov     ecx, dword ptr [g_00799e2c]
        mov     edx, dword ptr [eax]
        push    0x0
        push    ecx
        lea     ecx, [ebp - 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp - 0x30], edx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x2c], ecx
        mov     edx, dword ptr [eax + 0x8]
        lea     eax, [ebp - 0x30]
        push    eax
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0x28], edx
        call    FUN_0040c410
        jmp     L_6898
    L_67fb:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x3c]
        mov     ecx, dword ptr [g_00799e2c]
        mov     edx, dword ptr [eax]
        push    0x0
        push    ecx
        lea     ecx, [ebp - 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        fld     dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        fstp    dword ptr [ebp - 0xc]
        mov     ecx, edx
        mov     dword ptr [ebp - 0x50], edx
        mov     edx, eax
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x4], edx
        jmp     L_6898
    L_6837:
        mov     al, byte ptr [g_0082db28]
        mov     ecx, dword ptr [ebp + 0x8]
        cmp     al, 0x1
        mov     eax, dword ptr [ecx]
        jnz     L_686f
        lea     edx, [ebp - 0x84]
        push    edx
        call    dword ptr [eax + 0xb0]
        push    eax
        lea     ecx, [ebp - 0x3c]
        call    FUN_00419480
        mov     eax, dword ptr [ebp - 0x3c]
        mov     ecx, dword ptr [ebp - 0x38]
        mov     edx, dword ptr [ebp - 0x34]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x4], edx
        jmp     L_6898
    L_686f:
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x48]
        call    FUN_00419480
        mov     ecx, dword ptr [ebp - 0x48]
        mov     edx, dword ptr [ebp - 0x44]
        mov     eax, dword ptr [ebp - 0x40]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0x4], eax
    L_6898:
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        lea     edx, [ebp - 0xc]
        push    edx
        lea     ecx, [ebp - 0x18]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0xc], eax
        fld     dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edi + 0x8]
        fstp    dword ptr [ebp + 0x8]
        fld     dword ptr [ebp + 0x8]
        mov     dword ptr [ebp + 0xc], ecx
        fcomp   dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x10], eax
        fnstsw  ax
        test    ah, 0x1
        jz      L_68f6
        mov     dword ptr [ebp + 0x8], 0x0
        jmp     L_691d
    L_68f6:
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [ebp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_690c
        mov     dword ptr [ebp + 0x8], 0x3f800000
        jmp     L_691d
    L_690c:
        fld     dword ptr [ebp + 0x8]
        fsub    dword ptr [ebp + 0xc]
        fld     dword ptr [ebp + 0x10]
        fsub    dword ptr [ebp + 0xc]
        fdivp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
    L_691d:
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        jnz     L_6935
        fld     dword ptr [g_0076d064]
        pop     edi
        fsub    dword ptr [ebp + 0x8]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    L_6935:
        fld     dword ptr [ebp + 0x8]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}

