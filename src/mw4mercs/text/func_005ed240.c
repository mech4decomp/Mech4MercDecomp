/*
 * FUN_005ed240 (507 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * WeaponMover update/refresh. If field 0x12C is non-zero, clears a set of
 * sub-objects and calls vtable +0x18; otherwise rebuilds a transform from
 * the source object and calls vtable +0xA4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00767430(void);
extern void __fastcall FUN_004facd0(void);
extern void __cdecl FUN_0040c410(void *p);
extern void __cdecl FUN_0040d560(void *p);
extern void __cdecl FUN_004e8dc0(float f, void *p);
extern void __fastcall FUN_004daa20(void);

__declspec(naked) void __fastcall FUN_005ed240(void)
{
    

extern int DAT_0076d064;
__asm {
sub     esp, 0x80
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x12C]
        test    eax, eax
        push    esi
        jz      L_5ed2c6
        push    0x8BD5E8
        lea     ecx, [ebx + 0x198]
        call    FUN_00767430
        push    0x8BD5E8
        lea     ecx, [ebx + 0x168]
        call    FUN_00767430
        push    0x8BD5E8
        lea     ecx, [ebx + 0x1B0]
        call    FUN_00767430
        push    0x8BD5E8
        lea     ecx, [ebx + 0x180]
        call    FUN_00767430
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x18]
        mov     esi, dword ptr [ebx + 0x10]
        mov     ecx, dword ptr [esp + 0x90]
        mov     edx, dword ptr [esp + 0x8C]
        push    ecx
        or      esi, 0x40
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x10], esi
        call    FUN_004facd0
        pop     esi
        pop     ebx
        add     esp, 0x80
        ret     8
L_5ed2c6:
        lea     eax, [ebx + 0x218]
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_0040c410
        fld     dword ptr [ebx + 0x224]
        mov     eax, dword ptr [ebx + 0xD8]
        fld     st(0)
        mov     ecx, dword ptr [eax + 0x5C]
        fmul    st, st(1)
        add     eax, 0x50
        mov     dword ptr [esp + 0xC], ecx
        mov     edx, dword ptr [eax + 0x1C]
        fstp    dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x90]
        mov     dword ptr [esp + 0x10], edx
        fstp    st(0)
        mov     eax, dword ptr [eax + 0x2C]
        mov     edx, dword ptr [esp + 0x8C]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ebx + 0x10]
        push    ecx
        or      eax, 0x40
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x10], eax
        call    FUN_004facd0
        mov     eax, dword ptr [ebx + 0xE0]
        cmp     dword ptr [eax + 0x14], 0x4
        jnz     L_5ed426
        mov     eax, dword ptr [ebx + 0xD8]
        fld     dword ptr [eax + 0x2C]
        mov     ecx, dword ptr [eax + 0x3C]
        fsub    dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax + 0x4C]
        lea     esi, [eax + 0x20]
        mov     dword ptr [esp + 0x28], ecx
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x1C]
        mov     dword ptr [esp + 0x2C], edx
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x2C]
        fsub    dword ptr [esp + 0x20]
        fld     st(0)
        fmul    st, st(1)
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x34]
        faddp   st(1), st
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fcom    dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5ed420
        fsqrt
        push    edi
        lea     eax, [esp + 0x1C]
        push    eax
        lea     ecx, [esp + 0x44]
        fdivr dword ptr [DAT_0076d064]
        fxch    st(2)
        fmul    st, st(2)
        fstp    dword ptr [esp + 0x2C]
        fld     dword ptr [esp + 0x3C]
        fmul    st, st(2)
        fstp    dword ptr [esp + 0x30]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x34]
        fstp    st(0)
        call    FUN_0040c410
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_0040d560
        fld     dword ptr [ebx + 0x224]
        fadd dword ptr [DAT_0076d064]
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x44]
        fstp    dword ptr [esp + 0x5C]
        mov     eax, dword ptr [esp + 0x5C]
        push    eax
        call    FUN_004e8dc0
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, 0xC
        lea     edi, [esp + 0x5C]
        rep     movsd
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x68], ecx
        lea     ecx, [esp + 0x5C]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x7C], edx
        mov     dword ptr [esp + 0x8C], eax
        call    FUN_004daa20
        pop     edi
        jmp     L_5ed426
L_5ed420:
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
L_5ed426:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0xA4]
        pop     esi
        pop     ebx
        add     esp, 0x80
        ret     8
    }


}
