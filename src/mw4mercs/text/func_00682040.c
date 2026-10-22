/*
 * FUN_00682040 (24 B) — HUD element constructor: initializes a small object
 * (this) from a byte read at the first stack arg. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00682040(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax+0x8], dl
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], ecx
        ret     0x4
    }
}
