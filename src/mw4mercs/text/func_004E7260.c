/*
 * FUN_004E7260 (10 B) — __stdcall setter: stores arg0 into [ecx+0x2c], ret 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004E7260(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x2c], eax
        ret     4
    }
}
