/*
 * FUN_006B0640 (3 B) — Vtable 0x798C44 slot 12: return 0.
 *
 * __thiscall (ECX = this).
 *
 * Disassembly:
 *   33 C0    xor     eax, eax
 *   C3       ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_006b0640(void)
{
    __asm {
        xor     eax, eax
        ret
    }
}
