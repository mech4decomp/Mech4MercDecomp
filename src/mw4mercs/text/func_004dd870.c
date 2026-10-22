/*
 * FUN_004dd870 (49 B) — __thiscall. Walks a linked list at [this+0x10],
 * clears flag bits (param) in each node's [node+0x10]; when a node's
 * flags become 0, calls its virtual method 0 (vtable[0]) with arg 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004dd870(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx+0x10]
        push    edi
        mov     edi, dword ptr [esp+0xc]
L_loop:
        test    esi, esi
        jz      L_end
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+0x4]
        jz      L_end
        mov     edx, dword ptr [ecx+0x10]
        mov     eax, edi
        not     eax
        and     edx, eax
        mov     dword ptr [ecx+0x10], edx
        jnz     L_loop
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
        jmp     L_loop
L_end:
        pop     edi
        pop     esi
        ret     0x4
    }
}
