/*
 * FUN_004C5EC0 (65 B) — Iterator over linked list at this+0x144,
 * calls vtable+0x130 and vtable+0x13c on each entry.
 *
 * __thiscall (ECX = this), RET 0xc (2 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004c5ec0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x144]
    l_loop:
        test    edi, edi
        jz      l_done
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 4]
        jz      l_done
        push    ebx
        mov     ecx, esi
        call    dword ptr [esi + 0x130]
        cmp     eax, -1
        jz      l_loop
        push    eax
        push    ebp
        push    ebx
        mov     ecx, esi
        call    dword ptr [esi + 0x13c]
        jmp     l_loop

    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
