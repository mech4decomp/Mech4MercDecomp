/*
 * FUN_0050BC00 (3 B) — .text data stub: `mov eax, [ecx]; ret`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_0050BC00(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        ret
    }
}
