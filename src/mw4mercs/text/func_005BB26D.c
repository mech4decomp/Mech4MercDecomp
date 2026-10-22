/*
 * FUN_005BB26D (521 B) — __thiscall (ret 8). Gameplay update: computes
 * vector deltas, squared distances, sqrt-normalizes, dispatches via vtable
 * offsets 0xa4/0x18 and [esi+0x78]+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;   /* 0x76d064 */

extern void __cdecl FUN_004FACD0(void);
extern void __cdecl FUN_0040CB00(void);
extern void __cdecl FUN_0040C410(void);
extern void __cdecl FUN_0040D560(void);
extern void __cdecl FUN_004E8DC0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0040D030(void);
extern void __cdecl FUN_004DAA20(void);
extern void __cdecl FUN_0041FD80(void);

__declspec(naked) void FUN_005BB26D(void)
{
    __asm {
        nop
        nop
        nop
        sub     esp, 0x80
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x100]
        mov     ecx, dword ptr [esi + 0x110]
        mov     edx, dword ptr [esi + 0x120]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esi + 0xd8]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     ecx, dword ptr [eax + 0x5c]
        add     eax, 0x50
        mov     dword ptr [esp + 0x24], ecx
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [esp + 0x90]
        mov     dword ptr [esp + 0x28], edx
        mov     eax, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x8c]
        fsub    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x2c], eax
        push    edi
        mov     edi, dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x14]
        push    ecx
        fld     dword ptr [esp + 0x34]
        or      edi, 0x40
        fsub    dword ptr [esp + 0x28]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], edi
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esi + 0x224]
        fld     st(0)
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(1),st(0) as DC C9; ref needs D8 C9 */
        __emit 0xC9
        fstp    dword ptr [esp + 0x14]
        fstp    st(0)
        call    FUN_004FACD0
        mov     eax, dword ptr [esi + 0xe0]
        mov     ebx, dword ptr [eax + 0x14]
        cmp     ebx, 4
        jne     L_5BB412
        mov     eax, dword ptr [esi + 0xd8]
        fld     dword ptr [eax + 0x2c]
        mov     ecx, dword ptr [eax + 0x3c]
        fsub    dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax + 0x4c]
        lea     edi, [eax + 0x20]
        mov     dword ptr [esp + 0x38], ecx
        fstp    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x3c], edx
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x24]
        fst     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        jne     L_5BB412
        lea     ecx, [esp + 0x10]
        call    FUN_0040CB00
        fsqrt
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x44]
        fdivr   dword ptr [g_76d064]
        fld     dword ptr [esp + 0x14]
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(1),st(0) as DC C9; ref needs D8 C9 */
        __emit 0xC9
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x18]
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(1),st(0) as DC C9; ref needs D8 C9 */
        __emit 0xC9
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x1c]
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(1),st(0) as DC C9; ref needs D8 C9 */
        __emit 0xC9
        fstp    dword ptr [esp + 0x40]
        fstp    st(0)
        call    FUN_0040C410
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_0040D560
        fld     dword ptr [esi + 0x224]
        fadd    dword ptr [g_76d064]
        lea     edx, [esp + 0x28]
        push    edx
        lea     ecx, [esp + 0x44]
        fstp    dword ptr [esp + 0x5c]
        mov     eax, dword ptr [esp + 0x5c]
        push    eax
        call    FUN_004E8DC0
        push    edi
        lea     ecx, [esp + 0x60]
        call    FUN_00419460
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x60]
        call    FUN_0040D030
        lea     edx, [esp + 0x5c]
        push    edx
        mov     ecx, esi
        call    FUN_004DAA20
L_5BB412:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xa4]
        cmp     ebx, 6
        jne     L_5BB46A
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld     qword ptr [esp + 0x90]
        fsub    qword ptr [esi + 0xec]
        fcomp   dword ptr [eax + 0x7c]
        fnstsw  ax
        test    ah, 1
        je      L_5BB463
        lea     edi, [esi + 0x258]
        mov     ecx, edi
        call    FUN_0041FD80
        test    eax, eax
        je      L_5BB463
        mov     ecx, edi
        call    FUN_0041FD80
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        test    al, 1
        je      L_5BB46A
L_5BB463:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
L_5BB46A:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x80
        ret     8
    }
}
