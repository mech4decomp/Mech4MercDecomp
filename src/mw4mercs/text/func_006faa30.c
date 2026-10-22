/*
 * FUN_006FAA30 (72 B) — FPU control word setter.
 *
 * __cdecl, RET 8 (2 params). Sets global 0x00849EAC to 0, 0x00849EAD
 * to param2, and 0x007B6EE0 to 0x27F. If global 0x008597C0 is 0 and
 * param2 is non-zero, masks bit 8 (0x100) of the control word (clears
 * the precision exception mask). Then executes FNINIT and FLDCW.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006faa30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [ebp + 0xC]
        _emit   0xC6
        _emit   0x05
        _emit   0xAC
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        _emit   0x00
        _emit   0xA2
        _emit   0xAD
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        _emit   0x66
        _emit   0xC7
        _emit   0x05
        _emit   0xE0
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
        _emit   0x7F
        _emit   0x02
        _emit   0x8B
        _emit   0x0D
        _emit   0xC0
        _emit   0x97
        _emit   0x85
        _emit   0x00
        test    ecx, ecx
        jnz     l_done
        test    al, al
        jz      l_done
        xor     eax, eax
        _emit   0x66
        _emit   0xA1
        _emit   0xE0
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
        and     eax, 0xFCFF
        _emit   0x66
        _emit   0xA3
        _emit   0xE0
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
    l_done:
        fninit
        _emit   0xD9
        _emit   0x2D
        _emit   0xE0
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
        pop     ebp
        ret     8
    }
}
