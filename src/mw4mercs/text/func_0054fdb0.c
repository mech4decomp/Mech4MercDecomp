/*
 * FUN_0054fdb0 (extent 0x54fdb0-0x551844) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076d588;
extern float  g_0076d5f0;
extern float  g_0076d968;
extern float  g_0076d970;
extern float  g_0077b640;
extern int    g_0077b988;
extern float  g_0077d0e0;
extern float  g_007b220c;
extern int    g_007b8ce8;
extern int    g_007b8cf0;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f20d0;
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419f10(void);
extern void __cdecl FUN_00419f50(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041a280(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00420740(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004f3f40(void);
extern void __cdecl FUN_004f7a60(void);
extern void __cdecl FUN_004f7d60(void);
extern void __cdecl FUN_004f8060(void);
extern void __cdecl FUN_004f8240(void);
extern void __cdecl FUN_005311f0(void);
extern void __cdecl FUN_0054f1d0(void);
extern void __cdecl FUN_0054f2a0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055b850(void);
extern void __cdecl FUN_0055b880(void);
extern void __cdecl FUN_0055be20(void);
extern void __cdecl FUN_0055c3e0(void);
extern void __cdecl FUN_0055c880(void);
extern void __cdecl FUN_0055ccf0(void);
extern void __cdecl FUN_0055d110(void);
extern void __cdecl FUN_0055db20(void);
extern void __cdecl FUN_005ad2e0(void);
extern void __cdecl FUN_006f1020(void);
extern void __cdecl FUN_006f1040(void);
extern void __cdecl FUN_006f1060(void);
extern void __cdecl FUN_006f10c0(void);
extern void __cdecl FUN_006f10d0(void);
extern void __cdecl FUN_006f10f0(void);
extern void __cdecl FUN_006f1100(void);
extern void __cdecl FUN_006f1130(void);
extern void __cdecl FUN_006f14a0(void);
extern void __cdecl FUN_006f1870(void);
extern void __cdecl FUN_006f18c0(void);
extern void __cdecl FUN_006f18f0(void);
extern void __cdecl FUN_006f1950(void);
extern void __cdecl FUN_006f1a70(void);
extern void __cdecl FUN_006f1b50(void);
extern void __cdecl FUN_006f1ff0(void);
extern void __cdecl FUN_006f22f0(void);
extern void __cdecl FUN_006f2310(void);
extern void __cdecl FUN_006f2320(void);
extern void __cdecl FUN_006f2400(void);
extern void __cdecl FUN_006f2fc0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db86(void);

__declspec(naked) void FUN_0054fdb0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x158
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    ecx, dword ptr [g_007f20d0]
        push    edi
        mov    dword ptr [ebp - 0xf0], 0x447a0000
        call    FUN_005ad2e0
        xor    edi, edi
        cmp    eax, edi
        je    L_ffd5
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [ebp - 0xe8]
        call    FUN_00419460
        mov    edx, dword ptr [ebx + 0xc4]
        mov    ecx, dword ptr [ebp - 0xcc]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x80
        mov    dword ptr [ebp - 0xf0], ecx
        push    eax
        lea    ecx, [ebp - 0x7c]
        call    FUN_004206b0
        lea    ecx, [ebp - 0x7c]
        lea    edx, [ebp - 0xe8]
        lea    eax, [ebp - 0xac]
        mov    dword ptr [ebp - 0x14], ecx
        mov    dword ptr [ebp - 0x24], edx
        mov    dword ptr [ebp - 0x10], eax
        mov    edx, dword ptr [ebp - 0x24]
        push    esi
        mov    esi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x10]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        lea    ecx, [ebp - 0xac]
        push    ecx
L_ffb9:
        mov    ecx, ebx
        call    FUN_004daa20
L_ffc0:
        mov    edx, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        call    dword ptr [edx + 0x48]
        mov    byte ptr [ebx + 0x338], 1
        jmp    L_1557
L_ffd5:
        mov    eax, dword ptr [ebx + 0x564]
        cmp    eax, 1
        jne    L_0368
        lea    eax, [ebx + 0x518]
        push    eax
        lea    ecx, [ebp - 0xac]
        call    FUN_00419f50
        lea    ecx, [ebx + 0x524]
        push    ecx
        lea    ecx, [ebp - 0xe8]
        call    FUN_00419f10
        lea    edx, [ebp - 0xe8]
        lea    eax, [ebp - 0xac]
        lea    ecx, [ebp - 0x7c]
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x10], ecx
        mov    edx, dword ptr [ebp - 0x24]
        push    esi
        mov    esi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x10]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        lea    ecx, [ebp - 0x7c]
        call    FUN_00420740
        lea    edx, [ebp - 0x7c]
        push    edx
        mov    ecx, ebx
        call    FUN_004daa20
        mov    eax, dword ptr [ebx + 0xc4]
        mov    ecx, dword ptr [eax + 0xd8]
        add    ecx, 0x80
        lea    edx, [ebp - 0x7c]
        lea    eax, [ebp - 0xac]
        mov    dword ptr [ebp - 0x14], ecx
        mov    dword ptr [ebp - 0x24], edx
        mov    dword ptr [ebp - 0x10], eax
        mov    edx, dword ptr [ebp - 0x24]
        push    esi
        mov    esi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x10]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        mov    ecx, dword ptr [ebp - 0x90]
        mov    dword ptr [ebp - 0xf0], ecx
        jmp    L_ffc0
L_0368:
        cmp    eax, 2
        jne    L_0560
        lea    eax, [ebx + 0x518]
        push    eax
        lea    ecx, [ebp - 0xe8]
        call    FUN_0040d030
        lea    ecx, [ebx + 0x524]
        push    ecx
        lea    ecx, [ebp - 0xe8]
        call    FUN_0041a070
        mov    eax, dword ptr [ebx + 0xc4]
        mov    ecx, dword ptr [eax + 0xd8]
        mov    edx, dword ptr [ebp - 0xcc]
        add    ecx, 0x80
        push    ecx
        lea    ecx, [ebp - 0x7c]
        mov    dword ptr [ebp - 0xf0], edx
        call    FUN_004206b0
        lea    edx, [ebp - 0x7c]
        lea    eax, [ebp - 0xe8]
        lea    ecx, [ebp - 0xac]
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x10], ecx
        mov    edx, dword ptr [ebp - 0x24]
        push    esi
        mov    esi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x10]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        lea    edx, [ebp - 0xac]
        push    edx
        jmp    L_1369
L_0560:
        cmp    eax, 4
        jne    L_0736
        mov    ecx, ebx
        call    FUN_0054f2a0
        mov    ecx, dword ptr [ebx + 0xd8]
        add    ecx, 0x20
        push    ecx
        lea    ecx, [ebp - 0xe8]
        call    FUN_00419460
        mov    edx, dword ptr [ebx + 0xc4]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x80
        lea    ecx, [ebp - 0xe8]
        lea    edx, [ebp - 0x7c]
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x24], ecx
        mov    dword ptr [ebp - 0x10], edx
        mov    edx, dword ptr [ebp - 0x24]
        push    esi
        mov    esi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x10]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        mov    eax, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 0xf0], eax
        jmp    L_1557
L_0736:
        cmp    eax, 3
        jne    L_112f
        cmp    dword ptr [ebx + 0x5b8], edi
        jne    L_0751
        mov    dword ptr [ebx + 0x5b8], 2
L_0751:
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [g_007dab40]
        xor    edx, ecx
        mov    esi, dword ptr [edx + 0x24]
        mov    dword ptr [ebp - 0xb8], edi
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        lea    ecx, [ebp - 0xb8]
        push    ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        xor    esi, 0x85739531
        call    FUN_005311f0
        test    al, al
        je    L_079a
        mov    edx, dword ptr [ebp - 0xb8]
        push    edx
        mov    ecx, esi
        call    FUN_006f1870
L_079a:
        mov    eax, dword ptr [ebx + 0x5b8]
        cmp    eax, 1
        je    L_1112
        mov    cl, byte ptr [ebx + 0x5ac]
        test    cl, cl
        je    L_1112
        cmp    eax, 2
        jne    L_1557
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    esi, dword ptr [ecx + 0x24]
        xor    esi, 0x85739531
        je    L_07f1
        mov    ecx, esi
        call    FUN_006f1ff0
        test    al, al
        je    L_07f1
        mov    ecx, esi
        call    FUN_006f22f0
        mov    ecx, esi
        call    FUN_006f2310
L_07f1:
        mov    edx, dword ptr [ebx + 0xc4]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [ebp - 0xac]
        mov    byte ptr [ebp - 1], 0
        call    FUN_00419460
        lea    ecx, [ebp - 0xac]
        push    ecx
        lea    ecx, [ebp - 0x7c]
        call    FUN_00419460
        lea    edx, [ebp - 0xac]
        push    edx
        lea    ecx, [ebp - 0x158]
        call    FUN_00419460
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x24]
        lea    edx, [ebp - 0x48]
        xor    ecx, 0x85739531
        push    edx
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 0x38], edi
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp - 0x48], edi
        mov    dword ptr [ebp - 0x4c], edi
        mov    dword ptr [ebp - 0xb4], edi
        call    FUN_006f18c0
        test    al, al
        je    L_08f0
        mov    eax, dword ptr [ebp - 0x48]
        mov    esi, dword ptr [eax + 0xd8]
        add    esi, 0x80
        mov    ecx, 0xc
        lea    edi, [ebp - 0xac]
        rep movsd
        lea    ecx, [ebp - 0x4c]
        push    ecx
        mov    ecx, dword ptr [ebp - 8]
        call    FUN_006f18f0
        test    al, al
        je    L_08bb
        mov    eax, dword ptr [ebp - 0x4c]
        mov    esi, dword ptr [eax + 0xd8]
        add    esi, 0x80
        mov    ecx, 0xc
        lea    edi, [ebp - 0x7c]
        mov    dword ptr [ebp - 0x38], eax
        rep movsd
        mov    byte ptr [ebp - 1], 1
L_08bb:
        mov    ecx, dword ptr [ebp - 8]
        lea    edx, [ebp - 0xb4]
        push    edx
        call    FUN_006f1950
        test    al, al
        je    L_08f0
        mov    eax, dword ptr [ebp - 0xb4]
        mov    esi, dword ptr [eax + 0xd8]
        add    esi, 0x80
        mov    ecx, 0xc
        lea    edi, [ebp - 0x128]
        mov    dword ptr [ebp - 0xc], eax
        rep movsd
L_08f0:
        mov    esi, dword ptr [ebp - 8]
        mov    ecx, esi
        call    FUN_006f2320
        test    al, al
        je    L_0985
        mov    al, byte ptr [ebx + 0x5d4]
        test    al, al
        jne    L_0921
        mov    ecx, ebx
        mov    byte ptr [ebx + 0x5d4], 1
        mov    byte ptr [ebx + 0x5d6], 0
        call    FUN_0055b850
L_0921:
        mov    al, byte ptr [ebx + 0x5d5]
        test    al, al
        jne    L_0975
        mov    eax, dword ptr [ebp - 0xc]
        test    eax, eax
        je    L_096b
        mov    eax, dword ptr [eax + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_096b
        sub    esp, 0x30
        lea    edx, [ebp - 0x128]
        mov    ecx, esp
        push    edx
        call    FUN_00419460
        sub    esp, 0x30
        lea    eax, [ebp - 0xac]
        mov    ecx, esp
        push    eax
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055d110
        mov    byte ptr [ebx + 0x5d5], al
L_096b:
        mov    al, byte ptr [ebx + 0x5d5]
        test    al, al
        je    L_0993
L_0975:
        mov    ecx, ebx
        call    FUN_0055b850
        mov    ecx, esi
        call    FUN_006f2400
        jmp    L_0993
L_0985:
        mov    byte ptr [ebx + 0x5d4], 0
        mov    byte ptr [ebx + 0x5d5], 0
L_0993:
        mov    al, byte ptr [ebp - 1]
        test    al, al
        je    L_10ca
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        lea    edx, [ebp - 0x7c]
        push    edx
        lea    eax, [ebp - 0xac]
        push    eax
        call    FUN_0041a280
        add    esp, 0xc
        test    al, al
        jne    L_10ca
        fld    dword ptr [ebp - 0x70]
        mov    ecx, dword ptr [ebp - 0xa0]
        fsub    dword ptr [ebp - 0xa0]
        mov    edx, dword ptr [ebp - 0x90]
        fld    dword ptr [ebp - 0x60]
        mov    eax, dword ptr [ebp - 0x80]
        fsub    dword ptr [ebp - 0x90]
        mov    dword ptr [ebp - 0x44], ecx
        fld    dword ptr [ebp - 0x50]
        mov    ecx, dword ptr [ebp - 0x70]
        fsub    dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 0x40], edx
        mov    edx, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 0x20], ecx
        fst    dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x4c]
        fld    st(0)
        mov    dword ptr [ebp - 0x1c], edx
        fmul st(0), st(1)
        mov    edx, dword ptr [ebp - 0x48]
        fld    st(2)
        push    ecx
        fmul st(0), st(3)
        mov    dword ptr [ebp - 0x3c], eax
        mov    eax, dword ptr [ebp - 0x50]
        push    edx
        faddp st(1), st(0)
        mov    ecx, esi
        fld    st(3)
        mov    dword ptr [ebp - 0x18], eax
        fmul st(0), st(4)
        faddp st(1), st(0)
        fsqrt    
        fstp    dword ptr [ebp - 0x14]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_006f1a70
        mov    byte ptr [ebp - 0x10], al
        lea    eax, [ebp - 0xb0]
        push    eax
        mov    ecx, esi
        mov    dword ptr [ebp - 0xb0], 0
        call    FUN_006f1b50
        test    al, al
        je    L_0a96
        mov    ecx, dword ptr [ebp - 0xb0]
        mov    esi, dword ptr [ecx + 0xd8]
        add    esi, 0x80
        mov    ecx, 0xc
        lea    edi, [ebp - 0xe8]
        rep movsd
        mov    edx, dword ptr [ebp - 0xdc]
        mov    eax, dword ptr [ebp - 0xcc]
        mov    ecx, dword ptr [ebp - 0xbc]
        mov    esi, dword ptr [ebp - 8]
        mov    dword ptr [ebx + 0x5fc], edx
        mov    dword ptr [ebx + 0x600], eax
        mov    dword ptr [ebx + 0x604], ecx
        jmp    L_0ab1
L_0a96:
        mov    edx, dword ptr [ebp - 0x20]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebx + 0x5fc], edx
        mov    dword ptr [ebx + 0x600], eax
        mov    dword ptr [ebx + 0x604], ecx
L_0ab1:
        mov    ecx, esi
        call    FUN_006f2320
        test    al, al
        jne    L_1106
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    esi, dword ptr [eax + 0x28]
        lea    ecx, [ebp - 1]
        xor    esi, 0x85739531
        push    ecx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x34], esi
        call    FUN_006f1100
        mov    edi, eax
        mov    ecx, esi
        mov    dword ptr [ebp - 0x24], edi
        call    FUN_006f10c0
        fstp    qword ptr [ebp - 0x2c]
        cmp    edi, 3
        jl    L_0b92
        cmp    edi, 5
        jg    L_0b92
        mov    al, byte ptr [ebp - 0x10]
        test    al, al
        mov    al, byte ptr [ebp - 1]
        jne    L_0bad
        test    al, al
        jne    L_0bb1
        push    0x3ff00000
        push    0
        mov    ecx, esi
        call    FUN_006f10d0
        push    0x3ff80000
        push    0
        mov    ecx, esi
        call    FUN_006f1060
        mov    ecx, esi
        call    FUN_006f10c0
        fstp    qword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 8]
        lea    edx, [ebp - 0xf8]
        push    edx
        call    FUN_006f1b50
        test    al, al
        je    L_0b92
        mov    eax, dword ptr [g_007b220c]
        push    eax
        lea    edi, [ebx + 0x608]
        push    0x7b8d88
        push    edi
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_0b8f
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [edi + 4]
        mov    eax, dword ptr [edi + 8]
        mov    dword ptr [ebx + 0x5fc], ecx
        mov    dword ptr [ebx + 0x600], edx
        mov    dword ptr [ebx + 0x604], eax
L_0b8f:
        mov    edi, dword ptr [ebp - 0x24]
L_0b92:
        cmp    edi, 0xa
        mov    dword ptr [ebp - 0xc], 0
        ja    L_10af
        jmp    dword ptr [edi*4 + 0x551844]
        push    4
        jmp    L_0bdb
L_0bad:
        test    al, al
        je    L_0b92
L_0bb1:
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [ebp - 0x18]
        mov    dword ptr [ebx + 0x5fc], ecx
        mov    ecx, esi
        mov    dword ptr [ebx + 0x600], edx
        mov    dword ptr [ebx + 0x604], eax
        call    FUN_006f10f0
        jmp    L_0b92
        push    5
        jmp    L_0bdb
        push    6
L_0bdb:
        sub    esp, 0x30
        lea    edx, [ebp - 0x7c]
        mov    ecx, esp
        push    edx
        call    FUN_004f3f40
        sub    esp, 0x30
        lea    eax, [ebp - 0xac]
        mov    ecx, esp
        push    eax
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055c880
        jmp    L_10a8
        fld    qword ptr [ebp - 0x2c]
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 1
        je    L_0c5e
        push    4
        sub    esp, 0x30
        lea    edx, [ebp - 0x7c]
        mov    ecx, esp
        push    edx
        call    FUN_004f3f40
        sub    esp, 0x30
        lea    eax, [ebp - 0xac]
        mov    ecx, esp
        push    eax
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055be20
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [ebp - 0x18]
        mov    dword ptr [ebx + 0x608], ecx
        mov    dword ptr [ebx + 0x60c], edx
        mov    dword ptr [ebx + 0x610], eax
        jmp    L_10a8
L_0c5e:
        lea    ecx, [ebp - 0xc]
        push    ecx
        mov    ecx, dword ptr [ebp - 8]
        call    FUN_006f2fc0
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ecx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_0c96
        mov    eax, dword ptr [ebp - 0xc]
        test    eax, eax
        je    L_0c96
        cmp    eax, ecx
        jne    L_0c96
        mov    ecx, ebx
        call    FUN_0055b850
        mov    ecx, esi
        call    FUN_006f1020
        jmp    L_10af
L_0c96:
        fld    qword ptr [g_0076d968]
        fsub    qword ptr [ebp - 0x2c]
        fst    qword ptr [ebp - 0x2c]
        fcomp    qword ptr [g_0076d588]
        fnstsw  ax
        test    ah, 1
        je    L_0cc1
        fld    qword ptr [ebp - 0x2c]
        fadd    st(0), st(0)
        fld    qword ptr [g_0077d0e0]
        call    FUN_0075db86
        jmp    L_0cdd
L_0cc1:
        fld    qword ptr [g_0076d968]
        fsub    qword ptr [ebp - 0x2c]
        fadd    st(0), st(0)
        fld    qword ptr [g_0077d0e0]
        call    FUN_0075db86
        fsubr    qword ptr [g_0077b640]
L_0cdd:
        fmul    qword ptr [g_0076d588]
        push    4
        fld    dword ptr [ebp - 0x20]
        fsub    dword ptr [ebx + 0x5fc]
        fmul st(0), st(1)
        fadd    dword ptr [ebx + 0x5fc]
        fstp    dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp - 0x30]
        fld    dword ptr [ebp - 0x1c]
        mov    edx, eax
        fsub    dword ptr [ebx + 0x600]
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebx + 0x608], edx
        fmul st(0), st(1)
        fadd    dword ptr [ebx + 0x600]
        fstp    dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 0x2c]
        fld    dword ptr [ebp - 0x18]
        mov    eax, ecx
        fsub    dword ptr [ebx + 0x604]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebx + 0x60c], eax
        fmulp st(1), st(0)
        fadd    dword ptr [ebx + 0x604]
        fst    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebx + 0x610]
        jmp    L_0f86
        fld    qword ptr [ebp - 0x2c]
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 1
        je    L_0d5f
        push    5
        jmp    L_0e5b
L_0d5f:
        mov    ecx, dword ptr [ebp - 8]
        lea    eax, [ebp - 0xc]
        push    eax
        call    FUN_006f2fc0
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ecx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_0d97
        mov    eax, dword ptr [ebp - 0xc]
        test    eax, eax
        je    L_0d97
        cmp    eax, ecx
        jne    L_0d97
        mov    ecx, ebx
        call    FUN_0055b850
        mov    ecx, esi
        call    FUN_006f1020
        jmp    L_10af
L_0d97:
        fld    qword ptr [g_0076d968]
        fsub    qword ptr [ebp - 0x2c]
        fst    qword ptr [ebp - 0x2c]
        fcomp    qword ptr [g_0076d588]
        fnstsw  ax
        test    ah, 1
        je    L_0dc2
        fld    qword ptr [ebp - 0x2c]
        fadd    st(0), st(0)
        fld    qword ptr [g_0077d0e0]
        call    FUN_0075db86
        jmp    L_0dde
L_0dc2:
        fld    qword ptr [g_0076d968]
        fsub    qword ptr [ebp - 0x2c]
        fadd    st(0), st(0)
        fld    qword ptr [g_0077d0e0]
        call    FUN_0075db86
        fsubr    qword ptr [g_0077b640]
L_0dde:
        fmul    qword ptr [g_0076d588]
        push    5
        fld    dword ptr [ebp - 0x20]
        fsub    dword ptr [ebx + 0x5fc]
        fmul st(0), st(1)
        fadd    dword ptr [ebx + 0x5fc]
        fstp    dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp - 0x30]
        fld    dword ptr [ebp - 0x1c]
        mov    edx, eax
        fsub    dword ptr [ebx + 0x600]
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebx + 0x608], edx
        fmul st(0), st(1)
        fadd    dword ptr [ebx + 0x600]
        fstp    dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 0x2c]
        fld    dword ptr [ebp - 0x18]
        mov    eax, ecx
        fsub    dword ptr [ebx + 0x604]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebx + 0x60c], eax
        fmulp st(1), st(0)
        fadd    dword ptr [ebx + 0x604]
        fst    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebx + 0x610]
        jmp    L_0f86
        fld    qword ptr [ebp - 0x2c]
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 1
        je    L_0ea1
        push    6
L_0e5b:
        sub    esp, 0x30
        lea    eax, [ebp - 0x7c]
        mov    ecx, esp
        push    eax
        call    FUN_004f3f40
        sub    esp, 0x30
        lea    edx, [ebp - 0xac]
        mov    ecx, esp
        push    edx
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055be20
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebx + 0x608], eax
        mov    dword ptr [ebx + 0x60c], ecx
        mov    dword ptr [ebx + 0x610], edx
        jmp    L_10a8
L_0ea1:
        mov    ecx, dword ptr [ebp - 8]
        lea    eax, [ebp - 0xc]
        push    eax
        call    FUN_006f2fc0
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ecx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_0ed9
        mov    eax, dword ptr [ebp - 0xc]
        test    eax, eax
        je    L_0ed9
        cmp    eax, ecx
        jne    L_0ed9
        mov    ecx, ebx
        call    FUN_0055b850
        mov    ecx, esi
        call    FUN_006f1020
        jmp    L_10af
L_0ed9:
        fld    qword ptr [g_0076d968]
        fsub    qword ptr [ebp - 0x2c]
        fst    qword ptr [ebp - 0x2c]
        fcomp    qword ptr [g_0076d588]
        fnstsw  ax
        test    ah, 1
        je    L_0f04
        fld    qword ptr [ebp - 0x2c]
        fadd    st(0), st(0)
        fld    qword ptr [g_0077d0e0]
        call    FUN_0075db86
        jmp    L_0f20
L_0f04:
        fld    qword ptr [g_0076d968]
        fsub    qword ptr [ebp - 0x2c]
        fadd    st(0), st(0)
        fld    qword ptr [g_0077d0e0]
        call    FUN_0075db86
        fsubr    qword ptr [g_0077b640]
L_0f20:
        fmul    qword ptr [g_0076d588]
        push    6
        fld    dword ptr [ebp - 0x20]
        fsub    dword ptr [ebx + 0x5fc]
        fmul st(0), st(1)
        fadd    dword ptr [ebx + 0x5fc]
        fstp    dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp - 0x30]
        fld    dword ptr [ebp - 0x1c]
        mov    edx, eax
        fsub    dword ptr [ebx + 0x600]
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebx + 0x608], edx
        fmul st(0), st(1)
        fadd    dword ptr [ebx + 0x600]
        fstp    dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 0x2c]
        fld    dword ptr [ebp - 0x18]
        mov    eax, ecx
        fsub    dword ptr [ebx + 0x604]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebx + 0x60c], eax
        fmulp st(1), st(0)
        fadd    dword ptr [ebx + 0x604]
        fst    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebx + 0x610]
L_0f86:
        sub    esp, 0xc
        lea    edx, [ebp - 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        sub    esp, 0xc
        lea    eax, [ebp - 0x44]
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        sub    esp, 0x30
        lea    edx, [ebp - 0xac]
        mov    ecx, esp
        push    edx
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055b880
        jmp    L_10a8
        push    4
        sub    esp, 0x30
        lea    eax, [ebp - 0xac]
        mov    ecx, esp
        push    eax
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055ccf0
        jmp    L_10af
        push    5
        sub    esp, 0x30
        lea    edx, [ebp - 0xac]
        mov    ecx, esp
        push    edx
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055ccf0
        jmp    L_10af
        push    6
        sub    esp, 0x30
        lea    eax, [ebp - 0xac]
        mov    ecx, esp
        push    eax
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055ccf0
        jmp    L_10af
        mov    ecx, dword ptr [ebp - 0x14]
        push    ecx
        mov    ecx, esi
        call    FUN_006f14a0
        test    al, al
        je    L_105e
        sub    esp, 0x30
        mov    edi, esp
        sub    esp, 0x30
        mov    ecx, 0xc
        lea    esi, [ebp - 0x7c]
        rep movsd
        lea    edx, [ebp - 0xac]
        mov    ecx, esp
        push    edx
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055c3e0
        mov    ecx, ebx
        call    FUN_0055b850
        mov    esi, dword ptr [ebp - 0x34]
        jmp    L_10af
L_105e:
        push    5
        sub    esp, 0x30
        lea    eax, [ebp - 0x7c]
        mov    ecx, esp
        push    eax
        call    FUN_004f3f40
        sub    esp, 0x30
        lea    edx, [ebp - 0xac]
        mov    ecx, esp
        push    edx
        call    FUN_004f3f40
        mov    ecx, ebx
        call    FUN_0055c880
        jmp    L_10a8
        sub    esp, 0xc
        mov    eax, esp
        mov    ecx, ebx
        mov    dword ptr [eax], 0
        mov    dword ptr [eax + 4], 0x447a0000
        mov    dword ptr [eax + 8], 0
        call    FUN_0055db20
L_10a8:
        mov    ecx, ebx
        call    FUN_0055b850
L_10af:
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x10]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_006f1130
        mov    ecx, ebx
        call    FUN_0054f1d0
        jmp    L_1555
L_10ca:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x28]
        xor    ecx, 0x85739531
        call    FUN_006f1040
        sub    esp, 0xc
        mov    eax, esp
        mov    ecx, ebx
        mov    dword ptr [eax], 0
        mov    dword ptr [eax + 4], 0x447a0000
        mov    dword ptr [eax + 8], 0
        call    FUN_0055db20
L_1106:
        mov    ecx, ebx
        call    FUN_0054f1d0
        jmp    L_1555
L_1112:
        sub    esp, 0xc
        mov    eax, esp
        mov    ecx, ebx
        mov    dword ptr [eax], edi
        mov    dword ptr [eax + 4], 0x447a0000
        mov    dword ptr [eax + 8], edi
        call    FUN_0055db20
        jmp    L_1557
L_112f:
        cmp    eax, 7
        je    L_ffc0
        cmp    eax, 5
        jne    L_1344
        mov    eax, dword ptr [g_007b8ce8]
        mov    ecx, dword ptr [g_007b8cf0]
        mov    edx, dword ptr [g_0077b988]
        mov    dword ptr [ebp - 0x44], eax
        mov    eax, dword ptr [ebx + 0x518]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    ecx, dword ptr [ebx + 0x51c]
        mov    dword ptr [ebp - 0x70], eax
        mov    dword ptr [ebp - 0x40], edx
        mov    edx, dword ptr [ebx + 0x520]
        lea    eax, [ebp - 0x44]
        mov    dword ptr [ebp - 0x60], ecx
        push    eax
        lea    ecx, [ebp - 0x7c]
        mov    dword ptr [ebp - 0x50], edx
        call    FUN_0041a070
        mov    ecx, dword ptr [ebx + 0xc4]
        mov    edx, dword ptr [ecx + 0xd8]
        add    edx, 0x80
        push    edx
        lea    ecx, [ebp - 0xe8]
        call    FUN_004206b0
        lea    eax, [ebp - 0xe8]
        lea    ecx, [ebp - 0x7c]
        lea    edx, [ebp - 0xac]
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x14], ecx
        mov    dword ptr [ebp - 0x34], edx
        mov    edx, dword ptr [ebp - 0x14]
        push    esi
        mov    esi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x34]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        lea    eax, [ebp - 0xac]
        push    eax
        jmp    L_ffb9
L_1344:
        cmp    eax, edi
        jne    L_1557
        mov    al, byte ptr [ebx + 0x338]
        test    al, al
        je    L_1557
        mov    eax, dword ptr [ebx + 0x58c]
        cmp    eax, edi
        jne    L_1385
        push    0x7b9460
L_1369:
        mov    ecx, ebx
        call    FUN_004daa20
        mov    eax, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        call    dword ptr [eax + 0x48]
        mov    byte ptr [ebx + 0x338], 1
        jmp    L_1557
L_1385:
        mov    ecx, dword ptr [ebx + 0xc4]
        mov    edx, dword ptr [ecx + 0xd8]
        mov    edi, dword ptr [eax + 0xd8]
        add    edx, 0x80
        add    edi, 0x80
        push    edx
        lea    ecx, [ebp - 0xe8]
        mov    dword ptr [ebp - 0x14], edi
        call    FUN_004206b0
        lea    eax, [ebp - 0xe8]
        lea    ecx, [ebp - 0x7c]
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x34], ecx
        mov    edx, dword ptr [ebp - 0x14]
        push    esi
        mov    esi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x34]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        lea    edx, [ebp - 0x7c]
        push    edx
        mov    ecx, ebx
        call    FUN_004daa20
        mov    eax, dword ptr [edi + 0x1c]
        mov    dword ptr [ebp - 0xf0], eax
L_1555:
        xor    edi, edi
L_1557:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x1c]
        xor    eax, 0x85739531
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        fld    dword ptr [ebp - 0xf0]
        fcomp    dword ptr [eax + 0x34]
        fnstsw  ax
        test    ah, 0x41
        je    L_15bd
        cmp    dword ptr [ebx + 0x324], 1
        je    L_182d
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x20]
        xor    ecx, 0x85739531
        call    FUN_004f8240
        mov    dword ptr [ebx + 0x324], 1
        jmp    L_182d
L_15bd:
        mov    esi, dword ptr [ebx + 0x324]
        cmp    esi, edi
        jne    L_15d5
        mov    al, byte ptr [ebx + 0x32c]
        test    al, al
        je    L_182d
L_15d5:
        cmp    esi, 2
        jne    L_15e8
        mov    al, byte ptr [ebx + 0x32c]
        test    al, al
        jne    L_182d
L_15e8:
        cmp    esi, 1
        jne    L_164a
        mov    al, byte ptr [ebx + 0x32c]
        test    al, al
        je    L_1621
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x20]
        xor    ecx, 0x85739531
        mov    dword ptr [ebx + 0x324], 2
        call    FUN_004f8060
        jmp    L_182d
L_1621:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        mov    dword ptr [ebx + 0x324], edi
        call    FUN_004f7a60
        jmp    L_182d
L_164a:
        push    edi
        call    FUN_00707e70
        fstp    dword ptr [ebp - 0xc]
        mov    al, byte ptr [ebx + 0x32c]
        test    al, al
        je    L_1745
        cmp    esi, edi
        mov    dword ptr [ebp - 8], 0x40000000
        jne    L_1687
        fld    dword ptr [ebp - 0xc]
        mov    dword ptr [ebx + 0x324], 3
        fadd    dword ptr [g_0076d5f0]
        fstp    dword ptr [ebx + 0x328]
        jmp    L_16ef
L_1687:
        cmp    esi, 4
        jne    L_16b3
        fld    dword ptr [ebx + 0x328]
        mov    dword ptr [ebx + 0x324], 3
        fsub    dword ptr [ebp - 0xc]
        fsubr    dword ptr [g_0076d5f0]
        fst    dword ptr [ebp - 8]
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebx + 0x328]
        jmp    L_16bf
L_16b3:
        fld    dword ptr [ebx + 0x328]
        fsub    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 8]
L_16bf:
        fld    dword ptr [ebp - 8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_16d8
        mov    dword ptr [ebp - 8], 0
        jmp    L_16ef
L_16d8:
        fld    dword ptr [ebp - 8]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_16ef
        mov    dword ptr [ebp - 8], 0x40000000
L_16ef:
        fld    dword ptr [g_0076d5f0]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        fsub    dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x20]
        fmul    dword ptr [g_0076d070]
        xor    ecx, 0x85739531
        fstp    dword ptr [esp]
        call    FUN_004f7d60
        fld    dword ptr [ebp - 8]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_182d
        mov    dword ptr [ebx + 0x324], 2
        jmp    L_182d
L_1745:
        cmp    esi, 2
        fld    dword ptr [g_0076d5f0]
        jne    L_176b
        fld    dword ptr [ebp - 0xc]
        mov    dword ptr [ebx + 0x324], 4
        fadd    dword ptr [g_0076d5f0]
        fstp    dword ptr [ebx + 0x328]
        jmp    L_17cd
L_176b:
        cmp    esi, 3
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jne    L_1798
        fld    dword ptr [ebx + 0x328]
        mov    dword ptr [ebx + 0x324], 4
        fsub    dword ptr [ebp - 0xc]
        fsubr    dword ptr [g_0076d5f0]
        fld    st(0)
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebx + 0x328]
        jmp    L_17a1
L_1798:
        fld    dword ptr [ebx + 0x328]
        fsub    dword ptr [ebp - 0xc]
L_17a1:
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_17b8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_17cd
L_17b8:
        fcom    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_17cd
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d5f0]
L_17cd:
        fld    st(0)
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_1805
        mov    eax, dword ptr [g_007dab44]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x20]
        xor    ecx, 0x85739531
        mov    dword ptr [ebx + 0x324], edi
        call    FUN_004f7a60
        jmp    L_182d
L_1805:
        mov    edx, dword ptr [g_007dab44]
        fmul    dword ptr [g_0076d070]
        mov    eax, dword ptr [edx]
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        fstp    dword ptr [esp]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        call    FUN_004f7d60
L_182d:
        mov    edx, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        call    dword ptr [edx + 0x48]
        pop    edi
        pop    esi
        mov    byte ptr [ebx + 0x338], 1
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
        // jump-table data @ 0x00551844 (16 relocated pointers)
        __emit 0xA9
        __emit 0x0B
        __emit 0x55
        __emit 0x00
        __emit 0xD5
        __emit 0x0B
        __emit 0x55
        __emit 0x00
        __emit 0xD9
        __emit 0x0B
        __emit 0x55
        __emit 0x00
        __emit 0x06
        __emit 0x0C
        __emit 0x55
        __emit 0x00
        __emit 0x48
        __emit 0x0D
        __emit 0x55
        __emit 0x00
        __emit 0x49
        __emit 0x0E
        __emit 0x55
        __emit 0x00
        __emit 0xBF
        __emit 0x0F
        __emit 0x55
        __emit 0x00
        __emit 0xDE
        __emit 0x0F
        __emit 0x55
        __emit 0x00
        __emit 0xFD
        __emit 0x0F
        __emit 0x55
        __emit 0x00
        __emit 0x1C
        __emit 0x10
        __emit 0x55
        __emit 0x00
        __emit 0x88
        __emit 0x10
        __emit 0x55
        __emit 0x00
        __emit 0x8B
        __emit 0xC1
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x04
        __emit 0x8B
        __emit 0x11
        __emit 0x89
        __emit 0x10
        __emit 0x8B
        __emit 0x51
        __emit 0x04
        __emit 0x8B
        __emit 0x49
        __emit 0x08
        __emit 0x89
        __emit 0x50
        __emit 0x04
        __emit 0x89
    }
}
