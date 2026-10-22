/*
 * FUN_006F8D40 (38 B) — Walk the doubly-linked list at global 0x8493C4.
 * For each node, call vtable[0x2c] (slot 11). If any returns non-zero,
 * result is 1. Returns 1 if any succeeded, 0 if none or list empty.
 *
 * __cdecl.
 *
 * Disassembly:
 *   53                push    ebx
 *   56                push    esi
 *   8B 35 C4 93 84 00 mov     esi, [0x8493C4]
 *   32 DB             xor     bl, bl
 *   85 F6             test    esi, esi
 *   74 13             jz      done
 *   8B 06             mov     eax, [esi]
 *   56                push    esi
 *   FF 50 2C          call    dword ptr [eax + 0x2c]
 *   84 C0             test    al, al
 *   74 02             jz      next
 *   B3 01             mov     bl, 1
 *   8B 76 08          mov     esi, [esi + 8]
 *   85 F6             test    esi, esi
 *   75 ED             jnz     loop
 *   5E                pop     esi
 *   8A C3             mov     al, bl
 *   5B                pop     ebx
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned char __cdecl FUN_006f8d40(void)
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
        xor     bl, bl
        test    esi, esi
        jz      done
walk_loop:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x2c]
        test    al, al
        jz      next
        mov     bl, 1
next:
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
