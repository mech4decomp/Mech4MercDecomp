/*
 * FUN_004E8060 (10 B) — __thiscall setter: this->field_50 = param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004e8060(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0x50], eax
        ret 4
    }
}
