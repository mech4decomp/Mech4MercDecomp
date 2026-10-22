/*
 * FUN_005df940 (149 B) — __fastcall site-flag timer update
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005df940(void)
{
    __asm {
        push ecx
        push esi
        mov esi, ecx
        _emit 0xE8          /* call 0x005e0d90 */
        _emit 0x47
        _emit 0x14
        _emit 0x00
        _emit 0x00
        test al, al
        mov ecx, esi
        jnz L957
        _emit 0xE8          /* call 0x005e0bd0 */
        _emit 0x7C
        _emit 0x12
        _emit 0x00
        _emit 0x00
        pop esi
        pop ecx
        ret
L957:
        _emit 0xE8          /* call 0x005e0e00 */
        _emit 0xA4
        _emit 0x14
        _emit 0x00
        _emit 0x00
        cmp al, 0x1
        jnz L96a
        mov ecx, esi
        _emit 0xE8          /* call 0x005e0e70 */
        _emit 0x09
        _emit 0x15
        _emit 0x00
        _emit 0x00
        pop esi
        pop ecx
        ret
L96a:
        fld dword ptr [esi + 0x488]
        _emit 0xD8          /* fcomp dword ptr [0x0076c5b0] — FPU mem [imm32] */
        _emit 0x1D
        _emit 0xB0
        _emit 0xC5
        _emit 0x76
        _emit 0x00
        fnstsw ax
        test ah, 0x40
        jz L98a
        push 0x0
        _emit 0xE8          /* call 0x00707e70 */
        _emit 0xEC
        _emit 0x84
        _emit 0x12
        _emit 0x00
        fstp dword ptr [esi + 0x488]
L98a:
        _emit 0xD9          /* fld dword ptr [0x00788768] — FPU mem [imm32] */
        _emit 0x05
        _emit 0x68
        _emit 0x87
        _emit 0x78
        _emit 0x00
        push 0x0
        fadd dword ptr [esi + 0x488]
        fstp dword ptr [esp + 0x8]
        _emit 0xE8          /* call 0x00707e70 */
        _emit 0xCF
        _emit 0x84
        _emit 0x12
        _emit 0x00
        fcomp dword ptr [esp + 0x4]
        fnstsw ax
        test ah, 0x41
        jnz L9d2
        _emit 0xD9          /* fld dword ptr [0x00788768] — FPU mem [imm32] */
        _emit 0x05
        _emit 0x68
        _emit 0x87
        _emit 0x78
        _emit 0x00
        mov ecx, esi
        fadd dword ptr [esi + 0x488]
        fstp dword ptr [esi + 0x488]
        _emit 0xE8          /* call 0x005df620 */
        _emit 0x5B
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        add eax, 0x14
        push eax
        push 0x27
        mov ecx, esi
        _emit 0xE8          /* call 0x005e1200 */
        _emit 0x2E
        _emit 0x18
        _emit 0x00
        _emit 0x00
L9d2:
        pop esi
        pop ecx
        ret
    }
}
