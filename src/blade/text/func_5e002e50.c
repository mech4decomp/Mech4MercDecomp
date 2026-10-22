/*
 * FUN_5e002e50 (16 B) — __stdcall, RET 4. Increments the refcount at +0x38
 * and returns the new value.
 *
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e002e50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x38]
        inc     ecx
        mov     dword ptr [eax + 0x38], ecx
        mov     eax, ecx
        ret     0x4
    }
}
