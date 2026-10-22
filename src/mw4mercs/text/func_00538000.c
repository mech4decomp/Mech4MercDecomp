/* FUN_00538000 - 1176 bytes */
#include <windows.h>

extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007db094;
extern int DAT_007dc6d4;
extern int DAT_007da848;
extern float DAT_0077b650;
extern double DAT_0077b648;
extern double DAT_0077b640;
extern float DAT_0076c5b0;
extern float DAT_0077b290;
extern float DAT_0077b63c;

extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005462a0(void);
extern void __cdecl FUN_00548140(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0061b270(void);
extern void __cdecl FUN_00565af0(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_00701f20(void);
extern void __cdecl FUN_0053e860(void);
extern void __cdecl FUN_005436f0(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_0053c120(void);
extern void __cdecl FUN_004e0900(void);
extern void __cdecl FUN_005384a0(void);
extern void __cdecl FUN_004d3c10(void);

__declspec(naked) void FUN_00538000(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, [eax]
        sub     esp, 0x08
        push    ebx
        push    ebp
        push    esi
        xor     eax, dword ptr [DAT_007dab40]
        mov     esi, [eax + 0x0c]
        xor     esi, 0x85739531
        mov     cl, [esi + 0xcd]
        test    cl, cl
        push    edi
        jz      label_skip_log1
        mov     ecx, [eax + 0x14]
        xor     ecx, 0x85739531
        jz      label_skip_log1
        mov     ecx, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, [ecx + 0x28]
        mov     ecx, [eax + 0x14]
        push    1
        push    0
        push    0x19
        xor     ecx, 0x85739531
        push    edx
        call    FUN_004ce190
        mov     byte ptr [esi + 0xcd], 0
label_skip_log1:
        mov     al, [esi + 0x16]
        test    al, al
        jz      label_big_skip
        mov     edx, [esi + 0x4c]
        cmp     dword ptr [edx + 0x14], 5
        jnz     label_after_weapon_check
        mov     edi, [esi + 0x3064]
        cmp     edi, [esi + 0x3068]
        jz      label_after_weapon_check
label_find_loop:
        mov     ebx, [edi]
        fild    dword ptr [ebx + 4]
        mov     ebp, [ebx]
        push    0
        fadd    dword ptr [DAT_0077b650]
        fstp    qword ptr [esp + 0x14]
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        fcomp   qword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      label_found
        mov     eax, [esi + 0x3068]
        add     edi, 4
        cmp     edi, eax
        jnz     label_find_loop
        jmp     label_after_weapon_check
label_found:
        push    0
        push    ebp
        mov     ecx, esi
        call    FUN_005462a0
        mov     ebp, [esi + 0x3068]
        lea     eax, [edi + 4]
        cmp     eax, ebp
        jz      label_shrink
        mov     ecx, [esp + 0x10]
        push    0
        push    ecx
        push    edi
        push    ebp
        push    eax
        call    FUN_00548140
        add     esp, 0x14
label_shrink:
        add     ebp, -4
        push    ebx
        mov     [esi + 0x3068], ebp
        call    FUN_004084e0
        add     esp, 4
label_after_weapon_check:
        mov     ecx, [esi + 0x307c]
        test    ecx, ecx
        jz      label_skip_307c
        call    FUN_0061b270
label_skip_307c:
        mov     al, [esi + 0x17]
        test    al, al
        jz      label_skip_17
        call    FUN_00565af0
label_skip_17:
        mov     eax, [esi + 0x3088]
        test    eax, eax
        jz      label_skip_3088
        xor     ebx, ebx
        lea     ebp, [esi + 0x3558]
label_loop_3088:
        mov     al, [ebp - 0x17]
        test    al, al
        jz      label_loop_3088_next
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, [edx]
        xor     eax, ecx
        mov     ecx, [eax + 0x14]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     eax, [eax + 0x2c]
        push    0
        push    eax
        push    0x15
        call    FUN_00701f20
        cmp     eax, 3
        jnc     label_loop_3088_next
        mov     edi, [ebp]
        mov     ecx, [esi + 0x3088]
        lea     eax, [edi + edi * 4]
        lea     edx, [ecx + eax * 8]
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        mov     eax, dword ptr [DAT_007dab40]
        push    1
        push    edx
        xor     ecx, eax
        mov     ecx, [ecx + 0x14]
        push    0x2f
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004ce190
        lea     eax, [edi + 1]
        mov     [ebp], eax
        cmp     eax, [esi + 0x3084]
        jl      label_loop_3088_next
        mov     dword ptr [ebp], 0
        mov     byte ptr [ebp - 0x17], 0
label_loop_3088_next:
        inc     ebx
        add     ebp, 0x2038
        cmp     ebx, 0xff
        jl      label_loop_3088
label_skip_3088:
        mov     al, [esi + 0x239df0]
        test    al, al
        jz      label_skip_timer1
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, [edx]
        xor     eax, ecx
        mov     ecx, [eax + 0x14]
        xor     ecx, 0x85739531
        jz      label_skip_timer1
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x64]
        fcomp   qword ptr [DAT_0077b640]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_skip_timer1
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x64]
        mov     ecx, esi
        mov     byte ptr [esi + 0x239df0], 0
        call    FUN_0053e860
label_skip_timer1:
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x6c]
        fcomp   qword ptr [DAT_0077b640]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_skip_timer2
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x6c]
        mov     ecx, esi
        call    FUN_005436f0
