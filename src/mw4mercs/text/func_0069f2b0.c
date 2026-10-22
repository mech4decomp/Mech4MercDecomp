/*
 * FUN_0069F2B0 (3 B) — Vtable 0x799CD8 slot 11: return 1.
 *
 * __thiscall (ECX = this).
 *
 * Disassembly:
 *   B0 01    mov     al, 1
 *   C3       ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __fastcall FUN_0069f2b0(void)
{
    __asm {
        mov     al, 1
        ret
    }
}
