/*
 * FUN_0041ea10 (40 B) — __thiscall stream method: if the bit-buffer state
 * (this+8) is non-zero and not -0x14, flush the pending byte via
 * vtable[0x24] and reset state. Bit-stream writer family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041ea10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_0041ea36
        cmp     eax, -0x14
        jz      L_0041ea36
        mov     eax, dword ptr [esi]
        push    edi
        push    0x1
        lea     edi, [esi + 0xc]
        push    edi
        call    dword ptr [eax + 0x24]
        mov     byte ptr [edi], 0x0
        mov     dword ptr [esi + 0x8], 0x0
        pop     edi
L_0041ea36:
        pop     esi
        ret
    }
}
