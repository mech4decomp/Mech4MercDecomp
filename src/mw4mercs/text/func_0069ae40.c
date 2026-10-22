/*
 * FUN_0069ae40 (3 B) -- returns 0 (xor eax,eax; ret).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069ae40(void)
{
    __asm {
        xor     eax, eax
        ret
    }
}
