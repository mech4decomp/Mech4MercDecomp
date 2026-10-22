/*
 * FUN_005aa0a0 (11 B) — vtable installer (__fastcall/__thiscall, ECX = this).
 *
 * Sets *this = 0x785340 then tail-jumps to FUN_005bb210.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005bb210(void);

__declspec(naked) void FUN_005aa0a0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x785340
        jmp     FUN_005bb210
    }
}
