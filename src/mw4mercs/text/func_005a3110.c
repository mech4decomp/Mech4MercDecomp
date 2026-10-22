/*
 * FUN_005a3110 (8 B) — Sets dword at this+0x1C to 0.
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005a3110(void)
{
    __asm {
        mov     dword ptr [ecx + 0x1C], 0
        ret
    }
}
