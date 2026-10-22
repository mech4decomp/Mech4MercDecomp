/*
 * FUN_10001CA0 (10 B) - this-adjustment thunk: subtracts 0x14 from the first
 * stack arg (this pointer) then tail-jumps to FUN_100017C0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_100017C0(void);

__declspec(naked) void __stdcall FUN_10001CA0(void)
{
    __asm {
        sub     dword ptr [esp + 4], 0x14
        jmp     FUN_100017C0
    }
}
