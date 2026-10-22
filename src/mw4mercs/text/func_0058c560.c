/*
 * FUN_0058c560 (166 B) — Float field initializer from virtual method result.
 *
 * Calls a virtual method on this+0x78, copies float values from the
 * returned object at offsets 0x31C, 0x320, 0x32C, 0x324, 0x328 to
 * various offsets in this, and zeroes several fields.
 *
 * __thiscall (ECX = this), no stack params, void return.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0058C560(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]

        fld     dword ptr [eax + 0x31C]
        fst     dword ptr [esi + 0x7E4]
        xor     ecx, ecx
        fstp    dword ptr [esi + 0x7E8]
        mov     dword ptr [esi + 0x7DC], ecx

        fld     dword ptr [eax + 0x320]
        mov     dword ptr [esi + 0x7E0], ecx
        fst     dword ptr [esi + 0x7F4]
        mov     dword ptr [esi + 0x7EC], ecx
        fstp    dword ptr [esi + 0x7F8]
        mov     dword ptr [esi + 0x7F0], ecx

        fld     dword ptr [eax + 0x32C]
        mov     dword ptr [esi + 0x7FC], ecx
        fst     dword ptr [esi + 0x804]
        mov     dword ptr [esi + 0x800], ecx
        fstp    dword ptr [esi + 0x808]
        mov     dword ptr [esi + 0x80C], ecx

        fld     dword ptr [eax + 0x324]
        mov     dword ptr [esi + 0x810], ecx
        fst     dword ptr [esi + 0x814]
        mov     dword ptr [esi + 0x81C], ecx
        fstp    dword ptr [esi + 0x818]
        mov     dword ptr [esi + 0x820], ecx

        fld     dword ptr [eax + 0x328]
        fst     dword ptr [esi + 0x824]
        fstp    dword ptr [esi + 0x828]

        pop     esi
        ret
    }
}
