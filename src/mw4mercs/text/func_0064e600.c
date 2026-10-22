/*
 * FUN_0064e600 (93 B) — ABL tree/object lookup helper (__thiscall, RET 0x4).
 * Walks a tree to find a node matching a key; returns bool (node != root).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064e600(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 4]
        test    eax, eax
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     edx, ecx
        jz      L624
L611:
        cmp     dword ptr [eax + 0x10], esi
        jl      L61d
        mov     edx, eax
        mov     eax, dword ptr [eax + 8]
        jmp     L620
L61d:
        mov     eax, dword ptr [eax + 0xc]
L620:
        test    eax, eax
        jnz     L611
L624:
        cmp     edx, ecx
        mov     dword ptr [esp + 0xc], edx
        jz      L645
        cmp     esi, dword ptr [edx + 0x10]
        jl      L645
        lea     eax, [esp + 0xc]
        mov     eax, dword ptr [eax]
        xor     edx, edx
        cmp     eax, ecx
        setnz   dl
        mov     al, dl
        pop     esi
        pop     ecx
        ret     4
L645:
        lea     eax, [esp + 4]
        mov     dword ptr [esp + 4], ecx
        mov     eax, dword ptr [eax]
        xor     edx, edx
        cmp     eax, ecx
        setnz   dl
        mov     al, dl
        pop     esi
        pop     ecx
        ret     4
    }
}
