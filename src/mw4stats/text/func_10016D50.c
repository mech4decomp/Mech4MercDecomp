/*
 * FUN_10016d50 (67 B) - __stdcall, RET 8. Validates a member flag,
 * calls IsBadWritePtr on the output buffer, then copies 0x30 bytes
 * from this+0x18 into the output.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021064;  /* IsBadWritePtr IAT slot @ 0x10021064 */

__declspec(naked) void __cdecl FUN_10016d50(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     eax, dword ptr [esi - 4]
        test    eax, eax
        jnz     L1
        pop     edi
        mov     eax, 0x80040290
        pop     esi
        ret     8
L1:
        mov     edi, dword ptr [esp + 0x10]
        push    0x30
        push    edi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      L2
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     8
L2:
        mov     esi, dword ptr [esi + 0x18]
        mov     ecx, 0xc
        rep movsd
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    }
}
