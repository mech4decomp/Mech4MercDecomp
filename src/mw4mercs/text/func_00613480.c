/*
 * FUN_00613480 (11 B) — sets vtable 0x78c1bc on `this` then tail-jumps
 * to FUN_00609da0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00609da0(void);

__declspec(naked) void FUN_00613480(void)
{
    __asm {
        mov     dword ptr [ecx], 0x78c1bc
        jmp     FUN_00609da0
    }
}
