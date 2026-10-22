/*
 * FUN_004E8330 (23 B) — Copy two 16-bit values from param to this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: src).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004e8330(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dx, word ptr [ecx]
        mov     cx, word ptr [ecx + 2]
        mov     word ptr [eax], dx
        mov     word ptr [eax + 2], cx
        ret     4
    }
}
