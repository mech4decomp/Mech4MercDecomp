/*
 * FUN_5e011050 (33 B) — forwards to inner object's vtable[0x3c/4] method.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e011050(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jz      loc_11069
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x3c]
        ret     0x8
loc_11069:
        mov     eax, 0x80004005
        ret     0x8
    }
}
