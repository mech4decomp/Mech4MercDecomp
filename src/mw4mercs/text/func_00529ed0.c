/*
 * FUN_00529ed0 (304 B) — Joystick calibration entry selector.
 *
 * Called by FUN_00529770. Scans calibration entries and returns the index of
 * the best-matching one, or -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *g_007dab44;   /* 0x007DAB44 */
extern void *g_007dab40;   /* 0x007DAB40 */
extern float g_0076d064;   /* 0x0076D064 */
extern double g_0077a4a8;  /* 0x0077A4A8 */

__declspec(naked) int __stdcall FUN_00529ed0(void)
{
    
__asm {
mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x0c
        push    esi
        push    edi
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x0c]
        lea     eax, [ecx + 0x0c]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        jnz     l_continue
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x0c
        ret

    l_continue:
        mov     esi, dword ptr [eax]
        xor     esi, 0x85739531
        mov     eax, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [eax + 0xe4]
        test    ecx, ecx
        jnz     l_check_e4
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        add     esp, 0x0c
        ret

    l_check_e4:
        fld     dword ptr [g_0076d064]
        push    ebp
        mov     ebp, dword ptr [eax + 0xe8]
        xor     edx, edx
        test    ebp, ebp
        mov     dword ptr [esp + 0x0c], 0xffffffff
        jle     l_loop_done
        push    ebx
        lea     ebx, [eax + 0xf0]

    l_loop_top:
        xor     edi, edi
        lea     eax, [esi + 0x3548]
        mov     ecx, 0xff

    l_count1_loop:
        cmp     byte ptr [eax - 0x10], 0
        jz      l_count1_next
        cmp     dword ptr [eax], edx
        jnz     l_count1_next
        inc     edi

    l_count1_next:
        add     eax, 0x2038
        dec     ecx
        jnz     l_count1_loop
        lea     eax, [esi + 0x205f38]
        mov     ecx, 0x18

    l_count2_loop:
        cmp     byte ptr [eax - 4], 0
        jz      l_count2_next
        cmp     dword ptr [eax], edx
        jnz     l_count2_next
        inc     edi

    l_count2_next:
        add     eax, 0x22ac
        dec     ecx
        jnz     l_count2_loop

    l_check_count:
        mov     eax, dword ptr [ebx - 4]
        inc     edi
        cmp     edi, eax
        jg      l_loop_bottom

    l_fp_compare:
        mov     ecx, dword ptr [ebx + 8]
        fld     dword ptr [ebx + 0x0c]
        mov     dword ptr [esp + 0x14], ecx
        fild    dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebx]
        fld     st(1)
        mov     dword ptr [esp + 0x18], eax
        fdiv    st(0), st(1)
        fst     dword ptr [esp + 0x14]
        fcomp   st(3)
        fnstsw ax
        test    ah, 0x1
        jz      l_fp_skip
        fild    dword ptr [esp + 0x18]
        fcom    qword ptr [g_0077a4a8]
        fnstsw ax
        test    ah, 0x41
        jz      l_fp_clamp_done
        fstp    st(0)
        fld     qword ptr [g_0077a4a8]

    l_fp_clamp_done:
        fxch
        fsub    st(0), st(2)
        fcomp
        fnstsw ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jnz     l_loop_bottom
        fstp    st(0)
        mov     dword ptr [esp + 0x10], edx
        fld     dword ptr [esp + 0x14]
        jmp     l_loop_bottom

    l_fp_skip:
        fstp    st(0)
        fstp    st(0)

    l_loop_bottom:
        inc     edx
        add     ebx, 0x50
        cmp     edx, ebp
        jl      l_loop_top
        pop     ebx

    l_loop_done:
        mov     eax, dword ptr [esp + 0x0c]
        fstp    st(0)
        pop     ebp
        pop     edi
        pop     esi
        add     esp, 0x0c
        ret
    }


}
