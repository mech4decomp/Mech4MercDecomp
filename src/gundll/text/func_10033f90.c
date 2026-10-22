/*
 * FUN_10033F90 (17 B) - __stdcall, RET 0x4.  Computes this = arg0 - 0x18,
 * calls FUN_10033af0 (fastcall, this in ECX), returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_10033af0(void);

__declspec(naked) void __stdcall FUN_10033F90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        lea     ecx, [eax - 0x18]
        call    FUN_10033af0
        xor     eax, eax
        ret     0x4
    }
}
