/*
 * FUN_005B0A60 (1243 B) — __thiscall. Gameplay update: reads a double param,
 * computes orientation/velocity vectors via FPU, builds matrices through
 * vector helpers (FUN_0041c680, FUN_0041b140, FUN_0041afd0, FUN_0041b320,
 * FUN_00419e70, FUN_0041a160, FUN_00419480, FUN_0041ac80, FUN_0040c9e0,
 * FUN_0040cb00, FUN_0040cbb0, FUN_004daa20, FUN_004e2f40, FUN_0041fd80),
 * and dispatches vtable calls ([eax+4], [edx+0x164], [edx+4]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041b140(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_0041fd80(void);

extern float g_785f2c;
extern float g_76d048;
extern float g_785f28;
extern float g_76d064;
extern float g_7b8d08;
extern float g_7b8d0c;
extern float g_7b8d10;
extern char  g_7b9460[];
extern int   g_7dc728;

__declspec(naked) void __cdecl FUN_005B0A60(void)
{
    __asm {
        sub     esp, 0x140
        fld     qword ptr [esp + 0x144]
        push    ebx
        mov     ebx, ecx
        fsub    qword ptr [ebx + 0xe4]
        mov     eax, dword ptr [ebx + 0x78]
        push    ebp
        lea     ecx, [ebx + 0x78]
        push    esi
        fstp    dword ptr [esp + 0xc]
        call    dword ptr [eax + 4]
        mov     esi, eax
        mov     dword ptr [esp + 0x5c], 0
        mov     dword ptr [esp + 0x64], 0
        mov     dword ptr [esp + 0x60], 0xc1700000
        fld     dword ptr [esi + 0x328]
        fchs
        fld     dword ptr [g_785f2c]
        fcomp   st(1)
        __emit  0xDF                 /* fnstsw ax (no 9B WAIT prefix) */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 */
        __emit  0xC4
        __emit  0x01
        je      L_b0abc
        fstp    dword ptr [esp + 0x60]
        jmp     L_b0abe
L_b0abc:
        __emit  0xDD                 /* fstp st(0) (MSVC6 emits wrong form) */
        __emit  0xD8
L_b0abe:
        mov     edx, dword ptr [ebx + 0xd8]
        mov     ecx, dword ptr [esp + 0x60]
        push    edi
        add     edx, 0x80
        push    edx
        lea     eax, [esp + 0x64]
        xor     ebp, ebp
        mov     dword ptr [ebx + 0x16c], ecx
        lea     edi, [ebx + 0x198]
        push    eax
        mov     ecx, edi
        mov     dword ptr [ebx + 0x168], ebp
        mov     dword ptr [ebx + 0x170], ebp
        call    FUN_0041c680
        mov     dword ptr [esp + 0x14], ebp
        fld     dword ptr [esi + 0x310]
        fchs
        fcom    dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x434], ebp
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        je      L_b0b2c
        __emit  0xDD                 /* fstp st(0) */
        __emit  0xD8
        fld     dword ptr [esi + 0x310]
        fcomp   dword ptr [esp + 0x14]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 */
        __emit  0xC4
        __emit  0x01
        je      L_b0b30
        fld     dword ptr [esi + 0x310]
L_b0b2c:
        fstp    dword ptr [esp + 0x14]
