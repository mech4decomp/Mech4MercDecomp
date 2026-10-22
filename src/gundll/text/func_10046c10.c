/*
 * FUN_10046C10 (6 B) - __thiscall.  Thunk: loads this = &[ebp-0x30] into ECX,
 * then jumps to FUN_1000f380 (this in ECX).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000f380(void);   /* rel32 jmp, this in ECX */

__declspec(naked) void __cdecl FUN_10046C10(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_1000f380
    }
}
