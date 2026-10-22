/*
 * FUN_005aece0 (23 B) — __thiscall (ECX = this), RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005aece0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x348], eax
        mov     dword ptr [ecx + 0x344], edx
        ret     0x8
    }
}
