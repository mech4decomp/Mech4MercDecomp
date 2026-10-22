/*
 * FUN_00553f90 (552 B) — __thiscall, RET 0xC.
 *
 * Complex iteration function with FP math, linked list traversal,
 * and sentinel-checked calls to FUN_00626950.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern double FUN_00707e70(int);
extern int FUN_0041fd80(void);
extern double FUN_005526a0(int, int);
extern int FUN_00417a40(void);
extern void FUN_0040c0e0(void);
extern double FUN_00552780(void *);
extern void FUN_005ef680(void *, double, void *, int);
extern void FUN_00626950(int, int);

__declspec(naked) void FUN_00553f90(void)
{
    

extern int DAT_0076d588;
extern int DAT_0076c5b0;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x0c
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x00
        mov     esi, ecx
        call    FUN_00707e70
        fsub qword ptr [esi+0x64C]
        lea     ecx, [esi + 0x680]
        fstp qword ptr [esp+0x14]
        call    FUN_0041fd80
        push    eax
        mov     eax, dword ptr [esi + 0x384]
        push    eax
        mov     ecx, esi
        call    FUN_005526a0
        fdivr qword ptr [esp+0x14]
        mov     ebp, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [ebp + 0x04]
        xor     bl, bl
        fstp qword ptr [esp+0x14]
        call    FUN_00417a40
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x28], 0x01

loop_start:
        mov     ecx, dword ptr [esp + 0x10]
        cmp     dword ptr [esp + 0x28], ecx
        jg      done_outer

        mov     eax, dword ptr [ebp + 0x08]
        test    eax, eax
        jz      load_from_ebp4
        mov     edi, dword ptr [eax]
        jmp     check_edi
load_from_ebp4:
        xor     edi, edi
check_edi:
        test    edi, edi
        jnz     have_edi

        mov     edx, dword ptr [ebp + 0x04]
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     dword ptr [ebp + 0x08], eax
        jz      xor_edi2
        mov     eax, dword ptr [eax]
        jmp     set_edi
xor_edi2:
        xor     eax, eax
set_edi:
        mov     edi, eax

have_edi:
        mov     ecx, ebp
        call    FUN_0040c0e0
        inc     dword ptr [esp + 0x28]
        mov     eax, dword ptr [edi]
        push    0x00
        mov     ecx, edi
        call    dword ptr [eax + 0xb8]
        test    al, al
        jz      skip_processing

        fld qword ptr [esp+0x20]
        fsub qword ptr [esi+0xEC]
        fcomp qword ptr [DAT_0076d588]
        fnstsw ax
        test    ah, 0x01
        jnz     skip_processing

        push    edi
        mov     ecx, esi
        call    FUN_00552780
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jnz     case_equal

        /* case not equal */
        lea     ecx, [esi + 0x66c]
        call    FUN_0041fd80
        mov     edx, dword ptr [edi]
        push    0x00
        mov     ecx, edi
        mov     dword ptr [esi + 0x2a8], eax
        call    dword ptr [edx + 0xb8]
        test    al, al
        jz      skip_notify1
        mov     ecx, dword ptr [edi + 0x184]
        mov     eax, 0x01
        shl     eax, cl
        mov     ecx, dword ptr [esi + 0x81c]
        mov     byte ptr [esi + 0x741], 0x01
        or      ecx, eax
        mov     dword ptr [esi + 0x81c], ecx

skip_notify1:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    0x00
        lea     ecx, [esi + 0x674]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esi + 0x298]
        push    ecx
        mov     ecx, edi
        call    FUN_005ef680
        mov     edx, dword ptr [edi + 0x184]
        mov     eax, dword ptr [edi + 0x224]
        mov     dword ptr [esi + edx*4 + 0x840], eax
        jmp     after_fp_check

case_equal:
        lea     ecx, [esi + 0x690]
        call    FUN_0041fd80
        mov     edx, dword ptr [edi]
        push    0x00
        mov     ecx, edi
        mov     dword ptr [esi + 0x2a8], eax
        call    dword ptr [edx + 0xb8]
        test    al, al
        jz      skip_notify2
        mov     ecx, dword ptr [edi + 0x184]
        mov     eax, 0x01
        shl     eax, cl
        mov     ecx, dword ptr [esi + 0x754]
        mov     byte ptr [esi + 0x740], 0x01
        or      ecx, eax
        mov     dword ptr [esi + 0x754], ecx

skip_notify2:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    0x00
        lea     ecx, [esi + 0x674]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esi + 0x298]
        push    ecx
        mov     ecx, edi
        call    FUN_005ef680

after_fp_check:
        push    0x00
        mov     bl, 0x01
        call    FUN_00707e70
        fstp qword ptr [esi+0xEC]

        skip_processing:
        mov     eax, dword ptr [ebp + 0x08]
        test    eax, eax
        jz      reload_from_ebp4
        cmp     dword ptr [eax], 0x00
        jnz     have_next
reload_from_ebp4:
        mov     edx, dword ptr [ebp + 0x04]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp + 0x08], eax

have_next:
        mov     eax, dword ptr [ebp + 0x08]
        test    eax, eax
        jz      xor_next
        mov     ecx, dword ptr [eax]
        jmp     do_sentinel_check
xor_next:
        xor     ecx, ecx

do_sentinel_check:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     edx, 0x85739531
        jz      check_bl
        push    ecx
        mov     ecx, dword ptr [esi + 0x8dc]
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_00626950

check_bl:
        test    bl, bl
        jz      loop_start

done_outer:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x0c
        ret     0x0c
    }


}
