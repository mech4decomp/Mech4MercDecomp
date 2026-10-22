/*
 * FUN_10034150 (15 B) - __stdcall, RET 0x4.  Calls FUN_10033ce0 on
 * (this - 0x18).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10033ce0(void);

__declspec(naked) void __stdcall FUN_10034150(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        lea     ecx, [eax - 0x18]
        call    FUN_10033ce0
        ret     0x4
    }
}
