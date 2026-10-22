/*
 * FUN_00661ea0 (238 B) — __thiscall RET 0x4. ABL candidate-selection predicate:
 * queries a virtual state predicate, compares a float (FUN_00661e60) against a
 * value from FUN_00637a20, checks string predicates via FUN_00415230, and
 * compares a distance (FUN_00707e70) before delegating to FUN_00661f90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2568;
extern int g_007f2104;
extern float g_0076d064;

extern void __cdecl FUN_00661e60(void);
extern int __cdecl FUN_00637b40(int);
extern void __cdecl FUN_00637a20(void);
extern char __cdecl FUN_00415230(int);
extern int __cdecl FUN_00707e70(int);
extern void __cdecl FUN_00661f90(void);

__declspec(naked) void FUN_00661ea0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        call    dword ptr [eax + 0x18]
        cmp     al, 0x1
        jnz     L_1eba
        mov     byte ptr [edi + 0xc], 0x0
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
L_1eba:
        cmp     byte ptr [edi + 0xc], 0x1
        jz      L_1f85
        mov     ecx, edi
        call    FUN_00661e60
        fstp    dword ptr [esp + 0xc]
        push    0x65
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0xc]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jz      L_1f85
        cmp     dword ptr [edi + 0x8], 0xbf800000
        jz      L_1f85
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        mov     ebx, dword ptr [g_007f2568]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    ebx
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_1f31
        mov     eax, dword ptr [esi]
        mov     ebx, dword ptr [g_007f2104]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    ebx
        call    FUN_00415230
        cmp     al, 0x1
        jz      L_1f85
L_1f31:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x50]
        mov     dword ptr [esp + 0x14], eax
        fild    dword ptr [esp + 0x14]
        fsubr   dword ptr [edi + 0x8]
        fabs
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_1f5b
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret     0x4
L_1f5b:
        push    0x0
        call    FUN_00707e70
        fld     dword ptr [edi + 0x1c]
        fcompp
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jz      L_1f77
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret     0x4
L_1f77:
        mov     ecx, edi
        call    FUN_00661f90
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
L_1f85:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
