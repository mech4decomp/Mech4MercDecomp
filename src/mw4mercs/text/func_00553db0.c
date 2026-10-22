/*
 * FUN_00553db0 (358 B) — __thiscall, RET 0xC.
 *
 * Iterates a linked list of objects, performing FP math and
 * calling various methods. Involves FUN_00707e70, FUN_0041fd80,
 * FUN_005526a0, FUN_00552780, FUN_005ef680.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern double FUN_00707e70(int);
extern int FUN_0041fd80(void);
extern double FUN_005526a0(int, int);
extern double FUN_00552780(void *);
extern void FUN_005ef680(void *, double, void *, int);

__declspec(naked) void FUN_00553db0(void)
{
    

extern int DAT_0076c5b0;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        push    0x00
        mov     esi, ecx
        call    FUN_00707e70
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
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ecx]
        fstp qword ptr [esp+0x10]
        mov     ebx, dword ptr [esp + 0x14]

loop_top:
        test    eax, eax
        jz      done
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     edx, dword ptr [eax + 0x04]
        mov     dword ptr [esp + 0x24], edx
        jz      done

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
        mov     dword ptr [esi + 0x2a8], eax
        mov     eax, dword ptr [edi]
        push    0x00
        mov     ecx, edi
        call    dword ptr [eax + 0xb8]
        test    al, al
        jz      skip_notify1
        mov     ecx, dword ptr [edi + 0x184]
        mov     eax, dword ptr [esi + 0x81c]
        mov     edx, 0x01
        shl     edx, cl
        mov     byte ptr [esi + 0x741], 0x01
        or      eax, edx
        mov     dword ptr [esi + 0x81c], eax

skip_notify1:
        mov     ecx, dword ptr [esp + 0x10]
        push    0x00
        lea     eax, [esi + 0x674]
        push    eax
        push    ebx
        push    ecx
        lea     edx, [esi + 0x298]
        push    edx
        mov     ecx, edi
        call    FUN_005ef680
        mov     eax, dword ptr [edi + 0x184]
        mov     ecx, dword ptr [edi + 0x224]
        mov     dword ptr [esi + eax*4 + 0x840], ecx
        mov     eax, dword ptr [esp + 0x24]
        jmp     loop_top

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
        mov     edx, dword ptr [esp + 0x10]
        push    0x00
        lea     ecx, [esi + 0x674]
        push    ecx
        push    ebx
        push    edx
        lea     eax, [esi + 0x298]
        push    eax
        mov     ecx, edi
        call    FUN_005ef680
        mov     eax, dword ptr [esp + 0x24]
        jmp     loop_top

done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x0c
    }


}
