/*
 * FUN_0069f260 (32 B) — __thiscall, ECX = this, 3 params (RET 0xc).
 *
 * Constructor: sets this[1..3] from params, installs vtable 0x799b94.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069f260(int param_1, int param_2, int param_3)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax], 0x799b94
        ret     0xc
    }
}
