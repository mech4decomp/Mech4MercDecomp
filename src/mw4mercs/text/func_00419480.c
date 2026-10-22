/*
 * FUN_00419480 (26 B) — copy 3 dwords (offsets 0xc/0x1c/0x2c) from [ESP+4]
 * into ECX (this) at offsets 0/4/8. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00419480(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     edx, dword ptr [ecx+0xc]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx+0x1c]
        mov     ecx, dword ptr [ecx+0x2c]
        mov     dword ptr [eax+0x4], edx
        mov     dword ptr [eax+0x8], ecx
        ret     4
    }
}
