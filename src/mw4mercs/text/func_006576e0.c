/*
 * FUN_006576e0 (22 B) — __thiscall constructor: zeroes 6 dwords at
 * this+0x0..0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006576e0(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax+0x8], ecx
        mov     dword ptr [eax+0xc], ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x10], ecx
        mov     dword ptr [eax+0x14], ecx
        ret
    }
}
