/*
 * FUN_0068f150 (35 B) — Initialize a 16-byte structure from param's first
 * two dwords, zeroing the rest.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0068f150(void *param)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        xor     edx, edx
        push    esi
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0xC], edx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x8], esi
        mov     dword ptr [eax + 0xC], ecx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax], edx
        pop     esi
        ret     4
    }
}
