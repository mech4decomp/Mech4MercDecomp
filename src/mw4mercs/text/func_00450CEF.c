/*
 * FUN_00450CEF (18 B) — nop pad + __stdcall setter: stores two args
 * into [ecx+0x64] and [ecx+0x68], ret 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00450CEF(void)
{
    __asm {
        nop
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0x64], eax
        mov     dword ptr [ecx + 0x68], edx
        ret     8
    }
}
