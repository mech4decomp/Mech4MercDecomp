/*
 * FUN_006498f0 (40 B) — __cdecl, 1 stack param.
 *
 * Scans a null-terminated array of dwords for a match against
 * 0x008058ac; returns 1 if found, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058ac;   /* 0x008058ac */

__declspec(naked) void __stdcall FUN_006498f0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      L_zero
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_zero
L_loop:
        mov     edx, dword ptr [g_8058ac]
        cmp     edx, eax
        jz      L_one
        mov     eax, dword ptr [ecx + 0x4]
        add     ecx, 0x4
        test    eax, eax
        __emit 0x75   /* __emit: backward jnz rel-offset miscomputed by MSVC6 (off-by-6) because a 4-byte reloc sits between branch and target */
        __emit 0xF2
L_zero:
        xor     al, al
        ret
L_one:
        mov     al, 0x1
        ret
    }
}
