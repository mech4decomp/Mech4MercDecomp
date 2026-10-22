/*
 * FUN_005aeeb0 (83 B) — __thiscall (ECX = this), RET 0x1c (7 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005aeeb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x4], 0x0
        mov     dword ptr [ecx + 0x10], edx
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x14], eax
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x18], edx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x20], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x24], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ecx + 0x28], edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx + 0x2c], eax
        mov     dword ptr [ecx + 0x8], edx
        mov     byte ptr [ecx], 0x1
        ret     0x1c
    }
}
