/*
 * FUN_004DA580 (8 B) — __fastcall clear bit 0x400000 at this+0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004da580(void)
{
    __asm {
        and dword ptr [ecx + 0x10], 0xffbfffff
        ret
    }
}
