/*
 * FUN_00767af0 (98 B) — __thiscall string-list search. Walks a linked
 * list at this+4 (each node: [next] at +0, string at +8), comparing
 * each node's string against param_1 (strcmp-style). Returns the
 * matching node's +4 field, or 0.
 *
 * NOTE: Ghidra produced no disassembly; the full body was recovered
 * from the raw reference bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00767af0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        test    edi, edi
        jz      LB3B
        mov     ebp, dword ptr [esp + 0x14]
LAFF:
        mov     esi, ebp
        lea     eax, [edi + 0x8]
LB04:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     LB2C
        test    cl, cl
        jz      LB28
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     LB2C
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     LB04
LB28:
        xor     eax, eax
        jmp     LB31
LB2C:
        sbb     eax, eax
        sbb     eax, -1
LB31:
        test    eax, eax
        jz      LB44
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     LAFF
LB3B:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
LB44:
        test    edi, edi
        jz      LB3B
        mov     eax, dword ptr [edi + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
