/*
 * FUN_1003186F (7 B) - __stdcall, RET 0x10.  Jump-table target of
 * FUN_10031849 (case 2): sets ecx = 3, jumps to shared tail @0x1003187b.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1003186F(void)
{
    __asm {
        mov     ecx, 3
        __emit 0xeb         /* __emit: rel8 jmp to external addr 0x1003187b; extern symbol forces rel32 */
        __emit 0x05
    }
}
