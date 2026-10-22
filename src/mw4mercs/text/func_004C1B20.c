/*
 * FUN_004C1B20 (64 B) — thiscall; copies 0x30 dwords from +0x20 to +0x80 and
 * +0x80 to +0x50, calls FUN_004206B0, clears bit 2 of flags, calls vtable[0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004206b0(void *arg);

__declspec(naked) void __fastcall FUN_004C1B20(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        push    esi
        push    edi
        lea     eax, [ebx + 0x80]
        mov     edi, eax
        lea     esi, [ebx + 0x20]
        mov     ecx, 0xc
        rep movsd
        mov     esi, eax
        lea     edi, [ebx + 0x50]
        mov     ecx, 0xc
        rep movsd
        push    eax
        lea     ecx, [ebx + 0x144]
        call    FUN_004206b0
        and     dword ptr [ebx + 0x18], 0xfffffffb
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
