/*
 * FUN_005e5a50 (153 B) — __thiscall (ECX = this), no stack params.
 *
 * Heading correction helper (identical body to FUN_005e59b0).
 * Compares current heading against a reference and applies a clamped
 * correction to ECX+0x288.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* absolute-memory operands (extern symbols -> correct opcode + masked reloc) */
extern double DAT_007890a0;
extern float  DAT_007890ac;
extern float  DAT_0076c5b0;
extern float  DAT_0077de98;
extern float  DAT_007890a8;

__declspec(naked) void __stdcall FUN_005e5a50(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        fld     dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        fld     dword ptr [ecx + 0x288]
        mov     dword ptr [esp + 8], eax
        fsub    st(0), st(1)
        fcomp   qword ptr [DAT_007890a0]
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jz      L_5ae3
        fsubr   dword ptr [ecx + 0x284]
        fld     dword ptr [ecx + 0x28c]
        fsub    dword ptr [esp + 8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fsub    dword ptr [DAT_007890ac]
        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5ae3
        fmul    dword ptr [DAT_0077de98]
        fcom    dword ptr [DAT_007890a8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5ad3
        fstp    st(0)
        fld     dword ptr [DAT_007890a8]
    L_5ad3:
        fadd    dword ptr [ecx + 0x288]
        fstp    dword ptr [ecx + 0x288]
        add     esp, 0xc
        ret
    L_5ae3:
        fstp    st(0)
        add     esp, 0xc
        ret
    }
}
