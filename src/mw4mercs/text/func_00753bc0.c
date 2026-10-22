/*
 * FUN_00753bc0 (193 B) — Texture slot allocator.
 *
 * If DAT_008b2878 is null, calls FUN_006fab90("Too many textures created!")
 * and INT3s if it returns non-zero. Advances the slot pointer, zeroes the
 * slot, and either links it into the free list (DAT_008b287c) or decrements
 * a reference count. Returns the slot pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008b2878;   /* DAT_008b2878 */
extern int g_008b2874;   /* DAT_008b2874 */
extern int g_008b287c;   /* DAT_008b287c */

extern int __cdecl FUN_006fab90(char *msg);

__declspec(naked) int FUN_00753bc0(void)
{
    __asm {
        mov     eax, dword ptr [g_008b2878]
        test    eax, eax
        jnz     LDB
        push    0x7ada84
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LDB
        int     3
LDB:
        push    esi
        mov     esi, dword ptr [g_008b2878]
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        test    ax, ax
        jz      L06
        and     eax, 0xffff
        __emit 0x8D   /* __emit: no-base SIB form lea ecx,[eax*8+0] (8D 0C C5 00000000) not encodable in MSVC6 inline asm */
        __emit 0x0C
        __emit 0xC5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        sub     ecx, eax
        lea     edx, [esi + ecx*8]
        mov     dword ptr [g_008b2878], edx
        jmp     L10
L06:
        mov     dword ptr [g_008b2878], 0x0
L10:
        push    edi
        xor     eax, eax
        mov     ecx, 0xe
        mov     edi, esi
        rep stosd
        cmp     esi, dword ptr [g_008b2874]
        pop     edi
        jnz     L63
        mov     eax, dword ptr [g_008b287c]
        test    eax, eax
        jz      L53
        sub     eax, esi
        mov     ecx, eax
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x5
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     word ptr [esi + 0x1a], dx
        mov     dword ptr [g_008b287c], esi
        mov     eax, esi
        pop     esi
        ret
L53:
        xor     edx, edx
        mov     word ptr [esi + 0x1a], dx
        mov     dword ptr [g_008b287c], esi
        mov     eax, esi
        pop     esi
        ret
L63:
        xor     eax, eax
        mov     ax, word ptr [esi - 0x1e]
        test    ax, ax
        mov     word ptr [esi + 0x1a], ax
        jz      L77
        dec     eax
        mov     word ptr [esi + 0x1a], ax
L77:
        mov     word ptr [esi - 0x1e], 0x1
        mov     eax, esi
        pop     esi
        ret
    }
}
