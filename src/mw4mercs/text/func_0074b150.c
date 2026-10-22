/*
 * FUN_0074b150 (35 B) — Sums 8 nibbles of a 32-bit value looked up in a
 * 16-entry table at 0x7aa9c0. __stdcall, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7aa9c0;   /* 16-entry int lookup table */

__declspec(naked) int __stdcall FUN_0074b150(unsigned int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        xor     eax, eax
        xor     ecx, ecx
loop_start:
        mov     esi, edx
        shr     esi, cl
        add     ecx, 0x4
        and     esi, 0xf
        add     eax, dword ptr [esi*4 + g_7aa9c0]
        cmp     ecx, 0x20
        jl      loop_start
        pop     esi
        ret     4
    }
}