label_skip_timer2:
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        mov     edi, dword ptr [DAT_007dab40]
        mov     ebx, [esi + 0x50]
        xor     eax, edi
        mov     ecx, [eax + 0x20]
        add     eax, 0x20
        xor     ecx, 0x85739531
        mov     byte ptr [esi + 0x3520], 0
        mov     byte ptr [esi + 0x3518], 0
        mov     byte ptr [esi + 0x3528], 0
        jz      label_no_vtable
        mov     edi, [eax]
        xor     edi, 0x85739531
        mov     al, [edi + 0x21e4]
        test    al, al
        mov     byte ptr [esi + 0x3520], 1
        jnz     label_have_weapon
        fld     dword ptr [DAT_0076c5b0]
        jmp     label_store_3524
label_have_weapon:
        lea     ecx, [edi + 0x21b8]
        call    FUN_006100a0
        fsubr   dword ptr [edi + 0x2218]
label_store_3524:
        mov     eax, [ebx + 0x24]
        fstp    dword ptr [esi + 0x3524]
        test    eax, eax
        jz      label_skip_weapon2
        mov     al, [edi + 0x2214]
        test    al, al
        mov     byte ptr [esi + 0x3518], 1
        jnz     label_have_weapon2
        fld     dword ptr [DAT_0076c5b0]
        jmp     label_store_351c
label_have_weapon2:
        lea     ecx, [edi + 0x21e8]
        call    FUN_006100a0
label_store_351c:
        mov     eax, [ebx + 0x28]
        lea     eax, [eax + eax * 2]
        lea     edx, [eax + eax * 4]
        shl     edx, 2
        mov     [esp + 0x10], edx
        fisubr  dword ptr [esp + 0x10]
        fst     dword ptr [esi + 0x351c]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      label_skip_weapon2
        mov     dword ptr [esi + 0x351c], 0
        jmp     label_skip_weapon2
label_no_vtable:
        mov     al, [esi + 0x7c]
        test    al, al
        jz      label_skip_weapon2
        fild    dword ptr [ebx + 0x9c]
        push    0
        mov     byte ptr [esi + 0x3528], 1
        fstp    qword ptr [esp + 0x14]
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x74]
        fsubr   qword ptr [esp + 0x10]
        fstp    dword ptr [esi + 0x352c]
label_skip_weapon2:
        mov     eax, [esi + 0x4c]
        cmp     dword ptr [eax + 0x14], 5
        jnz     label_big_skip
        xor     edi, edi
        lea     ebp, [esi + 0x3542]
label_loop_3542:
        mov     al, [ebp - 0x0a]
        test    al, al
        jz      label_loop_3542_next
        cmp     byte ptr [ebp], 0
        jz      label_loop_3542_next
        cmp     byte ptr [esi + 0x17], 1
        mov     byte ptr [esp + 0x10], 0
        jnz     label_check_done
        mov     eax, [ebx + 0x38]
        test    eax, eax
        jz      label_check_done
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x20]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x20]
        jz      label_check_done
        mov     eax, [eax]
        mov     ecx, [ebx + 0x24]
        xor     eax, 0x85739531
        test    ecx, ecx
        mov     cl, [eax + 0x2214]
        jz      label_check_no_24
        test    cl, cl
        jnz     label_check_have_cl
        fld     dword ptr [DAT_0076c5b0]
        jmp     label_check_compare
label_check_have_cl:
        lea     ecx, [eax + 0x21e8]
        call    FUN_006100a0
label_check_compare:
        fild    dword ptr [ebx + 0x28]
        fmul    dword ptr [DAT_0077b290]
        fxch
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     label_check_done
        jmp     label_set_flag
label_check_no_24:
        test    cl, cl
        jz      label_check_done
        lea     ecx, [eax + 0x21e8]
        call    FUN_006100a0
        fcomp   dword ptr [DAT_0077b63c]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_check_done
label_set_flag:
        mov     byte ptr [esp + 0x10], 1
label_check_done:
        mov     edx, [esp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053c120
label_loop_3542_next:
        inc     edi
        add     ebp, 0x2038
        cmp     edi, 0xff
        jl      label_loop_3542
label_big_skip:
        mov     eax, [esi + 0x4c]
        cmp     dword ptr [eax + 0x14], 4
        jnz     label_final_call
        mov     al, [esi + 0x3530]
        test    al, al
        jnz     label_final_call
        mov     ecx, dword ptr [DAT_007dc6d4]
        push    0
        mov     bl, 1
        call    FUN_004e0900
        test    eax, eax
        jz      label_skip_bl
        xor     bl, bl
label_skip_bl:
        mov     ecx, dword ptr [DAT_007da848]
        mov     eax, [ecx + 8]
        test    eax, eax
        jz      label_check_bl
        cmp     dword ptr [eax], 0
        jnz     label_final_call
label_check_bl:
        test    bl, bl
        jz      label_final_call
        mov     eax, dword ptr [DAT_007db094]
        mov     ecx, dword ptr [DAT_007dab44]
        xor     edx, edx
        mov     dl, [eax + 0x28]
        push    1
        push    0
        push    0x16
        push    edx
        mov     edx, [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov     byte ptr [esi + 0x3530], 1
label_final_call:
        mov     ecx, esi
        call    FUN_005384a0
        call    FUN_004d3c10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x08
        ret
    }
}
