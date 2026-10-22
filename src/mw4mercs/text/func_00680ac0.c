/*
 * FUN_00680ac0 (4 B) — HUD element accessor (__fastcall).
 * Returns [ecx+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00680ac0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x18]
        ret
    }
}
