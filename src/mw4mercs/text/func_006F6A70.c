/*
 * FUN_006F6A70 (10 B) — setter: stores the single argument into [ecx+4]
 * (__stdcall, ret 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006F6A70(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     dword ptr [ecx+4], eax
        ret     4
    }
}
