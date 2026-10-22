/*
 * FUN_10008cad (7 B) - __stdcall.  Switch case fragment (gaptext split one
 * logical switch function; this is case 1).  Sets ecx = 0xc112040c and
 * jumps to the common tail at 0x10008cc0.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008cad(void)
{
    __asm {
        mov     ecx, 0xc112040c
        /* __emit: jmp target 0x10008cc0 is outside this 7-byte fragment; a label cannot express it */
        __emit 0xEB
        __emit 0x0C
    }
}
