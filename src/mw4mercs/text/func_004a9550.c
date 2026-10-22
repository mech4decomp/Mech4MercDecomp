/*
 * FUN_004A9550 (132 B) — __thiscall MLR sub-object update.
 *   Calls FUN_004AD160 on a sub-object, compares a float product against a
 *   local, and conditionally computes sqrt and calls FUN_004AED40 twice,
 *   then FUN_004ABCC0(this, arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004ad160(void);
extern void __cdecl FUN_004aed40(void);
extern void __cdecl FUN_004abcc0(void);

extern float g_007b220c;
extern float g_0077016c;
extern float g_00770168;

__declspec(naked) void __fastcall FUN_004a9550(void)
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
        lea     esi, [edi + 0x290]
        push    ecx
        mov     ecx, esi
        call    FUN_004ad160
        fld     dword ptr [g_007b220c]
        fmul    dword ptr [g_0077016c]
        mov     ebx, dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0xc]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        jnz     l_join
        test    bl, bl
        jz      l_ret0
        fld     dword ptr [g_007b220c]
        push    ebp
        fmul    dword ptr [g_00770168]
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
    l_join:
        push    ebx
        mov     ecx, edi
        call    FUN_004abcc0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
    l_ret0:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 8
        ret     4
    }
}