L_b0b30:
        fld     dword ptr [esi + 0x2b4]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebx + 0xd8]
        fmul    dword ptr [ebx + 0x430]
        fst     dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0x174], ecx
        fld     dword ptr [esi + 0x2b4]
        add     eax, 0x80
        fmul    dword ptr [ebx + 0x438]
        push    eax
        lea     ecx, [esp + 0x18]
        fstp    dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x20]
        lea     esi, [ebx + 0x1a4]
        fstp    dword ptr [ebx + 0x178]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebx + 0x17c], edx
        call    FUN_0041c680
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi]
        lea     edx, [esp + 0x84]
        push    edx
        lea     ecx, [esp + 0x138]
        fstp    dword ptr [esp + 0x88]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x8c]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x90]
        call    FUN_0041b140
        lea     esi, [ebx + 0xf4]
        push    esi
        lea     ecx, [esp + 0x128]
        call    FUN_0041afd0
        lea     eax, [esp + 0x134]
        push    eax
        lea     ecx, [esp + 0x128]
        push    ecx
        lea     ecx, [esp + 0xec]
        call    FUN_0041b320
        lea     ecx, [esp + 0xb4]
        call    FUN_00419e70
        lea     edx, [esp + 0xe4]
        push    edx
        lea     ecx, [esp + 0xb8]
        call    FUN_0041a160
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi]
        lea     eax, [esp + 0xb4]
        push    eax
        lea     ecx, [esp + 0x94]
        fstp    dword ptr [esp + 0x94]
        push    ecx
        fld     dword ptr [esp + 0x18]
        lea     ecx, [esp + 0xa4]
        fmul    dword ptr [edi + 4]
        fstp    dword ptr [esp + 0x9c]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [edi + 8]
        fstp    dword ptr [esp + 0xa0]
        call    FUN_0041c680
        push    esi
        lea     ecx, [esp + 0xac]
        call    FUN_00419480
        fld     dword ptr [esp + 0x9c]
        fadd    dword ptr [esp + 0xa8]
        fst     dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0xac]
        fadd    dword ptr [esp + 0xa0]
        fstp    dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0xa4]
        fadd    dword ptr [esp + 0xb0]
        fstp    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0xc0]
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0xe0], eax
        lea     eax, [esp + 0x6c]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x11c]
        push    ecx
        mov     dword ptr [esp + 0xd8], edx
        mov     edx, dword ptr [ebx]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x164]
        lea     ecx, [esp + 0xe4]
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_0041ac80
        lea     edx, [esp + 0x118]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x6c]
        mov     ecx, 0xc
        mov     esi, offset g_7b9460
        lea     edi, [esp + 0xb4]
        fstp    dword ptr [esp + 0x38]
        rep     movsd
        fld     dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x70]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x40]
        fadd    dword ptr [esp + 0x74]
        fstp    dword ptr [esp + 0x40]
        lea     ecx, [esp + 0xe4]
        push    ecx
        lea     ecx, [esp + 0xb8]
        call    FUN_0041a160
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0xc0], edx
        lea     edx, [esp + 0xb4]
        mov     dword ptr [esp + 0xe0], ecx
        push    edx
        mov     ecx, ebx
        mov     dword ptr [esp + 0xd4], eax
        call    FUN_004daa20
        fld     dword ptr [ebx + 0x540]
        mov     ecx, dword ptr [esp + 0xc0]
        fadd    dword ptr [g_76d048]
        mov     eax, dword ptr [esp + 0xd0]
        mov     edx, dword ptr [esp + 0xe0]
        mov     dword ptr [esp + 0x2c], ecx
        fstp    dword ptr [esp + 0x30]
        mov     ecx, offset g_7b8d08
        fld     dword ptr [ebx + 0x540]
        mov     dword ptr [esp + 0x110], eax
        fadd    dword ptr [g_785f28]
        mov     dword ptr [esp + 0x34], edx
        fstp    dword ptr [esp + 0x5c]
        call    FUN_0040cb00
        fsqrt
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x48], ecx
        mov     dword ptr [esp + 0x4c], edx
        fdivr   dword ptr [g_76d064]
        fld     st(0)
        fmul    dword ptr [g_7b8d08]
        fstp    dword ptr [esp + 0x50]
        fld     st(0)
        fmul    dword ptr [g_7b8d0c]
        fstp    dword ptr [esp + 0x54]
        fmul    dword ptr [g_7b8d10]
        fstp    dword ptr [esp + 0x58]
        lea     ecx, [esp + 0x144]
        lea     edx, [esp + 0xf4]
        lea     eax, [esp + 0x44]
        mov     dword ptr [esp + 0xf8], ecx
        mov     ecx, dword ptr [g_7dc728]
        push    edx
        mov     dword ptr [esp + 0xf8], eax
        mov     dword ptr [esp + 0x100], ebp
        mov     dword ptr [esp + 0x108], ebp
        mov     dword ptr [esp + 0x10c], 0x1000
        call    FUN_004e2f40
        fld     dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x78]
        push    eax
        lea     ecx, [esp + 0x48]
        fstp    dword ptr [esp + 0x7c]
        push    ecx
        fld     dword ptr [esp + 0x5c]
        lea     ecx, [esp + 0x34]
        fmul    dword ptr [esp + 0x64]
        fstp    dword ptr [esp + 0x84]
        fld     dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0x64]
        fstp    dword ptr [esp + 0x88]
        call    FUN_0040cbb0
        fld     dword ptr [esp + 0x110]
        pop     edi
        fcomp   dword ptr [esp + 0x2c]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        je      L_b0f2f
        lea     esi, [ebx + 0x5bc]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_b0ec8
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    ebp
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
L_b0ec8:
        lea     esi, [ebx + 0x5c4]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_b0ef0
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    ebp
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
L_b0ef0:
        mov     ecx, dword ptr [ebx + 0xe0]
        mov     eax, dword ptr [ecx]
        push    ebp
        push    0x13
        call    dword ptr [eax + 4]
        mov     dword ptr [ebx + 0x168], ebp
        mov     dword ptr [ebx + 0x16c], ebp
        mov     dword ptr [ebx + 0x170], ebp
        mov     byte ptr [ebx + 0x514], 1
        mov     dword ptr [ebx + 0x434], ebp
        mov     dword ptr [ebx + 0x430], ebp
        mov     dword ptr [ebx + 0x438], ebp
        mov     dword ptr [ebx + 0x42c], ebp
L_b0f2f:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x140
        ret     8
    }
}
