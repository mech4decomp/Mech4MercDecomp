/*
 * FUN_5e010e20 (38 B) — forwards to inner object's vtable[0x24/4] method.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e010e20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jz      loc_10e3e
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x24]
        ret     0xc
loc_10e3e:
        mov     eax, 0x80004005
        ret     0xc
    }
}
