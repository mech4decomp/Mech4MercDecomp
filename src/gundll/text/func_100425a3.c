/*
 * FUN_100425A3 (11 B) - __cdecl.  Thin wrapper: FUN_1004248f(arg1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1004248f(void);

__declspec(naked) void FUN_100425A3(void)
{
    __asm {
        push    dword ptr [esp + 4]
        call    FUN_1004248f
        pop     ecx
        ret
    }
}
