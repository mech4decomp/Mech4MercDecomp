/*
 * FUN_00404AB0 (5 B) — .text data stub: `xor eax, eax; ret 0xc`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_00404AB0(void)
{
    __asm {
        xor     eax, eax
        ret 0xc
    }
}
