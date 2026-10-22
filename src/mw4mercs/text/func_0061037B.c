/*
 * FUN_0061037B (629 B) — __thiscall method (this in ecx). Gameplay transform/
 * interpolation routine. Loads a block of floats from 0x7f2884..0x7f28b0 and
 * DAT_0076e2bc, does FPU scaling (fdiv/fmul/fadd), then walks a linked list
 * via FUN_00562170 / FUN_00561a80 / FUN_00561a40 / FUN_0055fd30 /
 * FUN_0055fd70 / FUN_0055fdb0 / FUN_00612060 / FUN_00612020 / FUN_00612010.
 *
 * __thiscall (this in ecx), ret.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76e2bc;   /* 0x0076e2bc */
extern float g_7f2894;   /* 0x007f2894 */
extern float g_7f2898;   /* 0x007f2898 */
extern float g_7f289c;   /* 0x007f289c */
extern float g_7f28a0;   /* 0x007f28a0 */
extern float g_7f2888;   /* 0x007f2888 */
extern float g_7f2884;   /* 0x007f2884 */
extern void *g_7f28b0;   /* 0x007f28b0 */
extern void *g_7f28ac;   /* 0x007f28ac */
extern void *g_7f28a8;   /* 0x007f28a8 */
extern void *g_7f28a4;   /* 0x007f28a4 */

extern void *__cdecl FUN_00562170(void *a, void *b);
extern void __cdecl FUN_00561a80(void *a, void *b, void *c);
extern void *__cdecl FUN_00561a40(void *a, void *b);
extern void __cdecl FUN_0055fd30(void *a, void *b, void *c);
extern void *__cdecl FUN_00612060(void *a, void *b, void *c);
extern void __cdecl FUN_0055fd70(void *a, void *b, void *c);
extern void *__cdecl FUN_00612020(void *a, void *b);
extern void *__cdecl FUN_00612010(void *a, void *b);
extern void __cdecl FUN_0055fdb0(void *a, void *b, void *c, void *d);

__declspec(naked) void FUN_0061037B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x40
        fld     dword ptr [g_76e2bc]
        mov     eax, dword ptr [g_7f28b0]
        fdiv    dword ptr [g_7f2898]
        mov     edx, dword ptr [g_7f28ac]
        push    esi
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [g_7f28a8]
        push    edi
        mov     dword ptr [esp + 0x30], eax
        lea     esi, [ecx + 0x44]
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x44], edx
        mov     edx, dword ptr [g_7f28a4]
        push    ecx
        xor     edi, edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x4c], 0x3f666666
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x40], 0x3f666666
        fld     dword ptr [g_7f289c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [g_76e2bc]
        fdiv    dword ptr [g_7f2894]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [g_7f28a0]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [g_7f2888]
        fadd    dword ptr [g_7f289c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x24]
        __emit 0xDD
        __emit 0xD8
        fld     dword ptr [g_7f2884]
        fadd    dword ptr [g_7f28a0]
        fmul    dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x14], edi
        fstp    dword ptr [esp + 0x20]
        call    FUN_00562170
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 8], eax
        je      L_610446
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L_610472
L_610446:
        lea     edx, [esp + 0x28]
        push    edx
        push    ecx
        mov     dword ptr [esp + 0x30], ecx
        lea     eax, [esp + 0x10]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esp + 0x38], edi
        call    FUN_00561a80
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        call    FUN_00561a40
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 8], eax
L_610472:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        call    FUN_0055fd30
        lea     edx, [esp + 8]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], edi
        call    FUN_00562170
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     dword ptr [esp + 0xc], eax
        je      L_6104ac
        mov     ecx, dword ptr [esp + 8]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L_6104e3
L_6104ac:
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00612060
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00561a80
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_00561a40
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0xc], eax
L_6104e3:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_0055fd70
        lea     eax, [esp + 8]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], edi
        call    FUN_00562170
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     dword ptr [esp + 0xc], eax
        je      L_61051d
        mov     edx, dword ptr [esp + 8]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_610554
L_61051d:
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x24], edi
        call    FUN_00612060
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00561a80
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_00561a40
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0xc], eax
L_610554:
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [esp + 8]
        mov     dword ptr [ecx + 0x38], 1
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], edi
        call    FUN_00612020
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x20]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        mov     ecx, esi
        call    FUN_00612010
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, dword ptr [ecx]
        je      L_610598
        mov     edx, dword ptr [esp + 8]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_6105cf
L_610598:
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x24], edi
        call    FUN_00612060
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00561a80
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    FUN_00561a40
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0xc], eax
L_6105cf:
        push    edi
        push    0xff80ffff
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [esp + 0x48]
        push    edx
        call    FUN_0055fdb0
        pop     edi
        pop     esi
        add     esp, 0x40
        ret
        nop
        nop
        nop
    }
}
