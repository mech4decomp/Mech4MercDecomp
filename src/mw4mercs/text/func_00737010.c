/*
 * FUN_00737010 (3 B) — .text data stub: `xor eax, eax; ret`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_00737010(void)
{
    __asm {
        xor     eax, eax
        ret
    }
}
