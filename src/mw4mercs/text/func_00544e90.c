/*
 * FUN_00544e90 (10 B) — Sets byte at [ecx+0x308C] to 1, returns 0 (ret 8).
 * Bytes: C6 81 8C 30 00 00 01 C2 08 00
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00544e90(void)
{
    __asm {
        mov     byte ptr [ecx + 0x308C], 1
        ret     8
    }
}
