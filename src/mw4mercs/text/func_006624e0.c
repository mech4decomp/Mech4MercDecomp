/*
 * FUN_006624e0 (112 B) — Computes a weighted sum of six scalar results
 * (FUN_006622b0/006621d0/00662130/006620b0/00662290/006621a0) using
 * constants 0x76df00 and 0x76d598. Returns float in ST(0).
 *
 * __thiscall-style, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76df00;
extern float g_76d598;
extern void __cdecl FUN_006622b0(void);
extern void __cdecl FUN_006621d0(void);
extern void __cdecl FUN_00662130(void);
extern void __cdecl FUN_006620b0(void);
extern void __cdecl FUN_00662290(void);
extern void __cdecl FUN_006621a0(void);

__declspec(naked) void __fastcall FUN_006624e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_006622b0
        fmul    dword ptr [g_76df00]
        push    esi
        fstp    dword ptr [esp + 0x10]
        call    FUN_006621d0
        fmul    dword ptr [g_76df00]
        push    esi
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        call    FUN_00662130
        fmul    dword ptr [g_76d598]
        push    esi
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        call    FUN_006620b0
        fmul    dword ptr [g_76df00]
        push    esi
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00662290
        fadd    dword ptr [esp + 0x1c]
        push    esi
        fstp    dword ptr [esp + 0x20]
        call    FUN_006621a0
        fadd    dword ptr [esp + 0x20]
        add     esp, 0x18
        pop     esi
        ret     4
    }
}
