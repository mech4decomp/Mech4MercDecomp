/*
 * FUN_00637b50 (19 B) — wrapper: calls FUN_00637c30(arg, 0x18, 0x1c, 0x23).
 * RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637c30(void);

__declspec(naked) void FUN_00637b50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    0x23
        push    0x1c
        push    0x18
        push    eax
        call    FUN_00637c30
        ret     0x4
    }
}
