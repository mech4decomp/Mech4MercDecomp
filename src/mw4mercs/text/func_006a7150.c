/*
 * FUN_006a7150 (25 B) — ABL record ctor (__thiscall, RET 0x8). Sets vtable
 * 0x799e64, stores a dword + a byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00799e64;

__declspec(naked) void FUN_006a7150(void)
{
    __asm {
        mov     dl, byte ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     byte ptr [eax + 0x8], dl
        mov     dword ptr [eax], offset g_00799e64
        ret     0x8
    }
}
