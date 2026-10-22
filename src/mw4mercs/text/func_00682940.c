/*
 * FUN_00682940 (10 B) — __stdcall setter: stores arg0 into [ecx+8], ret 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00682940(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 8], eax
        ret     4
    }
}
