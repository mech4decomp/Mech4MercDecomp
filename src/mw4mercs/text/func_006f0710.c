/*
 * FUN_006F0710 (87 B) — UI helper: gets a dialog item, sends a message,
 * checks result, calls FUN_00512510.
 *
 * __cdecl, RET 0 (1 stack param).
 *
 * Disassembly:
 *   83 EC 0C             sub     esp, 0xc
 *   8B 44 24 10          mov     eax, [esp + 0x10]
 *   6A 00                push    0
 *   6A 00                push    0
 *   68 F0 00 00 00       push    0xf0
 *   68 1F 04 00 00       push    0x41f
 *   50                   push    eax
 *   C7 44 24 14 01 00 00 00 mov   dword ptr [esp + 0x14], 1
 *   FF 15 A4 B5 76 00    call    dword ptr [0x0076b5a4]  ; GetDlgItem
 *   50                   push    eax
 *   FF 15 60 B5 76 00    call    dword ptr [0x0076b560]  ; SendMessageA
 *   48                   dec     eax
 *   F7 D8                neg     eax
 *   1B C0                sbb     eax, eax
 *   40                   inc     eax
 *   89 44 24 10          mov     [esp + 0x10], eax
 *   8D 44 24 04          lea     eax, [esp + 4]
 *   50                   push    eax
 *   6A 02                push    2
 *   8D 4C 24 08          lea     ecx, [esp + 8]
 *   8D 54 24 18          lea     edx, [esp + 0x18]
 *   6A 00                push    0
 *   89 4C 24 10          mov     [esp + 0x10], ecx
 *   89 54 24 14          mov     [esp + 0x14], edx
 *   E8 AD 1D E2 FF       call    0x00512510
 *   83 C4 0C             add     esp, 0xc
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f0710(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        push    0
        push    0
        push    0xf0
        push    0x41f
        push    eax
        mov     dword ptr [esp + 0x14], 1
        _emit 0xFF
        _emit 0x15
        _emit 0xA4
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        push    eax
        _emit 0xFF
        _emit 0x15
        _emit 0x60
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        dec     eax
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 4]
        push    eax
        push    2
        lea     ecx, [esp + 8]
        lea     edx, [esp + 0x18]
        push    0
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], edx
        _emit 0xE8
        _emit 0xAD
        _emit 0x1D
        _emit 0xE2
        _emit 0xFF
        add     esp, 0xc
        ret
    }
}
