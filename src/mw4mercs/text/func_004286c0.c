/*
 * FUN_004286c0 (25 B) — MLR 3-float copy. __thiscall, RET 0x4.
 * Copies 3 dwords from [ESP+4] to [ECX].
 *
 * CFLAGS: /O1
 * Match: target
 */

__declspec(naked) void FUN_004286c0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
