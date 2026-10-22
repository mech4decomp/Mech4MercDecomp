/*
 * FUN_10034140 (15 B) - __stdcall, RET 0x4.  Calls FUN_10033cc0 on
 * (this - 0x18).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033cc0(void);

__declspec(naked) void __stdcall FUN_10034140(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        lea     ecx, [eax - 0x18]
        call    FUN_10033cc0
        ret     0x4
    }
}
