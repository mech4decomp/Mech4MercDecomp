/*
 * FUN_10006E60 (13 B) - __stdcall, RET 0x8.  Forwards arg2 to
 * FUN_1001c2a0 (__stdcall, 1 param) and returns its result.  arg1 is
 * ignored.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c2a0(void);   /* rel32 call, RET 0x4 (1 arg) */

__declspec(naked) void __stdcall FUN_10006E60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    FUN_1001c2a0
        ret     0x8
    }
}
