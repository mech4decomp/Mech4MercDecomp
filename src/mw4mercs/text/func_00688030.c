/*
 * FUN_00688030 (18 B) — __fastcall constructor. Sets vtable ptr
 * 0x798c04, zeroes this[0x20], tail-jumps to FUN_006b06d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b06d0(void);

__declspec(naked) void FUN_00688030(void)
{
    __asm {
        mov     dword ptr [ecx], 0x798c04
        mov     dword ptr [ecx + 0x20], 0
        jmp     FUN_006b06d0
    }
}
