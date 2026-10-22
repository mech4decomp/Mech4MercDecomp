/*
 * FUN_0059BEC0 (80 B) — __thiscall linked list search.
 *
 * Searches a linked list starting at this+0x18 for a node whose
 * field_0x18 matches the given key (param). Returns the matching
 * node, or NULL if not found.
 *
 * Stack layout:
 *   [esp+0x00]: return address
 *   [esp+0x04]: local: pointer to current list head ptr
 *   [esp+0x08]: local: current node ptr
 *   [esp+0x0C]: saved esi
 *   [esp+0x10]: param (key)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00417ad0(void);

__declspec(naked) void __stdcall FUN_0059bec0(void)
{
    
__asm {
sub     esp, 0x0C
        lea     eax, [ecx + 0x18]           ; eax = &this->list_head
        mov     ecx, [esp + 0x10]           ; ecx = param (key)
        mov     [esp + 4], eax              ; local = &list_head
        mov     eax, [eax]                  ; eax = list_head->ptr
        push    esi
        mov     [esp + 0x0C], eax           ; local = list_head->ptr
        mov     dword ptr [esp + 4], 0x007838A0
    L_loop:
        test    eax, eax
        je      L_not_found
        mov     esi, [eax]                  ; esi = node->field_00
        test    esi, esi
        mov     eax, [eax + 4]              ; eax = node->field_04
        mov     [esp + 0x0C], eax           ; local = node->field_04
        je      L_found_or_end
        cmp     [esi + 0x18], ecx           ; compare node->field_18 with key
        je      L_found
        jmp     L_loop

    L_not_found:
        xor     eax, eax
        pop     esi
        add     esp, 0x0C
        ret     4

    L_found:
        lea     ecx, [esp + 4]
        call    FUN_00417ad0

    L_found_or_end:
        mov     eax, esi
        pop     esi
        add     esp, 0x0C
        ret     4
    }


}
