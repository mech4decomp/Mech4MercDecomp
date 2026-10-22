/*
 * FUN_1002e4e0 (114 B) — __fastcall (ECX = this).
 * Tokenizer step: inspects the 16-bit token at [this+8]; dispatches on 0x22
 * (quote) and 0x3c ('<'), advancing the token pointer / counters and
 * returning a token code (8 / 0xb / 0xc).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1002e4e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x8]
        movzx   edx, word ptr [eax]
        cmp     edx, 0x22
        jz      L51d
        cmp     edx, 0x3c
        jz      L4f6
        mov     eax, 0xb
        ret
    L4f6:
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jl      L50a
        mov     edx, dword ptr [ecx + 0x4]
        dec     eax
        mov     dword ptr [ecx + 0x10], eax
        lea     eax, [edx + eax*2]
        mov     dword ptr [ecx + 0x8], eax
    L50a:
        mov     edx, dword ptr [ecx + 0x8]
        cmp     word ptr [edx + 0x2], 0xa
        jnz     L517
        dec     dword ptr [ecx + 0x14]
    L517:
        mov     eax, 0xc
        ret
    L51d:
        sub     eax, dword ptr [ecx + 0x2c]
        sar     eax, 0x1
        mov     dword ptr [ecx + 0x30], eax
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        mov     dword ptr [ecx], 0x6
        jl      L53f
        mov     edx, dword ptr [ecx + 0x4]
        dec     eax
        mov     dword ptr [ecx + 0x10], eax
        lea     eax, [edx + eax*2]
        mov     dword ptr [ecx + 0x8], eax
    L53f:
        mov     edx, dword ptr [ecx + 0x8]
        cmp     word ptr [edx + 0x2], 0xa
        jnz     L54c
        dec     dword ptr [ecx + 0x14]
    L54c:
        mov     eax, 0x8
        ret
    }
}
