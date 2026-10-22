/*
 * FUN_005ff840 (18 B) — __thiscall. Copies 8 bytes from [ECX+8] to the
 * caller-supplied 8-byte buffer at [ESP+4]. Small sibling helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005ff840(void)
{
    __asm {
        mov     edx, dword ptr [ecx+0x8]
        mov     eax, dword ptr [esp+0x4]
        mov     ecx, dword ptr [ecx+0xc]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], ecx
        ret     0x4
    }
}
