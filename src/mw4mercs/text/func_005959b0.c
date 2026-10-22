/*
 * FUN_005959B0 (21 B) — Two-word field setter.
 *
 * Copies two words from the stack param to this->field_0x34 and
 * this->field_0x36. __fastcall (ECX = this), ret 4.
 *
 * Disassembly:
 *   66 8B 44 24 04    mov     ax, [esp+4]
 *   66 8B 54 24 06    mov     dx, [esp+6]
 *   66 89 41 34       mov     [ecx+0x34], ax
 *   66 89 51 36       mov     [ecx+0x36], dx
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_005959b0(void)
{
    __asm {
        mov     ax, [esp+4]
        mov     dx, [esp+6]
        mov     [ecx+0x34], ax
        mov     [ecx+0x36], dx
        ret     4
    }
}
