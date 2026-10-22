/*
 * FUN_00637b90 (19 B) — wrapper: calls FUN_00637c30(arg, 0x13, 0x17, 0x28).
 * RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637c30(void);

__declspec(naked) void FUN_00637b90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    0x28
        push    0x17
        push    0x13
        push    eax
        call    FUN_00637c30
        ret     0x4
    }
}
