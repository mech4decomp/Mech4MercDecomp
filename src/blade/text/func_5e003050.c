/*
 * FUN_5e003050 (31 B) — __stdcall, RET 4. Returns the bit position of the
 * highest set bit (31 - leading-zero count) of the input.
 *
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003050(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, 0x1f
        test    ecx, 0x80000000
        jnz     L_306c
L_3061:
        shl     ecx, 0x1
        dec     eax
        test    ecx, 0x80000000
        jz      L_3061
L_306c:
        ret     0x4
    }
}
