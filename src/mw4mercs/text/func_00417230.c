/*
 * FUN_00417230 (46 B) — Iterator "get next" method for iterator vtable 0x7725A0.
 *
 * Called by database_dtor_body_1 (FUN_004D2B80) in a loop to fetch the next
 * item from a sub-list. Advances the internal cursor and returns the next
 * item's data pointer (at item+0x0c), or NULL when exhausted.
 *
 * Iterator layout:
 *   +0x00  vtable pointer (0x7725A0)
 *   +0x04  container pointer (the list being iterated)
 *   +0x10  cursor (current index; -1 = exhausted)
 *
 * Container layout (list object):
 *   +0x00  vtable pointer
 *   +0x0c  item array (pointer to array of item pointers)
 *   +0x14  item count
 *
 * Item layout:
 *   +0x0c  data pointer (what the iterator returns)
 *
 * __thiscall (ECX = iterator), no stack params, RET 4 (returns pointer).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall iterator_next(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x10]
        cmp     edx, -1
        je      l_exhausted
        push    esi
        mov     esi, dword ptr [ecx + 0x04]
        mov     eax, dword ptr [esi + 0x0c]
        mov     eax, dword ptr [eax + edx * 4]
        mov     eax, dword ptr [eax + 0x0c]
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        inc     edx
        cmp     edx, edi
        pop     edi
        mov     dword ptr [ecx + 0x10], edx
        pop     esi
        jb      l_return
        mov     dword ptr [ecx + 0x10], -1
        ret
    l_exhausted:
        xor     eax, eax
    l_return:
        ret
    }
}
