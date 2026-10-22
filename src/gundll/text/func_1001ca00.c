/*
 * FUN_1001ca00 (11 B) - __fastcall. Shared base ctor (tail-jmp target of
 * many vtable ctors): stores vtable 0x1004a8cc into [ECX], tail-jumps to
 * FUN_1001c420.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c420(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1001ca00(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004a8cc
        jmp     FUN_1001c420
    }
}
