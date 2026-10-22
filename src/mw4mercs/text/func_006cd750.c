/*
 * FUN_006cd750 (192 B) — __stdcall (RET 0x4, 1 arg) hash-table lookup.
 *
 * Decodes a packed key from the byte string at *[esp+8], computes a
 * hash index into the table DAT_0083ede8, and walks the bucket chain
 * comparing keys. Returns the matching node or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_83ede4;   /* DAT_0083ede4 */
extern int g_83ede0;   /* DAT_0083ede0 */

__declspec(naked) void *__stdcall FUN_006cd750(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [eax]
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        xor     eax, eax
        mov     al, byte ptr [ebx + 0x1]
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        mov     ecx, 0x1
        cmp     byte ptr [eax + 0x82eaf8], cl
        mov     edi, ecx
        mov     dword ptr [g_83ede4], ebp
        mov     dword ptr [esp + 0x10], edi
        jnz     decode_done
decode_loop:
        lea     ebp, [eax + ebp*8]
        xor     eax, eax
        mov     al, byte ptr [ebx + edi*1 + 0x1]
        inc     edi
        cmp     byte ptr [eax + 0x82eaf8], cl
        jz      decode_loop
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [g_83ede4], ebp
decode_done:
        mov     edx, ebp
        mov     eax, edi
        and     edx, 0x1f
        and     eax, 0x7
        lea     eax, [eax + edx*8]
        mov     esi, dword ptr [eax*4 + 0x83ede8]
        test    esi, esi
        mov     dword ptr [g_83ede0], eax
        jz      not_found
chain_loop:
        cmp     dword ptr [esi + 0x4], ebp
        jnz     next_node
        mov     dl, byte ptr [esi + 0xa]
        test    dl, dl
        lea     ecx, [esi + 0xa]
        jz      found
        mov     edi, ebx
        sub     edi, ecx
str_loop:
        xor     eax, eax
        mov     al, byte ptr [edi + ecx*1]
        movsx   edx, dl
        inc     ecx
        cmp     eax, edx
        jnz     str_mismatch
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      found2
        jmp     str_loop
str_mismatch:
        mov     edi, dword ptr [esp + 0x10]
next_node:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jz      not_found
        jmp     chain_loop
found2:
        mov     edi, dword ptr [esp + 0x10]
found:
        test    esi, esi
        jz      not_found
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
not_found:
        mov     eax, dword ptr [esp + 0x18]
        add     ebx, edi
        pop     edi
        pop     esi
        mov     dword ptr [eax], ebx
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
