/*
 * FUN_006a00e0 (112 B) — Iterates an array of pointers; for each entry
 * whose +0x2fc target is non-null, clamps (value+param) into
 * [0x799bf8, 0x799bfc], stores it at +0x1bc, calls FUN_00707e70(0) and
 * stores the float result at +0x1c0.
 *
 * RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_799bf8;
extern float g_799bfc;
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __fastcall FUN_006a00e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]
        push    edi
        mov     edi, dword ptr [eax]
        cmp     edi, ebx
        jz      L_14b
        push    esi
L_f0:
        mov     eax, dword ptr [edi]
        mov     esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        jz      L_143
        fld     dword ptr [esi + 0x1bc]
        fadd    dword ptr [esp + 0x10]
        fcom    dword ptr [g_799bf8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_11b
        fstp    st(0)
        fld     dword ptr [g_799bf8]
L_11b:
        fcom    dword ptr [g_799bfc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_130
        fstp    st(0)
        fld     dword ptr [g_799bfc]
L_130:
        push    0x0
        fstp    dword ptr [esi + 0x1bc]
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c0]
L_143:
        add     edi, 0x4
        cmp     edi, ebx
        jnz     L_f0
        pop     esi
L_14b:
        pop     edi
        pop     ebx
        ret     8
    }
}
