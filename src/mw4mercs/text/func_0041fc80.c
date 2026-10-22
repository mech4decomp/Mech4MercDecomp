/*
 * FUN_0041fc80 (12 B) — __thiscall, RET 0x4 (1 param). Nulls the +0x4 member
 * and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041fc80(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax + 0x4], 0x0
        ret     0x4
    }
}
