/*
 * FUN_004B61D0 (8 B) — stores a code pointer (0x4B61E0) at [ecx+0x1c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004B61D0(void)
{
    __asm {
        mov     dword ptr [ecx + 0x1c], 0x4b61e0
        ret
    }
}
