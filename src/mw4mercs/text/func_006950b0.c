/*
 * FUN_006950b0 (4 B) — __thiscall accessor: returns *(this+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006950b0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+24h]
        ret
    }
}
