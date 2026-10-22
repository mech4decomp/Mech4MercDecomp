/*
 * FUN_0060D7E0 (22 B) — __thiscall (ECX = this), RET 0x4, 1 stack param.
 * Copies this->[0x10] and this->[0x12] (16-bit) into param[0] and param[2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0060D7E0(void)
{
    __asm {
        mov     dx, word ptr [ecx + 0x10]
        mov     eax, dword ptr [esp + 0x4]
        mov     cx, word ptr [ecx + 0x12]
        mov     word ptr [eax], dx
        mov     word ptr [eax + 0x2], cx
        ret     0x4
    }
}
