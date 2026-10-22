/*
 * FUN_005f1560 (9 B) — __thiscall setter.
 *
 * Stores 10 into this->field_0.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005f1560(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax], 0xA
        ret
    }
}
