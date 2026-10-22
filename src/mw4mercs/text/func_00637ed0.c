/* func_00637ed0.c - strlen-like helper (ABL interpreter region) */
#include <stddef.h>

__declspec(naked) int func_00637ed0(void)
{
    __asm {
        push edi
        mov  edi, dword ptr [esp + 0x8]
        or   ecx, 0xffffffff
        xor  eax, eax
        repne scasb
        not  ecx
        dec  ecx
        mov  eax, ecx
        pop  edi
        ret
    }
}
