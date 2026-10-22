/*
 * FUN_006F90E0 (43 B) — Store param_1 in global 0x8493CC, then walk
 * the doubly-linked list at global 0x8493C8. For each node, call
 * vtable[0x24] (slot 9) with param_1. Returns 1.
 *
 * __stdcall RET 4.
 *
 * Disassembly:
 *   56                push    esi
 *   8B 35 C8 93 84 00 mov     esi, [0x8493C8]
 *   85 F6             test    esi, esi
 *   57                push    edi
 *   8B 7C 24 0C       mov     edi, [esp + 0xc]
 *   89 3D CC 93 84 00 mov     [0x8493CC], edi
 *   74 0E             jz      done
 *   8B 06             mov     eax, [esi]
 *   57                push    edi
 *   56                push    esi
 *   FF 50 24          call    dword ptr [eax + 0x24]
 *   8B 76 08          mov     esi, [esi + 8]
 *   85 F6             test    esi, esi
 *   75 F2             jnz     loop
 *   5F                pop     edi
 *   B0 01             mov     al, 1
 *   5E                pop     esi
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006f90e0(int param_1)
{
    __asm {
        push    esi
        _emit 0x8B
        _emit 0x35
        _emit 0xC8
        _emit 0x93
        _emit 0x84
        _emit 0x00
        test    esi, esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        _emit 0x89
        _emit 0x3D
        _emit 0xCC
        _emit 0x93
        _emit 0x84
        _emit 0x00
        jz      done
walk_loop:
        mov     eax, dword ptr [esi]
        push    edi
        push    esi
        call    dword ptr [eax + 0x24]
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     walk_loop
done:
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    }
}
