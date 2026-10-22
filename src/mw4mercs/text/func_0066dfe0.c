/*
 * FUN_0066dfe0 (11 B) - __fastcall (this in ECX) setter: *(this+0xac) = 0xffff0000.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0066dfe0(void)
{
    __asm {
        mov     dword ptr [ecx + 0xac], 0xffff0000
        ret
    }
}
