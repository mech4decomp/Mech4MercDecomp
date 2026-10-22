/*
 * FUN_10011f80 (11 B) - copies [ECX+0x24] to [ECX+0x28], tail-jumps to FUN_10012040.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_10012040(void);

__declspec(naked) void __cdecl FUN_10011f80(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x24]
        mov     dword ptr [ecx + 0x28], eax
        jmp     FUN_10012040
    }
}
