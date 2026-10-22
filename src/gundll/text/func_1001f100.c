/*
 * FUN_1001f100 (11 B) - __fastcall. Vtable-ptr ctor: stores vtable
 * 0x1004a9e4 into [ECX], tail-jumps to shared base ctor FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1001f100(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004a9e4
        jmp     FUN_1001c8a0
    }
}
