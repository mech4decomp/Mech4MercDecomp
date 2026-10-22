/*
 * FUN_100208d0 (11 B) - __fastcall. Vtable-pointer ctor: stores vtable
 * 0x1004aa50 into [ECX], tail-jumps to shared ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_100208d0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004aa50
        jmp     FUN_1001c750
    }
}
