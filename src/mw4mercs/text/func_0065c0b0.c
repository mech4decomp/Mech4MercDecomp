/*
 * FUN_0065c0b0 (208 B) — Iterates a linked list of objects, computes a
 * squared 3D distance from a point (param_1) to each candidate, and
 * returns the +0x30 field of the nearest candidate (or -2 if none).
 * Uses FPU stack arithmetic and FUN_00415230 as a per-node filter.
 *
 * __cdecl (2 params), RET (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7f2024;   /* DAT_007f2024 */
extern float g_76c5b0;   /* DAT_0076c5b0 */

extern void __cdecl FUN_00415230(void);

__declspec(naked) int __cdecl FUN_0065c0b0(float *param_1, int **param_2)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [eax]
        mov     dword ptr [esp + 0x24], 0x0
        xor     ebp, ebp
        jmp     L_65c0cf
L_65c0cd:
        fstp    st(0)
L_65c0cf:
        test    edi, edi
        jz      L_65c16c
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L_65c16c
        mov     eax, dword ptr [g_7f2024]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_65c0cf
        mov     eax, dword ptr [esi + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsubr   dword ptr [ebx]
        mov     edx, dword ptr [eax + 0xac]
        fld     dword ptr [ebx + 0x4]
        add     eax, 0x80
        mov     dword ptr [esp + 0x14], ecx
        fsub    dword ptr [esp + 0x14]
        fld     dword ptr [ebx + 0x8]
        mov     dword ptr [esp + 0x18], edx
        fsub    dword ptr [esp + 0x18]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_65c161
        fcom    dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x1
        jz      L_65c0cd
L_65c161:
        fstp    dword ptr [esp + 0x24]
        mov     ebp, esi
        jmp     L_65c0cf
L_65c16c:
        test    ebp, ebp
        mov     eax, 0xfffffffe
        jz      L_65c178
        mov     eax, dword ptr [ebp + 0x30]
L_65c178:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
