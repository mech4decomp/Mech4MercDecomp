/*
 * FUN_004C6F10 (53 B) — thiscall; copies 0x30 dwords from +0x20 to +0x50 and
 * +0x50 to +0x80, clears bit 2 of flags at +0x18, then calls vtable[0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004C6F10(void)
{
    __asm {
        mov     eax, ecx
        push    esi
        push    edi
        lea     edx, [eax + 0x50]
        mov     edi, edx
        lea     esi, [eax + 0x20]
        mov     ecx, 0xc
        rep movsd
        mov     esi, edx
        lea     edi, [eax + 0x80]
        mov     ecx, 0xc
        rep movsd
        mov     ecx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [eax]
        and     ecx, 0xfffffffb
        mov     dword ptr [eax + 0x18], ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x10]
        pop     edi
        pop     esi
        ret
    }
}
