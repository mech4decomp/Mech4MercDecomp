/*
 * FUN_006f8e80 (36 B) — Doubly-linked list unlink helper (second list head at DAT_008493c8)
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   8B 48 0C          mov ecx, dword ptr [eax + 0xc]
 *   85 C9             test ecx, ecx
 *   8B 40 08          mov eax, dword ptr [eax + 0x8]
 *   75 07             jnz not_head
 *   A3 C8 93 84 00    mov [0x008493c8], eax
 *   EB 03             jmp check_next
 *   not_head:
 *   89 41 08          mov dword ptr [ecx + 0x8], eax
 *   check_next:
 *   85 C0             test eax, eax
 *   74 03             jz done
 *   89 48 0C          mov dword ptr [eax + 0xc], ecx
 *   done:
 *   B0 01             mov al, 0x1
 *   C2 04 00          ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f8e80(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 0xc]
        test ecx, ecx
        mov eax, dword ptr [eax + 0x8]
        jnz not_head
        _emit 0xA3
        _emit 0xC8
        _emit 0x93
        _emit 0x84
        _emit 0x00
        jmp check_next
not_head:
        mov dword ptr [ecx + 0x8], eax
check_next:
        test eax, eax
        jz done
        mov dword ptr [eax + 0xc], ecx
done:
        mov al, 0x1
        ret 4
    }
}
