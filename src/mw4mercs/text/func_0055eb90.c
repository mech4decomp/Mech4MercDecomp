/*
 * FUN_0055eb90 (824 B) — Sprite/particle coordinate setup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0055e740(int *a, int *b, int *c, int *d);
extern int __cdecl FUN_0055e420(int val);
extern void __cdecl FUN_00713cc0(int a, int b);
extern void __cdecl FUN_00713a70(void *buf, int count);
extern int DAT_00858940;
extern int DAT_00858944;
extern float DAT_007dddb8;
extern float DAT_0076c5b0;
extern float DAT_007dddb4;
extern int DAT_007dddbc;
extern float DAT_0076d064;

__declspec(naked) void FUN_0055eb90(void)
{
    __asm {
        sub     esp, 0x10c
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x12c]
        push    eax
        lea     ecx, [esp + 0x12c]
        push    ecx
        lea     edx, [esp + 0x12c]
        push    edx
        lea     eax, [esp + 0x12c]
        push    eax
        call    FUN_0055e740
        mov     ebx, [esp + 0x130]
        mov     edx, dword ptr [DAT_00858940]
        xor     esi, esi
        add     esp, 0x10
        cmp     ebx, esi
        jge     l_clamp1_ge
        xor     ebx, ebx
        jmp     l_clamp1_store
    l_clamp1_ge:
        lea     eax, [edx - 1]
        cmp     ebx, eax
        jle     l_clamp1_next
        mov     ebx, eax
    l_clamp1_store:
        mov     [esp + 0x120], ebx
    l_clamp1_next:
        mov     ecx, [esp + 0x128]
        cmp     ecx, esi
        jge     l_clamp2_ge
        xor     ecx, ecx
        jmp     l_clamp2_store
    l_clamp2_ge:
        lea     eax, [edx - 1]
        cmp     ecx, eax
        jle     l_clamp2_next
        mov     ecx, eax
    l_clamp2_store:
        mov     [esp + 0x128], ecx
    l_clamp2_next:
        mov     edx, [esp + 0x124]
        cmp     edx, esi
        mov     edi, dword ptr [DAT_00858944]
        jge     l_clamp3_ge
        xor     edx, edx
        jmp     l_clamp3_store
    l_clamp3_ge:
        lea     eax, [edi - 1]
        cmp     edx, eax
        jle     l_clamp3_next
        mov     edx, eax
    l_clamp3_store:
        mov     [esp + 0x124], edx
    l_clamp3_next:
        mov     eax, [esp + 0x12c]
        cmp     eax, esi
        jge     l_clamp4_ge
        xor     eax, eax
        jmp     l_clamp4_store
    l_clamp4_ge:
        dec     edi
        cmp     eax, edi
        jle     l_clamp4_next
        mov     eax, edi
    l_clamp4_store:
        mov     [esp + 0x12c], eax
    l_clamp4_next:

        fld     dword ptr [DAT_007dddb8]
        sub     ecx, ebx
        fcomp   dword ptr [DAT_0076c5b0]
        sub     eax, edx
        inc     ecx
        inc     eax
        mov     [esp + 0x14], eax
        fnstsw  ax
        mov     [esp + 0x18], ecx
        test    ah, 0x40
        jnz     l_skip_alpha1

        push    ebx
        call    FUN_0055e420
        mov     ecx, [esp + 0x128]
        push    ecx
        mov     [esp + 0x128], eax
        call    FUN_0055e420
        mov     edx, [esp + 0x130]
        push    edx
        mov     [esp + 0x130], eax
        call    FUN_0055e420
        mov     [esp + 0x134], eax
        mov     eax, [esp + 0x138]
        push    eax
        call    FUN_0055e420
        add     esp, 0x10
        push    1
        push    0xb
        mov     [esp + 0x134], eax
        call    FUN_00713cc0

    l_skip_alpha1:
        fld     dword ptr [DAT_007dddb4]
        mov     ebx, [esp + 0x130]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_skip_alpha2

        mov     edi, dword ptr [DAT_007dddbc]
        mov     eax, ebx
        shr     eax, 0x18
        sub     eax, edi
        and     ebx, 0xffffff
        cmp     eax, esi
        jge     l_alpha_clamp_ge
        xor     eax, eax
        jmp     l_alpha_clamp_done
    l_alpha_clamp_ge:
        cmp     eax, 0xff
        jle     l_alpha_clamp_done
        mov     eax, 0xff
    l_alpha_clamp_done:
        shl     eax, 0x18
        or      ebx, eax
        mov     [esp + 0x130], ebx

    l_skip_alpha2:
        mov     edx, 1
        lea     ecx, [esp + 0x1c]
        mov     edi, 0x7b4730
        jmp     l_loop_entry

    l_loop_top:
        mov     ebx, [esp + 0x130]
    l_loop_entry:
        mov     eax, [edi - 4]
        imul    eax, [esp + 0x18]
        add     eax, [esp + 0x120]
        mov     ebp, [esp + 0x124]
        mov     [esp + 0x10], eax
        mov     eax, [edi]
        imul    eax, [esp + 0x14]
        fild    dword ptr [esp + 0x10]
        mov     [ecx + 0x10], ebx
        mov     [ecx + 0x14], esi
        mov     dword ptr [ecx + 0xc], 0x3f800000
        mov     [ecx + 0x18], esi
        add     eax, ebp
        mov     [ecx + 0x1c], esi
        mov     [esp + 0x10], eax
        fstp    dword ptr [ecx]
        fild    dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 4]
        fld     dword ptr [ecx]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_clamp_x1_notneg
        mov     [ecx], esi
        jmp     l_clamp_x1_done
    l_clamp_x1_notneg:
        fild    dword ptr [DAT_00858940]
        fsub    dword ptr [DAT_0076d064]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        jz      l_clamp_x1_noclip
        fstp    dword ptr [ecx]
        jmp     l_clamp_x1_done
    l_clamp_x1_noclip:
        fstp    st(0)
    l_clamp_x1_done:

        fld     dword ptr [ecx + 4]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_clamp_y1_notneg
        mov     [ecx + 4], esi
        jmp     l_clamp_y1_done
    l_clamp_y1_notneg:
        fild    dword ptr [DAT_00858944]
        fsub    dword ptr [DAT_0076d064]
        fcom    dword ptr [ecx + 4]
        fnstsw  ax
        test    ah, 1
        jz      l_clamp_y1_noclip
        fstp    dword ptr [ecx + 4]
        jmp     l_clamp_y1_done
    l_clamp_y1_noclip:
        fstp    st(0)
    l_clamp_y1_done:

        mov     ebp, [esp + 0x120]
        mov     dword ptr [ecx + 8], 0x3f666666
        mov     [ecx + 0x30], ebx
        mov     eax, edx
        and     eax, 3
        shl     eax, 3
        mov     ebx, [eax + 0x7b472c]
        imul    ebx, [esp + 0x18]
        mov     eax, [eax + 0x7b4730]
        imul    eax, [esp + 0x14]
        add     ebx, ebp
        mov     [ecx + 0x34], esi
        mov     [esp + 0x10], ebx
        mov     ebx, [esp + 0x124]
        mov     dword ptr [ecx + 0x2c], 0x3f800000
        fild    dword ptr [esp + 0x10]
        mov     [ecx + 0x38], esi
        add     eax, ebx
        mov     [ecx + 0x3c], esi
        mov     [esp + 0x10], eax
        fstp    dword ptr [ecx + 0x20]
        fild    dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0x24]
        fld     dword ptr [ecx + 0x20]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_clamp_x2_notneg
        mov     [ecx + 0x20], esi
        jmp     l_clamp_x2_done
    l_clamp_x2_notneg:
        fild    dword ptr [DAT_00858940]
        fsub    dword ptr [DAT_0076d064]
        fcom    dword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 1
        jz      l_clamp_x2_noclip
        fstp    dword ptr [ecx + 0x20]
        jmp     l_clamp_x2_done
    l_clamp_x2_noclip:
        fstp    st(0)
    l_clamp_x2_done:

        fld     dword ptr [ecx + 0x24]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_clamp_y2_notneg
        mov     [ecx + 0x24], esi
        jmp     l_clamp_y2_done
    l_clamp_y2_notneg:
        fild    dword ptr [DAT_00858944]
        fsub    dword ptr [DAT_0076d064]
        fcom    dword ptr [ecx + 0x24]
        fnstsw  ax
        test    ah, 1
        jz      l_clamp_y2_noclip
        fstp    dword ptr [ecx + 0x24]
        jmp     l_clamp_y2_done
    l_clamp_y2_noclip:
        fstp    st(0)
    l_clamp_y2_done:

        add     edi, 8
        inc     edx
        mov     dword ptr [ecx + 0x28], 0x3f666666
        lea     eax, [edx - 1]
        add     ecx, 0x40
        cmp     eax, 4
        jl      l_loop_top

        push    esi
        push    1
        call    FUN_00713cc0
        push    8
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_00713a70
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10c
        ret
    }
}
