/*
 * FUN_005cc620 (260 B) — __fastcall FPU method. Computes a vector length,
 *   normalizes and scales components based on a mode field, stores results
 *   into object fields and a sub-object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float DAT_0076c5b0;
extern float DAT_00773950;
extern float DAT_00787d48;
extern float DAT_00787ebc;
extern float DAT_00787d44;
extern float DAT_00787d40;
extern float DAT_0076d598;

__declspec(naked) void FUN_005cc620(void)
{
    __asm {
        sub     esp, 8
        fld     dword ptr [ecx + 0x338]
        fld     dword ptr [ecx + 0x334]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsqrt
        /* __emit: fst dword ptr [esp] (D9 54 24 00; MSVC6 drops [esp] disp) */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fstp    st(2)
        fstp    st(0)
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_66e
        xor     eax, eax
        mov     [ecx + 0x33c], eax
        mov     [ecx + 0x340], eax
        mov     ecx, [ecx + 0x314]
        mov     [ecx + 0x45c], eax
        add     esp, 8
        ret

    l_66e:
        mov     eax, [ecx + 0x398]
        fld     dword ptr [DAT_0076c5b0]
        sub     eax, 0
        jz      l_6c1
        dec     eax
        jz      l_6a3
        dec     eax
        jnz     l_6dd
        mov     edx, [ecx + 0x30]
        fstp    st(0)
        and     edx, 7
        mov     [esp + 4], edx
        fild    dword ptr [esp + 4]
        fmul    dword ptr [DAT_00773950]
        fadd    dword ptr [DAT_00787d48]
        jmp     l_6dd

    l_6a3:
        mov     eax, [ecx + 0x30]
        fstp    st(0)
        and     eax, 7
        mov     [esp + 4], eax
        fild    dword ptr [esp + 4]
        fmul    dword ptr [DAT_00787ebc]
        fadd    dword ptr [DAT_00787d44]
        jmp     l_6dd

    l_6c1:
        mov     edx, [ecx + 0x30]
        fstp    st(0)
        and     edx, 7
        mov     [esp + 4], edx
        fild    dword ptr [esp + 4]
        fmul    dword ptr [DAT_00773950]
        fadd    dword ptr [DAT_00787d40]

    l_6dd:
        fld     dword ptr [ecx + 0x334]
        /* __emit: fdiv dword ptr [esp] (D8 74 24 00; MSVC6 drops [esp] disp) */
        __emit 0xD8
        __emit 0x74
        __emit 0x24
        __emit 0x00
        fmul    st(0), st(1)
        fstp    dword ptr [ecx + 0x33c]
        fld     dword ptr [ecx + 0x338]
        /* __emit: fdiv dword ptr [esp] (D8 74 24 00; MSVC6 drops [esp] disp) */
        __emit 0xD8
        __emit 0x74
        __emit 0x24
        __emit 0x00
        fmul    st(0), st(1)
        fstp    dword ptr [ecx + 0x340]
        mov     ecx, [ecx + 0x314]
        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_71a
        fmul    dword ptr [DAT_0076d598]

    l_71a:
        fstp    dword ptr [ecx + 0x45c]
        add     esp, 8
        ret
    }
}
