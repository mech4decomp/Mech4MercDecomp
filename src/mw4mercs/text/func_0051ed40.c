/*
 * func_0051ED40 - Zero-initialize large struct region
 * Zeroes 0x19 dwords starting at this+0x40D30, then sets 4 more fields to 0
 */
__declspec(naked) void func_0051ED40()
{
    __asm {
        mov     edx, ecx
        xor     eax, eax
        push    edi
        lea     edi, [edx + 0x40d30]
        mov     ecx, 0x19
        rep stosd
        mov     [edx + 0x40d98], eax
        mov     [edx + 0x40d94], eax
        mov     [edx + 0x40d9c], eax
        mov     [edx + 0x40da0], eax
        pop     edi
        ret
    }
}
