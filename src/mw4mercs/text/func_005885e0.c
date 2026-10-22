/*
 * FUN_005885E0 (21 B) — Byte+word copy thunk.
 *
 * Copies byte from src[0] to this[0], word from src[2] to this[2].
 * __fastcall (ECX = this, stack = src pointer), ret 4.
 *
 * Disassembly:
 *   8B C1          mov     eax, ecx
 *   8B 4C 24 04    mov     ecx, [esp+4]
 *   8A 11          mov     dl, [ecx]
 *   66 8B 49 02    mov     cx, [ecx+2]
 *   88 10          mov     [eax], dl
 *   66 89 48 02    mov     [eax+2], cx
 *   C2 04 00       ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_005885e0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, [esp+4]
        mov     dl, [ecx]
        mov     cx, [ecx+2]
        mov     [eax], dl
        mov     [eax+2], cx
        ret     4
    }
}
