/*
 * FUN_005a94e0 (25 B) — __thiscall; copies 12 bytes from [esp+4] into this.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a94e0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, [esp + 0x4]
        mov     edx, [ecx]
        mov     [eax], edx
        mov     edx, [ecx + 0x4]
        mov     ecx, [ecx + 0x8]
        mov     [eax + 0x4], edx
        mov     [eax + 0x8], ecx
        ret     0x4
    }
}
