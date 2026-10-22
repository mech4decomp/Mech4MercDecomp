/*
 * FUN_10039890 (8 B) - Fragment (uses EBP frame set up by caller): restores
 * ESP then tail-jumps to FUN_1003990c. (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003990c(void);   /* rel32 jmp target */

__declspec(naked) void __cdecl FUN_10039890(void)
{
    __asm {
        mov     esp, dword ptr [ebp - 0x18]
        jmp     FUN_1003990c
    }
}
