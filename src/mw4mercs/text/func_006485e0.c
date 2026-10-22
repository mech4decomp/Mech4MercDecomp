/*
 * FUN_006485e0 (23 B) — Copies an 8-byte struct from param_2 to param_1
 * if param_1 is non-null. __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006485e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      l_done
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
    l_done:
        ret
    }
}
