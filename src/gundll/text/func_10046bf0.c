/*
 * FUN_10046BF0 (6 B) - __thiscall.  Thunk: loads this = &[ebp-0x30] into ECX,
 * then jumps to FUN_1000f110 (this in ECX).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000f110(void);   /* rel32 jmp, this in ECX */

__declspec(naked) void __cdecl FUN_10046BF0(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_1000f110
    }
}
