/*
 * FUN_006FEC00 (78 B) — ZoneMatch initialization.
 *
 * __cdecl. If global 0x008AAAF0 is zero, calls FUN_006FAB90 with an
 * error string and INT3s if non-zero. Then allocates 0x24 bytes via
 * FUN_004084D0. If allocation succeeds, initializes the struct (vtable
 * 0x7A0D74, byte at +4 = 0), stores at global 0x00856834, calls
 * FUN_006F88C0, returns 1. Otherwise clears global and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *);
extern int __cdecl FUN_004084d0(int);
extern void __cdecl FUN_006f88c0(void *);

__declspec(naked) void __cdecl FUN_006fec00(void)
{
    __asm {
        _emit   0xA0
        _emit   0xF0
        _emit   0xAA
        _emit   0x8A
        _emit   0x00
        test    al, al
        jnz     l_alloc
        push    0x7A0DA8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_alloc
        int     3
    l_alloc:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        push    eax
        mov     byte ptr [eax + 4], 0
        mov     dword ptr [eax], 0x7A0D74
        _emit   0xA3
        _emit   0x34
        _emit   0x68
        _emit   0x85
        _emit   0x00
        call    FUN_006f88c0
        mov     al, 1
        ret
    l_fail:
        _emit   0xC7
        _emit   0x05
        _emit   0x34
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        xor     al, al
        ret
    }
}
