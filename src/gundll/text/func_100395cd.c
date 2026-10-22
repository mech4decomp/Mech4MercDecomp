/*
 * FUN_100395cd (10 B) - __cdecl. Fragment (uses EBP frame set up by caller
 * FUN_10039528): pushes a local, calls FUN_10039643, discards the arg.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039643(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_100395cd(void)
{
    __asm {
        push    dword ptr [ebp - 0x14]
        call    FUN_10039643
        pop     ecx
        ret
    }
}
