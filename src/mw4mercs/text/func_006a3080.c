/*
 * FUN_006A3080 (386 B) — weapon/tonnage validation helper (__thiscall, RET 4).
 *
 * Calls a virtual method on this+0x30, then runs a chain of float-returning
 * checks (FUN_006A4AE0, FUN_006A22F0, FUN_006A2A30, FUN_006A4DA0, ...) and
 * sets this+0x4 based on the results. One stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_799d48;
extern int g_7f1f84;
extern float g_799d40;
extern float g_799d44;
extern float g_76c5b0;
extern float g_76d064;
extern float g_77431c;
extern float g_77016c;
extern float g_76d5f0;

extern float __cdecl FUN_006a4ae0(void *a, int b);
extern char __cdecl FUN_006a22f0(void *a);
extern float __cdecl FUN_006a2a30(void *a);
extern float __cdecl FUN_006a4da0(void *a, float b, int c);
extern char __cdecl FUN_00415230(int a);
extern void __cdecl FUN_00663900(void *a, float b);
extern float __cdecl FUN_006a5020(void *a, int b);
extern void __cdecl FUN_00664320(void *a, float b);
extern float __cdecl FUN_006a4b70(void *a, float b);
extern void __cdecl FUN_00663bb0(void *a);
extern void __cdecl FUN_00664dd0(void *a, float b);

__declspec(naked) void func_006a3080(void)
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
        fnstsw  ax
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_6a30b6
        mov     byte ptr [edi + 0x4], 0x1
        jmp     L_6a30ba
L_6a30b6:
        mov     byte ptr [edi + 0x4], 0x0
L_6a30ba:
        push    esi
        call    FUN_006a22f0
        add     esp, 0x4
        test    al, al
        jz      L_6a31f7
        push    esi
        mov     ecx, edi
        call    FUN_006a2a30
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6a30ef
        fld     dword ptr [g_76d064]
        mov     byte ptr [edi + 0x4], 0x0
        pop     edi
        pop     esi
        ret     0x4
L_6a30ef:
        push    0x0
        push    0x42b40000
        push    esi
        call    FUN_006a4da0
        fsubr   dword ptr [g_76d064]
        add     esp, 0xc
        fcomp   dword ptr [g_799d40]
        fnstsw  ax
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_6a3173
        mov     edx, dword ptr [esi]
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        jz      L_6a3143
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_6a3143
        mov     eax, 0x2
        jmp     L_6a3145
L_6a3143:
        xor     eax, eax
L_6a3145:
        mov     edx, dword ptr [esi]
        push    eax
        push    0x42b40000
        mov     ecx, esi
        call    dword ptr [edx + 0xd8]
        fmul    dword ptr [g_77431c]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00663900
        fld     dword ptr [g_76d064]
        add     esp, 0xc
        pop     edi
        pop     esi
        ret     0x4
L_6a3173:
        push    0x1
        push    esi
        call    FUN_006a5020
        fcomp   dword ptr [g_799d40]
        add     esp, 0x8
        fnstsw  ax
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_6a31a4
        push    0x42a00000
        push    esi
        call    FUN_00664320
        fld     dword ptr [g_76d064]
        add     esp, 0x8
        pop     edi
        pop     esi
        ret     0x4
L_6a31a4:
        fld     dword ptr [g_799d44]
        push    ecx
        fadd    dword ptr [g_77016c]
        fstp    dword ptr [esp]
        push    esi
        call    FUN_006a4b70
        fcomp   dword ptr [g_799d40]
        add     esp, 0x8
        fnstsw  ax
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_6a31de
        push    esi
        call    FUN_00663bb0
        fld     dword ptr [g_76d064]
        add     esp, 0x4
        pop     edi
        pop     esi
        ret     0x4
L_6a31de:
        fld     dword ptr [g_799d44]
        push    ecx
        fadd    dword ptr [g_76d5f0]
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00664dd0
        add     esp, 0x8
L_6a31f7:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     0x4
    }
}
