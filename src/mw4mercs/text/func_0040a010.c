/*
 * FUN_0040a010 (11 B) — installs vtable pointer 0x76ced4 at [ecx], then
 * tail-jumps to FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0040a010(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76ced4
        jmp     FUN_00415380
    }
}
