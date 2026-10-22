/*
 * FUN_006D4460 (174 B) — Object reset/cleanup.
 *
 * __fastcall (ECX = this), no stack params.
 * Cleans up various fields: destroys a child object via vtable[4],
 * frees a linked list of allocations, zeros all fields, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00491d10(void);

__declspec(naked) int __fastcall FUN_006D4460(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, [esi + 0x04]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jle     l_skip_child
        _emit   0x8B
        _emit   0x0D
        _emit   0x48
        _emit   0xA8
        _emit   0x7D
        _emit   0x00
        mov     eax, [ecx + eax * 4 + 0x24]
        cmp     eax, edi
        jz      l_set_neg1
        mov     edx, [eax]
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x04]
        mov     ecx, eax
        call    FUN_00491d10
    l_set_neg1:
        mov     dword ptr [esi + 0x04], 0xffffffff
    l_skip_child:
        mov     eax, [esi + 0x20]
        cmp     eax, edi
        jz      l_zero_fields
        cmp     dword ptr [eax + 0x08], edi
        mov     [esi + 0x24], eax
        jz      l_find_tail
    l_find_next:
        mov     eax, [esi + 0x24]
        mov     eax, [eax + 0x08]
        cmp     dword ptr [eax + 0x08], edi
        mov     [esi + 0x24], eax
        jnz     l_find_next
    l_find_tail:
        mov     ecx, [esi + 0x24]
        mov     eax, [ecx + 0x0c]
        cmp     eax, edi
        jz      l_free_tail
    l_free_chain:
        mov     edx, [esi + 0x24]
        push    edx
        mov     [esi + 0x28], eax
        call    FUN_004084e0
        mov     eax, [esi + 0x28]
        mov     [esi + 0x24], eax
        mov     [eax + 0x08], edi
        mov     eax, [eax + 0x0c]
        add     esp, 4
        cmp     eax, edi
        jnz     l_free_chain
    l_free_tail:
        mov     ecx, [esi + 0x24]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     [esi + 0x24], edi
        mov     [esi + 0x20], edi
    l_zero_fields:
        mov     [esi + 0x0c], edi
        mov     [esi + 0x2c], edi
        mov     [esi + 0x18], edi
        mov     [esi + 0x1c], edi
        mov     [esi + 0x24], edi
        mov     [esi + 0x28], edi
        pop     edi
        mov     dword ptr [esi + 0x10], 0xffffffff
        mov     dword ptr [esi + 0x14], 0x10
        mov     al, 1
        pop     esi
        ret
    }
}
