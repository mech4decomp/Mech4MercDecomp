/*
 * FUN_004A3890 (132 B) — __thiscall MLR helper. Calls FUN_004ad160 on a
 *   sub-object, compares a computed value against a local, and conditionally
 *   computes sqrt and calls FUN_004aed40 twice, then FUN_004938b0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004ad160(void);
extern void __fastcall FUN_004aed40(void);
extern void __fastcall FUN_004938b0(void);

extern float g_7b220c;
extern float g_77016c;
extern float g_770168;

__declspec(naked) void __stdcall FUN_004a3890(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x10]
        lea     esi, [edi + 0xfc]
        push    ecx
        mov     ecx, esi
        call    FUN_004ad160
        fld     dword ptr [g_7b220c]
        fmul    dword ptr [g_77016c]
        mov     ebx, dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0xc]
        __emit 0xDF
        __emit 0xE0          /* __emit: fnstsw ax no-WAIT (DF E0); MSVC6 adds 9B WAIT */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41          /* __emit: test ah,0x41 rejected by MSVC6 inline asm */
        jnz     l_38f8
        test    bl, bl
        jz      l_3909
        fld     dword ptr [g_7b220c]
        push    ebp
        fmul    dword ptr [g_770168]
        lea     ecx, [esi + 4]
        fsqrt
        fstp    dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x1c]
        push    ebp
        call    FUN_004aed40
        push    ebp
        lea     ecx, [esi + 0x10]
        call    FUN_004aed40
        pop     ebp
    l_38f8:
        push    ebx
        mov     ecx, edi
        call    FUN_004938b0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
    l_3909:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 8
        ret     4
    }
}
