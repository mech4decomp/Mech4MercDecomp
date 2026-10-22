/*
 * FUN_10001C00 (10 B) - this-adjustment thunk: subtracts 8 from the first
 * stack arg (this pointer) then tail-jumps to FUN_10001810.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10001810(void);

__declspec(naked) void __stdcall FUN_10001C00(void)
{
    __asm {
        sub     dword ptr [esp + 4], 8
        jmp     FUN_10001810
    }
}
