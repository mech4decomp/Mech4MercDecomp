/*
 * FUN_00511920 (10 B) — fragment (prologue of a larger function that
 * Ghidra split at 0x51192A).
 *
 * __cdecl. Loads a byte from 0x007DDD21, then sets up EBX=0 and
 * compares AL against BL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char DAT_007ddd21; /* 0x007DDD21 */

__declspec(naked) void __cdecl FUN_00511920(void)
{
    __asm {
        mov     al, byte ptr [DAT_007ddd21]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
    }
}
