/*
 * FUN_004170A0 (76 B) — Binary search by name in a sorted item array.
 *
 * Called by vtable_lookup (FUN_00416F60, vtable 0x77260C slot 9).
 * Searches the container's item array (at this+0x0c, count at this+0x14)
 * using vtable slot 10 (at this->vtable[0x28]) as comparator.
 * Returns the matching index, or -1 (0xFFFFFFFF) if not found.
 *
 * __thiscall (ECX = this = container), RET 4 (1 stack param: name).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall list_find_by_name(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0x14]
        xor     ebp, ebp
        test    ebx, ebx
        jbe     l_not_found
    l_loop:
        mov     ecx, dword ptr [edi + 0x0c]
        mov     eax, dword ptr [edi]
        lea     esi, [ebx + ebp - 1]
        shr     esi, 1
        mov     edx, dword ptr [ecx + esi * 4]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x28]
        test    eax, eax
        jz      l_found
        jge     l_greater
        mov     ebx, esi
        jmp     l_continue
    l_greater:
        lea     ebp, [esi + 1]
    l_continue:
        cmp     ebp, ebx
        jc      l_loop
    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     4
    l_found:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
