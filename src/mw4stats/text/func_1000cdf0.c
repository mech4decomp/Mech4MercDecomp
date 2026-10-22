/*
 * FUN_1000cdf0 (90 B) - __stdcall. If object is valid (fields +8 and +0x3c
 * non-null), validates param_2 via IsBadReadPtr/IsBadWritePtr (IAT @
 * 0x10021060/0x10021064), then copies 0xc dwords from object+0xc into param_2.
 * Returns 0 on success, 0x80070057 on bad pointer, 0x80040290 if object invalid.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IsBadReadPtr IAT @ 0x10021060 */
extern void *g_10021064;   /* IsBadWritePtr IAT @ 0x10021064 */

__declspec(naked) unsigned int __cdecl FUN_1000cdf0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L40
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        jz      L40
        mov     edi, dword ptr [esp + 0x10]
        push    0x30
        push    edi
        call    dword ptr [g_10021060]
        test    eax, eax
        jnz     L36
        cmp     dword ptr [edi], 0x30
        jnz     L36
        push    0x30
        push    edi
        call    dword ptr [g_10021064]
        test    eax, eax
        jnz     L36
        add     esi, 0xc
        mov     ecx, 0xc
        rep movsd
        pop     edi
        pop     esi
        ret     0x8
L36:
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     0x8
L40:
        pop     edi
        mov     eax, 0x80040290
        pop     esi
        ret     0x8
    }
}
