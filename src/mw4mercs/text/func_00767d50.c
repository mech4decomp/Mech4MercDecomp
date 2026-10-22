/*
 * FUN_00767d50 (94 B) — __thiscall string-list search. Walks a linked
 * list at this+4 (each node: [next] at +0, string at +8), comparing
 * each node's string against param_1 (strcmp-style). Returns the
 * matching node index (EBP counter) or -1.
 *
 * NOTE: Ghidra's disassembly omitted the `or ebp,0xFF` (iVar5=-1 init),
 * the `or eax,0xFF` (return -1) and the SBB mismatch block at 0x767D8C;
 * those were recovered from the raw reference bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00767d50(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        or      ebp, -1
        test    edi, edi
        jz      L9B
L5E:
        mov     eax, dword ptr [esp + 0x14]
L62:
        inc     ebp
        mov     esi, eax
        lea     ecx, [edi + 0x8]
L68:
        mov     bl, byte ptr [ecx]
        mov     dl, bl
        cmp     bl, byte ptr [esi]
        jnz     L8C
        test    dl, dl
        jz      L88
        mov     bl, byte ptr [ecx + 0x1]
        mov     dl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L8C
        add     ecx, 0x2
        add     esi, 0x2
        test    dl, dl
        jnz     L68
L88:
        xor     ecx, ecx
        jmp     L91
L8C:
        sbb     ecx, ecx
        sbb     ecx, -1
L91:
        test    ecx, ecx
        jz      LA5
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     L62
L9B:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, -1
        pop     ebx
        ret     4
LA5:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
