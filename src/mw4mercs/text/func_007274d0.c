/*
 * FUN_007274D0 (285 B) — FPU math / state-update routine.
 *
 * Computes a float value from params and globals (with several FPU
 * branches), stores it and a set of byte/dword params into global state,
 * and optionally computes a derived value.
 *
 * __stdcall, RET 0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_7a5640;
extern float g_76f5dc;
extern float g_76d064;
extern float g_76d3c8;
extern float g_76dd60;
extern float g_8816d8;
extern float g_7b7118;
extern int   g_8816d0;
extern int   g_8816cc;
extern int   g_8816e0;
extern int   g_8816e8;
extern char  g_8816dc;
extern char  g_8816dd;
extern char  g_8816e7;
extern char  g_8816e4;
extern char  g_8816e5;
extern char  g_8816e6;

__declspec(naked) void __stdcall FUN_007274D0(void)
{
    __asm {
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76c5b0]
        mov     ecx, dword ptr [esp + 0x4]
        mov     [g_8816d0], eax
        mov     dword ptr [g_8816cc], ecx
        __emit 0xDF          /* FNSTSW AX no-WAIT (MSVC6 adds 9B WAIT) */
        __emit 0xE0
        __emit 0xF6          /* TEST AH,0x1 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x01
        mov     eax, dword ptr [ecx + 0x75c]
        jz      L_72752a
        test    eax, eax
        jnz     L_72751e
        fild    dword ptr [ecx + 0x128]
        fld     st(0)
        fmul    dword ptr [g_7a5640]
        fdiv    dword ptr [esp + 0xc]
        fchs
        fdivr   st(0), st(1)
        fstp    dword ptr [g_8816d8]
        fstp    st(0)
        jmp     L_72753c
L_72751e:
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [g_76f5dc]
        jmp     L_727536
L_72752a:
        fild    dword ptr [ecx + 0x128]
        test    eax, eax
        fmul    dword ptr [esp + 0xc]
L_727536:
        fstp    dword ptr [g_8816d8]
L_72753c:
        fild    dword ptr [ecx + 0x128]
        mov     byte ptr [g_8816dc], 0x1
        fld     dword ptr [g_8816d8]
        fdiv    st(0), st(1)
        fst     dword ptr [g_7b7118]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF          /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6          /* TEST AH,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      L_72756b
        mov     byte ptr [g_8816dc], 0x0
L_72756b:
        mov     al, byte ptr [esp + 0x10]
        mov     dl, byte ptr [esp + 0x24]
        mov     [g_8816dd], al
        mov     al, byte ptr [esp + 0x14]
        mov     byte ptr [g_8816e7], dl
        mov     edx, dword ptr [esp + 0x20]
        mov     [g_8816e4], al
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        mov     dword ptr [g_8816e0], edx
        mov     dl, byte ptr [esp + 0x18]
        mov     byte ptr [g_8816e5], dl
        mov     [g_8816e6], al
        mov     dword ptr [g_8816e8], 0x0
        jz      L_7275e8
        fld     dword ptr [g_8816d8]
        fdiv    st(0), st(1)
        fimul   dword ptr [ecx + 0x124]
        fmul    dword ptr [g_76d3c8]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x24]
        and     eax, 0x7fffff
        fstp    st(0)
        sub     eax, 0x400000
        mov     [g_8816e8], eax
        ret     0x24
L_7275e8:
        fstp    st(0)
        ret     0x24
    }
}
