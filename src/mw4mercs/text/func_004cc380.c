/*
 * FUN_004CC380 (55 B) — Cleanup/shutdown function.
 *
 * __cdecl. Frees DAT_007db088 via FUN_004d5d20 + FUN_004084e0,
 * zeroes it, then calls vtable method on DAT_007db098 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d5d20(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_004cc380(void)
{
    __asm {
        push    esi
        _emit 0x8B
        _emit 0x35
        _emit 0x88
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        test    esi, esi
        jz      l_free_done
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 4

    l_free_done:
        _emit 0x8B
        _emit 0x0D
        _emit 0x98
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        test    ecx, ecx
        _emit 0xC7
        _emit 0x05
        _emit 0x88
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop     esi
        jz      l_ret
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]

    l_ret:
        ret
    }
}
