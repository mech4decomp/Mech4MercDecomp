/*
 * FUN_004FDE20 (49 B) — Registers two Adept debug-draw commands with
 * FUN_0070f090: "Libraries\\Adept\\Show Lines vs. OBBs" (handlers
 * 0x4fde60/0x4fde80) and "Libraries\\Adept\\Show OBB vs. OBBs"
 * (handlers 0x4fde70/0x4fded0).
 *
 * __cdecl, no params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004fde20(void)
{
    __asm {
        push    0
        push    0
        push    0x4fde80
        push    0x4fde60
        push    0x7760e4
        call    FUN_0070f090
        push    0
        push    0
        push    0x4fded0
        push    0x4fde70
        push    0x7760c0
        call    FUN_0070f090
        ret
    }
}
