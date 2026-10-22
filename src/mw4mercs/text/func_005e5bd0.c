/*
 * FUN_005e5bd0 (51 B) — __thiscall (ECX = this), RET 8.
 *
 * Clears the six aim-vector fields if the "aiming active" flag
 * (ECX+0x299) is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005e5bd0(void)
{
    __asm {
        mov     dl, byte ptr [ecx + 0x299]
        xor     eax, eax
        cmp     dl, al
        jz      L_5c00
        mov     dword ptr [ecx + 0x17c], eax
        mov     dword ptr [ecx + 0x178], eax
        mov     dword ptr [ecx + 0x174], eax
        mov     dword ptr [ecx + 0x194], eax
        mov     dword ptr [ecx + 0x190], eax
        mov     dword ptr [ecx + 0x18c], eax
    L_5c00:
        ret     8
    }
}
