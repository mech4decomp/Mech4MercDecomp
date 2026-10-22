/*
 * FUN_0055f020 (601 B) — Particle system update/tick.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00704a80(int a, int b, int c, int d);
extern void __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00713cc0(int a, int b);

extern int DAT_007dddc4;
extern double DAT_007dddc8;
extern int DAT_007dddcc;
extern double DAT_0076d970;
extern double DAT_0077dec8;
extern float DAT_007dddb8;
extern float DAT_0076c5b0;
extern float DAT_007dddb4;
extern float DAT_0077dec0;
extern float DAT_00770168;
extern float DAT_0077de90;
extern float DAT_0076d3c8;
extern float DAT_0076d048;
extern float DAT_0077debc;
extern int DAT_007dddbc;
extern int DAT_00858940;
extern float DAT_0077deb8;
extern float DAT_007ddd84;
extern int DAT_00858944;
extern float DAT_0077deb4;
extern float DAT_007ddd80;
extern int DAT_007dddc0;

__declspec(naked) void FUN_0055f020(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        xor     ebx, ebx
        push    ebx
        push    ebx
        push    ebx
        push    2
        mov     [esp + 0x2c], ebx
        call    FUN_00704a80
        test    eax, eax
        mov     dword ptr [DAT_007dddc4], ebx
        jnz     l_skip_gamma
        mov     dword ptr [DAT_007dddc4], 0x3f000000
    l_skip_gamma:
        push    ebx
        call    FUN_00707e70
        fst     qword ptr [esp + 0x14]
        fsub    qword ptr [DAT_007dddc8]
        fcomp   qword ptr [DAT_0076d970]
        fnstsw  ax
        test    ah, 1
        jz      l_skip_time_clamp
        mov     eax, dword ptr [DAT_007dddc8]
        mov     ecx, dword ptr [DAT_007dddcc]
        mov     [esp + 0x14], eax
        mov     [esp + 0x18], ecx
    l_skip_time_clamp:
        fld     qword ptr [esp + 0x14]
        fsub    qword ptr [DAT_007dddc8]
        fld     st(0)
        fmul    qword ptr [DAT_0077dec8]
        fsubr   dword ptr [DAT_007dddb8]
        fst     dword ptr [DAT_007dddb8]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_skip_alpha_min
        mov     dword ptr [DAT_007dddb8], 0
    l_skip_alpha_min:
        fld     dword ptr [DAT_007dddb4]
        fcomp   dword ptr [DAT_0077dec0]
        fnstsw  ax
        test    ah, 1
        jnz     l_fade_mul2

        fstp    st(0)
        call    FUN_00415020
        fld     dword ptr [DAT_007dddb4]
        fsub    dword ptr [DAT_0077dec0]
        fld     qword ptr [esp + 0x14]
        fsub    qword ptr [DAT_007dddc8]
        fld     st(1)
        fmul    dword ptr [DAT_00770168]
        fmulp   st(1), st(0)
        fstp    dword ptr [esp + 0x10]
        fadd    dword ptr [DAT_0077de90]
        fxch    st(1)
        fcompp
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [DAT_0076d3c8]
        fnstsw  ax
        test    ah, 1
        jz      l_fade_mul2
        fmul    dword ptr [DAT_0076d048]
        jmp     l_fade_done
    l_fade_mul2:
        fmul    dword ptr [DAT_0077debc]
    l_fade_done:
        call    FUN_0075db4a
        mov     ecx, dword ptr [DAT_007dddbc]
        add     ecx, eax
        mov     eax, ecx
        cmp     eax, ebx
        mov     dword ptr [DAT_007dddbc], ecx
        jge     l_bright_clamp_upper
        mov     dword ptr [DAT_007dddbc], ebx
        jmp     l_bright_done
    l_bright_clamp_upper:
        mov     ecx, dword ptr [DAT_007dddbc]
        mov     eax, 0xb4
        cmp     ecx, eax
        jle     l_bright_done
        mov     dword ptr [DAT_007dddbc], eax
    l_bright_done:
        fild    dword ptr [DAT_00858940]
        mov     edx, [esp + 0x14]
        mov     eax, [esp + 0x18]
        push    0xc
        fmul    dword ptr [DAT_0077deb8]
        mov     dword ptr [DAT_007dddc8], edx
        mov     dword ptr [DAT_007dddcc], eax
        fstp    dword ptr [DAT_007ddd84]
        fild    dword ptr [DAT_00858944]
        fmul    dword ptr [DAT_0077deb4]
        fstp    dword ptr [DAT_007ddd80]
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      l_alloc_fail
        mov     cl, [esp + 0xf]
        mov     [eax], ebx
        mov     [eax + 8], cl
        mov     [eax + 4], ebx
        mov     [eax + 8], ebx
        jmp     l_alloc_done
    l_alloc_fail:
        xor     eax, eax
    l_alloc_done:
        mov     edi, eax
        mov     esi, [edi]
        mov     edx, [edi + 8]
        sub     edx, esi
        sar     edx, 2
        cmp     edx, 0x64
        mov     dword ptr [DAT_007dddc0], eax
        jnc     l_skip_realloc

        mov     ebx, [edi + 4]
        push    ebp
        mov     ebp, ebx
        sub     ebp, esi
        sar     ebp, 2
        test    esi, esi
        push    0x190
        jz      l_alloc_new

        call    FUN_004084d0
        mov     edx, esi
        add     esp, 4
        cmp     edx, ebx
        jz      l_copy_done
        mov     ecx, edx
        sub     ecx, esi
        add     ecx, eax
    l_copy_test:
        test    ecx, ecx
        jz      l_copy_skip
        mov     esi, [edx]
        mov     [ecx], esi
    l_copy_skip:
        add     edx, 4
        add     ecx, 4
        cmp     edx, ebx
        jnz     l_copy_test
    l_copy_done:
        mov     esi, eax
        mov     eax, [edi]
        test    eax, eax
        mov     [esp + 0x14], eax
        jz      l_free_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     l_free_done
    l_alloc_new:
        call    FUN_004084d0
        add     esp, 4
        mov     esi, eax
    l_free_done:
        lea     eax, [esi + ebp * 4]
        mov     [edi], esi
        add     esi, 0x190
        mov     [edi + 4], eax
        mov     [edi + 8], esi
        xor     ebx, ebx
        pop     ebp

    l_skip_realloc:
        push    ebx
        push    6
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    ebx
        push    5
        call    FUN_00713cc0
        push    ebx
        push    0xc
        call    FUN_00713cc0
        push    ebx
        push    9
        call    FUN_00713cc0
        push    ebx
        push    0xa
        call    FUN_00713cc0
        push    2
        push    0xf
        call    FUN_00713cc0
        push    ebx
        push    7
        call    FUN_00713cc0
        push    ebx
        push    0x12
        call    FUN_00713cc0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret
    }
}
