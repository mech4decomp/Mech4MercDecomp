/*
 * FUN_5e00fff0 (18 B) — linked-list head insert.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00fff0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0x30]
        mov     dword ptr [ecx + 0x30], eax
        mov     dword ptr [eax + 0x20], edx
        xor     eax, eax
        ret     0x4
    }
}
