/*
 * FUN_00557350 (7 B) — Gets dword at [ecx+0x368].
 * Bytes: 8B 81 68 03 00 00 C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00557350(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x368]
        ret
    }
}
