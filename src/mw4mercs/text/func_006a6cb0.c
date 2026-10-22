/*
 * FUN_006a6cb0 (32 B) — ABL record ctor (__thiscall, RET 0xc). Sets vtable
 * 0x799e54, stores a dword + 2 bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00799e54;

__declspec(naked) void FUN_006a6cb0(void)
{
    __asm {
        mov     dl, byte ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     cl, byte ptr [esp + 0xc]
        mov     byte ptr [eax + 0x8], dl
        mov     byte ptr [eax + 0x9], cl
        mov     dword ptr [eax], offset g_00799e54
        ret     0xc
    }
}
