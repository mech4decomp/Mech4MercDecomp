/*
 * FUN_00659880 (46 B) — __cdecl.
 *
 * Walks a linked list of 8-byte nodes from param_1 until it reaches
 * param_5, following a chain via param_4/param_3 when a node's address
 * equals param_3. Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00659880(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        cmp     eax, esi
        jz      L_done
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
    L_loop:
        add     eax, 0x8
        cmp     eax, edx
        jnz     L_cmp
        mov     eax, dword ptr [ecx + 0x4]
        add     ecx, 0x4
        lea     edx, [eax + 0x200]
    L_cmp:
        cmp     eax, esi
        jnz     L_loop
    L_done:
        pop     esi
        ret
    }
}
