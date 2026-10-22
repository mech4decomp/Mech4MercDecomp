/*
 * FUN_006F5E50 (115 B) — Hash table bucket walk with callback.
 *
 * __thiscall (ECX = this), RET 8. Stores two params, increments
 * reentrancy counter at +0x2c, then walks each bucket of a hash
 * table (this+8, count at this+4). For each non-empty bucket,
 * walks the linked list and calls FUN_006F5E00 on nodes without
 * the 0x80000000 flag. Stops early if callback returns false.
 * Decrements reentrancy counter and returns field at +0x38.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f5e00(int, void *, void *);

__declspec(naked) void __cdecl FUN_006f5e50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    ebp
        mov     dword ptr [ebx + 0x34], ecx
        mov     ecx, dword ptr [ebx + 0x2c]
        xor     ebp, ebp
        inc     ecx
        cmp     word ptr [ebx + 4], bp
        push    esi
        push    edi
        mov     dword ptr [ebx + 0x30], eax
        mov     dword ptr [ebx + 0x38], ebp
        mov     dword ptr [ebx + 0x2c], ecx
        jbe     l_done
    l_bucket_loop:
        mov     ecx, dword ptr [ebx + 8]
        mov     esi, ebp
        and     esi, 0xffff
        shl     esi, 4
        mov     edi, dword ptr [esi + ecx]
        add     esi, ecx
        cmp     edi, esi
        jz      l_next_bucket
    l_node_loop:
        test    dword ptr [edi + 0xc], 0x80000000
        jnz     l_skip_node
        mov     edx, dword ptr [edi + 8]
        push    ebx
        push    edi
        push    edx
        call    FUN_006f5e00
        test    al, al
        jz      l_done
    l_skip_node:
        mov     edi, dword ptr [edi]
        cmp     edi, esi
        jnz     l_node_loop
    l_next_bucket:
        inc     ebp
        cmp     bp, word ptr [ebx + 4]
        jc      l_bucket_loop
    l_done:
        mov     eax, dword ptr [ebx + 0x2c]
        pop     edi
        dec     eax
        pop     esi
        mov     dword ptr [ebx + 0x2c], eax
        mov     eax, dword ptr [ebx + 0x38]
        pop     ebp
        pop     ebx
        ret     8
    }
}
