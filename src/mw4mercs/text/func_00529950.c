/*
 * FUN_00529950 (1400 B) — Joystick calibration data processor (core).
 *
 * Called by FUN_00529470 and FUN_00529770. Selects a random calibration
 * entry, validates it against throttle ranges, and writes results.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084d0(int a);
extern void __stdcall FUN_00416bc0(int a);
extern int __stdcall FUN_00416cc0(int a);
extern void __stdcall FUN_0072d480(const char *s);
extern void __stdcall FUN_006f3c80(int a, int b);
extern void __stdcall FUN_0072d830(int a, int b);
extern int __stdcall FUN_005237f0(int a, int b, void *c);
extern int __stdcall FUN_00523d10(int a, int b, void *c);
extern int __stdcall FUN_00523cb0(int a, int b, void *c);
extern void __stdcall FUN_0072d7b0(int a);
extern void __stdcall FUN_006f4230(int a);

extern void *g_007dab44;   /* 0x007DAB44 */
extern void *g_007dab40;   /* 0x007DAB40 */
extern void *g_007dd268;   /* 0x007DD268 */
extern int (*g_0076b414)(void);   /* 0x0076B414 rand */
extern int (*g_0076b420)(void);   /* 0x0076B420 sprintf */
extern short g_007db0ac;   /* 0x007DB0AC */
extern short g_007db0ae;   /* 0x007DB0AE */
extern double g_0077a4a8;  /* 0x0077A4A8 */
extern double g_0077a4a0;  /* 0x0077A4A0 */
extern float g_0077a524;   /* 0x0077A524 */
extern float g_007b43a0[]; /* 0x007B43A0 */
extern void *g_007b4450[]; /* 0x007B4450 */

