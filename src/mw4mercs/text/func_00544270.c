/*
 * FUN_00544270 (72 B) — Bit extraction variant: given a bit index
 * and a dword array, extracts the bit. Handles negative index by
 * adding 0x64 first.
 *
 * __stdcall, 2 params: (int bit_index, int *array).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall func_00544270(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        lea     ecx, dword ptr [eax - 0x64]
        test    ecx, ecx
        jge     L_nonneg
        xor     eax, eax
        ret     8
L_nonneg:
        cmp     ecx, 0x40
        jl      L_lt64
        xor     eax, eax
        ret     8
L_lt64:
        cmp     ecx, 0x20
        jl      L_lt32
        mov     edx, dword ptr [esp + 8]
        sub     ecx, 0x20
        mov     eax, 1
        shl     eax, cl
        mov     ecx, dword ptr [edx + 4]
        add     edx, 4
        and     eax, ecx
        ret     8
L_lt32:
        mov     edx, dword ptr [esp + 8]
        mov     eax, 1
        shl     eax, cl
        and     eax, dword ptr [edx]
        ret     8
    }
}
