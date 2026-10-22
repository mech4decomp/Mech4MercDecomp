/*
 * FUN_005faeb0 (13 B) — __thiscall setter: stores arg0 into this+0x2fc.
 * RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005faeb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x2fc], eax
        ret     0x4
    }
}
