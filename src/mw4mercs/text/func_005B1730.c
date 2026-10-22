/*
 * FUN_005B1730 (913 B) — __thiscall (this in ecx), 5 args (first is a
 * double), ret 0x14. Physics/transform update: reads a double arg,
 * computes scaled vectors, calls matrix helpers, and dispatches to
 * sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_782350;

extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041b140(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_005B1730(void)
{
    __asm {
        sub     esp, 0xdc
        fld     qword ptr [esp + 0xe0]
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0xd8]
        fsub    qword ptr [ebp + 0xe4]
        mov     edx, dword ptr [ebp + 0x78]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x1c]
        lea     ecx, [ebp + 0x78]
        push    esi
        fstp    dword ptr [esp + 8]
        mov     dword ptr [esp + 0xbc], eax
        call    dword ptr [edx + 4]
        mov     ecx, eax
        fld     dword ptr [ecx + 0x328]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        je      L_5b1786
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
L_5b1786:
        fstp    dword ptr [ebp + 0x16c]
        mov     edx, dword ptr [ebp + 0x16c]
        fld     dword ptr [ecx + 0x30c]
        mov     dword ptr [ebp + 0x168], 0
        mov     eax, dword ptr [ebp + 0x168]
        fmul    dword ptr [esp + 8]
        mov     dword ptr [ebp + 0x170], 0
        mov     dword ptr [ebp + 0x198], eax
        fmul    dword ptr [g_782350]
        mov     eax, dword ptr [ebp + 0x170]
        mov     dword ptr [ebp + 0x1a0], eax
        mov     dword ptr [ebp + 0x19c], edx
        fstp    dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x434], 0x3e99999a
        fld     dword ptr [ecx + 0x310]
        fchs
        fld     dword ptr [esp + 0x18]
        fcomp   st(1)
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jne     L_5b1810
        fstp    st(0)
        fld     dword ptr [ecx + 0x310]
        fcomp   dword ptr [esp + 0x18]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        je      L_5b1814
        fld     dword ptr [ecx + 0x310]
L_5b1810:
        fstp    dword ptr [esp + 0x18]
L_5b1814:
        fld     dword ptr [ecx + 0x2b4]
        mov     eax, dword ptr [ebp + 0xd8]
        fmul    dword ptr [ebp + 0x430]
        fst     dword ptr [esp + 0x1c]
        push    edi
        fld     dword ptr [ecx + 0x2b4]
        mov     ecx, dword ptr [esp + 0x1c]
        fmul    dword ptr [ebp + 0x438]
        mov     dword ptr [ebp + 0x174], ecx
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x28]
        lea     esi, [ebp + 0x1a4]
        fstp    dword ptr [ebp + 0x178]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x17c], edx
        call    FUN_0041c680
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esi]
        lea     edx, [esp + 0x64]
        push    edx
        lea     ecx, [esp + 0xdc]
        fstp    dword ptr [esp + 0x68]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x6c]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x70]
        call    FUN_0041b140
        lea     esi, [ebp + 0xf4]
        push    esi
        lea     ecx, [esp + 0xcc]
        call    FUN_0041afd0
        lea     eax, [esp + 0xd8]
        push    eax
        lea     ecx, [esp + 0xcc]
        push    ecx
        lea     ecx, [esp + 0xb4]
        call    FUN_0041b320
        lea     ecx, [esp + 0x7c]
        call    FUN_00419e70
        lea     edx, [esp + 0xac]
        push    edx
        lea     ecx, [esp + 0x80]
        call    FUN_0041a160
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [ebp + 0x198]
        lea     eax, [esp + 0x7c]
        push    eax
        lea     ecx, [esp + 0x5c]
        fstp    dword ptr [esp + 0x5c]
        push    ecx
        fld     dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x3c]
        fmul    dword ptr [ebp + 0x19c]
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [ebp + 0x1a0]
        fstp    dword ptr [esp + 0x68]
        call    FUN_0041c680
        fld     dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x1c]
        fadd    dword ptr [esp + 0x34]
        mov     eax, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x74], edx
        mov     dword ptr [esp + 0x78], eax
        fst     dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x74]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x78]
        fadd    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x88]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebp]
        mov     dword ptr [esp + 0x98], ecx
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0xac], edx
        lea     edx, [esp + 0x50]
        push    edx
        push    ecx
        mov     ecx, ebp
        call    dword ptr [eax + 0x164]
        lea     edx, [esp + 0xac]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ac80
        fld     dword ptr [esp + 0x4c]
        fadd    dword ptr [esp + 0x10]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x7c]
        fstp    dword ptr [esp + 0x10]
        lea     eax, [esp + 0xac]
        fld     dword ptr [esp + 0x50]
        rep     movsd
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x54]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x80]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x30]
        fadd    dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0041a160
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x88], ecx
        lea     ecx, [esp + 0x7c]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x9c], edx
        mov     dword ptr [esp + 0xac], eax
        call    FUN_004daa20
        fld     dword ptr [esp + 0xc0]
        fcomp   dword ptr [ebp + 0x51c]
        pop     edi
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jne     L_5b1ab6
        lea     esi, [ebp + 0x5ac]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_5b1a77
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    0
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
L_5b1a77:
        lea     esi, [ebp + 0x5b4]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_5b1aa0
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    0
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
L_5b1aa0:
        mov     ecx, dword ptr [ebp + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    9
        call    dword ptr [eax + 4]
        mov     byte ptr [ebp + 0x514], 0
L_5b1ab6:
        pop     esi
        pop     ebp
        add     esp, 0xdc
        ret     0x14
    }
}
