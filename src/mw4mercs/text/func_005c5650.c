/*
 * FUN_005c5650 (143 B) — __thiscall, RET 4. Computes a scaled value and
 * dispatches through a vtable, then compares against a constant.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dbbd0(void);
extern void __cdecl FUN_005c6d90(void);
extern void __cdecl FUN_005c6900(void);
extern void __cdecl FUN_00415020(void);

__declspec(naked) void __stdcall FUN_005c5650(void *param)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_0076d5ec;
extern int DAT_0076c5b0;
__asm {
push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_005dbbd0
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    -0x1
        /* __emit: FPU op with absolute imm32 memory operand not supported in MSVC6 inline asm */
        fmul dword ptr [DAT_0076d5ec]
        mov     ecx, esi
        fstp    dword ptr [esp + 0xc]
        call    dword ptr [eax + 0xb8]
        mov     ecx, dword ptr [esi + 0x170]
        mov     edi, dword ptr [ecx + 0xd8]
        mov     ecx, esi
        add     edi, 0x80
        call    FUN_005c6d90
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_005c6900
        fld     dword ptr [esp + 0x8]
        /* __emit: FPU op with absolute imm32 memory operand not supported in MSVC6 inline asm */
        fcomp dword ptr [DAT_0076c5b0]
        pop     edi
        pop     esi
        fnstsw  ax
        test    ah, 0x41
        jz      L_56c0
        xor     al, al
        pop     ecx
        ret     4
L_56c0:
        call    FUN_00415020
        /* __emit: MSVC6 drops the 0 displacement on fcomp [esp]; need D8 5C 24 00 */
        __emit  0xD8
        __emit  0x5C
        __emit  0x24
        __emit  0x00
        fnstsw  ax
        test    ah, 0x1
        jz      L_56d9
        mov     eax, 0x1
        pop     ecx
        ret     4
L_56d9:
        xor     eax, eax
        pop     ecx
        ret     4
    }


}
