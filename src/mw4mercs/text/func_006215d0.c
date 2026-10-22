/*
 * FUN_006215d0 (16 B) — ABL interpreter __thiscall getter: returns
 * (this->[0x2bc] - this->[0x2b8]) >> 4 (element count of a 16-byte array).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006215d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x2bc]
        sub     eax, dword ptr [ecx+0x2b8]
        sar     eax, 0x4
        ret
    }
}
