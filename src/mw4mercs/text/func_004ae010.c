/*
 * FUN_004AE010 (168 B) — __thiscall cubic bezier setup.
 *   Computes control point positions for a cubic bezier curve.
 *   Returns 1 if the curve is valid, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_007704c4;
extern float DAT_0076d070;
extern float DAT_007b220c;

__declspec(naked) int __stdcall FUN_004ae010(void)
{
    __asm {
        sub     esp, 8
        fld     dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 8], edx
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x18]
        faddp   st(1), st(0)
        fst     dword ptr [ecx + 0xc]
        fld     st(0)
        fmul    dword ptr [DAT_007704c4]
        fstp    dword ptr [esp + 4]
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 4]
        fmul    dword ptr [DAT_0076d070]
        __asm _emit 0xD9 __asm _emit 0x5C __asm _emit 0x24 __asm _emit 0x00 /* __emit: fstp dword ptr [esp+0] — MSVC6 drops zero disp (D9 1C 24) */
        __asm _emit 0xD8 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: fadd dword ptr [esp+0] — MSVC6 drops zero disp (D8 04 24) */
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov eax,[esp+0] — MSVC6 drops zero disp (8B 04 24) */
        mov     dword ptr [ecx + 0x10], eax
        mov     eax, dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 4], eax
        fadd    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x14]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     l_return_0
        __asm _emit 0xD9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: fld dword ptr [esp+0] — MSVC6 drops zero disp (D9 04 24) */
        fadd    st(0), st(0)
        fadd    dword ptr [esp + 4]
        fadd    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x18]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     l_return_0
        mov     eax, 1
        add     esp, 8
        ret     0x10
    l_return_0:
        xor     eax, eax
        add     esp, 8
        ret     0x10
    }
}
