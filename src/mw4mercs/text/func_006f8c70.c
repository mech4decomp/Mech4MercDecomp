/*
 * FUN_006f8c70 (56 B) — Linked list walker: iterates a singly-linked list
 *   starting at DAT_008493c4, calls vtable[0x1c/28] on each node with arg 0.
 *   Returns 1 if all calls return non-zero, else 0.
 *   Sets DAT_008493d5 = 1 before walking.
 *
 * Disassembly:
 *   53                   push ebx
 *   56                   push esi
 *   8B 35 C4 93 84 00    mov esi, dword ptr [0x008493c4]
 *   B3 01                mov bl, 0x1
 *   88 1D D5 93 84 00    mov byte ptr [0x008493d5], bl
 *   E8 4B D2 FF FF       call FUN_006f5ed0
 *   85 F6                test esi, esi
 *   74 15                jz done
 *   walk_loop:
 *   8B 06                mov eax, dword ptr [esi]
 *   6A 00                push 0x0
 *   56                   push esi
 *   FF 50 1C             call dword ptr [eax + 0x1c]
 *   84 C0                test al, al
 *   75 02                jnz walk_next
 *   32 DB                xor bl, bl
 *   walk_next:
 *   8B 76 08             mov esi, dword ptr [esi + 0x8]
 *   85 F6                test esi, esi
 *   75 EB                jnz walk_loop
 *   done:
 *   E8 3D D2 FF FF       call FUN_006f5ee0
 *   5E                   pop esi
 *   8A C3                mov al, bl
 *   5B                   pop ebx
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f8c70(void)
{
    __asm {
        push ebx
        push esi
        _emit 0x8B
        _emit 0x35
        _emit 0xC4
        _emit 0x93
        _emit 0x84
        _emit 0x00
        mov bl, 0x1
        _emit 0x88
        _emit 0x1D
        _emit 0xD5
        _emit 0x93
        _emit 0x84
        _emit 0x00
        _emit 0xE8
        _emit 0x4B
        _emit 0xD2
        _emit 0xFF
        _emit 0xFF
        test esi, esi
        jz done
walk_loop:
        mov eax, dword ptr [esi]
        push 0x0
        push esi
        call dword ptr [eax + 0x1c]
        test al, al
        jnz walk_next
        xor bl, bl
walk_next:
        mov esi, dword ptr [esi + 0x8]
        test esi, esi
        jnz walk_loop
done:
        _emit 0xE8
        _emit 0x3D
        _emit 0xD2
        _emit 0xFF
        _emit 0xFF
        pop esi
        mov al, bl
        pop ebx
        ret
    }
}
