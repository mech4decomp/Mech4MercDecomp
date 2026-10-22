/*
 * FUN_004EA9F0 (38 B) — Linked list traversal with virtual call.
 *
 * Iterates a linked list at this->field_154, calling vtable+0x48
 * on each non-null element with the given parameter.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004ea9f0(void)
{
    __asm {
        push    esi
        mov     esi, [ecx + 0x154]
        push    edi
        mov     edi, [esp + 0x0C]
    l_test:
        test    esi, esi
        jz      l_done
        mov     ecx, [esi]
        test    ecx, ecx
        mov     esi, [esi + 4]
        jz      l_done
        mov     eax, [ecx]
        push    edi
        call    dword ptr [eax + 0x48]
        jmp     l_test
    l_done:
        pop     edi
        pop     esi
        ret     4
    }
}
