/*
 * FUN_006874b0 (25 B) — __thiscall, RET 0xc. Stores 3 dwords into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006874b0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp+0xc]
        mov     dword ptr [eax+0x4], edx
        mov     dword ptr [eax+0x8], ecx
        ret     0xc
    }
}
