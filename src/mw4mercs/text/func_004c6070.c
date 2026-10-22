/*
 * FUN_004C6070 (57 B) — Iterator over linked list at this+0x144,
 * calls vtable+0x34 on each non-null entry.
 *
 * __thiscall (ECX = this), RET 0x10 (4 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004c6070(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [ecx + 0x144]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
    l_loop_top:
        test    esi, esi
        jz      l_done
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 4]
        jz      l_done
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx]
        push    edi
        push    ebx
        push    ebp
        push    edx
        call    dword ptr [eax + 0x34]
        jmp     l_loop_top

    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
