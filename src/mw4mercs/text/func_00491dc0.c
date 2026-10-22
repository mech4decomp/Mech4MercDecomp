/*
 * FUN_00491dc0 (27 B) — __cdecl.
 * Calls vtable method at offset 0 on global pointer, then clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00491dc0(void)
{
    __asm {
        _emit 0x8B  /* mov ecx, [0x007da884] */
        _emit 0x0D
        _emit 0x84
        _emit 0xA8
        _emit 0x7D
        _emit 0x00
        test    ecx, ecx
        jz      l_done
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        _emit 0xC7  /* mov dword ptr [0x007da884], 0 */
        _emit 0x05
        _emit 0x84
        _emit 0xA8
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    l_done:
        ret
    }
}
