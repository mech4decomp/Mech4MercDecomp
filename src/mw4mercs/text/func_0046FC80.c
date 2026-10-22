/*
 * FUN_0046FC80 (17 B) — __stdcall setter: stores two args into
 * [ecx+0x1c] and [ecx+0x20], ret 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0046FC80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ecx + 0x20], edx
        ret     8
    }
}
