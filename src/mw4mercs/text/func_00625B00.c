/*
 * FUN_00625B00 (71 B) — __stdcall, 2 args (ret 8). FPU clamp/update of a
 * double field at [this+0x60] against a global limit, with a toggle flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern double DAT_0076d970;
extern double DAT_0078d008;

__declspec(naked) void FUN_00625B00(void)
{
    __asm {
        fld     qword ptr [ecx + 0x60]
        fcomp   qword ptr [DAT_0076d970]
        fld     qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x40
        je      l_skip1
        fst     qword ptr [ecx + 0x60]
    l_skip1:
        fcom    qword ptr [ecx + 0x60]
        fnstsw  ax
        test    ah, 1
        jne     l_done
    l_loop:
        fld     qword ptr [ecx + 0x60]
        mov     al, byte ptr [ecx + 0x6c]
        fadd    qword ptr [DAT_0078d008]
        test    al, al
        sete    al
        mov     byte ptr [ecx + 0x6c], al
        fst     qword ptr [ecx + 0x60]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     l_loop
    l_done:
        fstp    qword ptr [ecx + 0x2c]
        ret     8
    }
}
