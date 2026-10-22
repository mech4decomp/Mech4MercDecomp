/*
 * FUN_10008cb4 (7 B) - __stdcall.  Switch case fragment (gaptext split one
 * logical switch function; this is case 2).  Sets ecx = 0xc112040d and
 * jumps to the common tail at 0x10008cc0.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008cb4(void)
{
    __asm {
        mov     ecx, 0xc112040d
        /* __emit: jmp target 0x10008cc0 is outside this 7-byte fragment; a label cannot express it */
        __emit 0xEB
        __emit 0x05
    }
}
