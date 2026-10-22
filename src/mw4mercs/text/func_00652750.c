/*
 * FUN_00652750 (3 B) — __fastcall identity: returns ecx in eax.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00652750(void)
{
    __asm {
        mov     eax, ecx
        ret
    }
}
