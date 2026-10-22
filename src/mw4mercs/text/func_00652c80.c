/*
 * FUN_00652c80 (272 B) — __cdecl, 1 float param, returns float (ST0).
 * Computes a normalized angle/parameter from a list of points.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7f268c;   /* 0x007f268c */
extern float g_76c5b0;          /* 0x0076c5b0 */
extern float g_7b220c;          /* 0x007b220c */
extern float g_7823a8;          /* 0x007823a8 */
extern float g_76d064;          /* 0x0076d064 */

extern char __cdecl FUN_00415230(int a);
extern void __cdecl FUN_00416bc0(int a);
extern void *__cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void __cdecl FUN_00652c80(void)
{
    __asm {
        mov     eax, dword ptr [g_7f268c]
        sub     esp, 0x18
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_ca5
        fld     dword ptr [g_76c5b0]
        pop     esi
        add     esp, 0x18
        ret
L_ca5:
        add     esi, 0x384
        push    esi
        lea     ecx, [esp + 0xC]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x8], 0x783f04
        mov     dword ptr [esp + 0x4], 0x0
        mov     dword ptr [esp + 0x20], 0x0
        call    FUN_00416cc0
        test    eax, eax
        jz      L_cfd
L_cda:
        fld     dword ptr [esp + 0x4]
        lea     ecx, [esp + 0x8]
        fadd    dword ptr [eax + 0x14]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [eax + 0x10]
        fstp    dword ptr [esp + 0x20]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_cda
L_cfd:
        fld     dword ptr [esp + 0x20]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF            /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0            /* __emit: ... (DF E0 no-WAIT form) */
        __emit 0xF6            /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4            /* __emit: ... */
        __emit 0x01            /* __emit: ... */
        jnz     L_d26
        lea     ecx, [esp + 0x8]
        call    FUN_00416c60
        fld     dword ptr [g_76c5b0]
        pop     esi
        add     esp, 0x18
        ret
L_d26:
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [g_7823a8]
        fld     dword ptr [esp + 0x4]
        fsub    st(0), st(1)
        fld     dword ptr [esp + 0x20]
        fsub    st(0), st(2)
        fdivp   st(1), st(0)
        fsubr   dword ptr [g_76d064]
        fstp    dword ptr [esp + 0x20]
        fstp    st(0)
        fld     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF            /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0            /* __emit: ... (DF E0 no-WAIT form) */
        __emit 0xF6            /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4            /* __emit: ... */
        __emit 0x01            /* __emit: ... */
        jz      L_d65
        mov     dword ptr [esp + 0x20], 0x0
        jmp     L_d7e
L_d65:
        fld     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0            /* __emit: ... (DF E0 no-WAIT form) */
        __emit 0xF6            /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4            /* __emit: ... */
        __emit 0x41            /* __emit: ... */
        jnz     L_d7e
        mov     dword ptr [esp + 0x20], 0x3f800000
L_d7e:
        lea     ecx, [esp + 0x8]
        call    FUN_00416c60
        fld     dword ptr [esp + 0x20]
        pop     esi
        add     esp, 0x18
        ret
    }
}
