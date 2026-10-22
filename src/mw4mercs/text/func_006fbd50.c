/*
 * FUN_006FBD50 (68 B) — GetSystemTimeAsFileTime wrapper (cached).
 *
 * __cdecl. Returns a FILETIME as a 64-bit value (EDX:EAX). On first call,
 * sets global flag 0x00858B90, calls GetSystemTimeAsFileTime, and caches
 * the result in globals 0x00858B18/0x00858B1C. Subsequent calls return
 * the cached value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fbd50(void)
{
    __asm {
        _emit   0xA0
        _emit   0x90
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        sub     esp, 8
        test    al, al
        jnz     l_cached
        _emit   0x8D
        _emit   0x44
        _emit   0x24
        _emit   0x00
        push    eax
        _emit   0xC6
        _emit   0x05
        _emit   0x90
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        _emit   0x01
        _emit   0xFF
        _emit   0x15
        _emit   0x50
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        _emit   0x8B
        _emit   0x44
        _emit   0x24
        _emit   0x00
        _emit   0x8B
        _emit   0x54
        _emit   0x24
        _emit   0x04
        _emit   0xA3
        _emit   0x18
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        _emit   0x89
        _emit   0x15
        _emit   0x1C
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        add     esp, 8
        ret
    l_cached:
        _emit   0xA1
        _emit   0x18
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        _emit   0x8B
        _emit   0x15
        _emit   0x1C
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        add     esp, 8
        ret
    }
}
