/*
 * FUN_006584d0 (35 B) — Copy 16 bytes (4 dwords) from param to this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006584d0(void *param)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [ecx]
        mov     edx, eax
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], esi
        mov     esi, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xC]
        mov     dword ptr [edx + 0x8], esi
        mov     dword ptr [edx + 0xC], ecx
        pop     esi
        ret     4
    }
}
