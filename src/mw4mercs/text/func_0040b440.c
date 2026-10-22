/*
 * FUN_0040b440 (11 B) — __fastcall destructor. Sets the vtable pointer
 * 0x76cfd8 then tail-jumps to FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0040b440(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76cfd8
        jmp     FUN_00415380
    }
}
