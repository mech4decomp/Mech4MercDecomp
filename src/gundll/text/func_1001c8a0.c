/*
 * FUN_1001c8a0 (11 B) - __fastcall. Shared base ctor (tail-jmp target of
 * many vtable ctors): stores vtable 0x1004a8c0 into [ECX], tail-jumps to
 * FUN_1001c420.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c420(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1001c8a0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004a8c0
        jmp     FUN_1001c420
    }
}
