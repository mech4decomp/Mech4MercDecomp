/*
 * FUN_006EE660 (113 B) — Dialog checkbox state handler (0x415/0x416).
 *
 * __cdecl. Gets checkbox state from dialog item 0x415 (BM_GETCHECK),
 * converts to bool (==1), calls FUN_00512510, then enables/disables
 * item 0x416 based on result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00512510(int, int, void *);

__declspec(naked) void __cdecl FUN_006ee660(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        _emit   0x8B
        _emit   0x3D
        _emit   0xA4
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    0x0
        push    0x0
        push    0xf0
        push    0x415
        push    esi
        mov     dword ptr [esp + 0x1c], 7
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
        lea     edx, [esp + 0xc]
        inc     eax
        push    edx
        mov     dword ptr [esp + 0x1c], eax
        push    0x2
        lea     eax, [esp + 0x10]
        lea     ecx, [esp + 0x20]
        push    0x0
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ecx
        call    FUN_00512510
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    0x416
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
        add     esp, 0xc
        ret
    }
}
