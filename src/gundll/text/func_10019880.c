/*
 * FUN_10019880 (11 B) - __fastcall. Vtable-ptr ctor: stores vtable
 * 0x10049a88 into [ECX], tail-jumps to shared base ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10019880(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10049a88
        jmp     FUN_1001c750
    }
}
