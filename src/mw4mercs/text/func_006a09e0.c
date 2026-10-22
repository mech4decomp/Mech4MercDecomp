/*
 * FUN_006A09E0 (5 B) — Vtable 0x799CD8 slot 8: return 0 (byte), RET 4.
 *
 * __thiscall (ECX = this), RET 4.
 *
 * Disassembly:
 *   32 C0       xor     al, al
 *   C2 04 00    ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __stdcall FUN_006a09e0(void)
{
    __asm {
        xor     al, al
        ret     4
    }
}
