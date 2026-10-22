/*
 * FUN_00598C10 (19 B) — 8-byte copy thunk.
 *
 * Copies 8 bytes from src to this.
 * __fastcall (ECX = this, stack = src pointer), ret 4.
 *
 * Disassembly:
 *   8B C1          mov     eax, ecx
 *   8B 4C 24 04    mov     ecx, [esp+4]
 *   8B 11          mov     edx, [ecx]
 *   8B 49 04       mov     ecx, [ecx+4]
 *   89 10          mov     [eax], edx
 *   89 48 04       mov     [eax+4], ecx
 *   C2 04 00       ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_00598c10(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, [esp+4]
        mov     edx, [ecx]
        mov     ecx, [ecx+4]
        mov     [eax], edx
        mov     [eax+4], ecx
        ret     4
    }
}
