/*
 * FUN_006989e0 (24 B) — __thiscall: initializes a small sub-object
 * (zeroes dwords at 0/4/8, copies a byte from param1 into offset 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006989e0(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax+8], dl
        mov     dword ptr [eax+4], ecx
        mov     dword ptr [eax+8], ecx
        ret     4
    }
}
