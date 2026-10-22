/*
 * FUN_10023e20 (11 B) - __fastcall. Vtable-pointer ctor: stores vtable
 * 0x1004ab58 into [ECX], tail-jumps to shared base ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10023e20(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004ab58
        jmp     FUN_1001c750
    }
}
