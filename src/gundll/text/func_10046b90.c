/*
 * FUN_10046B90 (6 B) - __thiscall.  Thunk: loads this = &[ebp-0x3c] into ECX,
 * then jumps to FUN_1000e5a0 (this in ECX).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000e5a0(void);   /* rel32 jmp, this in ECX */

__declspec(naked) void __cdecl FUN_10046B90(void)
{
    __asm {
        lea     ecx, [ebp - 0x3c]
        jmp     FUN_1000e5a0
    }
}
