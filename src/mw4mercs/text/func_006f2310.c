/*
 * FUN_006F2310 (3 B) — Getter: return *param_1.
 *
 * __fastcall (ECX = param_1).
 *
 * Disassembly:
 *   8B 01    mov     eax, [ecx]
 *   C3       ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __fastcall FUN_006f2310(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        ret
    }
}
