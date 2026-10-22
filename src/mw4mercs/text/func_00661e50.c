/*
 * FUN_00661e50 (7 B) — __thiscall. Installs vtable 0x795410 into [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00661e50(void)
{
    __asm {
        mov     dword ptr [ecx], 0x795410
        ret
    }
}
