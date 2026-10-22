/*
 * FUN_005cdde0 (30 B) — __thiscall, RET 4. Scalar-deleting-destructor style:
 * calls FUN_005cde00, and if flag bit 0 set, frees via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cdde0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        _emit 0xE8
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        test    byte ptr [esp + 8], 1
        jz      L1
        push    esi
        _emit 0xE8
        _emit 0xEB
        _emit 0xA6
        _emit 0xE3
        _emit 0xFF
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
