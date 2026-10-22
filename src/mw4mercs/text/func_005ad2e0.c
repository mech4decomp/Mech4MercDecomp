/*
 * FUN_005AD2E0 (8 B) — __thiscall (ECX = this), tail-jump to FUN_0041FD80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041FD80(void);

__declspec(naked) void __stdcall FUN_005AD2E0(void)
{
    __asm {
        add     ecx, 0x18
        jmp     FUN_0041FD80
    }
}
