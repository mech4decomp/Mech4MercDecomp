/*
 * FUN_5e00ffd0 (28 B) — linked-list lookup by [node+0x18] == param.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00ffd0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x30]
        test    eax, eax
        jz      loc_ffe7
        mov     ecx, dword ptr [esp + 0x4]
loc_ffdb:
        cmp     dword ptr [eax + 0x18], ecx
        jz      loc_ffe9
        mov     eax, dword ptr [eax + 0x20]
        test    eax, eax
        jnz     loc_ffdb
loc_ffe7:
        xor     eax, eax
loc_ffe9:
        ret     0x4
    }
}
