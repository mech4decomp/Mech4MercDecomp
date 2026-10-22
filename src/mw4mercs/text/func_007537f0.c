/*
 * FUN_007537f0 (34 B) — Clears a flag bit in a 16-bit field at this+4
 * (ECX = this, __fastcall). If bit 0x20 was set, clears it and jumps to
 * FUN_00753930; otherwise clears bit 0x80 and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00753930(void);

__declspec(naked) void __fastcall FUN_007537f0(int param_1)
{
    __asm {
        xor     eax, eax
        mov     ax, word ptr [ecx + 0x4]
        test    al, 0x20
        jz      no_bit
        and     eax, 0xff4f
        mov     word ptr [ecx + 0x4], ax
        jmp     FUN_00753930
no_bit:
        and     eax, 0xff7f
        mov     word ptr [ecx + 0x4], ax
        ret
    }
}
