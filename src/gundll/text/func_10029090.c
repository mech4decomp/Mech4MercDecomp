/*
 * FUN_10029090 (11 B) - __fastcall. Vtable-pointer ctor: stores vtable
 * 0x1004acc0 into [ECX], tail-jumps to shared base ctor FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10029090(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004acc0
        jmp     FUN_1001c8a0
    }
}
