/* Auto-generated inline asm for FUN_0058fdc0 (0x0058FDC0) */
#include "mw4/common.h"

__declspec(naked) void __fastcall FUN_0058fdc0(void *this)
{
    

extern int DAT_0076d070;
extern int DAT_0076f5d8;
extern void __cdecl FUN_10040c92c(void);
extern void __cdecl FUN_10058d787(void);
extern void __cdecl FUN_00590f17(void);
extern void __cdecl FUN_10058d737(void);
extern void __cdecl FUN_00590ec7(void);
extern void __cdecl FUN_10058d6e7(void);
extern void __cdecl FUN_00590e77(void);
__asm {
sub         esp, 0x18
        push        esi
        mov         esi, ecx

        /* ECX = this->field_3b0 */
        mov         ecx, dword ptr [esi + 0x3b0]
        fld         dword ptr [ecx + 0x370]
        mov         edx, 0xbf800000
        fadd dword ptr [DAT_0076d070]
        mov         dword ptr [ecx + 0x378], edx
        mov         dword ptr [ecx + 0x37c], 0x3f800000
        fstp        dword ptr [ecx + 0x370]

        fld         dword ptr [ecx + 0x36c]
        fcomp dword ptr [DAT_0076f5d8]
        fnstsw      ax
        test        ah, 0x41
        jnz         skip_clamp1

        mov         dword ptr [ecx + 0x36c], 0x3fc00000

skip_clamp1:
        fld         dword ptr [ecx + 0x36c]
        mov         dword ptr [ecx + 0x378], edx
        fadd dword ptr [DAT_0076d070]
        fst         dword ptr [ecx + 0x36c]
        fcomp dword ptr [DAT_0076d070]
        fnstsw      ax
        test        ah, 0x41
        jnz         skip_clamp2

        mov         dword ptr [ecx + 0x36c], 0x3f000000

skip_clamp2:
        mov         al, byte ptr [esi + 0x4a1]
        test        al, al
        jz          path_no_flag

        /* Path: flag != 0 */
        push        0x41A00000
        push        0x0
        push        0xC1F00000
        lea         ecx, [esp + 0x1c]
        call FUN_10040c92c

        lea         ecx, [esp + 0x10]
        lea         eax, [esi + 0x670]
        mov         edx, 3

add_loop:
        fld         dword ptr [ecx]
        add         eax, 4
        fadd        dword ptr [eax - 4]
        add         ecx, 4
        dec         edx
        fstp        dword ptr [eax - 4]
        jnz         add_loop

        pop         esi
        add         esp, 0x18
        ret

path_no_flag:
        /* Path: flag == 0 */
        lea         eax, [esp + 4]
        push        eax
        lea         ecx, [esp + 0x0c]
        push        ecx
        lea         edx, [esp + 0x14]
        push        edx
        lea         ecx, [esp + 0x1c]
        mov         dword ptr [esp + 0x10], 0
        mov         dword ptr [esp + 0x14], 0x3f800000
        mov         dword ptr [esp + 0x18], 0
        call FUN_10058d787

        mov         edx, dword ptr [eax + 4]
        sub         esp, 0x0c
        mov         ecx, esp
        mov         dword ptr [ecx + 4], edx
        mov         edx, dword ptr [eax]
        mov         eax, dword ptr [eax + 8]
        mov         dword ptr [ecx], edx
        mov         dword ptr [ecx + 8], eax
        lea         ecx, [esi + 0x6b0]
        call FUN_00590f17

        lea         ecx, [esp + 0x0c]
        push        ecx
        lea         edx, [esp + 0x0c]
        push        edx
        lea         eax, [esp + 0x0c]
        push        eax
        lea         ecx, [esp + 0x1c]
        mov         dword ptr [esp + 0x18], 0
        mov         dword ptr [esp + 0x14], 0
        mov         dword ptr [esp + 0x10], 0x3f800000
        call FUN_10058d737

        mov         edx, dword ptr [eax + 4]
        sub         esp, 0x0c
        mov         ecx, esp
        mov         dword ptr [ecx + 4], edx
        mov         edx, dword ptr [eax]
        mov         eax, dword ptr [eax + 8]
        mov         dword ptr [ecx], edx
        mov         dword ptr [ecx + 8], eax
        lea         ecx, [esi + 0x708]
        call FUN_00590ec7

        lea         ecx, [esp + 0x0c]
        push        ecx
        lea         edx, [esp + 0x0c]
        push        edx
        lea         eax, [esp + 0x0c]
        push        eax
        lea         ecx, [esp + 0x1c]
        mov         dword ptr [esp + 0x18], 0
        mov         dword ptr [esp + 0x14], 0x3f800000
        mov         dword ptr [esp + 0x10], 0
        call FUN_10058d6e7

        mov         edx, dword ptr [eax + 4]
        sub         esp, 0x0c
        mov         ecx, esp
        mov         dword ptr [ecx + 4], edx
        mov         edx, dword ptr [eax]
        mov         eax, dword ptr [eax + 8]
        mov         dword ptr [ecx], edx
        mov         dword ptr [ecx + 8], eax
        lea         ecx, [esi + 0x760]
        call FUN_00590e77

        pop         esi
        add         esp, 0x18
        ret
    }


}
