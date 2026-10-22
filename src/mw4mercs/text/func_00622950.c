/*
 * FUN_00622950 (102 B) — __thiscall list search.
 *
 * Searches a vector (ECX = this) for an entry matching a key; returns the
 * matching pointer or 0. Includes a dead pre-check against two globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_7dc694;
extern unsigned short g_7dc696;

__declspec(naked) void FUN_00622950(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     dl, byte ptr [g_7dc694]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     al, byte ptr [edi]
        cmp     al, dl
        jnz     L_973
        mov     dx, word ptr [edi + 0x2]
        cmp     dx, word ptr [g_7dc696]
        jnz     L_973
        nop
    L_973:
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [ecx + 0x4]
        cmp     edx, esi
        jz      L_ad
        mov     ecx, dword ptr [ebp + 0x8]
    L_97f:
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_99b
        cmp     dword ptr [eax + 0x4], ecx
        jnz     L_99b
        mov     bl, byte ptr [eax + 0x18]
        cmp     bl, byte ptr [edi]
        jnz     L_99b
        mov     ax, word ptr [eax + 0x1a]
        cmp     ax, word ptr [edi + 0x2]
        jz      L_a4
    L_99b:
        add     edx, 0x4
        cmp     edx, esi
        jz      L_ad
        jmp     L_97f
    L_a4:
        mov     eax, dword ptr [edx]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    L_ad:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
