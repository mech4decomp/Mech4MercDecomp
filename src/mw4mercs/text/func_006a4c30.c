/*
 * FUN_006a4c30 (287 B) — Float-returning range check. Computes a 3D
 * offset between two vtable[0x34]/[0x3c] results, normalizes via
 * FUN_0040cb00, and compares a squared distance against param_2^2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;   /* 0x0076d064 */
extern float g_76c5b0;   /* 0x0076c5b0 */

extern float __cdecl FUN_0040cb00(void);

__declspec(naked) float FUN_006a4c30(void *param_1, float param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x34
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x3C]
        mov     eax, dword ptr [eax + 0xD8]
        mov     ecx, dword ptr [eax + 0x8C]
        mov     edx, dword ptr [eax + 0x9C]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2C]
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0xC], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x8], eax
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xD8]
        fld     dword ptr [eax + 0x8C]
        mov     ecx, dword ptr [eax + 0x9C]
        fsub    dword ptr [ebp - 0x10]
        mov     edx, dword ptr [eax + 0xAC]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x30], ecx
        fstp    dword ptr [ebp - 0x1C]
        mov     dword ptr [ebp - 0x2C], edx
        fld     dword ptr [ebp - 0x30]
        lea     ecx, [ebp - 0x1C]
        fsub    dword ptr [ebp - 0xC]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x2C]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x14]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x38]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3C]
        fld     dword ptr [ebp - 0x4]
        fdiv    dword ptr [edi + 0x2BC]
        mov     edx, dword ptr [eax]
        push    0x0
        push    ecx
        lea     ecx, [ebp - 0x28]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xF8]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xD8]
        fld     dword ptr [eax + 0x8C]
        add     eax, 0x80
        fsub    dword ptr [ebp - 0x28]
        mov     eax, dword ptr [eax + 0x2C]
        mov     dword ptr [ebp - 0x2C], eax
        fld     dword ptr [ebp - 0x2C]
        fsub    dword ptr [ebp - 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [ebp + 0xC]
        fmul    dword ptr [ebp + 0xC]
        fcompp
        fnstsw  ax
        pop     edi
        fstp    st(0)
        pop     esi
        test    ah, 0x1
        fstp    st(0)
        jnz     L4D45
        fld     dword ptr [g_76d064]
        mov     esp, ebp
        pop     ebp
        ret
L4D45:
        fld     dword ptr [g_76c5b0]
        mov     esp, ebp
        pop     ebp
        ret
    }
}
