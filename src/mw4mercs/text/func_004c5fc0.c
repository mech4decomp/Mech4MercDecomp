/*
 * FUN_004C5FC0 (45 B) — Linked-list iterator calling vfunc+0x28.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c5fc0(int param_1, int param_2)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        mov     esi, dword ptr [ecx + 0x144]
        push    edi
        mov     edi, dword ptr [esp + 0x14]

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
        call    dword ptr [eax + 0x28]
        jmp     l_loop

    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
