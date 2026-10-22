/*
 * FUN_00529470 (755 B) — Joystick calibration value parser.
 *
 * __stdcall. Reads calibration values from an INI section, clamps them,
 * looks up data from a global XOR-encrypted table, and writes results.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_00411cb0(int a, void *b, const char *key);
extern int __stdcall FUN_00529950(int a, int b, int c, int d, int e, int f, int g);
extern void __stdcall FUN_0052e150(int a);
extern void __stdcall FUN_006f8f80(int a, int b, int c);

extern int    DAT_007dab44;   /* 0x007DAB44 */
extern int    DAT_007dab40;   /* 0x007DAB40 */
extern double DAT_0077a4a8;   /* 0x0077A4A8 */
extern double DAT_0077a4a0;   /* 0x0077A4A0 */

__declspec(naked) int __stdcall FUN_00529470(int param_1, int *param_2, int param_3)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x38]
        push    edi
        xor     edi, edi
        push    edi
        lea     eax, [esp + 0x30]
        push    eax
        push    0x77a4f8
        mov     ecx, esi
        call    FUN_00411cb0
        test    al, al
        jnz     l_continue
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x28
        ret

    l_continue:
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x77a4e8
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 9
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x1c], 100
        mov     dword ptr [esp + 0x48], 15
        mov     dword ptr [esp + 0x30], 0x960
        mov     dword ptr [esp + 0x20], 0xffffffff
        call    FUN_00411cb0
        push    edi
        lea     edx, [esp + 0x20]
        push    edx
        push    0x77a4d8
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edi
        jge     l_clamp_max
        xor     eax, eax
        jmp     l_clamp_done

    l_clamp_max:
        cmp     eax, 9
        jle     l_clamp_skip_store
        mov     eax, 9

    l_clamp_done:
        mov     dword ptr [esp + 0x18], eax

    l_clamp_skip_store:
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, edi
        jge     l_clamp_min2
        mov     dword ptr [esp + 0x1c], edi
        jmp     l_clamp_done2

    l_clamp_min2:
        cmp     ecx, eax
        jle     l_clamp_done2
        mov     dword ptr [esp + 0x1c], eax

    l_clamp_done2:
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        push    0x77a4d0
        mov     ecx, esi
        call    FUN_00411cb0
        mov     ebp, dword ptr [esp + 0x14]
        push    edi
        lea     ecx, [esp + 0x14]
        push    ecx
        dec     ebp
        push    0x77a4c0
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebp
        call    FUN_00411cb0
        push    edi
        lea     edx, [esp + 0x40]
        push    edx
        push    0x77a4b0
        mov     ecx, esi
        call    FUN_00411cb0
        mov     ebp, dword ptr [esp + 0x10]
        cmp     ebp, 15
        jge     l_clamp_lo
        mov     ebp, 15
        jmp     l_clamp_hi

    l_clamp_lo:
        cmp     ebp, 100
        jle     l_clamp_hi2
        mov     ebp, 100

    l_clamp_hi:
        mov     dword ptr [esp + 0x10], ebp

    l_clamp_hi2:
        mov     esi, dword ptr [esp + 0x3c]
        cmp     esi, 15
        jge     l_clamp_lo2
        mov     esi, 15
        jmp     l_clamp_hi3

    l_clamp_lo2:
        cmp     esi, ebp
        jle     l_clamp_skip_store2
        mov     esi, ebp

    l_clamp_hi3:
        mov     dword ptr [esp + 0x3c], esi

    l_clamp_skip_store2:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x0c]
        mov     ecx, dword ptr [esp + 0x14]
        xor     eax, 0x85739531
        mov     ebx, dword ptr [eax + 0x50]
        mov     dword ptr [esp + 0x34], eax
        cmp     dword ptr [ebx + 0xe4], edi
        mov     dword ptr [esp + 0x28], 0x1dcd6500
        mov     dword ptr [esp + 0x30], ebx
        jz      l_skip_lookup
        cmp     ecx, edi
        jl      l_skip_lookup
        cmp     ecx, dword ptr [ebx + 0xe8]
        jge     l_skip_lookup
        lea     edx, [ecx + ecx * 4 + 15]
        shl     edx, 4
        mov     eax, dword ptr [edx + ebx]
        lea     edx, [ecx + ecx * 4]
        shl     edx, 4
        mov     edi, dword ptr [edx + ebx + 0xf4]
        add     edx, ebx
        cmp     eax, esi
        jle     l_no_update_max
        mov     esi, eax
        mov     dword ptr [esp + 0x3c], esi

    l_no_update_max:
        cmp     edi, ebp
        jge     l_no_update_min
        mov     ebp, edi
        mov     dword ptr [esp + 0x10], ebp

    l_no_update_min:
        mov     eax, dword ptr [edx + 0xf8]
        mov     edx, dword ptr [edx + 0x104]
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], edx
        xor     edi, edi

    l_skip_lookup:
        cmp     esi, ebp
        jle     l_check_count
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x28
        ret

    l_check_count:
        cmp     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x20], edi
        jle     l_done
        mov     eax, dword ptr [esp + 0x44]
        mov     edi, dword ptr [esp + 0x40]
        sub     eax, edi
        mov     dword ptr [esp + 0x44], eax
        jmp     l_loop_entry

    l_loop_top:
        mov     ebp, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x30]

    l_loop_entry:
        mov     eax, dword ptr [ebx + 0xe4]
        test    eax, eax
        jz      l_loop_skip
        test    ecx, ecx
        jl      l_loop_skip
        cmp     ecx, dword ptr [ebx + 0xe8]
        jge     l_loop_skip
        lea     eax, [ecx + ecx * 4]
        shl     eax, 4
        fld     dword ptr [eax + ebx + 0xFC]
        lea     edx, [eax + ebx]
        fild    dword ptr [esp + 0x3c]
        fcom    qword ptr [DAT_0077a4a8]
        fnstsw  ax
        test    ah, 0x41
        jz      l_fcom_ok
        fstp    st(0)
        fld     qword ptr [DAT_0077a4a8]

    l_fcom_ok:
        fild    dword ptr [esp + 0x24]
        fsub    st(0), st(2)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        fstp    st(0)
        jnz     l_done
        fild    dword ptr [esp + 0x28]
        fsub    dword ptr [edx + 0x108]
        fcomp   qword ptr [DAT_0077a4a0]
        fnstsw  ax
        test    ah, 1
        jnz     l_done

    l_loop_skip:
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x40], 0
        lea     ebx, [edx + edi]
        jmp     l_inner_loop_entry

    l_inner_loop_top:
        mov     ebp, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x14]

    l_inner_loop_entry:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        push    edx
        push    ebp
        push    esi
        push    ecx
        push    ebx
        push    edi
        call    FUN_00529950
        add     esp, 0x1c
        test    eax, eax
        jl      l_inner_next
        mov     esi, dword ptr [edi]
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, esi
        imul    eax, eax, 0x22ac
        add     eax, ecx
        mov     cl, byte ptr [eax + 0x205f35]
        test    cl, cl
        jnz     l_inner_done
        lea     ecx, [eax + 0x205d24]
        call    FUN_0052e150
        push    1
        push    0
        add     esi, 0x100
        push    esi
        call    FUN_006f8f80

    l_inner_next:
        mov     eax, dword ptr [esp + 0x40]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [esp + 0x40], eax
        jl      l_inner_loop_top

    l_inner_done:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x2c]
        inc     eax
        add     edi, 4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x20], eax
        jl      l_loop_top

    l_done:
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret
    }
}
