/*
 * FUN_005d62d0 (355 B) — __thiscall (ECX = this), RET (no stack params).
 *
 * Computes float parameters and invokes a virtual method at vtable+0x1d0,
 * with two branches based on a scaled radius comparison.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float DAT_0076c5b0;
extern float DAT_0076d0fc;
extern float DAT_0078816c;
extern float DAT_00788160;

__declspec(naked) void __stdcall FUN_005d62d0(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        mov     byte ptr [esi + 0x2fa], 0x0
        call    dword ptr [eax + 0x4]
        fld     dword ptr [edi + 0x440]
        fcomp   dword ptr [DAT_0076c5b0]
        mov     ecx, eax
        mov     edx, 0x1
        mov     byte ptr [esi + 0x458], 0x0
        fnstsw  ax
        /* __emit: MSVC6 encodes test dl,ah as test ah,dl (swapped operands) */
        __emit 0x84
        __emit 0xE2
        jz      L_6313
        mov     byte ptr [esi + 0x458], dl
L_6313:
        fld     dword ptr [edi + 0x440]
        fmul    dword ptr [DAT_0076d0fc]
        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_632e
        fchs
L_632e:
        fcomp   dword ptr [DAT_0078816c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63ab
        mov     al, byte ptr [esi + 0x458]
        fld     dword ptr [edi + 0x440]
        test    al, al
        mov     dword ptr [esi + 0x450], 0x3
        jz      L_635f
        fdiv    dword ptr [ecx + 0x2c4]
        fchs
        jmp     L_6365
L_635f:
        fdiv    dword ptr [ecx + 0x2bc]
L_6365:
        mov     edx, dword ptr [esi]
        fst     dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x8]
        lea     ecx, [esp + 0x10]
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    ecx
        push    eax
        lea     ecx, [esi + 0x444]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        call    dword ptr [edx + 0x1d0]
        pop     edi
        pop     esi
        add     esp, 0x14
        ret

L_63ab:
        mov     al, byte ptr [esi + 0x458]
        test    al, al
        mov     dword ptr [esi + 0x450], edx
        jz      L_63cd
        fld     dword ptr [ecx + 0x2c4]
        fdivr   dword ptr [DAT_00788160]
        fst     dword ptr [esp + 0xc]
        jmp     L_63f1
L_63cd:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x114]
        fdivr   dword ptr [DAT_00788160]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        fstp    dword ptr [esp + 0xc]
        call    dword ptr [eax + 0x114]
        fdivr   dword ptr [DAT_00788160]
L_63f1:
        mov     edx, dword ptr [esi]
        fstp    dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    eax
        lea     ecx, [esi + 0x438]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        call    dword ptr [edx + 0x1d0]
        pop     edi
        pop     esi
        add     esp, 0x14
        ret
    }
}
