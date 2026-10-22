/*
 * FUN_006a1240 (426 B) - __cdecl, two params, RET 0x8.
 * Computes squared distances via FPU, compares against a global constant,
 * and conditionally runs a series of transform/query helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_005d2900(void);
extern void __cdecl FUN_006632e0(void);
extern void __cdecl FUN_006a13f0(void);
extern void __cdecl FUN_0058ea70(void);

extern float g_799c84;

__declspec(naked) void __stdcall FUN_006a1240(void *p1, void *p2)
{
    __asm {
        sub     esp, 0x48
        mov     eax, dword ptr [esp + 0x50]
        push    esi
        mov     esi, dword ptr [eax + 0xd8]
        fld     dword ptr [esi + 0x8c]
        mov     ecx, dword ptr [esi + 0x9c]
        mov     edx, dword ptr [esi + 0xac]
        add     esi, 0x80
        push    edi
        mov     edi, dword ptr [esp + 0x54]
        fsub    dword ptr [edi]
        mov     dword ptr [esp + 0xc], ecx
        fld     dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x10], edx
        fsub    dword ptr [edi + 0x4]
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [edi + 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     dword ptr [g_799c84]
        fmul    dword ptr [g_799c84]
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     L13e0
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    FUN_00428730
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0040c410
        push    esi
        lea     ecx, [esp + 0x30]
        call    FUN_00419480
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0040cbb0
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, esi
        call    FUN_00428810
        lea     edx, [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0xc]
        call    FUN_0040c410
        push    esi
        lea     ecx, [esp + 0x48]
        call    FUN_005d2900
        push    eax
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_0040cbb0
        lea     ecx, [esp + 0x8]
        push    ecx
        push    edi
        call    FUN_006632e0
        lea     edx, [esp + 0x1c]
        push    edx
        fstp    dword ptr [esp + 0x64]
        push    edi
        call    FUN_006632e0
        fcomp   dword ptr [esp + 0x68]
        add     esp, 0x10
        fnstsw  ax
        test    ah, 0x1
        jz      L13e0
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_00428730
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_0040c410
        push    esi
        lea     ecx, [esp + 0x48]
        call    FUN_005d2900
        push    eax
        lea     edx, [esp + 0xc]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_0040cbb0
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    FUN_006a13f0
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0058ea70
        push    esi
        lea     ecx, [esp + 0x24]
        call    FUN_005d2900
        push    eax
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_0040cbb0
        lea     eax, [esp + 0x14]
        push    eax
        push    edi
        call    FUN_006632e0
        lea     ecx, [esp + 0x10]
        push    ecx
        fstp    dword ptr [esp + 0x64]
        push    edi
        call    FUN_006632e0
        fcomp   dword ptr [esp + 0x68]
        add     esp, 0x10
        fnstsw  ax
        test    ah, 0x1
        jz      L13e0
        pop     edi
        mov     al, 0x1
        pop     esi
        add     esp, 0x48
        ret     0x8
L13e0:
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x48
        ret     0x8
    }
}
