/*
 * FUN_006F5230 (107 B) — __fastcall destructor: free linked list of nodes.
 *
 * Sets vtable to 0x79fc20, calls FUN_006F59F0, destroys child at +0x3c
 * via vtable[0], then walks a 2D linked list at +0x08 (count at +0x04).
 * Each row is a circular singly-linked list; frees all nodes via
 * FUN_006F5320. Frees the array at +0x08 if count > 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006f59f0(void);
extern void __cdecl FUN_006f5320(void);
extern void __cdecl FUN_006f5330(void);

__declspec(naked) void __fastcall FUN_006f5230(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     dword ptr [ebx], 0x79fc20
        call    FUN_006f59f0
        mov     ecx, dword ptr [ebx + 0x3c]
        xor     esi, esi
        cmp     ecx, esi
        jz      l_skip_child
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [ebx + 0x3c], esi
    l_skip_child:
        push    ebp
        xor     ebp, ebp
        mov     bp, word ptr [ebx + 4]
        cmp     bp, si
        jbe     l_skip_rows
        push    edi
        mov     edi, dword ptr [ebx + 8]
        and     ebp, 0xffff
    l_row_loop:
        mov     eax, dword ptr [edi]
        cmp     eax, edi
        jz      l_row_done
    l_node_loop:
        mov     esi, dword ptr [eax]
        push    eax
        call    FUN_006f5320
        cmp     esi, edi
        mov     eax, esi
        jnz     l_node_loop
    l_row_done:
        add     edi, 0x10
        dec     ebp
        jnz     l_row_loop
        xor     esi, esi
        pop     edi
    l_skip_rows:
        cmp     word ptr [ebx + 4], 1
        pop     ebp
        jbe     l_skip_array
        mov     ecx, dword ptr [ebx + 8]
        push    ecx
        call    FUN_006f5330
    l_skip_array:
        mov     dword ptr [ebx + 8], esi
        pop     esi
        pop     ebx
        ret
    }
}
