/*
 * FUN_0069F290 (3 B) — Vtable 0x799CD8 slot 6: return 1.
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

__declspec(naked) char __fastcall FUN_0069f290(void)
{
    __asm {
        mov     al, 1
        ret
    }
}
