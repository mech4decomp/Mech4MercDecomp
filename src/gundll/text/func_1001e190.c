/*
 * FUN_1001e190 (11 B) - __fastcall. Vtable-ptr ctor: stores vtable
 * 0x1004a99c into [ECX], tail-jumps to shared base ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1001e190(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004a99c
        jmp     FUN_1001c750
    }
}
