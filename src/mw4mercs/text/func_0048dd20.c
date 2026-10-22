/*
 * FUN_0048dd20 (2918 B) — MLR render/update (__thiscall, RET 0x4).
 * Computes several 4x4 matrix products, builds per-object render records
 * (color key, matrices), and dispatches virtual calls on the object at
 * [this+0x110] and on per-light objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004880d0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0048aec0(void);
extern void __cdecl FUN_00423e00(void);

extern int g_007b9460;
extern int g_007da800;
extern int g_007da838;
extern int g_007da790;
extern int g_007b955c;
extern int g_007da784;
extern int g_007b8d88;
extern int g_007b8d8c;
extern int g_007b8d90;
extern int g_007b94a0;
extern float g_0076fe78;

__declspec(naked) void FUN_0048dd20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x94
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [edi + 0x20]
        mov     dword ptr [ebp - 0x10], ebx
        add     ebx, 0xb4
        lea     edx, [ebp - 0x64]
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x8], ebx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x4], edx
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop     esi
        push    0x1
        lea     eax, [edi + 0x4]
        push    eax
        push    0x1
        call    FUN_004880d0
        mov     esi, dword ptr [edi + 0x34]
        test    esi, esi
        jz      L_e330
        push    0x7b9460
        lea     ecx, [ebp - 0x94]
        call    FUN_00419460
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ebp - 0x94], ecx
        mov     edx, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [edi + 0x20]
        mov     dword ptr [ebp - 0x80], edx
        mov     eax, dword ptr [esi + 0x8]
        lea     edx, [ebp - 0x94]
        mov     dword ptr [ebp - 0x6c], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x4], 0x7da800
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     eax, [ebp - 0x64]
        mov     dword ptr [ebp - 0x8], ebx
        mov     dword ptr [ebp - 0x4], eax
        mov     edx, 0x7da800
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop     esi
        jmp     L_e53f
L_e330:
        mov     ecx, dword ptr [edi + 0x20]
        lea     edx, [ebp - 0x64]
        mov     dword ptr [ebp - 0x8], ebx
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x4], edx
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop     esi
L_e53f:
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dl, byte ptr [ecx + 0x1c]
        xor     eax, eax
        test    dl, dl
        mov     dword ptr [ebp - 0x4], eax
        jbe     L_e87d
L_e552:
        mov     ecx, dword ptr [ecx + 0x14]
        mov     esi, dword ptr [ecx + eax*0x4]
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        mov     dword ptr [ebp - 0x8], esi
        call    dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [eax + 0x4]
        test    ch, 0x40
        jnz     L_e79b
        mov     al, byte ptr [g_007da838]
        test    al, al
        jnz     L_e79b
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp - 0xc], 0x0
        call    dword ptr [eax + 0x6c]
        test    eax, eax
        jle     L_e866
        jmp     L_e59b
L_e595:
        mov     esi, dword ptr [ebp - 0x8]
        mov     edi, dword ptr [ebp + 0x8]
L_e59b:
        mov     eax, dword ptr [g_007da790]
        cmp     eax, dword ptr [g_007b955c]
        jnc     L_e87d
        mov     edx, dword ptr [g_007da784]
        lea     ecx, [eax + eax*0x2]
        shl     ecx, 0x4
        add     ecx, eax
        mov     eax, dword ptr [edx]
        lea     ebx, [eax + ecx*0x4]
        test    ebx, ebx
        mov     dword ptr [ebp - 0x18], ebx
        jz      L_e87d
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        mov     dword ptr [ebx + 0xc0], 0x1
        mov     dword ptr [ebx], esi
        call    dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x4], ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [g_007b8d88]
        mov     ecx, dword ptr [g_007b8d8c]
        mov     dword ptr [ebx + 0x8], edx
        mov     edx, dword ptr [g_007b8d90]
        mov     dword ptr [ebx + 0xc], eax
        mov     dword ptr [ebx + 0x10], ecx
        xor     eax, eax
        mov     dword ptr [ebx + 0x14], edx
        mov     dword ptr [ebx + 0x1c], eax
        mov     dword ptr [ebx + 0x20], eax
        mov     eax, dword ptr [edi + 0x1c]
        mov     dword ptr [ebx + 0x18], 0x3f800000
        mov     dword ptr [ebx + 0x24], eax
        lea     edi, [ebx + 0x28]
        mov     ecx, 0x10
        lea     esi, [ebp - 0x64]
        rep     movsd
        lea     edi, [ebx + 0x68]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep     movsd
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x30]
        test    eax, eax
        jz      L_e73a
        mov     dword ptr [ebp - 0x14], eax
        fld     dword ptr [g_0076fe78]
        mov     esi, dword ptr [ebp - 0x14]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x24]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x24]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x20], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x24]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x24]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x24]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x24]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x24]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x24]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [edx + 0xbc], ecx
        mov     ecx, dword ptr [ebp + 0x8]
        mov     ebx, edx
        jmp     L_e744
L_e73a:
        mov     dword ptr [ebx + 0xbc], 0xffffffff
L_e744:
        mov     eax, dword ptr [ecx + 0x2c]
        xor     edx, edx
        test    eax, eax
        mov     dword ptr [ebx + 0xb8], eax
        jle     L_e771
        mov     eax, dword ptr [ecx + 0x28]
        lea     ecx, [ebx + 0x98]
L_e75c:
        mov     esi, dword ptr [eax]
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [ebx + 0xb8]
        inc     edx
        add     eax, 0x4
        add     ecx, 0x4
        cmp     edx, esi
        jl      L_e75c
L_e771:
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax + 0x110]
        call    FUN_0048aec0
        mov     esi, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ecx]
        inc     esi
        mov     dword ptr [ebp - 0xc], esi
        call    dword ptr [edx + 0x6c]
        cmp     esi, eax
        jl      L_e595
        jmp     L_e863
L_e79b:
        mov     cl, byte ptr [edi + 0x1c]
        test    cl, 0x3f
        lea     eax, [edi + 0x1c]
        jz      L_e819
        mov     ecx, dword ptr [g_007b94a0]
        mov     edx, dword ptr [ebp - 0x10]
        mov     ebx, dword ptr [esi]
        push    0x0
        push    ecx
        push    0x0
        add     edx, 0x114
        push    edx
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00423e00
        lea     eax, [ebp - 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [ebx + 0x64]
        test    eax, eax
        jz      L_e866
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x44]
        test    eax, eax
        jz      L_e866
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        xor     ebx, ebx
        call    dword ptr [eax + 0x6c]
        test    eax, eax
        jle     L_e866
        mov     ecx, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ecx + 0x110]
        mov     dword ptr [ebp - 0x14], ecx
        jmp     L_e804
L_e801:
        mov     ecx, dword ptr [ebp - 0x14]
L_e804:
        mov     edx, dword ptr [ecx]
        push    ebx
        push    esi
        call    dword ptr [edx + 0x18]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        inc     ebx
        call    dword ptr [eax + 0x6c]
        cmp     ebx, eax
        jl      L_e801
        jmp     L_e866
L_e819:
        mov     eax, dword ptr [g_007b94a0]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [esi]
        push    0x0
        push    eax
        push    0x0
        add     ecx, 0x114
        push    ecx
        lea     eax, [ebp - 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x68]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        xor     ebx, ebx
        call    dword ptr [edx + 0x6c]
        test    eax, eax
        jle     L_e866
        mov     eax, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [eax + 0x110]
L_e84e:
        mov     edx, dword ptr [edi]
        push    ebx
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x18]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        inc     ebx
        call    dword ptr [eax + 0x6c]
        cmp     ebx, eax
        jl      L_e84e
L_e863:
        mov     edi, dword ptr [ebp + 0x8]
L_e866:
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp - 0x4]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x1c]
        inc     eax
        mov     dword ptr [ebp - 0x4], eax
        cmp     eax, edx
        jl      L_e552
L_e87d:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
