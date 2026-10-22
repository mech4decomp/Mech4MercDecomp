/*
 * FUN_004C42B0 (62 B) — Cleanup function.
 *
 * __cdecl. Frees DAT_007dab04 via FUN_00415200 + FUN_004084e0,
 * zeroes it, calls FUN_006f4850(DAT_007dab00, 1), zeroes DAT_007dab00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415200(void);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_006f4850(void *ptr, int flag);

__declspec(naked) void __cdecl FUN_004c42b0(void)
{
    __asm {
        push    esi
        _emit 0x8B
        _emit 0x35
        _emit 0x04
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        test    esi, esi
        jz      l_free_done
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4

    l_free_done:
        _emit 0xA1
        _emit 0x00
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        push    1
        push    eax
        _emit 0xC7
        _emit 0x05
        _emit 0x04
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call    FUN_006f4850
        _emit 0xC7
        _emit 0x05
        _emit 0x00
        _emit 0xAB
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
