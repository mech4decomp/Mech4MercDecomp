/*
 * FUN_5e00f600 (39 B) — forwards to inner object's vtable[0x50/4] method,
 * masking param3 when the object's +0x28 field is zero.
 *
 * __stdcall, RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f600(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax + 0x28]
        mov     eax, dword ptr [eax + 0x20]
        test    ecx, ecx
        mov     ecx, dword ptr [eax]
        jnz     skip_and
        and     edx, 0xfffff07b
skip_and:
        push    edx
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x50]
        ret     0xc
    }
}
