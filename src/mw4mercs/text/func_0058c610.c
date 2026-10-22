/*
 * FUN_0058c610 (166 B) — Float field initializer from virtual method result.
 *
 * Same pattern as FUN_0058C560 but with different source offsets
 * (0x330, 0x334, 0x340, 0x338, 0x33C instead of 0x31C, 0x320,
 * 0x32C, 0x324, 0x328).
 *
 * __thiscall (ECX = this), no stack params, void return.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0058C610(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]

        fld     dword ptr [eax + 0x330]
        fst     dword ptr [esi + 0x7E4]
        xor     ecx, ecx
        fstp    dword ptr [esi + 0x7E8]
        mov     dword ptr [esi + 0x7DC], ecx

        fld     dword ptr [eax + 0x334]
        mov     dword ptr [esi + 0x7E0], ecx
        fst     dword ptr [esi + 0x7F4]
        mov     dword ptr [esi + 0x7EC], ecx
        fstp    dword ptr [esi + 0x7F8]
        mov     dword ptr [esi + 0x7F0], ecx

        fld     dword ptr [eax + 0x340]
        mov     dword ptr [esi + 0x7FC], ecx
        fst     dword ptr [esi + 0x804]
        mov     dword ptr [esi + 0x800], ecx
        fstp    dword ptr [esi + 0x808]
        mov     dword ptr [esi + 0x80C], ecx

        fld     dword ptr [eax + 0x338]
        mov     dword ptr [esi + 0x810], ecx
        fst     dword ptr [esi + 0x814]
        mov     dword ptr [esi + 0x81C], ecx
        fstp    dword ptr [esi + 0x818]
        mov     dword ptr [esi + 0x820], ecx

        fld     dword ptr [eax + 0x33C]
        fst     dword ptr [esi + 0x824]
        fstp    dword ptr [esi + 0x828]

        pop     esi
        ret
    }
}
