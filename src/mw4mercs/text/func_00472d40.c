/*
 * FUN_00472d40 (11 B) — sets vtable 0x76f2d4, tail-jumps to FUN_00476810.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00476810(void);

__declspec(naked) void FUN_00472d40(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76f2d4
        jmp     FUN_00476810
    }
}
