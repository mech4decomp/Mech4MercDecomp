/*
 * FUN_004AE290 (25 B) — __thiscall setter.
 *   Sets [ecx]=param1, [ecx+4]=0, [ecx+8]=param2, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004ae290(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], 0
        mov     dword ptr [ecx + 8], edx
        mov     al, 1
        ret     8
    }
}
