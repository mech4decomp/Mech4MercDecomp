/*
 * FUN_00710B40 (74 B) — bit-field helper: finds the lowest set bit index of
 * param_2 (ESI), counts set bits (EDI), then returns
 * ((param_1 & param_2) >> esi) << (8 - edi).
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00710b40(unsigned int param_1, unsigned int param_2)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        mov     eax, 0x1
        mov     ecx, edx
        push    edi
        and     ecx, eax
        xor     esi, esi
        xor     edi, edi
        test    cl, cl
        jnz     L1
L0:
        shl     eax, 0x1
        inc     esi
        test    eax, edx
        jz      L0
L1:
        xor     ecx, ecx
L2:
        mov     eax, 0x1
        shl     eax, cl
        test    eax, edx
        jz      L3
        inc     edi
L3:
        inc     ecx
        cmp     ecx, 0x20
        jl      L2
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, esi
        and     eax, edx
        shr     eax, cl
        mov     ecx, 0x8
        sub     ecx, edi
        pop     edi
        shl     eax, cl
        pop     esi
        ret     0x8
    }
}
