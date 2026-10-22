/*
 * FUN_004EA0F0 (21 B) — Copies 4 bytes from param_1 to this:
 * byte[0] and word[2].
 *
 * __fastcall (ECX = this/dest), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004ea0f0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, [esp + 4]
        mov     dl, [ecx]
        mov     cx, [ecx + 2]
        mov     [eax], dl
        mov     [eax + 2], cx
        ret     4
    }
}
