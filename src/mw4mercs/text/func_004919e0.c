/*
 * FUN_004919e0 (75 B) — __cdecl, float math helper.
 * Computes scaled deltas and stores to global variables.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004919e0(void)
{
    __asm {
        _emit 0xDB  /* fild dword ptr [0x00858940] */
        _emit 0x05
        _emit 0x40
        _emit 0x89
        _emit 0x85
        _emit 0x00
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x8]
        fmul    st(0), st(1)
        _emit 0xD9  /* fstp dword ptr [0x007da87c] */
        _emit 0x1D
        _emit 0x7C
        _emit 0xA8
        _emit 0x7D
        _emit 0x00
        _emit 0xDB  /* fild dword ptr [0x00858944] */
        _emit 0x05
        _emit 0x44
        _emit 0x89
        _emit 0x85
        _emit 0x00
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x4]
        fmul    dword ptr [esp + 0x10]
        _emit 0xD9  /* fstp dword ptr [0x007da878] */
        _emit 0x1D
        _emit 0x78
        _emit 0xA8
        _emit 0x7D
        _emit 0x00
        fmul    dword ptr [esp + 0x8]
        _emit 0xD9  /* fstp dword ptr [0x007da874] */
        _emit 0x1D
        _emit 0x74
        _emit 0xA8
        _emit 0x7D
        _emit 0x00
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x4]
        _emit 0xD9  /* fstp dword ptr [0x007da870] */
        _emit 0x1D
        _emit 0x70
        _emit 0xA8
        _emit 0x7D
        _emit 0x00
        ret
    }
}
