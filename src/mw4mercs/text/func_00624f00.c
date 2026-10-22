/*
 * FUN_00624F00 (133 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Binary-tree search (sibling of FUN_00624E70): walks the tree rooted at
 * this->[0], comparing the key at param_2 (byte + ushort) against node
 * fields at +0x10/+0x12. Writes the found node (or the root) into *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00624f00(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx + 0x4]
        test    ecx, ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, ebx
        jz      L_624f3a
L_624f15:
        mov     dl, byte ptr [edi]
        mov     al, byte ptr [ecx + 0x10]
        cmp     al, dl
        jnz     L_624f24
        mov     ax, word ptr [ecx + 0x12]
        cmp     ax, word ptr [edi + 0x2]
L_624f24:
        sbb     eax, eax
        neg     eax
        test    al, al
        jnz     L_624f33
        mov     esi, ecx
        mov     ecx, dword ptr [ecx + 0x8]
        jmp     L_624f36
L_624f33:
        mov     ecx, dword ptr [ecx + 0xc]
L_624f36:
        test    ecx, ecx
        __emit 0x75   /* __emit: backward jnz to L_624f15; MSVC6 miscomputes rel8 (75 D9) vs ref 75 DB */
        __emit 0xDB
L_624f3a:
        cmp     esi, ebx
        mov     dword ptr [esp + 0x18], esi
        jz      L_624f6e
        mov     al, byte ptr [edi]
        mov     cl, byte ptr [esi + 0x10]
        cmp     al, cl
        jnz     L_624f53
        mov     cx, word ptr [edi + 0x2]
        cmp     cx, word ptr [esi + 0x12]
L_624f53:
        sbb     eax, eax
        neg     eax
        test    al, al
        jnz     L_624f6e
        lea     eax, [esp + 0x18]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [eax], edx
        pop     ebx
        pop     ecx
        ret     0x8
L_624f6e:
        lea     eax, [esp + 0xc]
        mov     dword ptr [esp + 0xc], ebx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [eax], edx
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
