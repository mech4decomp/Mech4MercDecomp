/*
 * FUN_00624780 (24 B) — constructor. Copies a byte from the
 * argument object into this+8, zeroes this+0/+4/+8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00624780(void)
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
