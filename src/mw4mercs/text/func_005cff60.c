/*
 * FUN_005cff60 (45 B) — __thiscall
 * Computes an index into a circular buffer, returning -1 if out of range.
 */

__declspec(naked) void func_005cff60(void)
{
    __asm {
        mov     eax, [esp + 0x4]
        mov     edx, [eax + 0x10]
        push    esi
        sub     edx, [ecx + 0xc]
        mov     esi, [ecx + 0x10]
        cmp     edx, esi
        jl      L_79
        or      eax, 0xffffffff
        pop     esi
        ret     0x4
    L_79:
        mov     ecx, [ecx + 0x8]
        lea     eax, [ecx + edx*1]
        cmp     eax, esi
        jl      L_89
        sub     ecx, esi
        add     ecx, edx
        mov     eax, ecx
    L_89:
        pop     esi
        ret     0x4
    }
}
