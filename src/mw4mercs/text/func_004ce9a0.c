/*
 * FUN_004CE9A0 (39 B) — Static singleton destructor.
 *
 * __cdecl. Destroys the singleton at [0x007DB09C].
 * If non-null, calls FUN_004D5D20 on it, then frees it via FUN_004084E0,
 * then zeroes the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_004d5d20(void);

__declspec(naked) void __cdecl FUN_004ce9a0(void)
{
    __asm {
        push    esi
        _emit 0x8B
        _emit 0x35
        _emit 0x9C
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        test    esi, esi
        je      l_zero_global
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero_global:
        _emit 0xC7
        _emit 0x05
        _emit 0x9C
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop     esi
        ret
    }
}
