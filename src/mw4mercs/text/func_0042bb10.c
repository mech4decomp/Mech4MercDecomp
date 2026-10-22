/*
 * FUN_0042bb10 (31 B) — __thiscall copy: copies 16 bytes (4 dwords) from
 * the source pointer (arg0) into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0042bb10(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ecx
        ret     0x4
    }
}
