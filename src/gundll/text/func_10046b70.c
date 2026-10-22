/*
 * FUN_10046B70 (6 B) - __thiscall.  Thunk: loads this = &[ebp-0x2c] into ECX,
 * then jumps to FUN_1000e220 (this in ECX).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000e220(void);   /* rel32 jmp, this in ECX */

__declspec(naked) void __cdecl FUN_10046B70(void)
{
    __asm {
        lea     ecx, [ebp - 0x2c]
        jmp     FUN_1000e220
    }
}
