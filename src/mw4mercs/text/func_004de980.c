/*
 * FUN_004DE980 (16 B) — Thunk: pushes 0x3f000000 twice and
 * calls FUN_00723160 (gos_SetScale?).
 *
 * __cdecl, no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00723160(float, float);

__declspec(naked) void __cdecl FUN_004de980(void)
{
    __asm {
        push    0x3f000000
        push    0x3f000000
        call    FUN_00723160
        ret
    }
}
