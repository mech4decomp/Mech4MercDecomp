/*
 * FUN_005df9e0 (78 B) — __fastcall site-flag timer expiry check
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005df9e0(void)
{
    __asm {
        push esi
        mov esi, ecx
        fld qword ptr [esi + 0x440]
        _emit 0xDC          /* fcomp qword ptr [0x0076d970] — FPU mem [imm32] */
        _emit 0x1D
        _emit 0x70
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        fnstsw ax
        test ah, 0x1
        jz L9fd
        _emit 0xE8          /* call 0x005df420 */
        _emit 0x25
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        pop esi
        ret
L9fd:
        push 0x0
        _emit 0xE8          /* call 0x00707e70 */
        _emit 0x6C
        _emit 0x84
        _emit 0x12
        _emit 0x00
        fcomp qword ptr [esi + 0x440]
        fnstsw ax
        test ah, 0x41
        jnz La2c
        mov dword ptr [esi + 0x440], 0x0
        mov ecx, esi
        mov dword ptr [esi + 0x444], 0x0
        _emit 0xE8          /* call 0x005df390 */
        _emit 0x64
        _emit 0xF9
        _emit 0xFF
        _emit 0xFF
La2c:
        pop esi
        ret
    }
}
