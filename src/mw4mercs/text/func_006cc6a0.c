/*
 * FUN_006CC6A0 (54 B) — __thiscall (ECX = this), returns node count.
 *
 * Walks a singly-linked list starting at this->field8 (each node's next at
 * +4), calling FUN_006F4230(node) per node and counting them, then zeroes
 * the five dword fields of this and returns the count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);

__declspec(naked) int __cdecl FUN_006cc6a0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 8]
        xor     ebp, ebp
        xor     ebx, ebx
        cmp     eax, ebp
        jz      done
        push    esi
lbl_loop:
        mov     esi, dword ptr [eax + 4]
        push    eax
        call    FUN_006f4230
        inc     ebx
        cmp     esi, ebp
        mov     eax, esi
        jnz     lbl_loop
        pop     esi
done:
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 4], ebp
        mov     dword ptr [edi + 8], ebp
        mov     dword ptr [edi + 0xc], ebp
        mov     dword ptr [edi + 0x10], ebp
        pop     edi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret
    }
}
