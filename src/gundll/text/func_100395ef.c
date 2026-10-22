/*
 * FUN_100395ef (6 B) - Fragment (uses EBP frame set up by caller
 * FUN_10039528): loads ESI/EDI from args, then falls through into
 * FUN_100395f5. (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_100395ef(void)
{
    __asm {
        mov     esi, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp + 0x8]
    }
}
