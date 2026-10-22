/*
 * FUN_004844C0 (3 B) — .text data stub: `mov eax, ecx; ret`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_004844C0(void)
{
    __asm {
        mov     eax, ecx
        ret
    }
}
