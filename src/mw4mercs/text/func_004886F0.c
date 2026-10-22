/*
 * func_004886F0 - thiscall constructor helper
 * Zeroes 0x40 bytes at [this+0x14], then calls FUN_0048a910(this)
 */

extern void __cdecl FUN_0048a910(void);

__declspec(naked) void func_004886F0()
{
    __asm {
        mov     edx, ecx
        push    edi
        lea     edi, [edx + 0x14]
        xor     eax, eax
        mov     ecx, 0x10
        rep     stosd
        mov     ecx, edx
        call    FUN_0048a910
        pop     edi
        ret
    }
}
