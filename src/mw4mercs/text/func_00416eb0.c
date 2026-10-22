/*
 * Vtable 0x77260C slot 4 — FUN_00416EB0 (42 B).
 *
 * Iterates the item array at this->field_0c in reverse, calling
 * virtual method [vtable[0]](1) on each item's field_0c (release/destruct).
 * No-op if this->field_14 (count) <= 0.
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall vtable_clear(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        test    eax, eax
        jle     l_done
        mov     ecx, dword ptr [ecx + 0x0c]
        push    esi
        push    edi
        lea     esi, [ecx + eax * 4]
        mov     edi, eax
    l_loop:
        mov     edx, dword ptr [esi - 4]
        mov     ecx, dword ptr [edx + 0x0c]
        sub     esi, 4
        test    ecx, ecx
        je      l_skip
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip:
        dec     edi
        jne     l_loop
        pop     edi
        pop     esi
    l_done:
        ret
    }
}
