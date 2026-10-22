/*
 * FUN_00624F90 (75 B) — Binary-tree lookup by (byte, ushort) key.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: out ptr, key).
 * Walks a binary tree rooted at *this+4, comparing byte/ushort keys,
 * and writes the last visited node into the output ptr.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00624f90(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jz      l_empty
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     dl, byte ptr [edi]
    l_loop:
        mov     al, byte ptr [ecx + 0x10]
        cmp     al, dl
        jnz     l_cmp
        mov     ax, word ptr [ecx + 0x12]
        cmp     ax, word ptr [edi + 0x2]
    l_cmp:
        sbb     eax, eax
        neg     eax
        test    al, al
        jnz     l_right
        mov     esi, ecx
        mov     ecx, dword ptr [ecx + 0x8]
        jmp     l_test
    l_right:
        mov     ecx, dword ptr [ecx + 0xc]
    l_test:
        test    ecx, ecx
        jnz     l_loop
        mov     eax, dword ptr [esp + 0xc]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        ret     8
    l_empty:
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax], esi
        pop     esi
        ret     8
    }
}
