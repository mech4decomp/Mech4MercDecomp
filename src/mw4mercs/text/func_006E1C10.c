/*
 * FUN_006E1C10 (18 B) — if global 0x840850 is non-zero, tail-jumps to
 * FUN_006E2460; otherwise returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_840850;
extern void __cdecl FUN_006E2460(void);

__declspec(naked) void FUN_006E1C10(void)
{
    __asm {
        mov     ecx, dword ptr [g_840850]
        test    ecx, ecx
        je      L_1c1f
        jmp     FUN_006E2460
    L_1c1f:
        xor     eax, eax
        ret
    }
}
