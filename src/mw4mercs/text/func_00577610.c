/*
 * FUN_00577610 (11 B) — Thunk: loads this from global, jumps to method.
 *
 * __thiscall (ECX = this loaded from global), tail-calls FUN_005AD2E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f20d0;
extern void __cdecl FUN_005AD2E0(void);

__declspec(naked) void __cdecl FUN_00577610(void)
{
    __asm {
        mov     ecx, dword ptr [DAT_007f20d0]
        jmp     FUN_005AD2E0
    }
}
