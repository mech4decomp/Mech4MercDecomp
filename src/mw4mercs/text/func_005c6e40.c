/*
 * FUN_005C6E40 (81 B) — __thiscall (ECX=this), RET 4 (one float param).
 *
 * Compares this+0x54c against a global constant; if equal returns 0.
 * Otherwise returns (param_1 + this+0x54c) < FUN_00707e70(0) ? 1 : 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __stdcall FUN_00707e70(int param);

__declspec(naked) unsigned short __fastcall FUN_005c6e40(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_0076c5b0;
__asm {
fld     dword ptr [ecx + 0x54C]
        sub     esp, 8
        /* __emit: fcomp dword ptr [imm32] - MSVC6 FPU op with absolute mem operand not supported */
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L5E
        xor     al, al
        add     esp, 8
        ret     4
    L5E:
        fld     dword ptr [esp + 0xC]
        push    0
        fadd    dword ptr [ecx + 0x54C]
        fstp    qword ptr [esp + 0x4]
        call    FUN_00707e70
        /* __emit: fcomp qword ptr [esp] - MSVC6 drops the zero displacement (DC 1C 24 vs DC 5C 24 00) */
        __emit 0xDC
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fnstsw  ax
        test    ah, 0x41
        jnz     L89
        mov     eax, 1
        add     esp, 8
        ret     4
    L89:
        xor     eax, eax
        add     esp, 8
        ret     4
    }


}
