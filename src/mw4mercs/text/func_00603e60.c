/*
 * FUN_00603e60 (63 B) — __thiscall list-search helper.
 *
 * Walks the linked list at [ecx+0x70]; returns the node whose [eax+0x14]
 * matches param_1 and [eax+0x48] matches param_2, else the last node with
 * [eax+0x14]==-1 and matching [eax+0x48], else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00603e60(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x70]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        xor     edi, edi
    L_loop:
        test    edx, edx
        jz      L_97
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     edx, dword ptr [edx + 0x4]
        jz      L_97
        mov     ecx, dword ptr [eax + 0x14]
        cmp     ecx, ebx
        jnz     L_89
        cmp     dword ptr [eax + 0x48], esi
        jz      L_99
    L_89:
        cmp     ecx, -0x1
        jnz     L_loop
        cmp     dword ptr [eax + 0x48], esi
        jnz     L_loop
        mov     edi, eax
        jmp     L_loop
    L_97:
        mov     eax, edi
    L_99:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
