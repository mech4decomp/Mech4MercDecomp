/*
 * FUN_006ADDF0 (60 B) — __thiscall (ECX = this, 8 stack params, RET 0x20).
 *
 * Constructor: copies 8 dwords from the stack into this[0..7].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006addf0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], edx
        ret     0x20
    }
}
