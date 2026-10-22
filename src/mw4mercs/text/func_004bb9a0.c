/*
 * FUN_004BB9A0 (39 B) — Cleanup function (__cdecl).
 * If global DAT_007daa58 is non-null, calls FUN_00415200() then frees it.
 * Sets global to NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415200(void *ptr);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_004bb9a0(void)
{
    __asm {
        push    esi
        _emit 0x8b
        _emit 0x35
        _emit 0x58
        _emit 0xaa
        _emit 0x7d
        _emit 0x00
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        _emit 0xc7
        _emit 0x05
        _emit 0x58
        _emit 0xaa
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop     esi
        ret
    }
}
