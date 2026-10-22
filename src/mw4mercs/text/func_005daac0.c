/*
 * FUN_005daac0 (17 B) — Zero-fill 0x19 dwords at 0x007f2468.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_005daac0(void)
{
    __asm {
        push    edi
        mov     ecx, 0x19
        xor     eax, eax
        mov     edi, 0x7f2468
        rep stosd
        pop     edi
        ret
    }
}
