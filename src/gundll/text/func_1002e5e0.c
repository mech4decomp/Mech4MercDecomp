/*
 * FUN_1002e5e0 (102 B) - __fastcall. Reads a 16-bit token at [this+8], looks
 * it up in the 0x10075068 table, validates the class, then updates the
 * iterator state (this+0x30/0x10/0x8/0x14) and returns a status code.
 *
 * CFLAGS: /O1
 */

extern int g_10075068[];   /* table base 0x10075068, [edx*4 + base] */

__declspec(naked) void __fastcall FUN_1002e5e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 8]
        mov     dx, word ptr [eax]
        cmp     dx, 0x7f
        jbe     L_f2
        mov     eax, 0xc
        ret
L_f2:
        movzx   edx, dx
        mov     edx, dword ptr [edx*4 + g_10075068]
        cmp     edx, 0x2
        jl      L_11
        cmp     edx, 0x3
        jle     L_0b
        cmp     edx, 0x5
        jnz     L_11
L_0b:
        mov     eax, 0xb
        ret
L_11:
        sub     eax, dword ptr [ecx + 0x2c]
        sar     eax, 1
        mov     dword ptr [ecx + 0x30], eax
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jl      L_2d
        mov     edx, dword ptr [ecx + 4]
        dec     eax
        mov     dword ptr [ecx + 0x10], eax
        lea     eax, [edx + eax*2]
        mov     dword ptr [ecx + 8], eax
L_2d:
        mov     edx, dword ptr [ecx + 8]
        cmp     word ptr [edx + 2], 0xa
        jnz     L_3a
        dec     dword ptr [ecx + 0x14]
L_3a:
        mov     dword ptr [ecx], 0x4
        mov     eax, 0x7
        ret
    }
}
