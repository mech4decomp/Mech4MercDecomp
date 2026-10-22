/*
 * FUN_004155d0 (24 B) — archive/database registered-class subsystem:
 * __thiscall setter. Stores arg1 at this[0x10], arg2 at this[0x14],
 * arg3 at this[0x18]. this=ECX, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_004155d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x10], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x14], edx
        mov     dword ptr [ecx + 0x18], eax
        ret     0xc
    }
}
