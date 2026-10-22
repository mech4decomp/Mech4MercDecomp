/*
 * FUN_1000e060 (14 B) - sets vtable ptr 0x100214f8, advances ECX by 0xc,
 * then tail-jumps to FUN_10011f60 (critical-section init).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10011f60(void);

__declspec(naked) void __cdecl FUN_1000e060(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100214f8
        add     ecx, 0xc
        jmp     FUN_10011f60
    }
}
