/*
 * FUN_004C6F50 (36 B) — __thiscall. Copies 0xc dwords from [ecx+0x20] to
 * [ecx+0x50], clears bit 2 of [ecx+0x18], then calls the virtual method at
 * [vtable+0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004C6F50(void)
{
    __asm {
        mov     eax, ecx
        push    esi
        push    edi
        lea     esi, [eax + 0x20]
        lea     edi, [eax + 0x50]
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
