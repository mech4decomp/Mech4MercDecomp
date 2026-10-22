/*
 * FUN_00422fd0 (7 B) — __thiscall vtable-pointer initializer.
 * Stores the vtable address 0x76d3f0 into [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_76d3f0;

__declspec(naked) void FUN_00422fd0(void)
{
    __asm {
        mov     dword ptr [ecx], offset g_76d3f0
        ret
    }
}
