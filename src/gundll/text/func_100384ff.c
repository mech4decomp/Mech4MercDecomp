/*
 * FUN_100384ff (19 B) - __cdecl.
 * Sets [ESP+4]->[+0x50] = 0x10051de0 (vtable) and [+0x14] = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_100384ff(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax + 0x50], 0x10051de0
        mov     dword ptr [eax + 0x14], 1
        ret
    }
}
