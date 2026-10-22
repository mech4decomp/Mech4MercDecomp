/*
 * FUN_5e00e060 (140 B) — setter. If param_2==0 and param_3<0x19, writes
 * param_4 into param_1[0x4810 + param_3*4] (with special handling for
 * indices 2,3,5,6 when param_4==1 -> 0), then per-index side effects.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00e060(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jnz     L_end
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, 0x18
        jg      L_end
        cmp     eax, 2
        jz      L_2356
        cmp     eax, 3
        jz      L_2356
        cmp     eax, 5
        jz      L_2356
        cmp     eax, 6
        jnz     L_092
    L_2356:
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, 1
        jnz     L_096
        xor     edx, edx
        jmp     L_096
    L_092:
        mov     edx, dword ptr [esp + 0x10]
    L_096:
        mov     ecx, dword ptr [esp + 0x4]
        cmp     eax, 0xc
        mov     dword ptr [ecx + eax*4 + 0x4810], edx
        jnz     L_0c9
        mov     dword ptr [ecx + 0x4844], 0
        mov     dword ptr [ecx + 0x4848], 0
        mov     dword ptr [ecx + 0x406c], 0x5e013200
        xor     eax, eax
        ret     0x10
    L_0c9:
        cmp     eax, 0xd
        jz      L_0d3
        cmp     eax, 0xe
        jnz     L_0dd
    L_0d3:
        mov     dword ptr [ecx + 0x4840], 0
    L_0dd:
        mov     dword ptr [ecx + 0x406c], 0x5e013200
    L_end:
        xor     eax, eax
        ret     0x10
    }
}
