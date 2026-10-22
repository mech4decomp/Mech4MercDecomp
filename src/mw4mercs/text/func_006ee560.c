/*
 * FUN_006EE560 (122 B) — Dialog slider handler (0x421).
 *
 * __cdecl. Gets slider position from dialog item 0x421 (TBM_GETPOS),
 * computes (pos + 2) * 1000000, calls FUN_00512510, then fills
 * global buffer 0x00842B10 with 0x18 dwords of 0xFFFFFFFF.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00512510(int, int, void *);

__declspec(naked) void __cdecl FUN_006ee560(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        push    edi
        push    0x0
        push    0x0
        push    0x147
        push    0x421
        push    eax
        mov     dword ptr [esp + 0x18], 0x3c
        _emit   0xFF
        _emit   0x15
        _emit   0xA4
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x60
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        add     eax, 2
        lea     eax, [eax + eax * 4]
        lea     eax, [eax + eax * 4]
        lea     eax, [eax + eax * 4]
        lea     eax, [eax + eax * 4]
        lea     eax, [eax + eax * 4]
        lea     ecx, [eax + eax * 4]
        shl     ecx, 6
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 8]
        push    ecx
        push    0x2
        lea     edx, [esp + 0xc]
        lea     eax, [esp + 0x1c]
        push    0x0
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00512510
        mov     ecx, 0x18
        or      eax, -1
        mov     edi, 0x842b10
        rep stosd
        pop     edi
        add     esp, 0xc
        ret
    }
}
