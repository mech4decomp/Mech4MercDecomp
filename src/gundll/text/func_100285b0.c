/*
 * FUN_100285b0 (11 B) - __fastcall. Vtable-pointer ctor: stores vtable
 * 0x1004ac78 into [ECX], tail-jumps to shared base ctor FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_100285b0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004ac78
        jmp     FUN_1001c8a0
    }
}
