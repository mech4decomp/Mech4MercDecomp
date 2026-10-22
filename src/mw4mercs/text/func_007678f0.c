/*
 * FUN_007678f0 (224 B) — __thiscall 3x4 matrix/vector transform helper.
 *
 * Computes a 3x4 matrix from four input vectors (ECX = output this, plus 4
 * float* params) using FPU ops. Two float constants (g_7704c4, g_7880f8) are
 * referenced via extern float symbols.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7704c4;
extern float g_7880f8;

__declspec(naked) void __stdcall FUN_007678f0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        fld     dword ptr [edx]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        fsub    dword ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        fmul    dword ptr [g_7704c4]
        fld     dword ptr [edi]
        fsub    dword ptr [ecx]
        faddp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 4]
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [g_7704c4]
        fld     dword ptr [edi + 4]
        fsub    dword ptr [ecx + 4]
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 8]
        fsub    dword ptr [esi + 8]
        fmul    dword ptr [g_7704c4]
        fld     dword ptr [edi + 8]
        pop     edi
        fsub    dword ptr [ecx + 8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [ecx]
        fadd    dword ptr [esi]
        fmul    dword ptr [g_7704c4]
        fld     dword ptr [edx]
        fmul    dword ptr [g_7880f8]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [esi + 4]
        fadd    dword ptr [ecx + 4]
        fmul    dword ptr [g_7704c4]
        fld     dword ptr [edx + 4]
        fmul    dword ptr [g_7880f8]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [ecx + 8]
        fadd    dword ptr [esi + 8]
        pop     esi
        fmul    dword ptr [g_7704c4]
        fld     dword ptr [edx + 8]
        fmul    dword ptr [g_7880f8]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx]
        fsub    dword ptr [ecx]
        fmul    dword ptr [g_7704c4]
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 4]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [g_7704c4]
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 8]
        mov     edx, dword ptr [ecx]
        fsub    dword ptr [ecx + 8]
        fmul    dword ptr [g_7704c4]
        fstp    dword ptr [eax + 0x28]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [eax + 0x2c], ecx
        ret     0x10
    }
}
