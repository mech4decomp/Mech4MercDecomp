/*
 * FUN_0065e450 (10 B) — __thiscall setter: stores arg to [this+4]. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065e450(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x4], eax
        ret     0x4
    }
}
