/*
 * FUN_004114b0 (76 B) — Binary tree "next" node finder.
 *   Given a pointer to a tree node pointer (param_1 = char**), replaces
 *   *param_1 with the successor node in the tree.
 *
 *   param_1 (ESP+8) = pointer to node pointer
 *
 * CFLAGS: /O1
 * Match: 100%
 */

__declspec(naked) void __stdcall FUN_004114b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esi]
        cmp     byte ptr [edx], 0x0
        jnz     L_4114cb
        mov     eax, dword ptr [edx + 0x4]
        cmp     dword ptr [eax + 0x4], edx
        jnz     L_4114cb
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [esi], edx
        pop     esi
        ret
L_4114cb:
        mov     ecx, dword ptr [edx + 0x8]
        test    ecx, ecx
        jz      L_4114e6
        mov     eax, dword ptr [ecx + 0xc]
        test    eax, eax
        jz      L_4114e2
L_4114d9:
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0xc]
        test    eax, eax
        jnz     L_4114d9
L_4114e2:
        mov     dword ptr [esi], ecx
        pop     esi
        ret
L_4114e6:
        mov     eax, dword ptr [edx + 0x4]
        cmp     edx, dword ptr [eax + 0x8]
        jnz     L_4114f8
L_4114ee:
        mov     ecx, eax
        mov     eax, dword ptr [eax + 0x4]
        cmp     ecx, dword ptr [eax + 0x8]
        jz      L_4114ee
L_4114f8:
        mov     dword ptr [esi], eax
        pop     esi
        ret
    }
}
