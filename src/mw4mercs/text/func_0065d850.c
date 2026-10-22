/*
 * FUN_0065d850 (23 B) -- ABL bytecode helper. __thiscall setter:
 * stores two dword args into this+0x2bd0 / this+0x2bd4. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d850(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x2bd0], eax
        mov     dword ptr [ecx + 0x2bd4], edx
        ret     0x8
    }
}
