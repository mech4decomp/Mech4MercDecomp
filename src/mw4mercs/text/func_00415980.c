/*
 * FUN_00415980 (11 B) — __fastcall (ECX=this): sets vtable ptr 0x76d424,
 * then tail-jumps to FUN_00415c40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c40(void);

__declspec(naked) void FUN_00415980(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76d424
        jmp     FUN_00415c40
    }
}
