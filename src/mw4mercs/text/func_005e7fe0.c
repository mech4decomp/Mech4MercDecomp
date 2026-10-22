/*
 * FUN_005E7FE0 (13 B) — __cdecl, RET 4 (1 param).
 * *param1 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005e7fe0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], 0x0
        ret     0x4
    }
}
