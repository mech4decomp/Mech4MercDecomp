/*
 * FUN_004ADE00 (19 B) — __thiscall setter.
 *   Sets [ecx+4] = param, [ecx+8] = 0, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004ade00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 8], 0
        mov     al, 1
        ret     4
    }
}
