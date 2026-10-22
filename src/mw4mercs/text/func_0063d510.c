/*
 * FUN_0063d510 (13 B) — __thiscall setter: stores arg into [this+0x14c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0063d510(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        mov     dword ptr [ecx+0x14c], eax
        ret     0x4
    }
}
