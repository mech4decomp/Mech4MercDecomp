/*
 * FUN_006651d0 (815 B) — ABL object method: dispatches on a virtual state
 * query (vtable+0x110); builds transform/color objects, does FPU range
 * checks, and calls virtual methods (vtable+0x8/+0x4/+0xcc/+0x40/+0x6c/
 * +0x38/+0x34/+0x3c/+0xa0/+0x8c/+0xf8) plus helper thiscalls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a7510(int a, float b, float c, float d);
extern void __cdecl FUN_006a6400(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_0040c5d0(int a);
extern void __cdecl FUN_00664ae0(void *a, void *b, int c, int d, int e);
extern void __cdecl FUN_00419480(int a);
extern void __cdecl FUN_00428730(void *a);
extern void __cdecl FUN_0058ea70(void *a);
extern void __cdecl FUN_0040cc10(void *a, int b);
extern void __cdecl FUN_005d2900(int a, void *b);
extern void __cdecl FUN_0040cbe0(int a, void *b);
extern float __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040d560(void *a);

extern float g_795440;   /* 0x00795440 */
extern float g_77b63c;   /* 0x0077b63c */
extern float g_76d070;   /* 0x0076d070 */
extern float g_7b220c;   /* 0x007b220c */
extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_76d040;   /* 0x0076d040 */

__declspec(naked) void __cdecl FUN_006651d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x88
        push    esi
        mov     esi, dword ptr [ebp + 8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x110]
        cmp     al, 1
        jnz     L_6528e
        fld     dword ptr [g_795440]
        push    0x3f4ccccd
        fadd    dword ptr [g_77b63c]
        push    0x41400000
        lea     ecx, [ebp - 0x88]
        fstp    dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        push    0
        call    FUN_006a7510
        push    edi
        lea     ecx, [ebp + 0xc]
        push    ecx
        lea     edx, [ebp - 0x88]
        push    edx
        lea     eax, [ebp - 0x28]
        push    esi
        push    eax
        mov     dword ptr [ebp + 0xc], 0x795448
        call    FUN_006a6400
        add     esp, 0x14
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_0040c5d0
        mov     edx, dword ptr [esi]
        push    0
        push    1
        lea     eax, [ebp - 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        cmp     al, 1
        jnz     L_654f9
        mov     edi, dword ptr [esi]
        push    0
        push    0
        push    0
        lea     ecx, [ebp - 0xc]
        push    ecx
        push    esi
        call    FUN_00664ae0
        add     esp, 0xc
        lea     edx, [ebp - 0xc]
        mov     ecx, esi
        push    eax
        push    edx
        call    dword ptr [edi + 4]
        mov     eax, dword ptr [esi]
        push    0x3f800000
        mov     ecx, esi
        call    dword ptr [eax + 0xcc]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_6528e:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp + 8], 0
        call    dword ptr [edx + 0x40]
        test    eax, eax
        jz      L_652b0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x40]
        mov     ecx, dword ptr [eax + 0x440]
        mov     dword ptr [ebp + 8], ecx
L_652b0:
        mov     edx, dword ptr [esi]
        push    0
        push    0x40a00000
        mov     ecx, esi
        call    dword ptr [edx + 0x6c]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x38]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x38]
        fld     dword ptr [eax + 0x440]
        fadd    dword ptr [edi + 0x2bc]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [ebp - 0x10]
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x28]
        call    FUN_00419480
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
        mov     edi, dword ptr [eax + 0xd8]
        lea     ecx, [ebp - 0xc]
        add     edi, 0x80
        push    ecx
        mov     ecx, edi
        call    FUN_00428730
        lea     edx, [ebp - 0xc]
        push    edx
        lea     ecx, [ebp - 0x40]
        call    FUN_0058ea70
        mov     eax, dword ptr [ebp + 8]
        push    eax
        lea     ecx, [ebp - 0x40]
        push    ecx
        lea     ecx, [ebp - 0x40]
        call    FUN_0040cc10
        lea     edx, [ebp - 0x28]
        push    edx
        push    edi
        lea     ecx, [ebp - 0x68]
        call    FUN_005d2900
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_0040cbe0
        mov     eax, dword ptr [g_7b220c]
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp + 8], eax
        call    FUN_0040cb00
        fabs
        fcomp   dword ptr [ebp + 8]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_65458
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     ecx, [ebp - 0x34]
        call    FUN_0040d560
        mov     edx, dword ptr [ebp - 0x10]
        push    edx
        lea     eax, [ebp - 0x34]
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_0040cc10
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     edx, [ebp - 0x40]
        push    edx
        lea     ecx, [ebp - 0x4c]
        call    FUN_0040cbe0
        lea     ecx, [ebp - 0x4c]
        mov     dword ptr [ebp - 0x48], 0
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 8]
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        fst     dword ptr [ebp + 8]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_65458
        lea     eax, [ebp - 0x28]
        push    eax
        push    edi
        lea     ecx, [ebp - 0x68]
        call    FUN_005d2900
        push    eax
        lea     ecx, [ebp - 0x58]
        call    FUN_0040cbe0
        lea     ecx, [ebp - 0x58]
        mov     dword ptr [ebp - 0x54], 0
        call    FUN_0040cb00
        fstp    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x5c], eax
        fld     dword ptr [ebp - 0x5c]
        fdiv    dword ptr [ebp + 8]
        fst     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_65458
        fld     dword ptr [ebp + 8]
        fcomp   dword ptr [g_76d040]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6543b
        mov     dword ptr [ebp + 8], 0x41000000
L_6543b:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [eax]
        push    0
        push    ecx
        lea     ecx, [ebp - 0x1c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        jmp     L_65485
L_65458:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_00419480
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 8]
        mov     edx, dword ptr [ebp - 4]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x14], edx
L_65485:
        mov     eax, dword ptr [esi]
        lea     ecx, [ebp - 0x68]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xa0]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [eax + 8]
        mov     eax, dword ptr [esi]
        mov     dword ptr [ebp - 8], ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 4], edx
        call    dword ptr [eax + 0x8c]
        cmp     al, 1
        jz      L_654e4
        fld     dword ptr [ebp - 0x1c]
        lea     ecx, [ebp - 0x28]
        fsub    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ebp - 4]
        fstp    dword ptr [ebp - 0x20]
        call    FUN_0040cb00
        fld     dword ptr [ebp + 0xc]
        fmul    dword ptr [ebp + 0xc]
        fcompp
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_654f9
L_654e4:
        mov     edi, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edi + 0x3c]
        push    eax
        push    1
        push    1
        lea     ecx, [ebp - 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edi + 4]
L_654f9:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
