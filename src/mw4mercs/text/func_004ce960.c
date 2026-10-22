/*
 * FUN_004CE960 (62 B) — Allocator/init for Adept::Connection singleton.
 *
 * __cdecl. Allocates 0x20 bytes via FUN_004084d0, then calls
 * FUN_004d5c10 to construct an object. Stores result in DAT_007db09c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004d5c10(int size, const char *name, void *parent, int flags, void *vtable);

__declspec(naked) void __cdecl FUN_004ce960(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_set_null
        _emit 0x8B
        _emit 0x0D
        _emit 0x84
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        push    0x771b68
        push    2
        push    ecx
        push    0x771b98
        push    0x1d8
        mov     ecx, eax
        call    FUN_004d5c10
        _emit 0xA3
        _emit 0x9C
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        ret

    l_set_null:
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
        ret
    }
}
