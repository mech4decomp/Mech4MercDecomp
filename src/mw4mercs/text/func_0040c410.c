/*
 * FUN_0040c410 (25 B) — __thiscall copy of a 12-byte struct from
 * [esp+4] into the object in ECX (this). Copies 3 dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040c410(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx+0x4]
        mov     ecx, dword ptr [ecx+0x8]
        mov     dword ptr [eax+0x4], edx
        mov     dword ptr [eax+0x8], ecx
        ret     0x4
    }
}
