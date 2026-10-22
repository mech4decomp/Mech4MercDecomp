/*
 * FUN_0070f9a0 (71 B) — __stdcall, RET 4 (one stack param).
 *
 * Copies a NUL-terminated string into the g_0085b614 ring buffer at
 * offset g_0087b618, wrapping at 0x20000. A '\n' triggers
 * FUN_0070f980() first.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0087b618;
extern void FUN_0070f980(void);

__declspec(naked) void __stdcall FUN_0070f9a0(char *param_1)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     bl, byte ptr [esi]
        test    bl, bl
        jz      short loc_70f9e2
loc_70f9b1:
        mov     eax, dword ptr [g_0087b618]
        cmp     bl, 0xa
        jnz     short loc_70f9c0
        call    FUN_0070f980
        mov     eax, dword ptr [g_0087b618]
loc_70f9c0:
        mov     byte ptr [eax + 0x85b614], bl
        inc     eax
        cmp     eax, 0x20000
        mov     dword ptr [g_0087b618], eax
        jnz     short loc_70f9da
        xor     eax, eax
        mov     dword ptr [g_0087b618], eax
loc_70f9da:
        mov     bl, byte ptr [esi + 0x1]
        inc     esi
        test    bl, bl
        /* __emit: backward jnz rel-offset miscomputed by MSVC6 (0xCA vs ref 0xCF)
           because the 5-byte call reloc sits between branch and target */
        __emit 0x75
        __emit 0xCF
loc_70f9e2:
        pop     esi
        pop     ebx
        ret     4
    }
}
