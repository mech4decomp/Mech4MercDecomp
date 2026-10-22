/*
 * FUN_004BF630 (43 B) — __fastcall method (ECX=this).
 * Iterates over an array at this+0x144 of count this+0x14c (ushort),
 * calling vtable[0x1c]() on each element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004bf630(void)
{
    __asm {
        xor     eax, eax
        mov     ax, word ptr [ecx + 0x14c]
        test    ax, ax
        jbe     l_done
        push    esi
        mov     esi, dword ptr [ecx + 0x144]
        and     eax, 0xffff
        push    edi
        mov     edi, eax
    l_loop:
        mov     ecx, dword ptr [esi]
        call    dword ptr [ecx + 0x1c]
        add     esi, 4
        dec     edi
        jnz     l_loop
        pop     edi
        pop     esi
    l_done:
        ret
    }
}
