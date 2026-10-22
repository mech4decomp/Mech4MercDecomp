/*
 * FUN_005d2900 (26 B) — __thiscall (ECX=this), RET 4.
 * Copies three dwords from param+0xC/0x1C/0x2C into this+0/4/8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d2900(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0xC]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x1C]
        mov     ecx, dword ptr [ecx + 0x2C]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
