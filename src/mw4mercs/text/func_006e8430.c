/*
 * FUN_006E8430 (61 B) — Dialog control enable/disable helper.
 *
 * Gets dialog item 0x3F4, sends BM_GETCHECK (0xF0), converts result
 * to bool (==1), then enables/disables dialog item 0x3F6 accordingly.
 *
 * __cdecl, RET 4 (one param: HWND).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006e8430(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        _emit   0x8B
        _emit   0x3D
        _emit   0xA4
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    0
        push    0
        push    0xF0
        push    0x3F4
        push    esi
        call    edi
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x60
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        dec     eax
        neg     eax
        sbb     eax, eax
        inc     eax
        push    eax
        push    0x3F6
        push    esi
        call    edi
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x44
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        pop     edi
        pop     esi
        ret
    }
}
