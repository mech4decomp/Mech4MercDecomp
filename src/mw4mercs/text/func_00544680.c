/*
 * FUN_00544680 (7 B) — Gets dword at [ecx+0x204D20].
 * Bytes: 8B 81 20 4D 20 00 C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00544680(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x204D20]
        ret
    }
}
