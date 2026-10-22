/*
 * FUN_10006E40 (23 B) - __stdcall, RET 0x10.  Forwards args 2..4 to
 * FUN_1001c190 (__stdcall, 3 params) and returns its result.  arg1 is
 * ignored.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c190(void);   /* rel32 call, RET 0xc (3 args) */

__declspec(naked) void __stdcall FUN_10006E40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        push    edx
        call    FUN_1001c190
        ret     0x10
    }
}
