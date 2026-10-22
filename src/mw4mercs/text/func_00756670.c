/*
 * FUN_00756670 (273 B) — __thiscall routine.
 *
 * Enters a critical section, clamps a float param to [0x76d598, 0x76d064]
 * (defaulting to 1.0), stores it, then computes a derived value via FPU
 * log/exp math and calls FUN_00757C30. Finally calls FUN_00749A00 if
 * [edi+0x9c]==5, and leaves the critical section.
 *
 * __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_76b110)(void);   /* EnterCriticalSection IAT */
extern void (__stdcall *g_76b100)(void);   /* LeaveCriticalSection IAT */
extern float g_76d598;
extern float g_76d064;
extern float g_76c5b0;
extern float g_7a6108;
extern float g_7a60fc;
extern double g_7a6100;
extern double g_77b648;

extern int __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_00757C30(void);
extern void __cdecl FUN_00749A00(void);

__declspec(naked) void __stdcall FUN_00756670(void)
{
    __asm {
        push    edi
        push    0x858ac8
        mov     edi, ecx
        call    dword ptr [g_76b110]
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76d598]
        __emit 0xDF
        __emit 0xE0          /* FNSTSW AX no-WAIT (MSVC6 adds 9B WAIT) */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01     /* TEST AH,0x1 (MSVC6 rejects test ah,imm8) */
        jnz     L_7566a0
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF
        __emit 0xE0          /* FNSTSW AX no-WAIT */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41     /* TEST AH,0x41 */
        jnz     L_7566a8
L_7566a0:
        mov     dword ptr [esp + 0x8], 0x3f800000
L_7566a8:
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     dword ptr [edi + 0x60], eax
        mov     byte ptr [edi + 0x75], 0x1
        jz      L_756750
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0          /* FNSTSW AX no-WAIT */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40     /* TEST AH,0x40 */
        jnz     L_756748
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [g_76c5b0]
        fld     dword ptr [esp + 0xc]
        __emit 0xDF
        __emit 0xE0          /* FNSTSW AX no-WAIT */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41     /* TEST AH,0x41 */
        jnz     L_756716
        fcomp   dword ptr [g_7a6108]
        __emit 0xDF
        __emit 0xE0          /* FNSTSW AX no-WAIT */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01     /* TEST AH,0x1 */
        jnz     L_7566f8
        push    0x2710
        jmp     L_75674a
L_7566f8:
        fld     dword ptr [g_76d064]
        fsub    dword ptr [esp + 0xc]
        fldln2
        fxch
        fyl2x
        fmul    qword ptr [g_7a6100]
        call    FUN_0075DB4A
        push    eax
        jmp     L_75674a
L_756716:
        fcomp   dword ptr [g_7a60fc]
        __emit 0xDF
        __emit 0xE0          /* FNSTSW AX no-WAIT */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41     /* TEST AH,0x41 */
        jz      L_75672a
        push    0xffffd8f0
        jmp     L_75674a
L_75672a:
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [g_76d064]
        fldln2
        fxch
        fyl2x
        fmul    qword ptr [g_77b648]
        call    FUN_0075DB4A
        push    eax
        jmp     L_75674a
L_756748:
        push    0x0
L_75674a:
        push    esi
        call    FUN_00757C30
L_756750:
        cmp     dword ptr [edi + 0x9c], 0x5
        pop     esi
        jnz     L_756772
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [edi + 0x70]
        mov     eax, dword ptr [edx + 0xec]
        push    0x0
        push    ecx
        push    0x4
        push    eax
        call    FUN_00749A00
L_756772:
        push    0x858ac8
        call    dword ptr [g_76b100]
        pop     edi
        ret     0x4
    }
}
