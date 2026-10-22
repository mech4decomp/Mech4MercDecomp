/*
 * FUN_006f89c0 (40 B) — Doubly-linked list unlink (head at DAT_008493c4) +
 *   vtable[4] destructor call on the node.
 *
 * Disassembly:
 *   8B 54 24 04       mov edx, dword ptr [esp + 4]
 *   8B 4A 0C          mov ecx, dword ptr [edx + 0xc]
 *   85 C9             test ecx, ecx
 *   8B 42 08          mov eax, dword ptr [edx + 0x8]
 *   75 07             jnz not_head
 *   A3 C4 93 84 00    mov [0x008493c4], eax
 *   EB 03             jmp check_next
 *   not_head:
 *   89 41 08          mov dword ptr [ecx + 0x8], eax
 *   check_next:
 *   85 C0             test eax, eax
 *   74 03             jz call_dtor
 *   89 48 0C          mov dword ptr [eax + 0xc], ecx
 *   call_dtor:
 *   8B 02             mov eax, dword ptr [edx]
 *   52                push edx
 *   FF 50 04          call dword ptr [eax + 4]
 *   C2 04 00          ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f89c0(void)
{
    __asm {
        mov edx, dword ptr [esp + 4]
        mov ecx, dword ptr [edx + 0xc]
        test ecx, ecx
        mov eax, dword ptr [edx + 0x8]
        jnz not_head
        _emit 0xA3
        _emit 0xC4
        _emit 0x93
        _emit 0x84
        _emit 0x00
        jmp check_next
not_head:
        mov dword ptr [ecx + 0x8], eax
check_next:
        test eax, eax
        jz call_dtor
        mov dword ptr [eax + 0xc], ecx
call_dtor:
        mov eax, dword ptr [edx]
        push edx
        call dword ptr [eax + 4]
        ret 4
    }
}
