/*
 * FUN_10009cc0 (72 B) - copies 7 dwords (28 bytes) from this+0xc into
 * an output buffer, after validating the buffer via IsBadWritePtr and
 * checking its size header == 0x1c.
 *
 * __stdcall, 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021064;   /* IsBadWritePtr IAT @ 0x10021064 */

__declspec(naked) unsigned int __cdecl FUN_10009cc0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        jnz     L1
        pop     edi
        mov     eax, 0x80040290
        pop     esi
        ret     8
L1:
        mov     edi, dword ptr [esp + 0x10]
        push    0x1c
        push    edi
        call    dword ptr [g_10021064]
        test    eax, eax
        jnz     L_err
        cmp     dword ptr [edi], 0x1c
        jnz     L_err
        add     esi, 0xc
        mov     ecx, 7
        rep movsd
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
L_err:
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     8
    }
}
