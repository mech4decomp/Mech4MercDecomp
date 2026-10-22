/*
 * FUN_006A09D0 (3 B) — Vtable 0x799CD8 slot 7: return 0.
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

__declspec(naked) int __fastcall FUN_006a09d0(void)
{
    __asm {
        xor     eax, eax
        ret
    }
}
