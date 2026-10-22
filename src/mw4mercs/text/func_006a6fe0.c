/*
 * FUN_006a6fe0 (18 B) — ABL record ctor (__thiscall, RET 0x4). Sets vtable
 * 0x799e5c, stores a byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00799e5c;

__declspec(naked) void FUN_006a6fe0(void)
{
    __asm {
        mov     eax, ecx
        mov     cl, byte ptr [esp + 0x4]
        mov     byte ptr [eax + 0x4], cl
        mov     dword ptr [eax], offset g_00799e5c
        ret     0x4
    }
}
