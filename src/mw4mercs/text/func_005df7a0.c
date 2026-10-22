/*
 * FUN_005df7a0 (101 B) — __fastcall site-flag timer check
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005df7a0(void)
{
    __asm {
        push esi
        mov esi, ecx
        fld qword ptr [esi + 0x438]
        _emit 0xDC          /* fcomp qword ptr [0x0076d970] — FPU mem [imm32] */
        _emit 0x1D
        _emit 0x70
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        fnstsw ax
        test ah, 0x40
        jnz L7fc
        _emit 0xE8          /* call 0x005e1140 */
        _emit 0x85
        _emit 0x19
        _emit 0x00
        _emit 0x00
        cmp eax, -0x1
        jz L7fc
        push 0x0
        _emit 0xE8          /* call 0x00707e70 */
        _emit 0xA9
        _emit 0x86
        _emit 0x12
        _emit 0x00
        fcomp qword ptr [esi + 0x438]
        fnstsw ax
        test ah, 0x41
        jnz L7fc
        mov eax, dword ptr [esi + 0x44c]
        cmp eax, 0x8
        jz L7f3
        push eax
        push 0x7888a8
        _emit 0xE8          /* call 0x00563550 */
        _emit 0x66
        _emit 0x3D
        _emit 0xF8
        _emit 0xFF
        push eax
        _emit 0xE8          /* call 0x00563c80 */
        _emit 0x90
        _emit 0x44
        _emit 0xF8
        _emit 0xFF
        add esp, 0xc
L7f3:
        mov ecx, esi
        _emit 0xE8          /* call 0x005e0b10 */
        _emit 0x16
        _emit 0x13
        _emit 0x00
        _emit 0x00
        pop esi
        ret
L7fc:
        mov ecx, esi
        _emit 0xE8          /* call 0x005df810 */
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop esi
        ret
    }
}
