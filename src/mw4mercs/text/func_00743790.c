/*
 * FUN_00743790 (864 B) — __cdecl, RET 0x24. Color/format conversion
 * (RGB <-> packed pixel) routine.
 *
 * Reads several channel bit-width/shift parameters from stack args, calls
 * FUN_00742a70/90/b0 to derive masks, then iterates over a grid (nested
 * loops over ebp+0x28 and ebp+0x24) computing per-pixel color distances
 * with FPU math (double constants 0x7a9b70/0x76d968/0x7a9b68) and packing
 * the result as 32-bit or 16-bit pixels.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_7a9b70;
extern double g_76d968;
extern double g_7a9b68;

extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00742a70(void);
extern void __cdecl FUN_00742a90(void);
extern void __cdecl FUN_00742ab0(void);
extern void __cdecl FUN_0075db4a(void);   /* __ftol */
extern void __cdecl FUN_00735440(void);

__declspec(naked) void FUN_00743790(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xec
        mov     ecx, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        push    0
        push    0x821
        lea     eax, [esp + 0x84]
        push    eax
        push    0
        push    ecx
        mov     dword ptr [esp + 0x90], 0x7c
        call    FUN_007353f0
        mov     eax, dword ptr [esp + 0xd4]
        mov     edx, dword ptr [esp + 0xa0]
        push    eax
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_00742a70
        mov     ecx, dword ptr [esp + 0xd4]
        push    ecx
        mov     dword ptr [esp + 0x64], eax
        call    FUN_00742a90
        mov     edx, dword ptr [esp + 0xd4]
        push    edx
        mov     dword ptr [esp + 0x54], eax
        call    FUN_00742ab0
        mov     dword ptr [esp + 0x6c], eax
        mov     eax, dword ptr [esp + 0xd8]
        push    eax
        call    FUN_00742a70
        mov     ecx, dword ptr [esp + 0xd8]
        push    ecx
        mov     dword ptr [esp + 0x44], eax
        call    FUN_00742a90
        mov     edx, dword ptr [esp + 0xd8]
        push    edx
        mov     dword ptr [esp + 0x6c], eax
        call    FUN_00742ab0
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [esp + 0xdc]
        push    eax
        call    FUN_00742a70
        mov     ecx, dword ptr [esp + 0xdc]
        push    ecx
        mov     dword ptr [esp + 0x50], eax
        call    FUN_00742a90
        mov     edx, dword ptr [esp + 0xe0]
        push    edx
        mov     dword ptr [esp + 0x58], eax
        call    FUN_00742a70
        mov     dword ptr [esp + 0x58], eax
        mov     eax, dword ptr [esp + 0xe0]
        push    eax
        call    FUN_00742a90
        mov     ecx, dword ptr [esp + 0xe0]
        push    ecx
        mov     dword ptr [esp + 0x40], eax
        call    FUN_00742ab0
        mov     edx, dword ptr [ebp + 0x28]
        mov     dword ptr [esp + 0x44], eax
        mov     eax, dword ptr [esp + 0x8c]
        sar     eax, 1
        mov     dword ptr [esp + 0x64], eax
        mov     eax, dword ptr [ebp + 0x14]
        xor     ecx, ecx
        shr     eax, 2
        test    edx, edx
        mov     dword ptr [esp + 0x2c], ecx
        jbe     L_743adc
        lea     edi, [eax*4]
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [esp + 0x48], edi
        jmp     L_7438c2
L_7438be:
        mov     edi, dword ptr [esp + 0x48]
L_7438c2:
        mov     ebx, dword ptr [esp + 0x18]
        lea     edx, [edi + eax]
        mov     esi, eax
        sub     esi, edi
        mov     edi, dword ptr [ebp + 0x28]
        dec     edi
        cmp     ecx, edi
        mov     dword ptr [esp + 0x5c], edx
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0xc], esi
        jne     L_7438e5
        mov     dword ptr [esp + 0x10], eax
L_7438e5:
        test    ecx, ecx
        jne     L_7438ef
        mov     dword ptr [esp + 0xc], eax
        mov     esi, eax
L_7438ef:
        xor     edi, edi
        cmp     dword ptr [ebp + 0x24], edi
        mov     dword ptr [esp + 0x1c], edi
        jbe     L_743abb
        add     eax, -4
        mov     dword ptr [esp + 0x14], eax
        jmp     L_743913
L_743907:
        mov     esi, dword ptr [esp + 0xc]
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x14]
L_743913:
        mov     edx, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [eax + 4]
        dec     edx
        cmp     edi, edx
        mov     edx, ecx
        je      L_743923
        mov     edx, dword ptr [eax + 8]
