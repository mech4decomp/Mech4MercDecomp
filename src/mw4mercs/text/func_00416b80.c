/*
 * FUN_00416b80 (54 B) — __thiscall (ECX=this, 1 stack arg) list lookup:
 * walks the list at this+0xc using vtable[0x28] as comparator; returns
 * the matching node, or 0 if not found / empty.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416b80(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0xc]
        test    esi, esi
        jz      L_16ba6
        mov     ebx, dword ptr [esp+0x10]
    L_16b90:
        mov     eax, dword ptr [edi]
        push    esi
        push    ebx
        mov     ecx, edi
        call    dword ptr [eax+0x28]
        test    eax, eax
        jz      L_16ba6
        jl      L_16bae
        mov     esi, dword ptr [esi+0x10]
        test    esi, esi
        jnz     L_16b90
    L_16ba6:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    L_16bae:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     4
    }
}
