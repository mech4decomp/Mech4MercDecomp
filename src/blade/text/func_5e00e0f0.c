/*
 * FUN_5e00e0f0 (18 B) — __fastcall. Zeroes 0x22 dwords at param_1 (ECX),
 * returns param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_5e00e0f0(void)
{
    __asm {
        mov     edx, ecx
        push    edi
        mov     ecx, 0x22
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     eax, edx
        pop     edi
        ret
    }
}
