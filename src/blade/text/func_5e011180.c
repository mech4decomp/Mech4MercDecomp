/*
 * FUN_5e011180 (55 B) — forwards to inner object's vtable[0x58/4] method,
 * then conditionally flips a flag on the outer object.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e011180(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, 0x80004005
        mov     ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        jz      loc_119d
        mov     eax, dword ptr [ecx]
        push    esi
        push    ecx
        call    dword ptr [eax + 0x58]
loc_119d:
        test    byte ptr [edi + 0x28], 0x1
        jz      loc_11b2
        mov     ecx, dword ptr [esi + 0x68]
        and     ecx, 0xffffffbf
        or      ecx, 0x20000
        mov     dword ptr [esi + 0x68], ecx
loc_11b2:
        pop     edi
        pop     esi
        ret     0x8
    }
}
