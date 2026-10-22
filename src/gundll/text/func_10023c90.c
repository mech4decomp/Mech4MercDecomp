/*
 * FUN_10023c90 (11 B) - __fastcall. Vtable-pointer ctor: stores vtable
 * 0x1004ab4c into [ECX], tail-jumps to shared base ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10023c90(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004ab4c
        jmp     FUN_1001c750
    }
}
