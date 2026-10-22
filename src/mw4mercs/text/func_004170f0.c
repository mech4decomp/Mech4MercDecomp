/*
 * FUN_004170F0 (36 B) — Linear search for an item's index in the container's
 * sorted item array.
 *
 * Called by item_dtor_body (FUN_00416DE0) as the first step of item removal.
 * Scans the container's item array (at this+0x0c, count at this+0x14) for
 * the given item pointer. Returns the matching index, or -1 (0xFFFFFFFF) if
 * not found.
 *
 * __thiscall (ECX = this = container), RET 4 (1 stack param: item pointer).
 * CFLAGS: /O1
 *
 * Container layout:
 *   +0x00  vtable pointer
 *   +0x0c  item array (pointer to array of item pointers)
 *   +0x14  item count
 */

__declspec(naked) void __stdcall list_index_of(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x14]  ; EDX = count
        push    esi
        xor     eax, eax                     ; EAX = index = 0
        test    edx, edx
        jbe     l_not_found                  ; if count <= 0, return -1

        mov     ecx, dword ptr [ecx + 0x0c]  ; ECX = item array pointer
        mov     esi, dword ptr [esp + 0x8]   ; ESI = item to find

    l_loop:
        cmp     dword ptr [ecx], esi         ; compare array[i] with item
        jz      l_found                      ; if match, return index
        inc     eax                          ; index++
        add     ecx, 0x4                     ; advance to next array element
        cmp     eax, edx                     ; compare index with count
        jc      l_loop                       ; if index < count, continue

    l_not_found:
        or      eax, 0xffffffff              ; return -1

    l_found:
        pop     esi
        ret     4
    }
}
