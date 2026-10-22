/*
 * FUN_10042456 (12 B) - __cdecl.
 * Returns 1 if the 16-bit arg at [esp+4] is >= 0x80, else 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10042456(void)
{
    __asm {
        cmp     word ptr [esp + 4], 0x80
        sbb     eax, eax
        neg     eax
        ret
    }
}
