/*
 * FUN_5e0019b0 (16 B) — increments the refcount at [param_1 + 0x54]
 * and returns the new value.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e0019b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x54]
        inc     ecx
        mov     dword ptr [eax + 0x54], ecx
        mov     eax, ecx
        ret     0x4
    }
}
