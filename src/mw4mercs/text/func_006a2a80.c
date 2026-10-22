/*
 * FUN_006A2A80 (232 B) — __thiscall (ECX = this), RET 0x4 (1 stack param).
 * Calls a virtual method on this+0x30, then a series of float-compare
 * branches and indirect vtable calls on param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_799d48;   /* DAT_00799d48 */
extern float g_799d40;   /* DAT_00799d40 */
extern float g_76c5b0;   /* DAT_0076c5b0 */
extern float g_76d064;   /* DAT_0076d064 */
extern int   g_7f1f84;   /* DAT_007f1f84 */

extern void __cdecl FUN_006a4ae0(void);
extern char __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a26f0(void);
extern void __cdecl FUN_006a4da0(void);
extern void __cdecl FUN_00663bb0(void);
extern char __cdecl FUN_00415230(void);
extern void __cdecl FUN_006633f0(void);

__declspec(naked) void __stdcall FUN_006A2A80(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x30]
        lea     ecx, [edi + 0x30]
        push    esi
        call    dword ptr [eax]
        fstp    st(0)
        mov     ecx, dword ptr [g_799d48]
        push    ecx
        push    esi
        call    FUN_006a4ae0
        fcomp   dword ptr [g_799d40]
        add     esp, 0x8
        /* __emit: fnstsw ax no-WAIT form (DF E0); MSVC6 inserts 9B WAIT */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 (F6 C4) rejected by MSVC6 inline asm */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_2AB6
        mov     byte ptr [edi + 0x4], 0x1
        jmp     L_2ABA
L_2AB6:
        mov     byte ptr [edi + 0x4], 0x0
L_2ABA:
        push    esi
        call    FUN_006a22f0
        add     esp, 0x4
        test    al, al
        jz      L_2B5D
        push    esi
        mov     ecx, edi
        call    FUN_006a26f0
        fcomp   dword ptr [g_76c5b0]
        /* __emit: fnstsw ax no-WAIT form (DF E0); MSVC6 inserts 9B WAIT */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 (F6 C4) rejected by MSVC6 inline asm */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_2AEF
        fld     dword ptr [g_76d064]
        mov     byte ptr [edi + 0x4], 0x0
        pop     edi
        pop     esi
        ret     0x4
L_2AEF:
        push    0x0
        push    0x41A00000
        push    esi
        call    FUN_006a4da0
        fcomp   dword ptr [g_799d40]
        add     esp, 0xC
        /* __emit: fnstsw ax no-WAIT form (DF E0); MSVC6 inserts 9B WAIT */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 (F6 C4) rejected by MSVC6 inline asm */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_2B20
        push    esi
        call    FUN_00663bb0
        fld     dword ptr [g_76d064]
        add     esp, 0x4
        pop     edi
        pop     esi
        ret     0x4
L_2B20:
        mov     edx, dword ptr [esi]
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        jz      L_2B51
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_2B51
        mov     eax, 0x2
        jmp     L_2B53
L_2B51:
        xor     eax, eax
L_2B53:
        push    eax
        push    esi
        call    FUN_006633f0
        add     esp, 0x8
L_2B5D:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     0x4
    }
}
