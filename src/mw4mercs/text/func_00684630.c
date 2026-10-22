/*
 * FUN_00684630 (310 B) — __thiscall (ECX = this), RET 0x8 (two stack params).
 * Computes a normalized direction vector from two points, with FPU math.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0040c410(void *this);
extern void __fastcall FUN_00766c60(void *this, void *p);
extern float DAT_007b220c;   /* epsilon constant */
extern float DAT_0076c5b0;
extern float DAT_0076d064;   /* constant */

__declspec(naked) void __fastcall FUN_00684630(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x24]
        fld     dword ptr [ecx]
        push    edi
        fsub    dword ptr [eax]
        lea     edi, [esi + 0x18]
        push    eax
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [ecx + 8]
        mov     ecx, edi
        fsub    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x14]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0x8]
        faddp   st(1), st(0)
        fcom    dword ptr [DAT_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_c4
        lea     eax, [esp + 8]
        fstp    st(0)
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0xc], 0x3f800000
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        call    FUN_00766c60
        pop     edi
        mov     dword ptr [esi + 0x30], 0
        pop     esi
        add     esp, 0x18
        ret     8
    L_c4:
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_e9
        mov     dword ptr [esp + 8], 0x3f800000
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
    L_e9:
        fld     dword ptr [esp + 8]
        lea     ecx, [esp + 0x14]
        fmul    dword ptr [esp + 8]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st(0)
        fadd    dword ptr [esp + 0x2c]
        fsqrt
        fdivr   dword ptr [DAT_0076d064]
        fld     dword ptr [esp + 0xc]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x20]
        fstp    st(0)
        call    FUN_00766c60
        fld     dword ptr [esp + 0x10]
        pop     edi
        fld     dword ptr [esp + 8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fadd    dword ptr [esp + 0x24]
        fsqrt
        fstp    dword ptr [esi + 0x30]
        pop     esi
        fstp    st(0)
        fstp    st(0)
        add     esp, 0x18
        ret     8
    }
}
