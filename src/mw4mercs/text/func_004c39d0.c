/*
 * FUN_004C39D0 (35 B) — Copy 3 dwords from globals to this+0x130.
 *
 * __thiscall (ECX = this).
 * Copies [0x007B3910], [0x007B3914], [0x007B3918] to
 * this+0x130, this+0x134, this+0x138 respectively.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004c39d0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x10
        _emit 0x39
        _emit 0x7B
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0x14
        _emit 0x39
        _emit 0x7B
        _emit 0x00
        mov     dword ptr [ecx + 0x130], eax
        _emit 0xA1
        _emit 0x18
        _emit 0x39
        _emit 0x7B
        _emit 0x00
        mov     dword ptr [ecx + 0x134], edx
        mov     dword ptr [ecx + 0x138], eax
        ret
    }
}
