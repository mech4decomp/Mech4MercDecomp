/*
 * FUN_006FAAB0 (98 B) — FPU control word validation.
 *
 * Checks FPU control word against expected values. If DAT_00849eac is
 * set and the low byte of the FPU CW != 0x7a, calls FUN_006FAB90 with
 * "Math exceptions have been reset" and INT3 if non-zero return.
 * Then checks DAT_00849ead and the high byte of FPU CW; if non-zero,
 * calls FUN_006FAB90 with "Math precision has been reset" and INT3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *);

__declspec(naked) void __cdecl FUN_006faab0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        _emit   0x9B
        _emit   0xD9
        _emit   0x7D
        _emit   0xFC
        _emit   0xA1
        _emit   0xB8
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        test    eax, eax
        jnz     l_skip2
        _emit   0xA0
        _emit   0xAC
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        test    al, al
        jz      l_skip1
        cmp     byte ptr [ebp - 4], 0x7a
        jz      l_skip1
        push    0x7a014c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_skip1
        int     3
    l_skip1:
        _emit   0xA1
        _emit   0xB8
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        test    eax, eax
        jnz     l_skip2
        _emit   0xA0
        _emit   0xAD
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        test    al, al
        jz      l_skip2
        mov     eax, dword ptr [ebp - 4]
        test    ah, 0xff
        jz      l_skip2
        push    0x7a012c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_skip2
        int     3
    l_skip2:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
