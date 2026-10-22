/*
 * FUN_00682820 (11 B) — __thiscall (RET 0). Sets byte [this+4 + 0x548] = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00682820(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        mov     byte ptr [eax + 0x548], 1
        ret
    }
}