__declspec(naked) int __stdcall FUN_00529950(int param_1, int param_2, int param_3,
                                             int param_4, int param_5, int param_6,
                                             int param_7)
{
    
__asm {
mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x0c]
        add     eax, 0x0c
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        jnz     l_continue
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x34
        ret

    l_continue:
        mov     ecx, dword ptr [esp + 0x54]
        cmp     ecx, dword ptr [esp + 0x58]
        jle     l_check2
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x34
        ret

    l_check2:
        mov     edx, dword ptr [eax]
        mov     esi, dword ptr [g_0076b414]
        xor     edx, 0x85739531
        mov     edi, dword ptr [edx + 0x50]
        mov     dword ptr [esp + 0x34], edi

    l_rand_retry:
        call    esi
        mov     ecx, dword ptr [g_007dd268]
        cdq
        idiv    dword ptr [ecx + 0x409a0]
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jz      l_rand_retry
        mov     eax, dword ptr [ecx + 0x409a4]
        mov     cx, word ptr [eax + edx * 4]
        cmp     cx, word ptr [g_007db0ac]
        lea     eax, [eax + edx * 4]
        jnz     l_after_rand_check
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_007db0ae]
        jz      l_rand_retry

    l_after_rand_check:
        mov     eax, dword ptr [edi + 0xe4]
        test    eax, eax
        jz      l_skip_validate
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        jl      l_skip_validate
        cmp     eax, dword ptr [edi + 0xe8]
        jge     l_skip_validate
        lea     eax, [eax + eax * 4]
        shl     eax, 4
        fld     dword ptr [eax + edi + 0xfc]
        mov     edx, dword ptr [eax + edi + 0xf8]
        fild    dword ptr [esp + 0x54]
        lea     ecx, [eax + edi]
        mov     dword ptr [esp + 0x24], edx
        fcom    qword ptr [g_0077a4a8]
        fnstsw ax
        test    ah, 0x41
        jz      l_fp_clamp_done
        fstp    st(0)
        fld     qword ptr [g_0077a4a8]

    l_fp_clamp_done:
        fild    dword ptr [esp + 0x24]
        fsub    st(0), st(2)
        fcomp
        fnstsw ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jz      l_fp_check2
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x34
        ret

    l_fp_check2:
        fild    dword ptr [ecx + 0x104]
        fsub    dword ptr [ecx + 0x108]
        fcomp   qword ptr [g_0077a4a0]
        fnstsw ax
        test    ah, 0x1
        jz      l_skip_validate
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x34
        ret

    l_skip_validate:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [g_007dab40]
        xor     esi, ecx
        mov     ecx, dword ptr [esi + 0x4c]
        xor     ecx, 0x85739531
        mov     byte ptr [esp + 0x12], 0
        mov     byte ptr [esp + 0x13], 0
        jz      l_bvar9_done
        mov     byte ptr [esp + 0x12], 1

    l_bvar9_done:
        mov     edx, dword ptr [esi + 0x58]
        xor     edx, 0x85739531
        jz      l_bvar10_done
        mov     byte ptr [esp + 0x13], 1

    l_bvar10_done:
        push    0x14
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      l_alloc_null
        mov     eax, dword ptr [esi + 0x0c]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x84]
        add     ecx, 0x10
        push    ecx
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x779e88
        mov     ebp, edi
        jmp     l_alloc_done

    l_alloc_null:
        xor     ebp, ebp

    l_alloc_done:
        mov     ecx, ebp
        mov     dword ptr [esp + 0x18], 0
        call    FUN_00416cc0
        test    eax, eax
        mov     ebx, 2
        jz      l_scan_done

    l_scan_loop:
        mov     cl, byte ptr [esp + 0x12]
        test    cl, cl
        jnz     l_scan_check2
        cmp     dword ptr [eax + 0x20], 1
        jz      l_scan_next

    l_scan_check2:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jnz     l_scan_check3
        cmp     dword ptr [eax + 0x20], ebx
        jz      l_scan_next

    l_scan_check3:
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx + 0x409a4]
        mov     edi, dword ptr [esp + 0x14]
        mov     si, word ptr [eax + 0x10]
        cmp     word ptr [edx + edi * 4], si
        mov     ax, word ptr [eax + 0x12]
        lea     edx, [edx + edi * 4]
        jnz     l_scan_inc
        cmp     word ptr [edx + 2], ax
        jz      l_scan_found

    l_scan_inc:
        inc     dword ptr [esp + 0x18]

    l_scan_next:
        mov     ecx, ebp
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_scan_loop

    l_scan_done:
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_007dd268]

    l_scan_found:
        mov     ebx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x24], 0

    l_outer_loop:
        test    edi, edi
        jz      l_outer_loop_check
        mov     eax, dword ptr [ecx + 0x409a4]
        mov     cx, word ptr [eax + edi * 4]
        cmp     cx, word ptr [g_007db0ac]
        lea     eax, [eax + edi * 4]
        jnz     l_outer_continue
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_007db0ae]
        jz      l_outer_loop_check

    l_outer_continue:
        cmp     ebx, 0x2b
        jg      l_outer_loop_check
        fild    dword ptr [esp + 0x58]
        fld     dword ptr [g_0077a524]
        fcomp
        fnstsw ax
        test    ah, 0x1
        jz      l_outer_fp_done
        fstp    st(0)
        fld     dword ptr [g_0077a524]

    l_outer_fp_done:
        fcomp   dword ptr [ebx * 4 + g_007b43a0]
        fnstsw ax
        test    ah, 0x1
        jnz     l_outer_loop_check
        fild    dword ptr [esp + 0x54]
        fcomp   dword ptr [ebx * 4 + g_007b43a0]
        fnstsw ax
        test    ah, 0x41
        jnz     l_fail_path

    l_outer_loop_check:
        call    dword ptr [g_0076b414]
        mov     ecx, dword ptr [g_007dd268]
        cdq
        idiv    dword ptr [ecx + 0x409a0]
        mov     ecx, ebp
        xor     ebx, ebx
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [ebp]
        call    dword ptr [edx + 8]
        mov     ecx, ebp
        call    FUN_00416cc0
        test    eax, eax
        jz      l_inner_scan_done

    l_inner_scan_loop:
        mov     cl, byte ptr [esp + 0x12]
        test    cl, cl
        jnz     l_inner_scan_check2
        cmp     dword ptr [eax + 0x20], 1
        jz      l_inner_scan_next

    l_inner_scan_check2:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jnz     l_inner_scan_check3
        cmp     dword ptr [eax + 0x20], 2
        jz      l_inner_scan_next

    l_inner_scan_check3:
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx + 0x409a4]
        mov     edi, dword ptr [esp + 0x14]
        mov     si, word ptr [eax + 0x10]
        cmp     word ptr [edx + edi * 4], si
        mov     ax, word ptr [eax + 0x12]
        lea     edx, [edx + edi * 4]
        jnz     l_inner_scan_inc
        cmp     word ptr [edx + 2], ax
        jz      l_inner_scan_found

    l_inner_scan_inc:
        inc     ebx

    l_inner_scan_next:
        mov     ecx, ebp
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_inner_scan_loop

    l_inner_scan_done:
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_007dd268]

    l_inner_scan_found:
        mov     eax, dword ptr [esp + 0x24]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [esp + 0x24], eax
        jle     l_outer_loop
        mov     edi, 1
        mov     dword ptr [esp + 0x14], edi
        cmp     edi, dword ptr [ecx + 0x409a0]
        jge     l_final_check

    l_second_loop:
        mov     eax, dword ptr [ecx + 0x409a4]
        mov     dx, word ptr [eax + edi * 4]
        cmp     dx, word ptr [g_007db0ac]
        lea     eax, [eax + edi * 4]
        jnz     l_second_continue
        mov     ax, word ptr [eax + 2]
        cmp     ax, word ptr [g_007db0ae]
        jz      l_second_inc

    l_second_continue:
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        xor     ebx, ebx
        call    dword ptr [edx + 8]
        mov     ecx, ebp
        call    FUN_00416cc0
        test    eax, eax
        jz      l_second_scan_done

    l_second_scan_loop:
        mov     cl, byte ptr [esp + 0x12]
        test    cl, cl
        jnz     l_second_scan_check2
        cmp     dword ptr [eax + 0x20], 1
        jz      l_second_scan_next

    l_second_scan_check2:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jnz     l_second_scan_check3
        cmp     dword ptr [eax + 0x20], 2
        jz      l_second_scan_next

    l_second_scan_check3:
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx + 0x409a4]
        mov     edi, dword ptr [esp + 0x14]
        mov     si, word ptr [eax + 0x10]
        cmp     word ptr [edx + edi * 4], si
        mov     ax, word ptr [eax + 0x12]
        lea     edx, [edx + edi * 4]
        jnz     l_second_scan_inc
        cmp     word ptr [edx + 2], ax
        jz      l_second_scan_found

    l_second_scan_inc:
        inc     ebx

    l_second_scan_next:
        mov     ecx, ebp
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_second_scan_loop

    l_second_scan_done:
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_007dd268]

    l_second_scan_found:
        fild    dword ptr [esp + 0x58]
        fld     dword ptr [g_0077a524]
        fcomp
        fnstsw ax
        test    ah, 0x1
        jz      l_second_fp_done
        fstp    st(0)
        fld     dword ptr [g_0077a524]

    l_second_fp_done:
        fcomp   dword ptr [ebx * 4 + g_007b43a0]
        fnstsw ax
        test    ah, 0x41
        jnz     l_second_inc
        fild    dword ptr [esp + 0x54]
        fcomp   dword ptr [ebx * 4 + g_007b43a0]
        fnstsw ax
        test    ah, 0x1
        jnz     l_second_inc_done

    l_second_inc:
        inc     edi
        mov     dword ptr [esp + 0x14], edi
        cmp     edi, dword ptr [ecx + 0x409a0]
        jl      l_second_loop

    l_second_inc_done:
        cmp     edi, dword ptr [ecx + 0x409a0]

    l_final_check:
        jnz     l_fail_path
        test    ebp, ebp
        jz      l_ret_neg1
        mov     eax, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [eax]

    l_ret_neg1:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x34
        ret

    l_fail_path:
        test    ebp, ebp
        jz      l_fail_cleanup
        mov     edx, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [edx]

    l_fail_cleanup:
        push    0x77a50c
        call    FUN_0072d480
        push    0
        push    0x100
        mov     ebx, eax
        call    FUN_006f3c80
        mov     esi, dword ptr [esp + 0x60]
        mov     edi, dword ptr [esp + 0x5c]
        cmp     esi, edi
        mov     dword ptr [esp + 0x1c], eax
        jnz     l_rand_range
        mov     edx, esi
        jmp     l_range_done

    l_rand_range:
        call    dword ptr [g_0076b414]
        sub     esi, edi
        inc     esi
        cdq
        idiv    esi
        add     edx, edi

    l_range_done:
        push    edx
        push    0x67c
        push    ebx
        mov     dword ptr [esp + 0x34], edx
        call    FUN_0072d830
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    0x77a504
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        call    dword ptr [g_0076b414]
        cdq
        mov     ecx, 0x3c
        idiv    ecx
        lea     eax, [esp + 0x28]
        mov     dword ptr [esp + 0x38], eax
        lea     eax, [esp + 0x38]
        push    eax
        push    3
        lea     ecx, [esp + 0x34]
        push    0
        mov     dword ptr [esp + 0x3c], 0x76b768
        mov     dword ptr [esp + 0x48], ecx
        mov     edx, dword ptr [edx * 4 + g_007b4450]
        mov     dword ptr [esp + 0x38], edx
        lea     edx, [esp + 0x28]
        mov     dword ptr [esp + 0x4c], edx
        call    FUN_005237f0
        cmp     eax, -1
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x38], ecx
        jz      l_sprintf_done
        lea     ecx, [esp + 0x38]
        push    ecx
        push    3
        lea     edx, [esp + 0x1c]
        lea     eax, [esp + 0x38]
        push    0
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x4c], eax
        call    FUN_00523d10
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [ecx + 0xe4]
        test    eax, eax
        jz      l_sprintf_done
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        jl      l_sprintf_done
        cmp     eax, dword ptr [ecx + 0xe8]
        jge     l_sprintf_done
        lea     eax, [esp + 0x38]
        push    eax
        push    2
        lea     edx, [esp + 0x58]
        push    0
        mov     dword ptr [esp + 0x48], edx
        call    FUN_00523cb0

    l_sprintf_done:
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x4c]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        mov     dword ptr [eax], ecx
        call    FUN_0072d7b0
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      l_free_skip
        push    eax
        call    FUN_006f4230

    l_free_skip:
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
    }


}
