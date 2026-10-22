/*
 * FUN_006a7cc0 (24 B) — ABL record init (__thiscall, RET 0x4). Copies a byte
 * from param, zeroes the record.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a7cc0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 0x8], dl
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
