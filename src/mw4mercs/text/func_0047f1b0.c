/*
 * FUN_0047f1b0 (620 B) — MLR recursive subdivision / normal builder (RET 0).
 * Recursively subdivides a triangle, normalizes edge vectors via
 * g_0076d064/sqrt, and emits vertices through FUN_0040ca40.
 *
 * CFLAGS: /O1
 */

extern int g_007da5f0;
extern float g_0076d064;
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0047f1b0(void);

__declspec(naked) void FUN_0047f1b0(void)
{
    __asm {
        sub     esp, 0x28
        mov     eax, dword ptr [esp + 0x3c]
        test    eax, eax
        push    esi
        push    edi
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x2c], 0x0
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x1c], 0x0
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        jnz     L_47f268
        mov     eax, dword ptr [g_007da5f0]
        cmp     dword ptr [esp + 0x48], eax
        jle     L_47f25c
        mov     esi, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x38]
        mov     edi, dword ptr [esp + 0x34]
        push    esi
        lea     edx, [eax + eax*8]
        push    ecx
        lea     ecx, [edi + edx*4]
        call    FUN_0040ca40
        mov     eax, dword ptr [esp + 0x40]
        push    esi
        push    eax
        mov     eax, dword ptr [g_007da5f0]
        lea     ecx, [eax + eax*8]
        lea     ecx, [edi + ecx*4 + 0xc]
        call    FUN_0040ca40
        mov     eax, dword ptr [g_007da5f0]
        mov     edx, dword ptr [esp + 0x3c]
        push    esi
        lea     eax, [eax + eax*8]
        push    edx
        lea     ecx, [edi + eax*4 + 0x18]
        call    FUN_0040ca40
        mov     eax, dword ptr [g_007da5f0]
L_47f25c:
        inc     eax
        pop     edi
        mov     dword ptr [g_007da5f0], eax
        pop     esi
        add     esp, 0x28
        ret
L_47f268:
        mov     esi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x40]
        push    ebx
        push    ebp
        lea     edi, [esp + 0x2c]
        lea     ebx, [esp + 0x20]
        lea     ebp, [esp + 0x14]
        sub     edi, esi
        sub     ebx, esi
        sub     ecx, esi
        sub     edx, esi
        sub     ebp, esi
        mov     eax, esi
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x44], 0x3
L_47f29a:
        fld     dword ptr [eax]
        mov     ebp, dword ptr [esp + 0x10]
        fadd    dword ptr [ecx + eax]
        add     eax, 0x4
        fstp    dword ptr [edi + eax - 0x4]
        fld     dword ptr [eax - 0x4]
        fadd    dword ptr [edx + eax - 0x4]
        fstp    dword ptr [ebx + eax - 0x4]
        fld     dword ptr [edx + eax - 0x4]
        fadd    dword ptr [ecx + eax - 0x4]
        fstp    dword ptr [eax + ebp - 0x4]
        mov     ebp, dword ptr [esp + 0x44]
        dec     ebp
        mov     dword ptr [esp + 0x44], ebp
        jnz     L_47f29a
        fld     dword ptr [esp + 0x34]
        mov     ebx, dword ptr [esp + 0x54]
        fmul    dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x30]
        mov     ebp, dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x30]
        push    ebx
        push    ebp
        lea     edi, [ecx - 0x1]
        faddp   st(1), st(0)
        mov     ecx, dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x34]
        push    edi
        fmul    dword ptr [esp + 0x38]
        lea     edx, [esp + 0x20]
        push    edx
        mov     edx, dword ptr [esp + 0x4c]
        faddp   st(1), st(0)
        lea     eax, [esp + 0x3c]
        push    eax
        push    ecx
        fsqrt
        push    edx
        fdivr   dword ptr [g_0076d064]
        fld     dword ptr [esp + 0x48]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x4c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x50]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x50]
        fstp    st(0)
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x40]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x3c]
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     dword ptr [esp + 0x3c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x40]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x44]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x44]
        fstp    st(0)
        fld     dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x34]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x38]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x38]
        fstp    st(0)
        call    FUN_0047f1b0
        push    ebx
        push    ebp
        push    edi
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0x70]
        push    esi
        call    FUN_0047f1b0
        mov     ecx, dword ptr [esp + 0x80]
        push    ebx
        push    ebp
        push    edi
        lea     edx, [esp + 0x64]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        push    ecx
        push    esi
        call    FUN_0047f1b0
        add     esp, 0x54
        push    ebx
        push    ebp
        push    edi
        lea     edx, [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        push    esi
        call    FUN_0047f1b0
        add     esp, 0x1c
        pop     ebp
        pop     ebx
        pop     edi
        pop     esi
        add     esp, 0x28
        ret
    }
}
