/*
 * FUN_5e00ea70 (14 B) — __fastcall (ECX = this).
 * Sets vtable pointers at [this+0] and [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_5e00ea70(void)
{
    __asm {
        mov     dword ptr [ecx], 0x5e035adc
        mov     dword ptr [ecx + 0x4], 0x5e035ab8
        ret
    }
}
