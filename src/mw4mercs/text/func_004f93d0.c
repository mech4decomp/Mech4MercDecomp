/*
 * FUN_004F93D0 (33 B) — Getter with conditional return.
 *
 * __thiscall (ECX = this), no stack params.
 * Calls virtual func on [this+0x78], checks byte at [this+0x169].
 * Returns 1 if set, otherwise reads byte from [eax+0x106].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __fastcall FUN_004F93D0(int this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     cl, [esi + 0x169]
        test    cl, cl
        pop     esi
        jz      l_ret_byte
        mov     al, 1
        ret
    l_ret_byte:
        mov     al, [eax + 0x106]
        ret
    }
}
