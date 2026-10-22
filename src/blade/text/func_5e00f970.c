/*
 * FUN_5e00f970 (28 B) — forwards to inner object's vtable[0x64/4] method
 * (1 arg), or returns E_NOTIMPL (0x80004005).
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f970(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        jz      L_984
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x64]
        ret     0x4
L_984:
        mov     eax, 0x80004005
        ret     0x4
    }
}
