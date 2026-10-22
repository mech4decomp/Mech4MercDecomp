/*
 * FUN_0042b7c0 (17 B) — __thiscall getter: reads a dword at this+0xac,
 * stores it through the out-pointer arg (esp+4), returns AL=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0042b7c0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xac]
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx], eax
        mov     al, 0x1
        ret     0x4
    }
}