L_743923:
        test    edi, edi
        jne     L_74392b
        mov     eax, ecx
        jmp     L_74392d
L_74392b:
        mov     eax, dword ptr [eax]
L_74392d:
        mov     esi, dword ptr [esi]
        and     eax, 0xff
        and     edx, 0xff
        mov     edi, eax
        sub     edi, edx
        mov     dword ptr [esp + 0x20], edi
        mov     edi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [edi]
        and     esi, 0xff
        and     edi, 0xff
        and     ecx, 0xff
        sub     esi, edi
        cmp     ecx, eax
        mov     dword ptr [esp + 0x30], esi
        jge     L_743978
        cmp     ecx, edx
        jge     L_743978
        sub     eax, ecx
        sub     ecx, edx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x20], eax
        jge     L_743978
        mov     dword ptr [esp + 0x20], ecx
L_743978:
        fild    dword ptr [esp + 0x20]
        fmul    qword ptr [g_7a9b70]
        fild    dword ptr [esp + 0x30]
        fmul    qword ptr [g_7a9b70]
        fst     qword ptr [esp + 0x20]
        fld     st(0)
        fmulp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        fld     qword ptr [g_76d968]
        fsub    st(0), st(1)
        fld     qword ptr [g_76d968]
        fsub    st(0), st(3)
        fmulp   st(1), st(0)
        fsqrt
        fst     qword ptr [esp + 0x70]
        fld     st(0)
        fmul    st(0), st(1)
        fadd    st(0), st(2)
        fadd    st(0), st(3)
        fsqrt
        fstp    qword ptr [esp + 0x30]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fdiv    qword ptr [esp + 0x30]
        fadd    qword ptr [g_76d968]
        fmul    qword ptr [g_7a9b68]
        call    FUN_0075db4a
        fld     qword ptr [esp + 0x20]
        fdiv    qword ptr [esp + 0x30]
        mov     edi, eax
        fadd    qword ptr [g_76d968]
        fmul    qword ptr [g_7a9b68]
        call    FUN_0075db4a
        fld     qword ptr [esp + 0x70]
        fdiv    qword ptr [esp + 0x30]
        mov     esi, eax
        fadd    qword ptr [g_76d968]
        fmul    qword ptr [g_7a9b68]
        call    FUN_0075db4a
        cmp     dword ptr [ebp + 8], 0x20
        jne     L_743a2c
        or      edi, 0xffffff00
        shl     edi, 8
        or      edi, esi
        shl     edi, 8
        or      edi, eax
        mov     dword ptr [ebx], edi
        add     ebx, 4
        jmp     L_743a7b
L_743a2c:
        mov     ecx, dword ptr [esp + 0x40]
        shr     esi, cl
        mov     ecx, dword ptr [esp + 0x68]
        mov     edx, 0xff
        and     esi, ecx
        mov     ecx, dword ptr [esp + 0x38]
        shl     esi, cl
        mov     ecx, dword ptr [esp + 0x60]
        shr     edi, cl
        and     edi, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esp + 0x6c]
        shl     edi, cl
        mov     ecx, dword ptr [esp + 0x58]
        sar     edx, cl
        mov     ecx, dword ptr [esp + 0x3c]
        or      esi, edi
        and     edx, ecx
        mov     ecx, dword ptr [esp + 0x44]
        shl     edx, cl
        mov     ecx, dword ptr [esp + 0x4c]
        shr     eax, cl
        or      esi, edx
        and     eax, dword ptr [esp + 0x54]
        or      esi, eax
        mov     word ptr [ebx], si
        add     ebx, 2
L_743a7b:
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [ebp + 0x24]
        add     eax, 4
        mov     dword ptr [esp + 0x14], eax
        mov     eax, 4
        add     edi, eax
        add     esi, eax
        mov     eax, dword ptr [esp + 0x1c]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esp + 0x1c], eax
        jb      L_743907
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x5c]
L_743abb:
        mov     esi, dword ptr [esp + 0x64]
        mov     eax, edx
        mov     edx, dword ptr [esp + 0x18]
        lea     edx, [edx + esi*2]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [ebp + 0x28]
        inc     ecx
        cmp     ecx, edx
        mov     dword ptr [esp + 0x2c], ecx
        jb      L_7438be
L_743adc:
        mov     eax, dword ptr [ebp + 0xc]
        push    0
        push    eax
        call    FUN_00735440
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x24
    }
}
