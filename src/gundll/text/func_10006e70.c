/*
 * FUN_10006E70 (18 B) - __stdcall, RET 0xc.  Forwards args 2..3 to
 * FUN_1001c2d0 (__stdcall, 2 params) and returns its result.  arg1 is
 * ignored.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c2d0(void);   /* rel32 call, RET 0x8 (2 args) */

__declspec(naked) void __stdcall FUN_10006E70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        call    FUN_1001c2d0
        ret     0xc
    }
}
