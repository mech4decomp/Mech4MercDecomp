/* Auto-generated inline asm for FUN_0058fa80 (0x0058FA80) */
#include "mw4/common.h"

__declspec(naked) void __fastcall FUN_0058fa80(void *this)
{
    

extern int DAT_0076c5b0;
extern int DAT_0076d064;
__asm {
mov         al, byte ptr [ecx + 0x620]
        xor         edx, edx
        cmp         al, dl
        jnz         path_b

        /* Path A: flag == 0 */
        fld         dword ptr [ecx + 0x630]
        mov         byte ptr [ecx + 0x620], 1
        fld         dword ptr [ecx + 0x62c]
        fcomp       dword ptr [ecx + 0x628]
        fnstsw      ax
        test        ah, 1
        jnz         cmp_lt_a

        fstp        st(0)
        fld         dword ptr [ecx + 0x634]
        jmp         store_a

cmp_lt_a:
        fld         dword ptr [ecx + 0x62c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw      ax
        test        ah, 0x40
        jnz         store_a

        fstp        st(0)
        fld         dword ptr [ecx + 0x62c]
        fdiv        dword ptr [ecx + 0x628]
        fld dword ptr [DAT_0076d064]
        fsub        st(0), st(1)
        fmul        dword ptr [ecx + 0x630]
        fxch
        fmul        dword ptr [ecx + 0x634]
        faddp       st(1), st(0)

store_a:
        fstp        dword ptr [ecx + 0x630]
        mov         dword ptr [ecx + 0x628], 0x3e4ccccd
        mov         dword ptr [ecx + 0x62c], edx
        mov         dword ptr [ecx + 0x634], 0x3f800000
        ret

path_b:
        fld         dword ptr [ecx + 0x630]
        mov         byte ptr [ecx + 0x620], dl
        fld         dword ptr [ecx + 0x62c]
        fcomp       dword ptr [ecx + 0x628]
        fnstsw      ax
        test        ah, 1
        jnz         cmp_lt_b

        fstp        st(0)
        fld         dword ptr [ecx + 0x634]
        jmp         store_b

cmp_lt_b:
        fld         dword ptr [ecx + 0x62c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw      ax
        test        ah, 0x40
        jnz         store_b

        fstp        st(0)
        fld         dword ptr [ecx + 0x62c]
        fdiv        dword ptr [ecx + 0x628]
        fld dword ptr [DAT_0076d064]
        fsub        st(0), st(1)
        fmul        dword ptr [ecx + 0x630]
        fxch
        fmul        dword ptr [ecx + 0x634]
        faddp       st(1), st(0)

store_b:
        fstp        dword ptr [ecx + 0x630]
        mov         dword ptr [ecx + 0x628], 0x3f800000
        mov         dword ptr [ecx + 0x62c], edx
        mov         dword ptr [ecx + 0x634], edx
        ret
    }


}
