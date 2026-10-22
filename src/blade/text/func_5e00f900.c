/*
 * FUN_5e00f900 (43 B) — forwards to inner object's vtable[0x5c/4] method
 * (4 args), or returns E_NOTIMPL (0x80004005).
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f900(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        jz      L_923
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x5c]
        ret     0x10
L_923:
        mov     eax, 0x80004005
        ret     0x10
    }
}
