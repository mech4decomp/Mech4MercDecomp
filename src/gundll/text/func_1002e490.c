/*
 * FUN_1002e490 (66 B) — __fastcall (ECX = param_1).
 * Sets *param_1 = 2; if word at param_1[2] == 0x3e, advance and return 4;
 * else decrement index, and if word at [param_1[2]+2] == 10 decrement count.
 * Returns 0xc.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1002e490(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [ecx], 0x2
        cmp     word ptr [eax], 0x3e
        jnz     L4ab
        add     eax, 0x2
        mov     dword ptr [ecx + 0x2c], eax
        mov     eax, 0x4
        ret
    L4ab:
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jl      L4bf
        mov     edx, dword ptr [ecx + 0x4]
        dec     eax
        mov     dword ptr [ecx + 0x10], eax
        lea     eax, [edx + eax*0x2]
        mov     dword ptr [ecx + 0x8], eax
    L4bf:
        mov     edx, dword ptr [ecx + 0x8]
        cmp     word ptr [edx + 0x2], 0xa
        jnz     L4cc
        dec     dword ptr [ecx + 0x14]
    L4cc:
        mov     eax, 0xc
        ret
    }
}
