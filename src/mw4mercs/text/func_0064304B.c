/*
 * FUN_0064304B (92 B) — __stdcall, 2 args (ret 8), ecx=this. FPU-driven
 * animation/state update with a bounded loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern double g_76d970;
extern double g_77ed38;

__declspec(naked) void FUN_0064304B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        fld     qword ptr [ecx + 0x58]
        fcomp   qword ptr [g_76d970]
        fld     qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x40
        je      l_1
        fst     qword ptr [ecx + 0x58]
    l_1:
        fcom    qword ptr [ecx + 0x58]
        fnstsw  ax
        test    ah, 1
        jne     l_4
        mov     edx, 0x14
    l_3:
        mov     eax, dword ptr [ecx + 0x54]
        add     eax, edx
        cmp     eax, 0xff
        mov     dword ptr [ecx + 0x54], eax
        jb      l_2
        mov     dword ptr [ecx + 0x54], 0xf
    l_2:
        fld     qword ptr [ecx + 0x58]
        fadd    qword ptr [g_77ed38]
        fst     qword ptr [ecx + 0x58]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     l_3
    l_4:
        fstp    qword ptr [ecx + 0x2c]
        ret     8
    }
}
