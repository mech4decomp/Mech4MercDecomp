/*
 * FUN_004CFB80 (56 B) — Destructor-like cleanup.
 *
 * __thiscall (ECX = this), RET.
 * Sets vtable at [this] to 0x77237c, frees this[1] via FUN_004084e0,
 * zeroes globals, frees this[4] if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_004cfb80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        push    eax
        _emit 0xC7
        _emit 0x06
        _emit 0x7C
        _emit 0x23
        _emit 0x77
        _emit 0x00
        call    FUN_004084e0
        mov     esi, dword ptr [esi + 0x10]
        xor     eax, eax
        add     esp, 4
        cmp     esi, eax
        _emit 0xA3
        _emit 0xA0
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        _emit 0xA3
        _emit 0x48
        _emit 0x8A
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x44
        _emit 0x8A
        _emit 0x85
        _emit 0x00
        jz      l_ret
        push    esi
        call    FUN_004084e0
        add     esp, 4

    l_ret:
        pop     esi
        ret
    }
}
