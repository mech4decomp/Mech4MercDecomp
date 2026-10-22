/*
 * FUN_0055e820 (866 B) — __cdecl function, texture/blit coordinate setup.
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

__declspec(naked) void FUN_0055e820(void)
{
    __asm {
        sub     esp, 0x110
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x130]
        push    eax
        lea     ecx, [esp + 0x130]
        push    ecx
        lea     edx, [esp + 0x130]
        push    edx
        lea     eax, [esp + 0x130]
        push    eax
        call    FUN_0055e740
        mov     ebx, [esp + 0x134]          ; param_1
        mov     edx, dword ptr [DAT_00858940]
        xor     edi, edi
        add     esp, 0x10
        cmp     ebx, edi
        jge     clamp1_high
        xor     ebx, ebx
        jmp     clamp1_done
    clamp1_high:
        lea     eax, [edx - 1]
        cmp     ebx, eax
        jle     clamp1_skip
        mov     ebx, eax
    clamp1_done:
        mov     [esp + 0x124], ebx
    clamp1_skip:
        mov     ecx, [esp + 0x12c]          ; param_3
        cmp     ecx, edi
        jge     clamp3_high
        xor     ecx, ecx
        jmp     clamp3_done
    clamp3_high:
        lea     eax, [edx - 1]
        cmp     ecx, eax
        jle     clamp3_skip
        mov     ecx, eax
    clamp3_done:
        mov     [esp + 0x12c], ecx
    clamp3_skip:
        mov     edx, [esp + 0x128]          ; param_2
        cmp     edx, edi
        mov     esi, dword ptr [DAT_00858944]
        jge     clamp2_high
        xor     edx, edx
        jmp     clamp2_done
    clamp2_high:
        lea     eax, [esi - 1]
        cmp     edx, eax
        jle     clamp2_skip
        mov     edx, eax
    clamp2_done:
        mov     [esp + 0x128], edx
    clamp2_skip:
        mov     eax, [esp + 0x130]          ; param_4
        cmp     eax, edi
        jge     clamp4_high
        xor     eax, eax
        jmp     clamp4_done
    clamp4_high:
        dec     esi
        cmp     eax, esi
        jle     clamp4_skip
        mov     eax, esi
    clamp4_done:
        mov     [esp + 0x130], eax
    clamp4_skip:
        fld     dword ptr [DAT_007dddb8]
        sub     ecx, ebx                    ; width = param_3 - param_1
        fcomp   dword ptr [DAT_0076c5b0]
        sub     eax, edx                    ; height = param_4 - param_2
        inc     ecx
        inc     eax
        mov     [esp + 0x18], eax           ; height
        fnstsw  ax
        mov     [esp + 0x1c], ecx           ; width
        test    ah, 0x40
        jnz     skip_first
        push    ebx
        call    FUN_0055e420
        mov     ecx, [esp + 0x12c]
        push    ecx
        mov     [esp + 0x12c], eax
        call    FUN_0055e420
        mov     edx, [esp + 0x134]
        push    edx
        mov     [esp + 0x134], eax
        call    FUN_0055e420
        mov     [esp + 0x138], eax
        mov     eax, [esp + 0x13c]
        push    eax
        call    FUN_0055e420
        add     esp, 0x10
        push    1
        push    0xb
        mov     [esp + 0x138], eax
        call    FUN_00713cc0
    skip_first:
        fld     dword ptr [DAT_007dddb4]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     skip_second
        mov     ecx, [esp + 0x134]          ; param_5 (color)
        mov     ebx, dword ptr [DAT_007dddbc]
        mov     eax, ecx
        shr     eax, 0x18
        sub     eax, ebx
        and     ecx, 0xffffff
        cmp     eax, edi
        jge     alpha_high
        xor     eax, eax
        jmp     alpha_done
    alpha_high:
        cmp     eax, 0xff
        jle     alpha_done
        mov     eax, 0xff
    alpha_done:
        shl     eax, 0x18
        or      ecx, eax
        mov     [esp + 0x134], ecx
    skip_second:
        mov     eax, 0x7b46d0
        mov     esi, 1
        lea     ecx, [esp + 0x20]           ; vertex buffer
        mov     edx, 0x7b46f0
        mov     [esp + 0x14], eax

    loop_start:
        mov     ebx, [esp + 0x134]          ; color
        mov     ebp, [edx - 4]              ; piVar8[-1]
        mov     [ecx + 0x10], ebx           ; color
        mov     ebx, [eax - 4]              ; local_10c[-1]
        imul    ebx, [esp + 0x1c]           ; * width
        mov     eax, [eax]                  ; *local_10c
        imul    eax, [esp + 0x18]           ; * height
        add     ebx, ebp
        add     ebx, [esp + 0x124]          ; + param_1
        mov     [esp + 0x10], ebx
        mov     ebx, [edx]                  ; *piVar8
        mov     [ecx + 0x14], edi           ; 0
        fild    dword ptr [esp + 0x10]
        add     eax, ebx
        mov     ebx, [esp + 0x128]          ; param_2
        mov     dword ptr [ecx + 0xc], 0x3f800000  ; 1.0f
        mov     [ecx + 0x18], edi           ; 0
        add     eax, ebx
        mov     [ecx + 0x1c], edi           ; 0
        mov     [esp + 0x10], eax
        fstp    dword ptr [ecx]             ; vertex.x
        fild    dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 4]         ; vertex.y
        fld     dword ptr [ecx]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      clamp_x_high
        mov     [ecx], edi                  ; 0
        jmp     clamp_x_done
    clamp_x_high:
        fild    dword ptr [DAT_00858940]
        fsub    dword ptr [DAT_0076d064]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        jz      clamp_x_store
        fstp    dword ptr [ecx]
        jmp     clamp_x_done
    clamp_x_store:
        fstp    st(0)
    clamp_x_done:
        fld     dword ptr [ecx + 4]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      clamp_y_high
        mov     [ecx + 4], edi              ; 0
        jmp     clamp_y_done
    clamp_y_high:
        fild    dword ptr [DAT_00858944]
        fsub    dword ptr [DAT_0076d064]
        fcom    dword ptr [ecx + 4]
        fnstsw  ax
        test    ah, 1
        jz      clamp_y_store
        fstp    dword ptr [ecx + 4]
        jmp     clamp_y_done
    clamp_y_store:
        fstp    st(0)
    clamp_y_done:
        mov     eax, [esp + 0x134]          ; color
        mov     ebp, [edx + 4]              ; piVar8[1]
        mov     dword ptr [ecx + 8], 0x3f666666  ; 0.9f
        mov     [ecx + 0x30], eax           ; color2
        mov     eax, esi
        and     eax, 3
        shl     eax, 3
        mov     ebx, [eax + 0x7b46cc]
        imul    ebx, [esp + 0x1c]           ; * width
        mov     eax, [eax + 0x7b46d0]
        imul    eax, [esp + 0x18]           ; * height
        add     ebx, ebp
        add     ebx, [esp + 0x124]          ; + param_1
        mov     ebp, [edx + 8]              ; piVar8[2]
        mov     [ecx + 0x34], edi           ; 0
        mov     [esp + 0x10], ebx
        mov     ebx, [esp + 0x128]          ; param_2
        mov     dword ptr [ecx + 0x2c], 0x3f800000  ; 1.0f
        fild    dword ptr [esp + 0x10]
        add     eax, ebp
        mov     [ecx + 0x38], edi           ; 0
        add     eax, ebx
        mov     [ecx + 0x3c], edi           ; 0
        mov     [esp + 0x10], eax
        fstp    dword ptr [ecx + 0x20]      ; vertex2.x
        fild    dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0x24]      ; vertex2.y
        fld     dword ptr [ecx + 0x20]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      clamp_x2_high
        mov     [ecx + 0x20], edi           ; 0
        jmp     clamp_x2_done
    clamp_x2_high:
        fild    dword ptr [DAT_00858940]
        fsub    dword ptr [DAT_0076d064]
        fcom    dword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 1
        jz      clamp_x2_store
        fstp    dword ptr [ecx + 0x20]
        jmp     clamp_x2_done
    clamp_x2_store:
        fstp    st(0)
    clamp_x2_done:
        fld     dword ptr [ecx + 0x24]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      clamp_y2_high
        mov     [ecx + 0x24], edi           ; 0
        jmp     clamp_y2_done
    clamp_y2_high:
        fild    dword ptr [DAT_00858944]
        fsub    dword ptr [DAT_0076d064]
        fcom    dword ptr [ecx + 0x24]
        fnstsw  ax
        test    ah, 1
        jz      clamp_y2_store
        fstp    dword ptr [ecx + 0x24]
        jmp     clamp_y2_done
    clamp_y2_store:
        fstp    st(0)
    clamp_y2_done:
        mov     eax, [esp + 0x14]
        add     eax, 8
        inc     esi
        mov     dword ptr [ecx + 0x28], 0x3f666666  ; 0.9f
        lea     ebx, [esi - 1]
        add     edx, 0x10
        add     ecx, 0x40
        cmp     ebx, 4
        mov     [esp + 0x14], eax
        jl      loop_start

        push    edi                         ; 0
        push    1
        call    FUN_00713cc0
        push    8
        lea     ecx, [esp + 0x24]
        push    ecx
        call    FUN_00713a70
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x110
        ret
    }
}
