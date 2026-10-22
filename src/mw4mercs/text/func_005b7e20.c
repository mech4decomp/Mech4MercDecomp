/*
 * FUN_005b7e20 (18 B) — __fastcall (ECX = this).
 *
 * If [this+0x168] != 0, set it to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005b7e20(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x168]
        test    al, al
        jz      L_ret
        mov     byte ptr [ecx + 0x168], 0
    L_ret:
        ret
    }
}
