/*
 * FUN_004B5D90 (7 B) — getter: returns dword at [ecx+0x148].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004B5D90(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x148]
        ret
    }
}
