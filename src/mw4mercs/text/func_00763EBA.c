/*
 * FUN_00763EBA (6 B) -- .text data block (not real code): bytes
 * 00 5E 5D C3 90 90. Transcribed faithfully as instructions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00763EBA(void)
{
    __asm {
        add     byte ptr [esi + 0x5d], bl
        ret
        nop
        nop
    }
}
