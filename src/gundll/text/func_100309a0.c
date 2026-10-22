/*
 * FUN_100309a0 (13 B) - __thiscall, RET 0x4. Copies dword at param_1+4
 * into this+0x44.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_100309a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 0x44], edx
        ret     4
    }
}
