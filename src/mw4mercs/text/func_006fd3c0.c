/*
 * FUN_006FD3C0 (49 B) — D3D device event handler.
 *
 * If param2->field_08 is 0x1301 or 0x1302, calls FUN_006fde20, sets
 * global 0x007b6f08 to -1, and zeros globals 0x0085684c and 0x00856848.
 * Always returns 0.
 *
 * __stdcall, RET 8 (two stack params: param1, param2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fde20(void);

__declspec(naked) int __stdcall FUN_006fd3c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     eax, dword ptr [eax + 8]
        sub     eax, 0x1301
        jz      l_match
        dec     eax
        jnz     l_done
    l_match:
        call    FUN_006fde20
        xor     eax, eax
        _emit   0xC7
        _emit   0x05
        _emit   0x08
        _emit   0x6F
        _emit   0x7B
        _emit   0x00
        _emit   0xFF
        _emit   0xFF
        _emit   0xFF
        _emit   0xFF
        _emit   0xA3
        _emit   0x4C
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0xA3
        _emit   0x48
        _emit   0x68
        _emit   0x85
        _emit   0x00
    l_done:
        xor     eax, eax
        ret     8
    }
}
