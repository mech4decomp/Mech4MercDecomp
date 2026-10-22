/*
 * FUN_5e00ea50 (30 B) — __fastcall (ECX = this).
 * Constructor: sets up vtable pointers at [this+0], [this+4], [this+8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_5e00ea50(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax + 0x4], 0x5e035afc
        mov     dword ptr [eax + 0x8], 0x0
        mov     dword ptr [eax], 0x5e035adc
        mov     dword ptr [eax + 0x4], 0x5e035ab8
        ret
    }
}
