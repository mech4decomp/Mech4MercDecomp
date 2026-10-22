/*
 * FUN_0050BC10 (4 B) — .text data stub: `mov eax, [ecx+4]; ret`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_0050BC10(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        ret
    }
}
