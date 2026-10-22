/*
 * FUN_0064e5a0 (81 B) — ABL tree/object lookup helper (__thiscall, RET 0x4).
 * Walks a tree to find a node matching a key, returns node+0x14.
 * (Mirror of FUN_0064e540.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064e5a0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 4]
        test    eax, eax
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     edx, ecx
        jz      L5c4
L5b1:
        cmp     dword ptr [eax + 0x10], esi
        jl      L5bd
        mov     edx, eax
        mov     eax, dword ptr [eax + 8]
        jmp     L5c0
L5bd:
        mov     eax, dword ptr [eax + 0xc]
L5c0:
        test    eax, eax
        jnz     L5b1
L5c4:
        cmp     edx, ecx
        mov     dword ptr [esp + 0xc], edx
        jz      L5df
        cmp     esi, dword ptr [edx + 0x10]
        jl      L5df
        lea     eax, [esp + 0xc]
        mov     eax, dword ptr [eax]
        add     eax, 0x14
        pop     esi
        pop     ecx
        ret     4
L5df:
        lea     eax, [esp + 4]
        mov     dword ptr [esp + 4], ecx
        mov     eax, dword ptr [eax]
        add     eax, 0x14
        pop     esi
        pop     ecx
        ret     4
    }
}
