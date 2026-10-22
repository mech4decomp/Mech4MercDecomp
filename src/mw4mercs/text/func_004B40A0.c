/*
 * FUN_004B40A0 (5 B) — .text data stub: `mov eax, ecx; ret 4`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_004B40A0(void)
{
    __asm {
        mov     eax, ecx
        ret 4
    }
}
