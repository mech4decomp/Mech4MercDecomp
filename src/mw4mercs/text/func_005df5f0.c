/*
 * FUN_005df5f0 (35 B) — __fastcall site-flag timer query
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005df5f0(void)
{
    __asm {
        push esi
        mov esi, ecx
        _emit 0xE8          /* call 0x005df620 */
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        test eax, eax
        jz L60b
        push 0x0
        _emit 0xE8          /* call 0x00707e70 */
        _emit 0x6D
        _emit 0x88
        _emit 0x12
        _emit 0x00
        fsub qword ptr [esi + 0x424]
        pop esi
        ret
L60b:
        _emit 0xDD          /* fld qword ptr [0x0076d970] — FPU mem [imm32] not encodable */
        _emit 0x05
        _emit 0x70
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        pop esi
        ret
    }
}
