/*
 * FUN_004FCC00 (59 B) — NameTable-style lookup: given a packed key
 * (high byte = table index, low 24 bits = element index), returns a
 * pointer into a per-table array, or 0 if out of range.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004fcc00(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     edx, esi
        mov     eax, esi
        sar     edx, 0x18
        and     eax, 0xffffff
        cmp     esi, -1
        jz      l_ret0
        cmp     edx, 0x12
        jge     l_ret0
        cmp     eax, dword ptr [ecx + edx*8 + 0x14]
        jnc     l_ret0
        lea     esi, [eax*8 + 0]
        sub     esi, eax
        mov     eax, dword ptr [ecx + edx*8 + 0x10]
        lea     eax, [eax + esi*4]
        pop     esi
        ret     4
    l_ret0:
        xor     eax, eax
        pop     esi
        ret     4
    }
}
