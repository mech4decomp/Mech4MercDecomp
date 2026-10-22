/*
 * FUN_5e010ba0 (16 B) — increment refcount at [obj+0x14], return new value.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e010ba0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x14]
        inc     ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     eax, ecx
        ret     0x4
    }
}
