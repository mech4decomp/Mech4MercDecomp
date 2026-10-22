/*
 * FUN_10001C80 (10 B) - this-adjustment thunk: subtracts 0x10 from the first
 * stack arg (this pointer) then tail-jumps to FUN_100017E0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_100017E0(void);

__declspec(naked) void __stdcall FUN_10001C80(void)
{
    __asm {
        sub     dword ptr [esp + 4], 0x10
        jmp     FUN_100017E0
    }
}
