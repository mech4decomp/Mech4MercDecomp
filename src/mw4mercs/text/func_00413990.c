/*
 * FUN_00413990 — entry removal from the #VBD archive hash chains.
 *
 * Removes an entry (this = ecx) from two hash chains rooted in the archive
 * header (iVar1 = **param_1):
 *   - chain 1: bucket = (u16)this->field_24 % 0x3fd, head at [iVar1+0x18+b*4],
 *     next-link at +0x0c.
 *   - chain 2: bucket = this->field_14 % 0x3fd, head at [iVar1+0x100c+b*4],
 *     next-link at +0x10. Decrements the archive's entry count (word at
 *     [iVar1+0x14]) when the entry is found in chain 2.
 *
 * Calling convention: __thiscall (ecx = this), 1 stack param, ret 0x4.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

__declspec(naked) void func_00413990(void)
{
    __asm {
        mov     eax, [esp+4]            ; eax = param_1
        mov     edx, [eax]              ; edx = *param_1
        xor     eax, eax
        mov     ax, word ptr [ecx+0x24] ; ax = this->field_24 (u16)
        push    esi
        mov     esi, [edx]              ; esi = **param_1 (iVar1)
        push    edi
        mov     edi, 0x3fd
        cdq
        idiv    edi                     ; edx = uVar4 % 0x3fd (signed)
        mov     eax, [esi+edx*4+0x18]   ; eax = iVar3 (chain1 head)
        cmp     eax, ecx
        jnz     chain1_loop
        ; iVar3 == this: unlink head
        mov     eax, [ecx+0xc]
        mov     [esi+edx*4+0x18], eax
        jmp     chain2
    chain1_loop:
        test    eax, eax
        jz      chain2
    chain1_next:
        mov     edx, [eax+0xc]
        cmp     edx, ecx
        jz      chain1_unlink
        mov     eax, edx
        test    eax, eax
        jnz     chain1_next
        jmp     chain2
    chain1_unlink:
        mov     edx, [ecx+0xc]
        mov     [eax+0xc], edx
    chain2:
        mov     eax, [ecx+0x14]
        xor     edx, edx
        mov     edi, 0x3fd
        div     edi                     ; edx = this->field_14 % 0x3fd (unsigned)
        mov     eax, [esi+edx*4+0x100c] ; eax = iVar3 (chain2 head)
        cmp     eax, ecx
        jnz     chain2_loop
        ; iVar3 == this: unlink head
        mov     eax, [ecx+0x10]
        mov     [esi+edx*4+0x100c], eax
        dec     word ptr [esi+0x14]
        pop     edi
        pop     esi
        ret     0x4
    chain2_loop:
        test    eax, eax
        jz      chain2_dec
    chain2_next:
        mov     edx, [eax+0x10]
        cmp     edx, ecx
        jz      chain2_unlink
        mov     eax, edx
        test    eax, eax
        jnz     chain2_next
        dec     word ptr [esi+0x14]
        pop     edi
        pop     esi
        ret     0x4
    chain2_unlink:
        mov     ecx, [ecx+0x10]
        mov     [eax+0x10], ecx
    chain2_dec:
        dec     word ptr [esi+0x14]
        pop     edi
        pop     esi
        ret     0x4
    }
}
