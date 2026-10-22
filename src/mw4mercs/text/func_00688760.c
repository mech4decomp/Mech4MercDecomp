/*
 * FUN_00688760 (11 B) — __fastcall constructor. Sets vtable ptr
 * 0x798cc8, tail-jumps to FUN_006b06d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b06d0(void);

__declspec(naked) void FUN_00688760(void)
{
    __asm {
        mov     dword ptr [ecx], 0x798cc8
        jmp     FUN_006b06d0
    }
}
