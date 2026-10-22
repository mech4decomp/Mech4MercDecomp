/*
 * FUN_005fffa0 (19 B) — __thiscall: pushes &arg, adds 0x2a4 to this
 * (ECX), tail-calls FUN_00416b60, returns 4 bytes of args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);

__declspec(naked) void FUN_005fffa0(void)
{
    __asm {
        lea     eax, [esp+4]
        push    eax
        add     ecx, 0x2a4
        call    FUN_00416b60
        ret     4
    }
}
