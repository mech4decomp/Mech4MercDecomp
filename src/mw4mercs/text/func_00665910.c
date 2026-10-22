/*
 * FUN_00665910 (382 B) — ABL distance/visibility test. __thiscall-style
 * (ESI = this). Computes squared distances via FPU dot products and
 * compares against a threshold. Uses EBP frame.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2044;
extern float g_0077b63c;
extern char __cdecl FUN_00415230(int);

__declspec(naked) void FUN_00665910(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xc4]
        test    eax, eax
        ja      L_665a70
        mov     edx, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [g_007f2044]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        cmp     al, 0x1
        pop     edi
        jz      L_665a70
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x20], ecx
        mov     dword ptr [ebp - 0x1c], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x18], eax
        call    dword ptr [edx + 0x3c]
        fld     dword ptr [ebp - 0x20]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x14], ecx
        mov     ecx, dword ptr [ebp + 0xc]
        fsub    dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1c]
        fld     dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        fsub    dword ptr [ecx + 0x4]
        mov     dword ptr [ebp - 0x10], edx
        fld     dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0xc], eax
        fsub    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0xc], eax
        fld     dword ptr [ebp + 0xc]
        fstp    dword ptr [ebp + 0x8]
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ecx]
        fld     dword ptr [ebp - 0x10]
        fsub    dword ptr [ecx + 0x4]
        fld     dword ptr [ebp - 0xc]
        fsub    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp + 0xc]
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x10]
        fsub    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0xc]
        fsub    dword ptr [ebp - 0x18]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp - 0x4]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fld     dword ptr [ebp + 0x8]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_665a77
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [ebp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_665a77
        fstp    st(0)
L_665a70:
        mov     al, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_665a77:
        fadd    dword ptr [g_0077b63c]
        fcomp   dword ptr [ebp + 0xc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_665a70
        xor     al, al
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
