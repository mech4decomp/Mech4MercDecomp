/*
 * FUN_005cc510 (270 B) — __thiscall method (RET 8, 2 params). Dispatches on
 *   a float mode field, calls various sub-handlers, does 64-bit timing
 *   accumulation into DAT_007f23b8/bc, and calls FUN_005dc4a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00707f50(void);
extern void FUN_005cc8e0(void);
extern void FUN_005ccdd0(void);
extern void FUN_005cd3e0(void);
extern void FUN_005cc730(void);
extern void FUN_0075db4a(void);
extern void FUN_005dc4a0(void);
extern void FUN_005cd6f0(void);
extern void FUN_005e8990(void);

__declspec(naked) void FUN_005cc510(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_007f23b8;
extern int DAT_007f23bc;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, ecx
        mov     al, [esi + 0x2f0]
        test    al, al
        push    edi
        jnz     l_5f0
        mov     al, [esi + 0x2f1]
        test    al, al
        jz      l_5f0
        call    FUN_00707f50
        fld     dword ptr [esi + 0x1e4]
        fcomp dword ptr [DAT_0076c5b0]
        mov     edi, [ebp + 0xc]
        mov     ebx, [ebp + 8]
        mov     [esp + 0x10], eax
        mov     [esp + 0x14], edx
        fnstsw  ax
        test    ah, 0x40
        jz      l_56b
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005cc8e0
        jmp     l_597

    l_56b:
        cmp     dword ptr [esi + 0x1e4], 0x3f800000
        jnz     l_582
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005ccdd0
        jmp     l_597

    l_582:
        cmp     dword ptr [esi + 0x1e4], 0x40000000
        jnz     l_597
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005cd3e0

    l_597:
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005cc730
        fld     dword ptr [esi + 0x208]
        call    FUN_0075db4a
        mov     ecx, [esi + 0x314]
        mov     [ecx + 0x458], eax
        call    FUN_00707f50
        sub     eax, [esp + 0x10]
        sbb     edx, [esp + 0x14]
        mov ecx, dword ptr [DAT_007f23b8]
        add     ecx, eax
        mov eax, dword ptr [DAT_007f23bc]
        push    edi
        mov dword ptr [DAT_007f23b8], ecx
        adc     eax, edx
        push    ebx
        mov     ecx, esi
        mov dword ptr [DAT_007f23bc], eax
        call    FUN_005dc4a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8

    l_5f0:
        mov     ecx, esi
        call    FUN_005cd6f0
        cmp     al, 1
        jnz     l_606
        mov     ecx, [esi + 0x314]
        call    FUN_005e8990

    l_606:
        mov     edx, [ebp + 0xc]
        mov     eax, [ebp + 8]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005dc4a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
