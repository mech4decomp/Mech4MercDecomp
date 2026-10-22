/*
 * func_005a2f50 - Initialize matrix data from identity-like table
 * Copies 48 bytes (12 dwords) from static table at 0x7B9460 to
 * offsets 0xa4, 0xd4, and 0x104 in the object (this in ECX, __fastcall)
 */
__declspec(naked) void func_005a2f50()
{
    __asm {
        push    esi
        mov     eax, ecx
        push    edi
        lea     edi, [eax + 0xa4]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        lea     edi, [eax + 0xd4]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        lea     edi, [eax + 0x104]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        pop     edi
        pop     esi
        ret
    }
}
