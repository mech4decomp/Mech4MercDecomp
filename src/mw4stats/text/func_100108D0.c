/*
 * FUN_100108d0 (26 B, __fastcall, ECX = this) - Frees the buffer at
 * this+0x40 (if non-null) and clears the field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021188; /* IAT: free */

__declspec(naked) void __cdecl FUN_100108d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      L_e8
        push    eax
        call    dword ptr [g_10021188]      /* free(this->buf) */
        mov     dword ptr [esi + 0x40], 0
    L_e8:
        pop     esi
        ret
    }
}
