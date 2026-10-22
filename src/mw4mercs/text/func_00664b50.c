/*
 * FUN_00664b50 (636 B) — ABL object method: computes a movement magnitude,
 * builds transform/color objects, does range checks (FPU compares), and
 * dispatches virtual methods (vtable+0x3c/+0x34/+0x8/+0x4) plus helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662f10(void *p, int g);
extern void __cdecl FUN_00419480(int a);
extern void __cdecl FUN_0040ca10(void *a, void *b);
extern float __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_006a6600(int a, float b, float c, int d);
extern void __cdecl FUN_006a6940(float a, void *b, float c, void *d);
extern void __cdecl FUN_005fbb00(int a);
extern void __cdecl FUN_00684530(int a, int b, void *c);
extern void __cdecl FUN_006847e0(void);
extern void __cdecl FUN_0040ca40(void *a, float b);
extern void __cdecl FUN_0040c9e0(void *a, void *b);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_00665a90(void);
extern void __cdecl FUN_006a7510(int a, float b, float c, float d);
extern void __cdecl FUN_00662fb0(void *p, void *a, void *b, int g, void *c);
extern void __cdecl FUN_005cb200(void);

extern float  g_795440;   /* 0x00795440 */
extern int    g_795444;   /* 0x00795444 */
extern double g_795470;   /* 0x00795470 */
extern float  g_7748c8;   /* 0x007748c8 */
extern float  g_785968;   /* 0x00785968 */

__declspec(naked) void __cdecl FUN_00664b50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xd0
        mov     eax, dword ptr [g_795440]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      L_end
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x28]
        call    FUN_00419480
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00419480
        lea     ecx, [ebp - 0x28]
        push    ecx
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040ca10
        lea     ecx, [ebp - 0x10]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 8]
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 4], eax
        fld     dword ptr [ebp - 4]
        fst     dword ptr [ebp + 8]
        fadd    st(0), st(0)
        push    0
        lea     ecx, [ebp - 0x6c]
        fstp    dword ptr [ebp - 4]
        mov     edi, dword ptr [ebp - 4]
        push    edi
        push    0x41a00000
        push    0
        call    FUN_006a6600
        push    1
        push    edi
        push    0x41a00000
        push    3
        lea     ecx, [ebp - 0x58]
        call    FUN_006a6600
        lea     eax, [ebp - 0x58]
        push    eax
        push    0x3e99999a
        lea     ecx, [ebp - 0x6c]
        push    ecx
        push    0x3f333333
        lea     ecx, [ebp - 0x44]
        call    FUN_006a6940
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00419480
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp - 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     ecx, eax
        call    FUN_005fbb00
        push    eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
        push    eax
        lea     ecx, [ebp - 0xd0]
        call    FUN_00684530
        lea     ecx, [ebp - 0xd0]
        call    FUN_006847e0
        fld     dword ptr [ebp - 0xa0]
        mov     ecx, dword ptr [ebp - 0xa0]
        fcomp   dword ptr [g_7748c8]
        mov     dword ptr [ebp - 4], ecx
        pop     edi
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_64d6c
        fld     dword ptr [ebp - 0xa0]
        fld     dword ptr [ebp + 8]
        fmul    qword ptr [g_795470]
        fcompp
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_64d6c
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00419480
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x28]
        call    FUN_00419480
        lea     ecx, [ebp - 0x1c]
        push    ecx
        lea     edx, [ebp - 0x28]
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 4]
        fdiv    dword ptr [ebp + 8]
        push    ecx
        lea     eax, [ebp - 0x10]
        lea     ecx, [ebp - 0x10]
        fstp    dword ptr [esp]
        push    eax
        call    FUN_0040ca40
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00419480
        lea     eax, [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040c9e0
        mov     edx, dword ptr [esi]
        push    0
        push    0
        lea     eax, [ebp - 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        cmp     al, 1
        jnz     L_64d6c
        mov     edx, dword ptr [esi]
        push    0
        push    0
        push    1
        lea     eax, [ebp - 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 4]
        lea     ecx, [ebp - 0x34]
        call    FUN_00665aa0
        lea     ecx, [ebp - 0x40]
        call    FUN_00665a90
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_64d6c:
        fld     dword ptr [ebp + 8]
        push    0x3f4ccccd
        fmul    dword ptr [g_785968]
        push    0x41400000
        push    ecx
        lea     ecx, [ebp - 0x8c]
        fstp    dword ptr [esp]
        push    1
        call    FUN_006a7510
        mov     ecx, dword ptr [g_795444]
        push    2
        push    ecx
        lea     edx, [ebp - 0x44]
        push    edx
        lea     eax, [ebp - 0x8c]
        push    eax
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x8c], 0x795458
        call    FUN_00665aa0
        lea     ecx, [ebp - 0x40]
        call    FUN_005cb200
L_end:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
