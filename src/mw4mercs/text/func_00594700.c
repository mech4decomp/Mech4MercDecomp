/* Auto-generated: FUN_00594700 (0x00594700) - 131 bytes, __cdecl */

#include "mw4/common.h"

/* External function declarations */
void __cdecl FUN_006fabf0(void);

__declspec(naked) int __cdecl func_00594700(int param1)
{
    

extern int DAT_0076b2ac;
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, [ebp+0x08]
        push    edi
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x00782dc4
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     label_1
        pop     edi
        pop     esi
        pop     ebp
        ret
label_1:
        push    0x00782db0
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     label_2
        pop     edi
        mov     eax, 0x00000001
        pop     esi
        pop     ebp
        ret
label_2:
        push    0x00782da0
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     label_3
        pop     edi
        mov     eax, 0x00000002
        pop     esi
        pop     ebp
        ret
label_3:
        push    0x00782d90
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     label_fail
        pop     edi
        mov     eax, 0x00000003
        pop     esi
        pop     ebp
        ret
label_fail:
        push    esi
        push    0x00782d70
        call    FUN_006fabf0
        add     esp, 0x08
        test    eax, eax
        je      label_skip_int3
        int     3
label_skip_int3:
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        pop     ebp
        ret
    }


}
