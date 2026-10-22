/*
 * FUN_10033D70 (15 B) - __stdcall, RET 0x4.  Loads arg0, computes
 * this = arg0 - 0x18, calls FUN_10033cc0 (fastcall, this in ECX).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_10033cc0(void);

__declspec(naked) void __stdcall FUN_10033D70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        lea     ecx, [eax - 0x18]
        call    FUN_10033cc0
        ret     0x4
    }
}
