/*
 * FUN_0048ca40 (extent 0x48ca40-0x48dd16) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076de10;
extern float  g_0076fe74;
extern float  g_0076fe78;
extern int    g_007b2220;
extern int    g_007b2228;
extern char   g_007b227c;
extern int    g_007b2280;
extern int    g_007b94a0;
extern int    g_007b955c;
extern int    g_007b959c;
extern int    g_007b9678;
extern int    g_007b967c;
extern int    g_007b9680;
extern int    g_007b9684;
extern int    g_007b9688;
extern int    g_007b968c;
extern int    g_007b9690;
extern int    g_007b9694;
extern int    g_007b9698;
extern int    g_007da784;
extern int    g_007da790;
extern char   g_007da838;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419f50(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_00422fe0(void);
extern void __cdecl FUN_00423110(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_004880d0(void);
extern void __cdecl FUN_0048aec0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0048ca40(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x104
        mov    eax, dword ptr [g_007b959c]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov    dword ptr [ebp - 0x18], ecx
        call    FUN_006f4950
        mov    ebx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebx]
        mov    eax, dword ptr [g_007b9678]
        mov    ecx, 0x10
        mov    esi, 0x7b8da8
        lea    edi, [ebp - 0xc0]
        rep movsd
        mov    ecx, dword ptr [edx + 4]
        push    eax
        mov    dword ptr [ebp - 0x24], edx
        call    FUN_00415230
        test    al, al
        je    L_d572
        mov    eax, dword ptr [g_007b967c]
        test    eax, eax
        je    L_dd08
        mov    eax, dword ptr [g_007b2228]
        test    eax, eax
        je    L_dd08
        mov    ecx, dword ptr [g_007b9694]
        cmp    ecx, dword ptr [g_007b2280]
        jge    L_dd08
        mov    edi, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebx + 0x20]
        lea    edx, [edi + 0xb4]
        lea    ecx, [ebp - 0xc0]
        mov    dword ptr [ebp - 0x38], edx
        mov    dword ptr [ebp - 0x54], eax
        mov    dword ptr [ebp - 8], ecx
        mov    edx, dword ptr [ebp - 0x54]
        push    esi
        mov    esi, dword ptr [ebp - 0x38]
        mov    eax, dword ptr [ebp - 8]
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
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop    esi
        mov    edx, dword ptr [ebx + 0xc]
        mov    esi, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx + 0x14]
        lea    eax, [ebx + 4]
        or    ecx, 0xf
        mov    dword ptr [eax + 0x10], ecx
        or    edx, 0x180000
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [eax + 4]
        and    esi, 0xffe7ffff
        mov    ecx, esi
        and    ecx, 0xffff3fff
        and    edx, 0xfffffff1
        or    ecx, 0x10000
        mov    dword ptr [eax], esi
        or    edx, 1
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax], ecx
        or    dword ptr [eax + 8], 0x1c000
        mov    esi, dword ptr [ebx + 0x10]
        mov    ecx, dword ptr [g_007b967c]
        push    0
        push    eax
        and    esi, 0xfffe3fff
        push    1
        mov    dword ptr [ebp - 0x64], eax
        mov    dword ptr [ebx + 0x10], esi
        call    FUN_004880d0
        mov    esi, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [edi + 0xf8]
        mov    edx, dword ptr [esi + 0x20]
        mov    ecx, dword ptr [esi + 0x24]
        mov    ebx, dword ptr [ebx + 0x24]
        mov    dword ptr [ebp - 0x30], edx
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [edi + 0xf4]
        mov    dword ptr [ebp - 0x2c], eax
        lea    eax, [edi + 0xf4]
        mov    dword ptr [ebp - 0x28], ecx
        fstp    dword ptr [ebp - 0x14]
        push    ebx
        fld    dword ptr [ebp - 0x28]
        push    eax
        fsub    dword ptr [eax + 8]
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [ebp - 0x60], eax
        mov    dword ptr [ebp - 0x10], 0
        fstp    dword ptr [ebp - 0xc]
        call    FUN_0041c7d0
        fld    dword ptr [esi + 0x28]
        fadd    dword ptr [esi + 0x30]
        fld    st(0)
        fmul st(0), st(1)
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp st(1), st(0)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        je    L_dd08
        lea    eax, [edi + 0x100]
        push    ebx
        push    eax
        lea    ecx, [ebp - 0x14]
        mov    dword ptr [ebp - 0x3c], eax
        call    FUN_0041c680
        mov    al, byte ptr [g_007b227c]
        test    al, al
        mov    dword ptr [ebp - 4], 0x7b9668
        jne    L_cdd9
        mov    dword ptr [ebp - 4], 0x7b9658
L_cdd9:
        fld    dword ptr [g_0076fe78]
        mov    esi, dword ptr [ebp - 4]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x20], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x20]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x20], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x20]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x20]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x20], ecx
        mov    edx, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ecx + 0x38]
        mov    dword ptr [g_007b94a0], edx
        xor    edx, edx
        test    eax, eax
        mov    dword ptr [ebp - 0x20], edx
        jbe    L_dd08
L_ced6:
        mov    esi, dword ptr [g_007b9694]
        cmp    esi, dword ptr [g_007b2280]
        jge    L_dd08
        xor    ebx, ebx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x1c], ebx
        jae    L_dd08
        shl    edx, 4
        mov    dword ptr [ebp - 0x38], edx
L_cefb:
        mov    eax, dword ptr [ecx + 0x34]
        fld    dword ptr [edx + eax]
        lea    edi, [edx + eax]
        fsub    dword ptr [ebp - 0x30]
        fstp    dword ptr [ebp - 0x14]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [ebp - 0x2c]
        fstp    dword ptr [ebp - 0x10]
        fld    dword ptr [edi + 8]
        mov    dword ptr [ebp - 0x10], 0
        fsub    dword ptr [ebp - 0x28]
        fstp    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp st(1), st(0)
        fstp    dword ptr [ebp - 4]
        fld    dword ptr [ecx + 0x30]
        fld    st(0)
        fmul st(0), st(1)
        fld    dword ptr [ebp - 4]
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        je    L_d217
        fld    dword ptr [g_0076d064]
        fld    dword ptr [ecx + 0x2c]
        fld    st(0)
        fmul st(0), st(1)
        fld    dword ptr [ebp - 4]
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        jne    L_cf80
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ebp - 4]
        fsqrt    
        fsub    dword ptr [ecx + 0x2c]
        fld    dword ptr [ecx + 0x30]
        fsub    dword ptr [ecx + 0x2c]
        fdivp st(1), st(0)
        fsubr    dword ptr [g_0076d064]
L_cf80:
        mov    al, byte ptr [g_007b227c]
        test    al, al
        mov    eax, 0x7b9668
        jne    L_cf93
        mov    eax, 0x7b9658
L_cf93:
        mov    edx, dword ptr [eax + 4]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x80], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x7c], edx
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [ebp - 0x78], ecx
        mov    ecx, dword ptr [g_007b967c]
        mov    dword ptr [ebp - 0x74], edx
        fstp    dword ptr [ebp - 0x74]
        mov    edx, dword ptr [ecx + 0x14]
        xor    eax, eax
        mov    al, byte ptr [edi + 0xd]
        lea    ecx, [ebp - 0x40]
        push    ecx
        mov    esi, dword ptr [edx + eax*4]
        xor    eax, eax
        lea    edx, [ebp - 0x50]
        mov    dword ptr [ebp - 0x50], eax
        mov    dword ptr [ebp - 0x58], eax
        mov    eax, dword ptr [esi]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x28]
        mov    eax, dword ptr [esi]
        lea    ecx, [ebp - 0x6c]
        push    ecx
        lea    edx, [ebp - 0x58]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x30]
        mov    eax, dword ptr [g_007b9698]
        mov    ecx, dword ptr [ebp - 0x40]
        mov    esi, dword ptr [g_007b2280]
        lea    edx, [eax + ecx]
        add    edx, ebx
        shl    esi, 8
        cmp    edx, esi
        jge    L_d236
        add    ecx, ebx
        cmp    ecx, 0x100
        jg    L_d23f
        push    edi
        lea    ecx, [ebp - 0xf0]
        call    FUN_00419f50
        cmp    byte ptr [edi + 0xc], 0xff
        jne    L_d050
        fld    dword ptr [ebp - 0x14]
        push    -1
        fchs    
        push    1
        fstp    dword ptr [ebp - 0x14]
        push    2
        fld    dword ptr [ebp - 0xc]
        lea    eax, [ebp - 0x14]
        fchs    
        push    eax
        lea    ecx, [ebp - 0xf0]
        fstp    dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x10], 0
        call    FUN_0041fde0
        jmp    L_d083
L_d050:
        xor    ecx, ecx
        mov    dword ptr [ebp - 0x48], 0
        mov    cl, byte ptr [edi + 0xc]
        lea    edx, [ebp - 0x4c]
        push    edx
        mov    dword ptr [ebp - 0x44], 0
        mov    dword ptr [ebp - 4], ecx
        fild    dword ptr [ebp - 4]
        lea    ecx, [ebp - 0xf0]
        fmul    dword ptr [g_0076fe74]
        fadd    st(0), st(0)
        fstp    dword ptr [ebp - 0x4c]
        call    FUN_0041a070
L_d083:
        mov    ecx, dword ptr [g_007b9698]
        mov    esi, dword ptr [g_007b9684]
        mov    esi, dword ptr [esi]
        lea    eax, [ecx + ebx]
        lea    edx, [eax + eax*2]
        lea    edx, [esi + edx*4]
        mov    dword ptr [ebp - 0x68], edx
        mov    edx, dword ptr [g_007b9688]
        mov    edx, dword ptr [edx]
        lea    edx, [edx + eax*8]
        mov    dword ptr [ebp - 0x5c], edx
        mov    edx, dword ptr [g_007b968c]
        mov    edi, dword ptr [edx]
        add    edi, ecx
        mov    ecx, dword ptr [g_007b9690]
        mov    edx, dword ptr [ecx]
        lea    edx, [edx + eax*4]
        lea    eax, [ebp - 0x80]
        add    edi, ebx
        mov    dword ptr [ebp - 4], eax
        fld    dword ptr [g_0076fe78]
        mov    esi, dword ptr [ebp - 4]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x70]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x70]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x54], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x70]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x70]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x54]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x54], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x70]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x70]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x54]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x54], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x70]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x70]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x54]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x54], ecx
        mov    eax, dword ptr [ebp - 0x40]
        xor    ebx, ebx
        test    eax, eax
        jle    L_d207
        xor    esi, esi
        mov    dword ptr [ebp - 4], edx
L_d1b7:
        mov    edx, dword ptr [ebp - 0x50]
        lea    ecx, [ebp - 0xf0]
        push    ecx
        mov    ecx, dword ptr [ebp - 0x68]
        lea    eax, [esi + edx]
        push    eax
        add    ecx, esi
        call    FUN_0041c7d0
        mov    edx, dword ptr [ebp - 0x58]
        mov    eax, dword ptr [ebp - 0x5c]
        lea    ecx, [edx + ebx*8]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + ebx*8], edx
        mov    dword ptr [eax + ebx*8 + 4], ecx
        mov    al, byte ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x54]
        mov    dl, bl
        add    dl, al
        mov    eax, dword ptr [ebp - 4]
        mov    byte ptr [ebx + edi], dl
        mov    dword ptr [eax], ecx
        add    eax, 4
        mov    dword ptr [ebp - 4], eax
        mov    eax, dword ptr [ebp - 0x40]
        inc    ebx
        add    esi, 0xc
        cmp    ebx, eax
        jl    L_d1b7
L_d207:
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp - 0x38]
        add    ecx, eax
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ebx, ecx
        mov    ecx, dword ptr [ebp - 0x24]
L_d217:
        mov    eax, dword ptr [ebp - 0x20]
        mov    esi, dword ptr [ecx + 0x38]
        inc    eax
        add    edx, 0x10
        cmp    eax, esi
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp - 0x38], edx
        jb    L_cefb
        mov    eax, dword ptr [g_007b9698]
        jmp    L_d23f
L_d236:
        mov    edx, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [edx + 0x38]
        mov    dword ptr [ebp - 0x20], ecx
L_d23f:
        test    ebx, ebx
        je    L_dd08
        mov    edx, dword ptr [g_007b9694]
        mov    ecx, edx
        inc    edx
        mov    dword ptr [g_007b9694], edx
        mov    edx, dword ptr [g_007b9680]
        mov    edx, dword ptr [edx]
        mov    esi, dword ptr [edx + ecx*4]
        mov    ecx, dword ptr [g_007b9684]
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [esi]
        lea    eax, [eax + eax*2]
        lea    eax, [ecx + eax*4]
        push    ebx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [g_007b9688]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007b9698]
        mov    edx, dword ptr [esi]
        lea    ecx, [ecx + eax*8]
        push    ebx
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x2c]
        mov    eax, dword ptr [g_007b968c]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007b9698]
        mov    edx, dword ptr [esi]
        add    ecx, eax
        push    ebx
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
        mov    eax, dword ptr [g_007b9690]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007b9698]
        mov    edx, dword ptr [esi]
        lea    ecx, [ecx + eax*4]
        push    ebx
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0xa4]
        fild    dword ptr [ebp - 0x1c]
        mov    edi, dword ptr [esi]
        push    0
        fmul    dword ptr [g_0076de10]
        call    FUN_0075db4a
        push    eax
        push    0
        mov    ecx, esi
        call    dword ptr [edi + 0xc]
        mov    edx, dword ptr [g_007b967c]
        mov    eax, dword ptr [edx + 0x14]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ecx]
        mov    edi, dword ptr [esi]
        push    0
        push    0
        call    dword ptr [edx + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edi + 0x14]
        mov    ecx, dword ptr [ebp - 0x64]
        mov    eax, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [g_007b9698]
        mov    edx, dword ptr [esi]
        add    eax, ebx
        push    0
        mov    ecx, esi
        mov    dword ptr [g_007b9698], eax
        call    dword ptr [edx + 0x18]
        mov    ecx, dword ptr [eax + 4]
        test    ch, 0x40
        jne    L_d508
        mov    al, byte ptr [g_007da838]
        test    al, al
        jne    L_d508
        mov    eax, dword ptr [g_007da790]
        cmp    eax, dword ptr [g_007b955c]
        jae    L_dd08
        mov    edx, dword ptr [g_007da784]
        lea    ecx, [eax + eax*2]
        shl    ecx, 4
        add    ecx, eax
        mov    eax, dword ptr [edx]
        lea    ebx, [eax + ecx*4]
        test    ebx, ebx
        mov    dword ptr [ebp - 0x68], ebx
        je    L_dd08
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        mov    dword ptr [ebx + 0xc0], 1
        mov    dword ptr [ebx], esi
        call    dword ptr [edx + 0x1c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebx + 4], ecx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [ebp - 0x60]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebx + 8], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ebx + 0x14], eax
        mov    eax, dword ptr [ebp - 0x3c]
        fld    dword ptr [eax + 8]
        mov    dword ptr [ebx + 0xc], ecx
        fld    dword ptr [eax + 4]
        mov    dword ptr [ebx + 0x10], edx
        fld    dword ptr [eax]
        lea    edi, [ebx + 0x28]
        fld    st(0)
        lea    esi, [ebp - 0xc0]
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fsqrt    
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [ebx + 0x18]
        fld    st(0)
        fmul    dword ptr [eax + 4]
        fstp    dword ptr [ebx + 0x1c]
        fmul    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0x30]
        mov    dword ptr [ebx + 0x24], ecx
        fstp    dword ptr [ebx + 0x20]
        mov    ecx, 0x10
        rep movsd
        mov    esi, dword ptr [eax + 0x24]
        lea    edi, [ebx + 0x68]
        mov    ecx, 0xc
        rep movsd
        mov    dword ptr [ebp - 0x5c], edx
        fld    dword ptr [g_0076fe78]
        mov    esi, dword ptr [ebp - 0x5c]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x34]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 8], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x34]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x34]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x34]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        mov    eax, dword ptr [ebp - 0x68]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp - 0x18]
        mov    dword ptr [eax + 0xbc], ecx
        mov    ecx, dword ptr [edx + 0x110]
        mov    dword ptr [eax + 0xb8], 0
        call    FUN_0048aec0
        jmp    L_d559
L_d508:
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebp + 8]
        mov    edi, dword ptr [esi]
        push    0
        push    eax
        push    0
        add    ecx, 0x114
        push    ecx
        push    ecx
        add    edx, 0x1c
        mov    ecx, esp
        push    edx
        call    FUN_00423e00
        lea    eax, [ebp - 0xc0]
        push    eax
        mov    ecx, esi
        call    dword ptr [edi + 0x64]
        test    eax, eax
        je    L_d559
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x44]
        test    eax, eax
        je    L_d559
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [eax + 0x110]
        mov    edx, dword ptr [ecx]
        push    0
        push    esi
        call    dword ptr [edx + 0x18]
L_d559:
        mov    eax, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [eax + 0x38]
        mov    edx, dword ptr [ebp - 0x20]
        cmp    edx, eax
        jae    L_dd08
        mov    ecx, dword ptr [ebp - 0x24]
        jmp    L_ced6
L_d572:
        mov    ecx, dword ptr [ebx + 0x2c]
        mov    eax, 8
        cmp    ecx, eax
        jle    L_d581
        mov    dword ptr [ebx + 0x2c], eax
L_d581:
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebx + 0x20]
        add    ecx, 0xb4
        lea    eax, [ebp - 0xc0]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    dword ptr [ebp - 0x60], edx
        mov    dword ptr [ebp - 0x34], eax
        mov    edx, dword ptr [ebp - 0x60]
        push    esi
        mov    esi, dword ptr [ebp - 0x3c]
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
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop    esi
        mov    ecx, dword ptr [ebp - 0x24]
        lea    eax, [ebx + 4]
        push    0
        push    eax
        push    1
        mov    dword ptr [ebp - 0x64], eax
        call    FUN_004880d0
        mov    edi, dword ptr [ebx + 0x24]
        mov    esi, dword ptr [ebp - 0x18]
        push    edi
        lea    ecx, [esi + 0xf4]
        push    ecx
        lea    ecx, [ebp - 0x4c]
        mov    dword ptr [ebp - 0x1c], 0
        call    FUN_0041c7d0
        push    edi
        add    esi, 0x100
        push    esi
        lea    ecx, [ebp - 0x30]
        call    FUN_0041c680
        fld    dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebx + 0x2c]
        test    eax, eax
        fld    dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x30]
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fld    dword ptr [ebp - 0x30]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x14]
        fld    dword ptr [ebp - 0x2c]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        fld    dword ptr [ebp - 0x28]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jle    L_d84a
        mov    esi, dword ptr [ebx + 0x28]
        mov    dword ptr [ebp - 8], eax
L_d821:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x18]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x1c]
        mov    edx, dword ptr [ebp - 0x1c]
        neg    eax
        sbb    eax, eax
        neg    eax
        add    edx, eax
        mov    eax, dword ptr [ebp - 8]
        add    esi, 4
        dec    eax
        mov    dword ptr [ebp - 0x1c], edx
        mov    dword ptr [ebp - 8], eax
        jne    L_d821
L_d84a:
        mov    eax, dword ptr [g_007b2220]
        test    eax, eax
        jne    L_d85a
        mov    dword ptr [ebp - 0x1c], 0
L_d85a:
        mov    eax, dword ptr [ebx + 0x30]
        test    eax, eax
        je    L_d955
        mov    dword ptr [ebp - 0x34], eax
        fld    dword ptr [g_0076fe78]
        mov    esi, dword ptr [ebp - 0x34]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x3c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 8], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x3c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x3c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x3c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp + 8]
        mov    dword ptr [g_007b94a0], ecx
L_d955:
        mov    edx, dword ptr [ebp - 0x24]
        mov    al, byte ptr [edx + 0x1c]
        test    al, al
        mov    dword ptr [ebp - 0x20], 0
        jbe    L_dd08
L_d96a:
        mov    eax, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [eax + 0x14]
        mov    edx, dword ptr [ebp - 0x20]
        mov    esi, dword ptr [ecx + edx*4]
        mov    eax, dword ptr [esi]
        xor    edi, edi
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax + 4]
        test    ch, 0x40
        jne    L_db7c
        mov    al, byte ptr [g_007da838]
        test    al, al
        jne    L_db7c
        mov    eax, dword ptr [g_007da790]
        cmp    eax, dword ptr [g_007b955c]
        jae    L_dd08
        mov    edx, dword ptr [g_007da784]
        lea    ecx, [eax + eax*2]
        shl    ecx, 4
        add    ecx, eax
        mov    eax, dword ptr [edx]
        lea    ebx, [eax + ecx*4]
        cmp    ebx, edi
        mov    dword ptr [ebp - 0x38], ebx
        je    L_dd08
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebx + 0xc0], edi
        mov    dword ptr [ebx], esi
        call    dword ptr [edx + 0x1c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebx + 4], ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebx + 8], edx
        mov    eax, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebx + 0xc], eax
        mov    ecx, dword ptr [ebp - 0x48]
        mov    dword ptr [ebx + 0x10], ecx
        mov    edx, dword ptr [ebp - 0x44]
        mov    dword ptr [ebx + 0x14], edx
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [ebx + 0x18], eax
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    dword ptr [ebx + 0x1c], ecx
        mov    edx, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [ebx + 0x24], ecx
        mov    dword ptr [ebx + 0x20], edx
        lea    edi, [ebx + 0x28]
        mov    ecx, 0x10
        lea    esi, [ebp - 0xc0]
        rep movsd
        mov    esi, dword ptr [eax + 0x24]
        lea    edi, [ebx + 0x68]
        mov    ecx, 0xc
        rep movsd
        mov    ecx, dword ptr [eax + 0x30]
        test    ecx, ecx
        je    L_db2f
        mov    dword ptr [ebp - 0x34], ecx
        fld    dword ptr [g_0076fe78]
        mov    esi, dword ptr [ebp - 0x34]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x3c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 8], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x3c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x3c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x3c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        mov    eax, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ebp - 8]
        mov    dword ptr [eax + 0xbc], edx
        mov    ebx, eax
        mov    eax, dword ptr [ebp + 8]
        jmp    L_db39
L_db2f:
        mov    dword ptr [ebx + 0xbc], 0xffffffff
L_db39:
        mov    ecx, dword ptr [eax + 0x2c]
        xor    edx, edx
        test    ecx, ecx
        mov    dword ptr [ebx + 0xb8], ecx
        jle    L_db66
        mov    eax, dword ptr [eax + 0x28]
        lea    ecx, [ebx + 0x98]
L_db51:
        mov    esi, dword ptr [eax]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [ebx + 0xb8]
        inc    edx
        add    eax, 4
        add    ecx, 4
        cmp    edx, esi
        jl    L_db51
L_db66:
        mov    ecx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ecx + 0x110]
        call    FUN_0048aec0
        mov    ebx, dword ptr [ebp + 8]
        jmp    L_dcf1
L_db7c:
        cmp    dword ptr [ebp - 0x1c], edi
        je    L_dba2
        mov    edx, dword ptr [ebp - 0x64]
        push    edx
        mov    edx, dword ptr [ebp - 0x18]
        lea    eax, [ebx + 0x1c]
        push    eax
        lea    ecx, [ebp - 0xc0]
        push    ecx
        add    edx, 0x114
        push    edx
        call    FUN_00422fe0
        add    esp, 0x10
L_dba2:
        mov    eax, dword ptr [esi]
        lea    ecx, [ebp - 0x14]
        push    ecx
        lea    edx, [ebp - 0x4c]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        test    eax, eax
        je    L_dcf1
        mov    ecx, dword ptr [ebx + 0x2c]
        mov    edx, dword ptr [ebx + 0x28]
        mov    eax, dword ptr [esi]
        push    3
        push    ecx
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x38]
        mov    eax, dword ptr [esi]
        lea    ecx, [ebp - 0x104]
        push    ecx
        mov    ecx, dword ptr [ebx + 0x24]
        lea    edx, [ebp - 0x4c]
        push    edx
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x80]
        mov    cl, byte ptr [ebx + 0x1c]
        test    cl, 0x3f
        lea    edx, [ebx + 0x1c]
        je    L_dc7b
        mov    ecx, dword ptr [esi]
        neg    al
        push    edi
        mov    edi, dword ptr [g_007b94a0]
        push    edi
        lea    edi, [ebp - 0x104]
        mov    dword ptr [ebp - 0x34], ecx
        sbb    eax, eax
        and    eax, edi
        push    eax
        mov    eax, dword ptr [ebp - 0x18]
        add    eax, 0x114
        push    eax
        push    ecx
        mov    ecx, esp
        push    edx
        call    FUN_00423e00
        mov    edx, dword ptr [ebp - 0x34]
        lea    ecx, [ebp - 0xc0]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x64]
        test    eax, eax
        je    L_dcd6
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x44]
        test    eax, eax
        je    L_dcd6
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        xor    edi, edi
        call    dword ptr [edx + 0x6c]
        test    eax, eax
        jle    L_dcd6
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [eax + 0x110]
        mov    dword ptr [ebp - 4], ecx
        jmp    L_dc66
L_dc63:
        mov    ecx, dword ptr [ebp - 4]
L_dc66:
        mov    edx, dword ptr [ecx]
        push    edi
        push    esi
        call    dword ptr [edx + 0x18]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        inc    edi
        call    dword ptr [eax + 0x6c]
        cmp    edi, eax
        jl    L_dc63
        jmp    L_dcd6
L_dc7b:
        mov    ecx, dword ptr [g_007b94a0]
        mov    edx, dword ptr [esi]
        neg    al
        push    edi
        push    ecx
        lea    ecx, [ebp - 0x104]
        sbb    eax, eax
        and    eax, ecx
        push    eax
        mov    eax, dword ptr [ebp - 0x18]
        add    eax, 0x114
        push    eax
        lea    ecx, [ebp - 0xc0]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x68]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x6c]
        test    eax, eax
        jle    L_dcd6
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [eax + 0x110]
        mov    dword ptr [ebp - 4], ecx
        jmp    L_dcc3
L_dcc0:
        mov    ecx, dword ptr [ebp - 4]
L_dcc3:
        mov    edx, dword ptr [ecx]
        push    edi
        push    esi
        call    dword ptr [edx + 0x18]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        inc    edi
        call    dword ptr [eax + 0x6c]
        cmp    edi, eax
        jl    L_dcc0
L_dcd6:
        mov    eax, dword ptr [ebp - 0x1c]
        test    eax, eax
        je    L_dcf1
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx + 0x110]
        push    0
        push    edx
        call    FUN_00423110
        add    esp, 8
L_dcf1:
        mov    edx, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x20]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + 0x1c]
        inc    eax
        mov    dword ptr [ebp - 0x20], eax
        cmp    eax, ecx
        jl    L_d96a
L_dd08:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
