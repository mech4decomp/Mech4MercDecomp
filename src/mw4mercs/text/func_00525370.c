/*
 * FUN_00525370 (47 B) — __stdcall method on ecx.
 * Reads [arg+4][0], compares to 5. If equal, sets
 * [ecx+0x40EB4] = -1. Otherwise sets [ecx+0x40EB4] = value+1.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00525370(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        cmp     eax, 5
        jne     label_inc
        mov     dword ptr [ecx + 0x40EB4], 0xFFFFFFFF
        mov     eax, 1
        ret     8
label_inc:
        inc     eax
        mov     dword ptr [ecx + 0x40EB4], eax
        mov     eax, 1
        ret     8
    }
}
