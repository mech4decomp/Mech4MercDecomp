/*
 * FUN_0061c190 (10 B) — setter: stores a byte argument into global 0x007f2940.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_007f2940;

__declspec(naked) void FUN_0061c190(void)
{
    __asm {
        mov     al, byte ptr [esp+4]
        mov     byte ptr [g_007f2940], al
        ret
    }
}
