/*
 * FUN_006a22e0 (7 B) — __fastcall: installs vtable 0x799d50 at [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a22e0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x799d50
        ret
    }
}
