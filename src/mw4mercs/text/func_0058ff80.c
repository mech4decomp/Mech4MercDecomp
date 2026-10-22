/* Auto-generated inline asm for FUN_0058ff80 (0x0058FF80) */
#include "mw4/common.h"

__declspec(naked) void __fastcall FUN_0058ff80(void *this)
{
    

extern int DAT_0076d070;
extern int DAT_0076f5d8;
extern void __cdecl FUN_10058d7b4(void);
extern void __cdecl FUN_00590f44(void);
extern void __cdecl FUN_10058d764(void);
extern void __cdecl FUN_00590ef4(void);
extern void __cdecl FUN_10058d714(void);
extern void __cdecl FUN_00590ea4(void);
__asm {
sub         esp, 0x18
        push        esi
        mov         esi, ecx

        /* ECX = this->field_3b0 */
        mov         ecx, dword ptr [esi + 0x3b0]
        fld         dword ptr [ecx + 0x374]
        mov         dword ptr [ecx + 0x378], 0xbf800000
        fadd dword ptr [DAT_0076d070]
        mov         dword ptr [ecx + 0x380], 0x3f800000
        fstp        dword ptr [ecx + 0x374]

        fld         dword ptr [ecx + 0x36c]
        fcomp dword ptr [DAT_0076f5d8]
        fnstsw      ax
        test        ah, 0x41
        jnz         skip_clamp

        mov         dword ptr [ecx + 0x36c], 0x3fc00000

skip_clamp:
        mov         al, byte ptr [esi + 0x4a1]
        test        al, al
        jz          path_no_flag

        /* Path: flag != 0 */
        mov         dword ptr [esp + 0x10], 0
        mov         dword ptr [esp + 0x14], 0x41f00000
        mov         dword ptr [esp + 0x18], 0x41200000
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
        mov         dword ptr [esp + 0x14], 0xbf000000
        mov         dword ptr [esp + 0x18], 0
        call FUN_10058d7b4

        mov         edx, dword ptr [eax + 4]
        sub         esp, 0x0c
        mov         ecx, esp
        mov         dword ptr [ecx + 4], edx
        mov         edx, dword ptr [eax]
        mov         eax, dword ptr [eax + 8]
        mov         dword ptr [ecx], edx
        mov         dword ptr [ecx + 8], eax
        lea         ecx, [esi + 0x6b0]
        call FUN_00590f44

        lea         ecx, [esp + 0x0c]
        push        ecx
        lea         edx, [esp + 0x0c]
        push        edx
        lea         eax, [esp + 0x0c]
        push        eax
        lea         ecx, [esp + 0x1c]
        mov         dword ptr [esp + 0x18], 0
        mov         dword ptr [esp + 0x14], 0
        mov         dword ptr [esp + 0x10], 0xbf000000
        call FUN_10058d764

        mov         edx, dword ptr [eax + 4]
        sub         esp, 0x0c
        mov         ecx, esp
        mov         dword ptr [ecx + 4], edx
        mov         edx, dword ptr [eax]
        mov         eax, dword ptr [eax + 8]
        mov         dword ptr [ecx], edx
        mov         dword ptr [ecx + 8], eax
        lea         ecx, [esi + 0x708]
        call FUN_00590ef4

        lea         ecx, [esp + 0x0c]
        push        ecx
        lea         edx, [esp + 0x0c]
        push        edx
        lea         eax, [esp + 0x0c]
        push        eax
        lea         ecx, [esp + 0x1c]
        mov         dword ptr [esp + 0x18], 0
        mov         dword ptr [esp + 0x14], 0xbf000000
        mov         dword ptr [esp + 0x10], 0
        call FUN_10058d714

        mov         edx, dword ptr [eax + 4]
        sub         esp, 0x0c
        mov         ecx, esp
        mov         dword ptr [ecx + 4], edx
        mov         edx, dword ptr [eax]
        mov         eax, dword ptr [eax + 8]
        mov         dword ptr [ecx], edx
        mov         dword ptr [ecx + 8], eax
        lea         ecx, [esi + 0x760]
        call FUN_00590ea4

        pop         esi
        add         esp, 0x18
        ret
    }


}
