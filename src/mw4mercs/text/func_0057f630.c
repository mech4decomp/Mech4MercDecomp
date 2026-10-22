/* Auto-generated inline asm for FUN_0057f630 (0x0057F630, 87 bytes) */

#include "mw4/common.h"

__declspec(naked) unsigned int __cdecl FUN_0057f630(const char *str, int seed)
{
    
__asm {
push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        or ecx, 0FFFFFFFFh
        xor eax, eax
        xor ebx, ebx
        xor edx, edx
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        jz label_done

label_loop:
        movsx eax, byte ptr [edx + esi]
        mov ecx, edx
        and ecx, 0x3
        shl ecx, 0x3
        shl eax, cl
        or ecx, 0FFFFFFFFh
        mov edi, esi
        xor ebx, eax
        xor eax, eax
        inc edx
        repne scasb
        not ecx
        dec ecx
        cmp edx, ecx
        jc label_loop

label_done:
        or ecx, 0FFFFFFFFh
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x14]
        shl ecx, 0x10
        pop edi
        xor eax, ecx
        pop esi
        xor eax, ebx
        pop ebx
        ret
    }


}
