/*
 * FUN_00688490 (22 B) — __fastcall constructor. Sets vtable ptr
 * 0x798c84, zeroes this[0x20..0x28], tail-jumps to FUN_006b06d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b06d0(void);

__declspec(naked) void FUN_00688490(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx], 0x798c84
        mov     dword ptr [ecx + 0x20], eax
        mov     dword ptr [ecx + 0x24], eax
        mov     dword ptr [ecx + 0x28], eax
        jmp     FUN_006b06d0
    }
}
