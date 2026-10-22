/*
 * FUN_00656b60 (1428 B) — __thiscall ABL terrain height/slope sampler.
 * Computes a height value from a direction vector via heavy FPU
 * (fsub/fdiv/fxch/fcompp, qword compares), two jump tables (0x6570f4,
 * 0x657118), and calls FUN_005d8c20 / FUN_00657140 / FUN_00656a30.
 * RET 0x1c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d598;
extern float g_0080da60;
extern float g_0080da5c;
extern float g_0076c5b0;
extern float g_0076d5f4;
extern float g_0076d3c8;
extern float g_00788100;
extern double g_0076d970;
extern double g_00794990;
extern double g_007890a0;
extern float g_00784aec;
extern float g_0077de9c;
extern float g_00770168;
extern float g_0076d064;
extern int   g_007f2440;
extern int   g_6570f4;   /* jump table in .text */
extern int   g_657118;   /* jump table in .text */

extern void FUN_0075db4a(void);
extern void FUN_005d8c20(void);
extern void FUN_00657140(void);
extern void FUN_00656a30(void);

__declspec(naked) void FUN_00656b60(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x4c]
        cmp     esi, 2
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp+0x28], edi
        jnz     L_56b86
        fld     dword ptr [g_0076d598]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x1c
    L_56b86:
        cmp     esi, 6
        jnz     L_56b9b
    L_56b8b:
        fld     dword ptr [g_0076d598]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x1c
    L_56b9b:
        fld     dword ptr [g_0080da60]
        call    FUN_0075db4a
        fld     dword ptr [g_0080da5c]
        mov     ebp, eax
        mov     dword ptr [esp+0x24], ebp
        call    FUN_0075db4a
        fild    dword ptr [esp+0x24]
        fld     dword ptr [esp+0x38]
        mov     dword ptr [esp+0x2c], eax
        fsub    st(0), st(1)
        fstp    dword ptr [esp+0x38]
        fild    dword ptr [esp+0x2c]
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [esp+0x40]
        fsub    dword ptr [esp+0x24]
        fstp    dword ptr [esp+0x40]
        fsubr   dword ptr [esp+0x44]
        fld     dword ptr [esp+0x4c]
        fsub    dword ptr [esp+0x24]
        fstp    dword ptr [esp+0x4c]
        fld     st(0)
        fsub    dword ptr [esp+0x38]
        fld     dword ptr [esp+0x4c]
        fsub    dword ptr [esp+0x40]
        fstp    dword ptr [esp+0x10]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_56c1a
        fld     st(0)
        fmul    dword ptr [g_0076d598]
        fstp    dword ptr [esp+0x18]
        jmp     L_56c1e
    L_56c1a:
        fst     dword ptr [esp+0x18]
    L_56c1e:
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esp+0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_56c39
        fmul    dword ptr [g_0076d598]
    L_56c39:
        fld     dword ptr [esp+0x18]
        mov     ebx, 4
        fcomp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_56ced
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        fld     dword ptr [esp+0x10]
        fdiv    dword ptr [esp+0x18]
        fstp    dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esp+0x10]
        fnstsw  ax
        fcomp   dword ptr [g_0076d5f4]
        test    ah, 0x1
        fnstsw  ax
        jnz     L_56cb3
        test    ah, 0x1
        jz      L_56c88
        mov     dword ptr [esp+0x14], 1
        jmp     L_56d6a
    L_56c88:
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076d3c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_56ca6
        mov     dword ptr [esp+0x14], 3
        jmp     L_56d6a
    L_56ca6:
        mov     dword ptr [esp+0x14], 2
        jmp     L_56d6a
    L_56cb3:
        test    ah, 0x1
        jz      L_56cc5
        mov     dword ptr [esp+0x14], 7
        jmp     L_56d6a
    L_56cc5:
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076d3c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_56ce3
        mov     dword ptr [esp+0x14], 5
        jmp     L_56d6a
    L_56ce3:
        mov     dword ptr [esp+0x14], 6
        jmp     L_56d6a
    L_56ced:
        fxch
        fdiv    st(0), st(1)
        fxch
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        fcom    dword ptr [g_0076d5f4]
        test    ah, 0x1
        fnstsw  ax
        jnz     L_56d3c
        test    ah, 0x1
        jz      L_56d1f
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        mov     dword ptr [esp+0x14], 5
        jmp     L_56d6a
    L_56d1f:
        fcomp   dword ptr [g_0076d3c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_56d36
        mov     dword ptr [esp+0x14], 3
        jmp     L_56d6a
    L_56d36:
        mov     dword ptr [esp+0x14], ebx
        jmp     L_56d6a
    L_56d3c:
        test    ah, 0x1
        jz      L_56d4d
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        mov     dword ptr [esp+0x14], 7
        jmp     L_56d6a
    L_56d4d:
        fcomp   dword ptr [g_0076d3c8]
        mov     dword ptr [esp+0x14], 1
        fnstsw  ax
        test    ah, 0x41
        jz      L_56d6a
        mov     dword ptr [esp+0x14], 0
    L_56d6a:
        fmul    dword ptr [g_00788100]
        fld     dword ptr [esp+0x4c]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp+0x4c]
        fld     dword ptr [esp+0x38]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp+0x38]
        fld     dword ptr [esp+0x40]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp+0x40]
        fsub    dword ptr [esp+0x38]
        fld     dword ptr [esp+0x4c]
        fsub    dword ptr [esp+0x40]
        fstp    dword ptr [esp+0x10]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_56dc5
        fld     st(0)
        fmul    dword ptr [g_0076d598]
        fstp    dword ptr [esp+0x18]
        jmp     L_56dc9
    L_56dc5:
        fst     dword ptr [esp+0x18]
    L_56dc9:
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esp+0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_56de4
        fmul    dword ptr [g_0076d598]
    L_56de4:
        fld     dword ptr [esp+0x18]
        fcomp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_56e3e
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        fld     dword ptr [esp+0x10]
        fdiv    dword ptr [esp+0x18]
        fstp    dword ptr [esp+0x10]
        fcom    qword ptr [g_0076d970]
        fld     st(0)
        fnstsw  ax
        test    ah, 0x1
        jz      L_56e14
        fmul    dword ptr [g_0076d598]
    L_56e14:
        call    FUN_0075db4a
        fcomp   dword ptr [g_0076c5b0]
        mov     dword ptr [esp+0x1c], eax
        fnstsw  ax
        test    ah, 0x1
        jz      L_56e34
        mov     dword ptr [esp+0x20], 0xbf800000
        jmp     L_56e8d
    L_56e34:
        mov     dword ptr [esp+0x20], 0x3f800000
        jmp     L_56e8d
    L_56e3e:
        fxch
        fdiv    st(0), st(1)
        fstp    dword ptr [esp+0x20]
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        fld     dword ptr [esp+0x10]
        fcomp   qword ptr [g_0076d970]
        fld     dword ptr [esp+0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_56e63
        fmul    dword ptr [g_0076d598]
    L_56e63:
        call    FUN_0075db4a
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076c5b0]
        mov     dword ptr [esp+0x1c], eax
        mov     dword ptr [esp+0x10], 0xbf800000
        fnstsw  ax
        test    ah, 0x1
        jnz     L_56e8d
        mov     dword ptr [esp+0x10], 0x3f800000
    L_56e8d:
        cmp     esi, 8
        mov     dword ptr [esp+0x44], 0x3f
        ja      L_56ed7
        jmp     dword ptr [esi*4 + g_6570f4]
    L_56ea1:
        mov     dword ptr [esp+0x44], 0x20
        jmp     L_56ed7
    L_56eab:
        mov     dword ptr [esp+0x44], ebx
        jmp     L_56ed7
    L_56eb1:
        mov     dword ptr [esp+0x44], 8
        jmp     L_56ed7
    L_56ebb:
        mov     dword ptr [esp+0x44], 1
        jmp     L_56ed7
    L_56ec5:
        mov     dword ptr [esp+0x44], 2
        jmp     L_56ed7
    L_56ecf:
        mov     dword ptr [esp+0x44], 0x10
    L_56ed7:
        mov     eax, dword ptr [esp+0x38]
        fld     dword ptr [esp+0x38]
        mov     ecx, dword ptr [esp+0x40]
        mov     dword ptr [esp+0x18], eax
        mov     dword ptr [esp+0x24], ecx
        call    FUN_0075db4a
        fld     dword ptr [esp+0x40]
        mov     edi, dword ptr [edi+0x400004]
        lea     ebx, [eax+eax*2]
        call    FUN_0075db4a
        lea     edx, [eax+eax*4]
        mov     eax, dword ptr [edi+ebx*4]
        fld     dword ptr [eax+edx*8]
        mov     eax, dword ptr [esp+0x1c]
        test    eax, eax
        fstp    dword ptr [esp+0x30]
        mov     dword ptr [esp+0x38], 0
        __emit 0x0F      /* jz L_570a1: MSVC6 miscomputes fwd rel (off-by-0xA) */
        __emit 0x84
        __emit 0x7E
        __emit 0x01
        __emit 0x00
        __emit 0x00
        mov     eax, 0x66666667
        imul    dword ptr [esp+0x2c]
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ebx, edx
        mov     eax, 0x66666667
        imul    ebp
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ebp, edx
    L_56f4b:
        fld     dword ptr [esp+0x18]
        mov     esi, dword ptr [esp+0x1c]
        fadd    dword ptr [esp+0x20]
        dec     esi
        mov     dword ptr [esp+0x1c], esi
        fstp    dword ptr [esp+0x18]
        fld     dword ptr [esp+0x24]
        fadd    dword ptr [esp+0x10]
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [esp+0x18]
        call    FUN_0075db4a
        fld     dword ptr [esp+0x24]
        mov     esi, eax
        call    FUN_0075db4a
        mov     ecx, dword ptr [esp+0x44]
        mov     edx, dword ptr [esp+0x14]
        push    ecx
        mov     edi, eax
        push    edx
        lea     eax, [ebx+edi]
        push    eax
        lea     ecx, [esi+ebp]
        push    ecx
        mov     ecx, dword ptr [g_007f2440]
        call    FUN_005d8c20
        test    al, al
        jz      L_56b8b
        mov     eax, dword ptr [esp+0x28]
        mov     ecx, dword ptr [eax+0x400004]
        lea     edx, [esi+esi*2]
        mov     eax, dword ptr [ecx+edx*4]
        lea     edx, [ecx+edx*4]
        lea     ecx, [edi+edi*4]
        shl     ecx, 3
        cmp     dword ptr [ecx+eax+0x18], -1
        jz      L_57007
        mov     eax, dword ptr [esp+0x50]
        cmp     eax, 8
        ja      L_57007
        jmp     dword ptr [eax*4 + g_657118]
    L_56fd7:
        mov     edx, dword ptr [edx]
        fld     dword ptr [ecx+edx+0x24]
        fcomp   qword ptr [g_00794990]
        fnstsw  ax
        test    ah, 0x41
        jz      L_56b8b
        __emit 0xEB      /* jmp L_5703f: MSVC6 miscomputes fwd rel (off-by-0xA) */
        __emit 0x4F
    L_56ff0:
        mov     eax, dword ptr [edx]
        fld     dword ptr [ecx+eax+0x24]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
    L_56ffc:
        test    ah, 0x41
        jz      L_56b8b
    L_57007:
        mov     eax, dword ptr [esp+0x50]
        test    eax, eax
        __emit 0x74      /* jz L_5703f: MSVC6 miscomputes fwd rel (off-by-0xA) */
        __emit 0x30
    L_5700f:
        mov     edx, dword ptr [edx]
        fld     dword ptr [ecx+edx]
        fsubr   dword ptr [esp+0x30]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_5702b
        fmul    dword ptr [g_0076d598]
    L_5702b:
        fmul    dword ptr [g_00788100]
        fadd    dword ptr [g_0076d064]
        fadd    dword ptr [esp+0x38]
        fstp    dword ptr [esp+0x38]
    L_5703f:
        mov     eax, dword ptr [esp+0x50]
        mov     ecx, dword ptr [esp+0x28]
        push    eax
        push    edi
        push    esi
        call    FUN_00657140
        fst     dword ptr [esp+0x2c]
        fcomp   dword ptr [g_00784aec]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_56b8b
        mov     ecx, dword ptr [esp+0x50]
        push    ecx
        mov     ecx, dword ptr [esp+0x2c]
        push    edi
        push    esi
        call    FUN_00656a30
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_56b8b
        fld     dword ptr [esp+0x2c]
        mov     eax, dword ptr [esp+0x1c]
        test    eax, eax
        fadd    dword ptr [esp+0x38]
        fstp    dword ptr [esp+0x38]
        jnz     L_56f4b
        mov     esi, dword ptr [esp+0x50]
    L_570a1:
        test    esi, esi
        jnz     L_570b3
        fld     dword ptr [esp+0x38]
        fmul    dword ptr [g_0077de9c]
        fstp    dword ptr [esp+0x38]
    L_570b3:
        fld     dword ptr [esp+0x38]
        pop     edi
        fmul    dword ptr [g_00770168]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x1c
    L_570c7:
        mov     eax, dword ptr [edx]
        fld     dword ptr [ecx+eax+0x24]
        fcomp   qword ptr [g_007890a0]
        __emit 0xE9      /* jmp L_56ffc: MSVC6 miscomputes backward rel (off-by-2) */
        __emit 0x24
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    L_570d8:
        mov     eax, dword ptr [edx]
        fld     dword ptr [ecx+eax+0x24]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_56b8b
        jmp     L_5700f
    }
}
