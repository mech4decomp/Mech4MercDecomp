/*
 * FUN_00612200 (3 B) — .text data stub: `xor eax, eax; ret`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_00612200(void)
{
    __asm {
        xor     eax, eax
        ret
    }
}
