/*
 * FUN_005541c0 (695 B) — __thiscall, RET 0x8.
 *
 * Complex update function with FP math, multiple sub-calls to
 * FUN_00553f20/FUN_00553f90, and sentinel-checked calls to FUN_005bf280.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern double FUN_00707e70(int);
extern int FUN_0041fd80(void);
extern double FUN_005526a0(int, int);
extern void FUN_005523b0(void);
extern void FUN_00553f20(int, int, int);
extern double FUN_00552780(void *);
extern void FUN_005ef680(void *, double, void *, int);
extern void FUN_00553f90(int, int, int);
extern void FUN_005bf280(void *);
extern void FUN_00626950(int, int);

__declspec(naked) void FUN_005541c0(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        push    edi
        jnz     done_early

        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     done_early

        push    0x00
        call    FUN_00707e70
        fst qword ptr [esp+0x18]
        fsub qword ptr [esi+0x64C]
        lea     ecx, [esi + 0x680]
        fstp qword ptr [esp+0x10]
        call    FUN_0041fd80
        push    eax
        mov     eax, dword ptr [esi + 0x384]
        push    eax
        mov     ecx, esi
        call    FUN_005526a0
        fdivr qword ptr [esp+0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x8d4], ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x8d8], edx
        fstp qword ptr [esp+0x10]
        call    FUN_005523b0

        mov     eax, dword ptr [esi + 0x470]
        test    eax, eax
        mov     edi, dword ptr [ebp + 0x0c]
        mov     ebx, dword ptr [ebp + 0x08]
        jle     skip_470
        push    0x01
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00553f20

skip_470:
        mov     eax, dword ptr [esi + 0x474]
        test    eax, eax
        jle     skip_474
        push    0x02
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00553f20

skip_474:
        mov     eax, dword ptr [esi + 0x478]
        test    eax, eax
        jle     skip_478
        push    0x03
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00553f20

skip_478:
        mov     eax, dword ptr [esi + 0x47c]
        test    eax, eax
        jle     skip_47c
        push    0x04
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00553f20

skip_47c:
        mov     eax, dword ptr [esi + 0x480]
        test    eax, eax
        jle     skip_480
        push    0x05
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00553f20

skip_480:
        mov     eax, dword ptr [esi + 0x484]
        test    eax, eax
        jle     skip_484
        push    0x06
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00553f20

skip_484:
        mov     eax, dword ptr [esi + 0x46c]
        test    eax, eax
        jle     check_flags

        mov     eax, dword ptr [esi + 0x8dc]
        sub     eax, 0x00
        jz      case_0
        dec     eax
        jz      case_1
        dec     eax
        jnz     check_flags

        /* case 2 */
        mov     eax, dword ptr [esi + 0x938]
        mov     eax, dword ptr [eax + 0x08]
        test    eax, eax
        jz      xor_edi2
        mov     edi, dword ptr [eax]
        jmp     have_edi2
xor_edi2:
        xor     edi, edi
have_edi2:
        push    edi
        mov     ecx, esi
        call    FUN_00552780
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jnz     case2_equal

        /* case 2, not equal */
        lea     ecx, [esi + 0x66c]
        call    FUN_0041fd80
        mov     dword ptr [esi + 0x2a8], eax
        mov     eax, dword ptr [edi]
        push    0x00
        mov     ecx, edi
        call    dword ptr [eax + 0xb8]
        test    al, al
        jz      case2_skip_notify1
        mov     ecx, dword ptr [edi + 0x184]
        mov     eax, dword ptr [esi + 0x81c]
        mov     edx, 0x01
        shl     edx, cl
        mov     byte ptr [esi + 0x741], 0x01
        or      eax, edx
        mov     dword ptr [esi + 0x81c], eax

case2_skip_notify1:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    0x00
        lea     eax, [esi + 0x674]
        push    eax
        push    ecx
        push    edx
        lea     eax, [esi + 0x298]
        push    eax
        mov     ecx, edi
        call    FUN_005ef680
        mov     ecx, dword ptr [edi + 0x184]
        mov     edx, dword ptr [edi + 0x224]
        mov     dword ptr [esi + ecx*4 + 0x840], edx
        jmp     check_flags

case2_equal:
        lea     ecx, [esi + 0x690]
        call    FUN_0041fd80
        mov     dword ptr [esi + 0x2a8], eax
        mov     eax, dword ptr [edi]
        push    0x00
        mov     ecx, edi
        call    dword ptr [eax + 0xb8]
        test    al, al
        jz      case2_skip_notify2
        mov     ecx, dword ptr [edi + 0x184]
        mov     eax, dword ptr [esi + 0x754]
        mov     edx, 0x01
        shl     edx, cl
        mov     byte ptr [esi + 0x740], 0x01
        or      eax, edx
        mov     dword ptr [esi + 0x754], eax

case2_skip_notify2:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    0x00
        lea     eax, [esi + 0x674]
        push    eax
        push    ecx
        push    edx
        lea     eax, [esi + 0x298]
        push    eax
        mov     ecx, edi
        call    FUN_005ef680
        jmp     check_flags

case_1:
        mov     ecx, dword ptr [esi + 0x8e0]
        push    ecx
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00553f20
        jmp     check_flags

case_0:
        mov     edx, dword ptr [esi + 0x938]
        push    edx
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00553f90

check_flags:
        mov     al, byte ptr [esi + 0x740]
        test    al, al
        jz      check_741
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx]
        lea     eax, [esi + 0x744]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_005bf280

check_741:
        mov     al, byte ptr [esi + 0x741]
        test    al, al
        jz      done_early
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx]
        add     esi, 0x80c
        push    esi
        xor     ecx, 0x85739531
        call    FUN_005bf280

done_early:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x08
    }


}
