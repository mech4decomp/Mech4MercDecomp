/*
 * FUN_10041878 (16 B) - __cdecl.
 * Calls FUN_10041755(arg, arg) and returns its result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10041755(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10041878(void)
{
    __asm {
        push    dword ptr [esp + 8]
        push    dword ptr [esp + 8]
        call    FUN_10041755
        pop     ecx
        pop     ecx
        ret
    }
}
