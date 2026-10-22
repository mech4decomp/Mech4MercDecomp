/*
 * FUN_10030410 (21 B) - __stdcall, RET 0x8.  Calls FUN_10033750(arg1,
 * arg0 + 0x1c) and returns its result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033750(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10030410(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        add     eax, 0x1c
        push    eax
        push    ecx
        call    FUN_10033750
        ret     8
    }
}
