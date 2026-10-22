/*
 * FUN_1002e450 (60 B) -- __fastcall.
 * Tokenizer state advance: sets state=4, checks a '/' terminator, decrements
 * a count and advances a pointer, and adjusts a depth counter.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1002e450(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [ecx], 0x4
        cmp     word ptr [eax], 0x2f
        jnz     L_cont
        mov     eax, 0x3
        ret
L_cont:
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jl      L_skip
        mov     edx, dword ptr [ecx + 0x4]
        dec     eax
        mov     dword ptr [ecx + 0x10], eax
        lea     eax, [edx + eax*2]
        mov     dword ptr [ecx + 0x8], eax
L_skip:
        mov     edx, dword ptr [ecx + 0x8]
        cmp     word ptr [edx + 0x2], 0xa
        jnz     L_out
        dec     dword ptr [ecx + 0x14]
L_out:
        mov     eax, 0x1
        ret
    }
}
