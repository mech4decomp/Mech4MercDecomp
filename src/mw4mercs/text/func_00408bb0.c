/*
 * FUN_00408bb0 (18 B) — __thiscall: sets vtable pointer and a field, then
 * tail-calls FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00408bb0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76cd68
        mov     dword ptr [ecx + 0x10], 0xffffffff
        jmp     FUN_00415380
    }
}
