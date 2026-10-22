/*
 * FUN_006a55e0 (285 B) — Float-returning distance/range check helper.
 * Calls vtable[0xa4] on the object, compares against FUN_00707e70(0),
 * then computes a squared 3D distance between two vtable[0x34] results
 * and compares against a squared radius.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;   /* 0x0076d064 */
extern float g_77a198;   /* 0x0077a198 */
extern float g_76c5b0;   /* 0x0076c5b0 */
extern int   g_7f1f84;   /* 0x007f1f84 */

extern float __cdecl FUN_00707e70(int);
extern char __cdecl FUN_00415230(int);

__declspec(naked) float FUN_006a55e0(void *param_1)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0xA4]
        fadd    dword ptr [g_76d064]
        push    0x0
        fstp    qword ptr [esp + 0xC]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L561B
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        add     esp, 0x18
        ret
L561B:
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x44]
        mov     edi, eax
        test    edi, edi
        jz      L56F1
        mov     eax, dword ptr [esi]
        push    ebx
        mov     ebx, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    ebx
        call    FUN_00415230
        test    al, al
        pop     ebx
        jnz     L5658
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [g_77a198]
        fstp    dword ptr [esp + 0x28]
L5658:
        mov     eax, dword ptr [edi + 0xD8]
        mov     ecx, dword ptr [eax + 0x8C]
        mov     edx, dword ptr [eax + 0x9C]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2C]
        mov     dword ptr [esp + 0x8], ecx
        mov     dword ptr [esp + 0xC], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], eax
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xD8]
        fld     dword ptr [eax + 0x8C]
        mov     ecx, dword ptr [eax + 0x9C]
        fsub    dword ptr [esp + 0x8]
        mov     edx, dword ptr [eax + 0xAC]
        add     eax, 0x80
        mov     dword ptr [esp + 0x18], ecx
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0xC]
        mov     dword ptr [esp + 0x1C], edx
        fld     dword ptr [esp + 0x1C]
        fsub    dword ptr [esp + 0x10]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     L56F1
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        add     esp, 0x18
        ret
L56F1:
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        add     esp, 0x18
        ret
    }
}
