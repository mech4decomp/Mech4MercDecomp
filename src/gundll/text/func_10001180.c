/*
 * FUN_10001180 (25 B) — __thiscall, RET 0x4.
 * Object constructor: sets vtable 0x1004926c, refcount 1, and stores
 * param_1 at offset 8.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10001180(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], 0x1004926c
        mov     dword ptr [eax + 0x4], 1
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
