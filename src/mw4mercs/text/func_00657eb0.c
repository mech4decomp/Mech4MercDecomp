/*
 * FUN_00657eb0 (19 B) — __thiscall constructor: zeroes 5 dwords at
 * this+0x0..0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00657eb0(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax+0x8], ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0xc], ecx
        mov     dword ptr [eax+0x10], ecx
        ret
    }
}
