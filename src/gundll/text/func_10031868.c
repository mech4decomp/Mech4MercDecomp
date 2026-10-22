/*
 * FUN_10031868 (7 B) - __stdcall, RET 0x10.  Jump-table target of
 * FUN_10031849 (case 1): sets ecx = 2, jumps to shared tail @0x1003187b.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031868(void)
{
    __asm {
        mov     ecx, 2
        __emit 0xeb         /* __emit: rel8 jmp to external addr 0x1003187b; extern symbol forces rel32 */
        __emit 0x0c
    }
}
