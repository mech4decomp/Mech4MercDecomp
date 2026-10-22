/*
 * FUN_006F64F0 (42 B) — Destructor: sets vtable to 0x79FC50, frees
 * this+0x04 if non-null, calls FUN_006F5230() on this+0x18, sets
 * vtable to 0x79FC54.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   56                push    esi
 *   8B F1             mov     esi, ecx
 *   8B 46 04          mov     eax, [esi + 4]
 *   85 C0             test    eax, eax
 *   C7 06 50 FC 79 00 mov     dword ptr [esi], 0x79FC50
 *   74 0A             jz      skip_free
 *   50                push    eax
 *   FF 15 D0 B2 76 00 call    dword ptr [0x76B2D0]
 *   83 C4 04          add     esp, 4
 *   8D 4E 18          lea     ecx, [esi + 0x18]
 *   E8 1E ED FF FF    call    FUN_006F5230
 *   C7 06 54 FC 79 00 mov     dword ptr [esi], 0x79FC54
 *   5E                pop     esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006F5230(void *);

__declspec(naked) void __fastcall FUN_006f64f0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        mov     dword ptr [esi], 0x79FC50
        jz      skip_free
        push    eax
        _emit 0xFF
        _emit 0x15
        _emit 0xD0
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        add     esp, 4
skip_free:
        lea     ecx, dword ptr [esi + 0x18]
        call    FUN_006F5230
        mov     dword ptr [esi], 0x79FC54
        pop     esi
        ret
    }
}
