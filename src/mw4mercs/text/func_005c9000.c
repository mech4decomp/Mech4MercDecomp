/*
 * FUN_005c9000 (110 B) — __fastcall (ECX = param_1), returns float in ST0.
 *
 * Reads a value at this->[0x170]->[0x408]->[0x50], applies ABS gating and
 * clamping against constants, and returns a normalized ratio.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_005ac3e0(void);

__declspec(naked) void __stdcall FUN_005c9000(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_0076c5b0;
extern int DAT_007b220c;
__asm {
push    ecx
        mov     eax, dword ptr [ecx + 0x170]
        mov     ecx, dword ptr [eax + 0x408]
        test    ecx, ecx
        jnz     L_9019
        fld dword ptr [DAT_0076c5b0]
        pop     ecx
        ret
    L_9019:
        mov     edx, dword ptr [ecx + 0x50]
        __emit 0x89 /* __emit: MSVC6 drops the +0 displacement on mov [esp+0],edx */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        __emit 0xD9 /* __emit: MSVC6 drops the +0 displacement on fld dword ptr [esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_903d
        fld dword ptr [DAT_0076c5b0]
        pop     ecx
        ret
    L_903d:
        call    FUN_005ac3e0
        __emit 0xD8 /* __emit: MSVC6 drops the +0 displacement on fcom dword ptr [esp+0] */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fnstsw  ax
        test    ah, 0x41
        jnz     L_9053
        fstp    st(0)
        __emit 0xD9 /* __emit: MSVC6 drops the +0 displacement on fld dword ptr [esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
    L_9053:
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_9068
        fstp    st(0)
        fld dword ptr [DAT_0076c5b0]
    L_9068:
        __emit 0xD8 /* __emit: MSVC6 drops the +0 displacement on fdiv dword ptr [esp+0] */
        __emit 0x74
        __emit 0x24
        __emit 0x00
        pop     ecx
        ret
    }


}
