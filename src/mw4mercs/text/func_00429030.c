/*
 * FUN_00429030 (11 B) — __fastcall MLR object constructor: installs vtable
 * pointer 0x76dfa8 at [this], then tail-jumps to base ctor FUN_00482150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00482150(void);

__declspec(naked) void FUN_00429030(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76dfa8
        jmp     FUN_00482150
    }
}
