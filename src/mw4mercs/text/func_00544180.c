/*
 * FUN_00544180 (68 B) — Bit extraction: given a bit index and a
 * dword array, extracts the bit at that index.
 *
 * __stdcall, 2 params: (int bit_index, int *array).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall func_00544180(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        mov     ecx, eax
        jge     L_nonneg
        xor     eax, eax
        ret     8
L_nonneg:
        cmp     eax, 0x40
        jl      L_lt64
        xor     eax, eax
        ret     8
L_lt64:
        cmp     eax, 0x20
        jl      L_lt32
        lea     ecx, dword ptr [eax - 0x20]
        mov     eax, dword ptr [esp + 8]
        lea     edx, dword ptr [eax + 4]
        mov     eax, 1
        shl     eax, cl
        and     eax, dword ptr [edx]
        ret     8
L_lt32:
        mov     edx, dword ptr [esp + 8]
        mov     eax, 1
        shl     eax, cl
        and     eax, dword ptr [edx]
        ret     8
    }
}
