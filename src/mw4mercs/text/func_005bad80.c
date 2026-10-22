/*
 * FUN_005bad80 (11 B) — vtable setter.
 *
 * Sets *this (ECX) to vtable 0x00786edc, then tail-jumps to FUN_005bb210.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005bb210(void);

__declspec(naked) void FUN_005bad80(void)
{
    __asm {
        mov     dword ptr [ecx], 0x786edc
        jmp     FUN_005bb210
    }
}
