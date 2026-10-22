/*
 * FUN_007492A0 (64 B) — Iterates a global array of pointers, calling
 * FUN_00740DB0 on each, then resets the global count to 0.
 *
 * __cdecl, RET (no stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_count_008b79e8;
extern void __cdecl FUN_00740db0(void *p);

__declspec(naked) void __cdecl FUN_007492a0(void)
{
    __asm {
        mov     eax, dword ptr [g_count_008b79e8]
        push    esi
        xor     esi, esi
        test    eax, eax
        jle     reset
        push    edi
        mov     edi, 0x8b69d8
loop1:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_00740db0
        mov     eax, dword ptr [g_count_008b79e8]
        inc     esi
        add     edi, 4
        cmp     esi, eax
        jl      loop1
        pop     edi
        mov     dword ptr [g_count_008b79e8], 0
        pop     esi
        ret
reset:
        mov     dword ptr [g_count_008b79e8], 0
        pop     esi
        ret
    }
}
