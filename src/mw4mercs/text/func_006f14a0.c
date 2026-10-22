/*
 * FUN_006F14A0 (47 B) — Range check: return 1 if param_1 >= 0x76d978
 * (float ~6.32e-39) and param_1 <= 0x7899ec (float 90.0), else 0.
 * RET 4.
 *
 * __cdecl, RET 4 (1 stack param).
 *
 * Disassembly:
 *   D9 44 24 04       fld     dword ptr [esp + 4]
 *   D8 1D 78 D9 76 00 fcomp   dword ptr [0x0076d978]
 *   DF E0             fnstsw  ax
 *   F6 C4 01          test    ah, 1
 *   75 19             jnz     ret0
 *   D9 44 24 04       fld     dword ptr [esp + 4]
 *   D8 1D EC 99 78 00 fcomp   dword ptr [0x007899ec]
 *   DF E0             fnstsw  ax
 *   F6 C4 41          test    ah, 0x41
 *   74 08             jz      ret0
 *   B8 01 00 00 00    mov     eax, 1
 *   C2 04 00          ret     4
 *   33 C0             xor     eax, eax
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006f14a0(float param_1)
{
    __asm {
        fld     dword ptr [esp + 4]
        _emit 0xD8
        _emit 0x1D
        _emit 0x78
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 1
        jnz     ret0
        fld     dword ptr [esp + 4]
        _emit 0xD8
        _emit 0x1D
        _emit 0xEC
        _emit 0x99
        _emit 0x78
        _emit 0x00
        fnstsw  ax
        test    ah, 0x41
        jz      ret0
        mov     eax, 1
        ret     4
ret0:
        xor     eax, eax
        ret     4
    }
}
