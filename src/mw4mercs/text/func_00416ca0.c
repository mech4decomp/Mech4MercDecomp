/*
 * FUN_00416ca0 (12 B) — __fastcall: [this+0x10] = [[this+0x10]+0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416ca0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ecx + 0x10]
        mov     dword ptr [eax + 0x10], edx
        ret
    }
}
