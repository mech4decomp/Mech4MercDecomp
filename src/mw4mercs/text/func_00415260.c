/*
 * FUN_00415260 (66 B) — archive/database registered-class subsystem:
 * __thiscall recursive lookup. Compares this[4] (name) against the arg via
 * _stricmp (IAT 0x0076b2ac); if equal returns this. Otherwise walks the
 * sibling list this[8]/this[0xc] recursively, returning the first match or 0.
 * this=ECX, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2ac;                 /* IAT _stricmp */
extern void FUN_00415260(void);          /* recursive self-call */

__declspec(naked) void func_00415260(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        push    edi
        push    eax
        call    dword ptr [g_0076b2ac]
        add     esp, 8
        test    eax, eax
        jnz     L1
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    L1:
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        jz      L2
    L3:
        push    edi
        mov     ecx, esi
        call    FUN_00415260
        test    eax, eax
        jnz     L4
        mov     esi, dword ptr [esi + 0xc]
        test    esi, esi
        jnz     L3
    L2:
        xor     eax, eax
    L4:
        pop     edi
        pop     esi
        ret     4
    }
}
