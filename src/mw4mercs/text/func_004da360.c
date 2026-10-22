/*
 * FUN_004da360 (97 B) — __thiscall. MLR/Adept core state machine:
 * remaps the value at [this+0x158] (0->1, 2->3, 0x20->0x31, 0xe->0xf)
 * and sets the byte at [this+0xc8] to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004da360(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x158]
        test    eax, eax
        jnz     L1
        mov     eax, 0x1
        mov     dword ptr [ecx + 0x158], eax
        mov     byte ptr [ecx + 0xc8], al
        ret
L1:
        cmp     eax, 0x2
        jnz     L2
        mov     dword ptr [ecx + 0x158], 0x3
        mov     byte ptr [ecx + 0xc8], 0x1
        ret
L2:
        cmp     eax, 0x20
        jnz     L3
        mov     dword ptr [ecx + 0x158], 0x31
        mov     byte ptr [ecx + 0xc8], 0x1
        ret
L3:
        cmp     eax, 0xe
        jnz     L4
        mov     dword ptr [ecx + 0x158], 0xf
L4:
        mov     byte ptr [ecx + 0xc8], 0x1
        ret
    }
}
