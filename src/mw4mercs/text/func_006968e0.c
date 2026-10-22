/*
 * FUN_006968e0 (4 B) — __thiscall accessor: returns byte *(this+0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006968e0(void)
{
    __asm {
        mov     al, byte ptr [ecx+10h]
        ret
    }
}
