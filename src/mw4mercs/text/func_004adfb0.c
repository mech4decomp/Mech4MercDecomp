/*
 * FUN_004ADFB0 (23 B) — __thiscall setter.
 *   Sets [ecx+8]=0, [ecx+0x10]=0, [ecx+0xc]=0, [ecx+4]=param, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004adfb0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [ecx + 0x10], eax
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 4], eax
        mov     al, 1
        ret     4
    }
}
