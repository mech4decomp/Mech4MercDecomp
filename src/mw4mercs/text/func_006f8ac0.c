/*
 * FUN_006F8AC0 (37 B) — Walk the doubly-linked list at global 0x8493C4.
 * For each node, call vtable[0] (slot 0). If any returns 0, result is 0.
 * Returns 1 if all return non-zero, or list is empty.
 *
 * __cdecl.
 *
 * Disassembly:
 *   53                push    ebx
 *   56                push    esi
 *   8B 35 C4 93 84 00 mov     esi, [0x8493C4]
 *   85 F6             test    esi, esi
 *   B3 01             mov     bl, 1
 *   74 12             jz      done
 *   8B 06             mov     eax, [esi]
 *   56                push    esi
 *   FF 10             call    dword ptr [eax]
 *   84 C0             test    al, al
 *   75 02             jnz     ok
 *   32 DB             xor     bl, bl
 *   8B 76 08          mov     esi, [esi + 8]
 *   85 F6             test    esi, esi
 *   75 EE             jnz     loop
 *   5E                pop     esi
 *   8A C3             mov     al, bl
 *   5B                pop     ebx
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned char __cdecl FUN_006f8ac0(void)
{
    __asm {
        push    ebx
        push    esi
        _emit 0x8B
        _emit 0x35
        _emit 0xC4
        _emit 0x93
        _emit 0x84
        _emit 0x00
        test    esi, esi
        mov     bl, 1
        jz      done
walk_loop:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax]
        test    al, al
        jnz     ok
        xor     bl, bl
ok:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     walk_loop
done:
        pop     esi
        mov     al, bl
        pop     ebx
        ret
    }
}
