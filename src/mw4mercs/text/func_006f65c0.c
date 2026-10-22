/*
 * FUN_006F65C0 (35 B) — One-time initialization check. If global
 * 0x8493D7 == 1, returns 0. Otherwise calls FUN_00738DC0(PTR_0x7B6ED0),
 * sets 0x8493D7 to 1 - (result != 0), returns the new value.
 *
 * __cdecl.
 *
 * Disassembly:
 *   80 3D D7 93 84 00 01 cmp byte ptr [0x8493D7], 1
 *   75 03             jnz     init
 *   32 C0             xor     al, al
 *   C3                ret
 *   A1 D0 6E 7B 00    mov     eax, [0x7B6ED0]
 *   50                push    eax
 *   E8 E9 27 04 00    call    FUN_00738DC0
 *   F7 D8             neg     eax
 *   1A C0             sbb     al, al
 *   FE C0             inc     al
 *   A2 D7 93 84 00    mov     [0x8493D7], al
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

int __cdecl FUN_00738DC0(int);

__declspec(naked) unsigned char __cdecl FUN_006f65c0(void)
{
    __asm {
        _emit 0x80
        _emit 0x3D
        _emit 0xD7
        _emit 0x93
        _emit 0x84
        _emit 0x00
        _emit 0x01
        jnz     do_init
        xor     al, al
        ret
do_init:
        _emit 0xA1
        _emit 0xD0
        _emit 0x6E
        _emit 0x7B
        _emit 0x00
        push    eax
        call    FUN_00738DC0
        neg     eax
        sbb     al, al
        inc     al
        _emit 0xA2
        _emit 0xD7
        _emit 0x93
        _emit 0x84
        _emit 0x00
        ret
    }
}
