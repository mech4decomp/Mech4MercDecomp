/*
 * Vtable 0x77260C slot 11 — FUN_004D31B0 (36 B).
 *
 * Comparator: compares word at offset 0x10 of two items.
 * Returns 0 if equal, -1 if item1 < item2, 1 if item1 > item2.
 *
 * __cdecl, RET 8 (2 stack params: item1, item2).
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl vtable_compare_id(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     ax, word ptr [eax + 0x10]
        mov     cx, word ptr [ecx + 0x10]
        cmp     ax, cx
        jne     l_differ
        xor     eax, eax
        ret     8
    l_differ:
        xor     edx, edx
        cmp     ax, cx
        setle   dl
        dec     edx
        and     edx, 2
        dec     edx
        mov     eax, edx
        ret     8
    }
}
