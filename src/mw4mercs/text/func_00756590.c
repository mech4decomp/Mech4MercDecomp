/*
 * FUN_00756590 (223 B) — __thiscall helper with FPU clamping and a
 * critical-section guard.
 *
 * Clamps param_2 (float at [esp+8]) into [0,1], stores it, and conditionally
 * computes a log-based value via FPU (fldln2/fxch/fyl2x) and _ftol, then calls
 * FUN_00757bb0 and possibly FUN_00749a00.
 *
 * FPU absolute-memory operands use extern float/double symbols; IAT calls use
 * extern int symbols. fnstsw ax / test ah,imm8 are written natively (verified
 * to encode as DF E0 / F6 C4 in this toolchain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;    /* 0.0 */
extern float g_76d064;    /* 1.0 */
extern double g_77b648;   /* log constant */
extern int g_856b8c;      /* pointer */
extern int g_76b110;      /* IAT: EnterCriticalSection */
extern int g_76b100;      /* IAT: LeaveCriticalSection */

extern int __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __stdcall FUN_00757bb0(void);
extern void __stdcall FUN_00749a00(void);

__declspec(naked) void __stdcall FUN_00756590(void)
{
    __asm {
        push    esi
        push    0x858ac8
        mov     esi, ecx
        call    dword ptr [g_76b110]
        fld     dword ptr [esp + 8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_b9
        mov     dword ptr [esp + 8], 0
        jmp     L_d2
L_b9:
        fld     dword ptr [esp + 8]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d2
        mov     dword ptr [esp + 8], 0x3f800000
L_d2:
        mov     eax, dword ptr [esp + 8]
        push    edi
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     dword ptr [esi + 0x5c], eax
        mov     byte ptr [esi + 0x75], 1
        jz      L_3e
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_33
        mov     ecx, dword ptr [g_856b8c]
        fld     dword ptr [ecx + 0xd8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_33
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 0xd8]
        fldln2
        fxch
        fyl2x
        fmul    qword ptr [g_77b648]
        call    FUN_0075db4a
        cmp     eax, 0xffffd8f0
        jle     L_33
        push    eax
        jmp     L_38
L_33:
        push    0xffffd8f0
L_38:
        push    edi
        call    FUN_00757bb0
L_3e:
        cmp     dword ptr [esi + 0x9c], 5
        pop     edi
        jnz     L_60
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esi + 0x70]
        mov     eax, dword ptr [edx + 0xec]
        push    0
        push    ecx
        push    2
        push    eax
        call    FUN_00749a00
L_60:
        push    0x858ac8
        call    dword ptr [g_76b100]
        pop     esi
        ret     4
    }
}
