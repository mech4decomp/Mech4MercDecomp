/*
 * FUN_006A7570 (60 B) — __thiscall (ECX = this, 4 stack params, RET 0x10).
 *
 * Constructor: fills this with a vtable pointer (0x799E6C) and copies
 * fields from param_1 (a 3-dword struct) plus three scalar params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006a7570(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], 0x4
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [eax], 0x799e6c
        ret     0x10
    }
}
