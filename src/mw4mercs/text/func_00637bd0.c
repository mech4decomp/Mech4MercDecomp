/*
 * FUN_00637bd0 (19 B) — wrapper: calls FUN_00637c30(arg, 0x1d, 0x21, 0x32).
 * RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637c30(void);

__declspec(naked) void FUN_00637bd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    0x32
        push    0x21
        push    0x1d
        push    eax
        call    FUN_00637c30
        ret     0x4
    }
}
