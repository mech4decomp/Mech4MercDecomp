/*
 * FUN_00696920 (4 B) — __thiscall accessor: returns byte *(this+0x12).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00696920(void)
{
    __asm {
        mov     al, byte ptr [ecx+12h]
        ret
    }
}
