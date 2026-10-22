/*
 * FUN_00417030 (97 B) — Insertion-sort pass on the container's item array.
 *
 * Called by vtable_register (FUN_00416F20) after adding a new item.
 * Performs an insertion sort: for each element from index 1..count-1,
 * compare it with preceding elements using the vtable comparator at
 * slot +0x24 (__cdecl, RET 8), and shift elements right as needed.
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 *
 * Container layout:
 *   +0x00  vtable pointer
 *   +0x0c  item array (pointer to array of pointers)
 *   +0x14  item count
 *
 * Vtable slot +0x24: comparator(int item_a, int item_b) -> int
 *   Returns >0 if item_a should come after item_b.
 */

__declspec(naked) void __stdcall list_post_insert(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        mov     ebp, 0x1
        cmp     eax, ebp
        jbe     l_done

        push    ebx
        push    edi

    l_outer:
        mov     eax, dword ptr [esi + 0x0c]
        mov     ebx, dword ptr [eax + ebp * 4]
        mov     edx, dword ptr [esi]
        lea     eax, [eax + ebp * 4]
        mov     eax, dword ptr [eax - 0x4]
        push    ebx
        push    eax
        mov     ecx, esi
        mov     edi, ebp
        call    dword ptr [edx + 0x24]
        test    eax, eax
        jle     l_insert

    l_shift_loop:
        mov     eax, dword ptr [esi + 0x0c]
        mov     ecx, dword ptr [eax + edi * 4 - 0x4]
        mov     dword ptr [eax + edi * 4], ecx
        dec     edi
        cmp     edi, 0x1
        jc      l_insert
        mov     eax, dword ptr [eax + edi * 4 - 0x4]
        mov     edx, dword ptr [esi]
        push    ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        test    eax, eax
        jg      l_shift_loop

    l_insert:
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x0c]
        inc     ebp
        cmp     ebp, eax
        mov     dword ptr [ecx + edi * 4], ebx
        jc      l_outer

        pop     edi
        pop     ebx

    l_done:
        pop     esi
        pop     ebp
        ret
    }
}
