/*
 * FUN_0063efe0 (38 B) — Linear table lookup.
 *
 * __stdcall (1 stack param). Scans a table of 8-byte entries starting
 * at 0x791fa0 for a matching key; returns the associated value, or
 * -1 if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_0063efe0(int param)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        xor     ecx, ecx
        mov     eax, 0x791fa0
    l_loop:
        cmp     dword ptr [eax], edx
        jz      l_found
        add     eax, 0x8
        inc     ecx
        cmp     eax, 0x792200
        jl      l_loop
        or      eax, 0xffffffff
        ret
    l_found:
        mov     eax, dword ptr [ecx * 0x8 + 0x791fa4]
        ret
    }
}
