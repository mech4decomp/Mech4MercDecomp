/*
 * FUN_006c0110 (286 B) — Hash-table token lookup. Hashes the token at
 * DAT_0082f328, walks the bucket chain in DAT_00839ef0, and on a match
 * unlinks the node, advances DAT_0082f328 past the token, and returns
 * ~node[1]>>8 & 1. Returns 0xffffffff if not found.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_0082f328;                       /* current token pointer */
extern unsigned int g_0083a0f4;                /* hash accumulator */
extern char g_0083a100;                        /* token length (byte) */
extern unsigned int g_0083a0f8;                /* bucket index */
extern unsigned int g_0083a0fc;                /* node[3] */
extern char g_0082ebf8;                        /* char-class table */
extern unsigned int g_00839ef0;                /* hash buckets */

__declspec(naked) void FUN_006c0110(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [g_0082f328]
        xor     eax, eax
        mov     al, byte ptr [ebx]
        xor     edx, edx
        mov     dl, byte ptr [ebx + 0x1]
        lea     ecx, [ebx + 0x1]
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [g_0083a0f4], eax
        cmp     byte ptr [edx + g_0082ebf8], 0x0
        jz      L_after_hash
L_hash_loop:
        lea     eax, [edx + eax*8]
        inc     ecx
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        cmp     byte ptr [edx + g_0082ebf8], 0x0
        jnz     L_hash_loop
        mov     dword ptr [g_0083a0f4], eax
L_after_hash:
        sub     cl, bl
        mov     byte ptr [g_0083a100], cl
        mov     ebp, dword ptr [g_0083a100]
        and     ebp, 0xff
        mov     ecx, eax
        mov     edx, ebp
        shl     eax, 0x10
        and     ecx, 0xf
        and     edx, 0x7
        add     eax, ebp
        lea     ecx, [edx + ecx*8]
        mov     esi, dword ptr [ecx*4 + g_00839ef0]
        mov     dword ptr [esp + 0x14], eax
        xor     eax, eax
        test    esi, esi
        mov     dword ptr [g_0083a0f8], ecx
        mov     dword ptr [esp + 0x10], eax
        jz      L_notfound
L_loop:
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esp + 0x14]
        and     ecx, 0xfffffcff
        cmp     ecx, edx
        jnz     L_next
        mov     ecx, dword ptr [esi + 0x8]
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      L_found
        mov     edi, ebx
        sub     edi, ecx
L_strcmp:
        mov     al, byte ptr [edi + ecx]
        inc     ecx
        cmp     al, dl
        jnz     L_next
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      L_found2
        jmp     L_strcmp
L_next:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        test    esi, esi
        mov     dword ptr [esp + 0x10], eax
        jz      L_notfound
        jmp     L_loop
L_found2:
        mov     eax, dword ptr [esp + 0x10]
L_found:
        mov     cl, byte ptr [ebx + ebp]
        add     ebx, ebp
        cmp     cl, 0x20
        mov     dword ptr [g_0082f328], ebx
        jnz     L_after_space
        inc     ebx
        mov     dword ptr [g_0082f328], ebx
L_after_space:
        test    eax, eax
        jz      L_after_unlink
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [g_0083a0f8]
        mov     eax, dword ptr [ecx*4 + g_00839ef0]
        mov     dword ptr [esi], eax
        mov     dword ptr [ecx*4 + g_00839ef0], esi
L_after_unlink:
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esi + 0xc]
        pop     edi
        not     eax
        pop     esi
        shr     eax, 0x8
        pop     ebp
        mov     dword ptr [g_0083a0fc], edx
        and     eax, 0x1
        pop     ebx
        add     esp, 0x8
        ret
L_notfound:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x8
        ret
    }
}
