/*
 * FUN_004C5E70 (67 B) — Iterator over linked list at this+0x144,
 * calls vtable+0x138 and vtable+0x1c on each entry.
 *
 * __thiscall (ECX = this), RET 4.
 * Returns the last non-zero result from vtable+0x1c, or this if none.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004c5e70(int param_1)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x144]
        mov     ebp, ecx
    l_loop:
        test    edi, edi
        jz      l_done
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 4]
        jz      l_done
        push    ebx
        mov     ecx, esi
        call    dword ptr [esi + 0x138]
        test    al, 2
        jz      l_loop
        mov     eax, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        jz      l_loop
        mov     ebp, eax
        jmp     l_loop

    l_done:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
