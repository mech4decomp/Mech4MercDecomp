/*
 * FUN_5e011020 (33 B) — forwards to inner object's vtable[0x38/4] method.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e011020(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jz      loc_11039
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x38]
        ret     0x8
loc_11039:
        mov     eax, 0x80004005
        ret     0x8
    }
}
