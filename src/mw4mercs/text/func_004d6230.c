/*
 * FUN_004D6230 (7 B) — __fastcall set byte at this+0x10 to 1 (RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004d6230(void)
{
    __asm {
        mov byte ptr [ecx + 0x10], 1
        ret 4
    }
}
