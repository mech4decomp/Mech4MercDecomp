/*
 * 41 bytes — thiscall: walks a linked list and counts matching items.
 * Counts objects where object->field_3C == this->field_58
 * and object->field_18 != NULL.
 */

#include <windows.h>

__declspec(naked) int FUN_00597570(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x10] ; edx = this->list_head
        push    esi
        push    edi
        xor     eax, eax                    ; count = 0
l_loop:
        test    edx, edx
        je      l_end
        mov     esi, dword ptr [edx]        ; esi = node->ptr
        test    esi, esi
        mov     edx, dword ptr [edx + 4]    ; edx = node->next
        je      l_end
        mov     edi, dword ptr [esi + 0x18] ; edi = ptr->field_18
        test    edi, edi
        je      l_loop                      ; skip if NULL
        mov     esi, dword ptr [esi + 0x3C] ; esi = ptr->field_3C
        cmp     esi, dword ptr [ecx + 0x58] ; compare with this->field_58
        jne     l_loop                      ; skip if not equal
        inc     eax                         ; count++
        jmp     l_loop
l_end:
        pop     edi
        pop     esi
        ret
    }
}
