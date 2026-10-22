/*
 * FUN_006FE650 (35 B) — Setter for global 0x7B6F04. If param_1 < 0 or
 * param_1 > 999, sets global to -1; else sets global to param_1.
 * Returns 0.
 *
 * __stdcall RET 4.
 *
 * Disassembly:
 *   8B 44 24 04       mov     eax, [esp + 4]
 *   85 C0             test    eax, eax
 *   7C 0C             jl      set_neg
 *   3D E8 03 00 00    cmp     eax, 0x3e8
 *   A3 04 6F 7B 00    mov     [0x7B6F04], eax
 *   7C 0A             jl      done
 *   C7 05 04 6F 7B 00 FF FF FF FF mov dword ptr [0x7B6F04], -1
 *   33 C0             xor     eax, eax
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006fe650(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jl      set_neg
        cmp     eax, 0x3e8
        _emit 0xA3
        _emit 0x04
        _emit 0x6F
        _emit 0x7B
        _emit 0x00
        jl      done
set_neg:
        _emit 0xC7
        _emit 0x05
        _emit 0x04
        _emit 0x6F
        _emit 0x7B
        _emit 0x00
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
done:
        xor     eax, eax
        ret     4
    }
}
