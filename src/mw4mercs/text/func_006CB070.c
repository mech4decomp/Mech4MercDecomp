/*
 * FUN_006CB070 (18 B) — __stdcall setter: sets byte [eax+0x38]=1 and
 * dword [eax+0x34]=arg1, ret 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006CB070(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        mov     byte ptr [eax + 0x38], 1
        mov     dword ptr [eax + 0x34], ecx
        ret     8
    }
}
