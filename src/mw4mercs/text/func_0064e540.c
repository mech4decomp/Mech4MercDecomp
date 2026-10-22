/*
 * FUN_0064e540 (81 B) — ABL tree/object lookup helper (__thiscall, RET 0x4).
 * Walks a tree to find a node matching a key, returns node+0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064e540(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 4]
        test    eax, eax
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     edx, ecx
        jz      L564
L551:
        cmp     dword ptr [eax + 0x10], esi
        jl      L55d
        mov     edx, eax
        mov     eax, dword ptr [eax + 8]
        jmp     L560
L55d:
        mov     eax, dword ptr [eax + 0xc]
L560:
        test    eax, eax
        jnz     L551
L564:
        cmp     edx, ecx
        mov     dword ptr [esp + 0xc], edx
        jz      L57f
        cmp     esi, dword ptr [edx + 0x10]
        jl      L57f
        lea     eax, [esp + 0xc]
        mov     eax, dword ptr [eax]
        add     eax, 0x14
        pop     esi
        pop     ecx
        ret     4
L57f:
        lea     eax, [esp + 4]
        mov     dword ptr [esp + 4], ecx
        mov     eax, dword ptr [eax]
        add     eax, 0x14
        pop     esi
        pop     ecx
        ret     4
    }
}
