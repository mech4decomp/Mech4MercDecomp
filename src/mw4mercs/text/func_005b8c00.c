/*
 * FUN_005b8c00 (11 B) — Constructor helper. __fastcall (ECX = this).
 * Sets vtable 0x786ac8, tail-jumps to FUN_005f07e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f07e0(void);

__declspec(naked) void __fastcall FUN_005b8c00(void *this_)
{
    __asm {
        mov     dword ptr [ecx], 0x786ac8
        jmp     FUN_005f07e0
    }
}
