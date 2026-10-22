/*
 * Vtable 0x77260C slot 12 — FUN_004D31E0 (40 B).
 *
 * Comparator: compares word at offset 0x00 of item1 against word at
 * offset 0x10 of item2.
 * Returns 0 if equal, -1 if item1 < item2, 1 if item1 > item2.
 *
 * __cdecl, RET 8 (2 stack params: item1, item2).
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl vtable_compare_name(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     ax, word ptr [eax]
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
