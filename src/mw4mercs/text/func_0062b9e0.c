/*
 * FUN_0062b9e0 (20 B) — ABL/game-logic small-object initializer.
 * Zeroes a 0xc-byte struct at ECX and stores a byte flag from the
 * stack arg into [ECX+8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0062b9e0(void)
{
    __asm {
        push    ecx
        mov     dl, byte ptr [esp + 0x3]
        xor     eax, eax
        mov     dword ptr [ecx], eax
        mov     byte ptr [ecx + 0x8], dl
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [ecx + 0x8], eax
        pop     ecx
        ret
    }
}
