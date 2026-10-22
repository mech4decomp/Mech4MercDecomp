/*
 * FUN_006250e0 (35 B) — Copies a 16-byte struct from param_2 to param_1
 * if param_1 is non-null.
 *
 * __cdecl, RET 0 (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006250e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      l_done
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ecx
    l_done:
        ret
    }
}
