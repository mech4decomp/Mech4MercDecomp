/*
 * FUN_006A7500 (5 B) — .text data stub: `mov al, 1; ret 4`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_006A7500(void)
{
    __asm {
        mov     al, 1
        ret 4
    }
}
