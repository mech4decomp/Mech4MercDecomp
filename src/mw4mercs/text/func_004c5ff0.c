/*
 * FUN_004C5FF0 (52 B) — Linked-list iterator calling vfunc+0x2c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c5ff0(int param_1, int param_2, int param_3)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [ecx + 0x144]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]

    l_loop:
        test    esi, esi
        jz      l_done

        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 4]
        jz      l_done

        mov     eax, dword ptr [ecx]
        push    edi
        push    ebx
        push    ebp
        call    dword ptr [eax + 0x2c]
        jmp     l_loop

    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
