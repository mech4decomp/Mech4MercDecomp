/*
 * FUN_00624520 (10 B) - __thiscall (ECX = this), RET 0x4 (one stack param).
 * Sets byte at this+0x24 from param_1.
 *
 * ABL interpreter region. Setter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00624520(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        mov     byte ptr [ecx + 0x24], al
        ret     0x4
    }
}
