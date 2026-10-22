/*
 * FUN_004f2b90 (47 B) — MLR/Adept update loop (__thiscall). Iterates a
 * linked list at [this+0x6c]; while a budget counter at [this+0x74] exceeds
 * 0x200000, subtracts each node's [ecx+0x70] and calls its virtual method 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004f2b90(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x6c]
L_2b97:
        test    esi, esi
        jz      L_2bbc
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_2bbc
        mov     eax, dword ptr [edi + 0x74]
        cmp     eax, 0x200000
        jbe     L_2bbc
        sub     eax, dword ptr [ecx + 0x70]
        mov     dword ptr [edi + 0x74], eax
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        jmp     L_2b97
L_2bbc:
        pop     edi
        pop     esi
        ret
    }
}
