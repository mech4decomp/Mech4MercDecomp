/*
 * FUN_00687ca0 (43 B) — __thiscall struct copy.
 *
 * Copies a 0x18-byte struct from [esp+4] into this. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00687ca0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0xc], edx
        mov     dl, byte ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0x14]
        mov     byte ptr [eax + 0x10], dl
        mov     dword ptr [eax + 0x14], ecx
        ret     0x4
    }
}
