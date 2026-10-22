/*
 * FUN_0041ea40 (31 B) — __thiscall stream method: if bit-buffer state
 * (this+8) is not -0x14, flush via vtable[0x1c] when state==0, then set
 * state to -0x14 (EOF/error marker). Bit-stream writer family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041ea40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, -0x14
        jz      L_0041ea5d
        test    eax, eax
        jnz     L_0041ea56
        mov     eax, dword ptr [esi]
        push    0x1
        call    dword ptr [eax + 0x1c]
L_0041ea56:
        mov     dword ptr [esi + 0x8], 0xffffffec
L_0041ea5d:
        pop     esi
        ret
    }
}
