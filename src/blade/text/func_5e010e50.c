/*
 * FUN_5e010e50 (43 B) — forwards to inner object's vtable[0x28/4] method.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e010e50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jz      loc_10e73
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x28]
        ret     0x10
loc_10e73:
        mov     eax, 0x80004005
        ret     0x10
    }
}
