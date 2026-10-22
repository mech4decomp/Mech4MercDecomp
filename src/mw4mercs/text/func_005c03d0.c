/*
 * FUN_005c03d0 (11 B) — __thiscall (ECX = this).
 *
 * Sets this->vtable = 0x7874f4, then tail-jumps to FUN_005c1520(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c1520(void);

__declspec(naked) void __stdcall FUN_005c03d0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7874f4
        jmp     FUN_005c1520
    }
}
