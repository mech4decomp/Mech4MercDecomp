/*
 * FUN_5e028100 (346 B) — __stdcall (RET 0x14), 5 params.
 * Matrix/vector transform loop with heavy FPU usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;
extern float g_5e035aa4;
extern float g_5e036290;

__declspec(naked) void FUN_5e028100(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x20]
        xor     edx, edx
        mov     dword ptr [esp + 0xc], edx
        push    esi
        mov     ecx, dword ptr [eax + 0xc]
        mov     esi, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [eax + 0x10]
        fild    qword ptr [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        mov     dword ptr [esp + 0x10], edx
        mov     eax, dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x24]
        fild    qword ptr [esp + 0xc]
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esp + 0x10], edx
        add     eax, ecx
        fchs
        fstp    dword ptr [esp + 0x8]
        fild    qword ptr [esp + 0xc]
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x10], edx
        mov     ecx, eax
        fstp    dword ptr [esp + 0x4]
        fild    qword ptr [esp + 0xc]
        dec     eax
        test    ecx, ecx
        fstp    dword ptr [esp + 0xc]
        jz      L_028253
        mov     esi, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x18]
        push    edi
        lea     edi, [eax + 0x1]
    L_028179:
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fld     dword ptr [ecx]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [esi + 0x20]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x30]
        fld     dword ptr [ecx]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [esi + 0x24]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [esi + 0x14]
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x34]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esi + 0x28]
        fmul    dword ptr [ecx + 0x8]
        fld     dword ptr [ecx]
        fmul    dword ptr [esi + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [esi + 0x18]
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [ecx]
        fmul    dword ptr [esi + 0xc]
        fld     dword ptr [esi + 0x2c]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [esi + 0x1c]
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fld     dword ptr [g_5e035aa0]
        fcomp   st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        fnstsw ax
        /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 40 */
        test ah, 0x40
        jz      L_0281f9
        fstp    st(0)
        fld     dword ptr [g_5e036290]
        jmp     L_0281ff
    L_0281f9:
        fdivr   dword ptr [g_5e035aa4]
    L_0281ff:
        fld     st(0)
        fmul    st(0), st(2)
        mov     eax, dword ptr [ecx + 0x18]
        add     ecx, 0x20
        mov     dword ptr [edx + 0x18], eax
        mov     eax, dword ptr [ecx - 0x4]
        fmul    dword ptr [esp + 0x28]
        mov     dword ptr [edx + 0x1c], eax
        mov     eax, dword ptr [ecx - 0x10]
        mov     dword ptr [edx + 0x10], eax
        mov     eax, dword ptr [ecx - 0xc]
        fadd    dword ptr [esp + 0x8]
        mov     dword ptr [edx + 0x14], eax
        add     edx, 0x20
        dec     edi
        fstp    dword ptr [edx - 0x20]
        fld     st(0)
        fmul    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [edx - 0x1c]
        fld     st(0)
        fmul    dword ptr [esp + 0x24]
        fstp    dword ptr [edx - 0x18]
        fstp    dword ptr [edx - 0x14]
        fstp    st(0)
        jnz     L_028179
        pop     edi
    L_028253:
        pop     esi
        add     esp, 0x10
        ret     0x14
    }
}
