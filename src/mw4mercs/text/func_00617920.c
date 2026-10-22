/*
 * FUN_00617920 (16 B) — __thiscall helper: pushes &this[0x40] and calls
 * FUN_00416b60, then returns with RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);

__declspec(naked) void FUN_00617920(void)
{
    __asm {
        lea     eax, [esp+0x4]
        push    eax
        add     ecx, 0x40
        call    FUN_00416b60
        ret     0x4
    }
}
