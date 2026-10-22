/*
 * FUN_5e011210 (51 B) — forwards to inner object's vtable[0x64/4] method,
 * clearing bit 3 of the 4th param's high byte.
 *
 * __stdcall, RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e011210(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jz      loc_123b
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        and     dh, 0xf7
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x64]
        ret     0x14
loc_123b:
        mov     eax, 0x80004005
        ret     0x14
    }
}
