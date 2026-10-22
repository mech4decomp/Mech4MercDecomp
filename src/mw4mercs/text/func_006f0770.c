/*
 * FUN_006F0770 (102 B) — UI helper: calls FUN_00513d70(0,0,0), then
 * FUN_00513d20(0,2,...), and conditionally calls FUN_0072d830 +
 * FUN_006e4210.
 *
 * __cdecl.
 *
 * Disassembly:
 *   83 EC 10             sub     esp, 0x10
 *   6A 00                push    0
 *   6A 00                push    0
 *   6A 00                push    0
 *   E8 F2 35 E2 FF       call    0x00513d70
 *   8D 54 24 08          lea     edx, [esp + 8]
 *   48                   dec     eax
 *   52                   push    edx
 *   89 44 24 04          mov     [esp + 4], eax
 *   6A 02                push    2
 *   8D 44 24 08          lea     eax, [esp + 8]
 *   8D 4C 24 0C          lea     ecx, [esp + 0xc]
 *   6A 00                push    0
 *   C7 44 24 10 00 00 00 00 mov   dword ptr [esp + 0x10], 0
 *   89 44 24 14          mov     [esp + 0x14], eax
 *   89 4C 24 18          mov     [esp + 0x18], ecx
 *   E8 77 35 E2 FF       call    0x00513d20
 *   83 F8 04             cmp     eax, 4
 *   74 24                jz      skip
 *   C1 E0 08             shl     eax, 8
 *   6A 00                push    0
 *   05 24 4D 84 00       add     eax, 0x844d24
 *   50                   push    eax
 *   A1 68 17 84 00       mov     eax, [0x00841768]
 *   68 9A 0C 00 00       push    0xc9a
 *   50                   push    eax
 *   E8 67 D0 03 00       call    0x0072d830
 *   50                   push    eax
 *   E8 41 3A FF FF       call    0x006e4210
 *   83 C4 0C             add     esp, 0xc
 *   83 C4 10             add     esp, 0x10
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f0770(void)
{
    __asm {
        sub     esp, 0x10
        push    0
        push    0
        push    0
        _emit 0xE8
        _emit 0xF2
        _emit 0x35
        _emit 0xE2
        _emit 0xFF
        lea     edx, [esp + 8]
        dec     eax
        push    edx
        mov     dword ptr [esp + 4], eax
        push    2
        lea     eax, [esp + 8]
        lea     ecx, [esp + 0xc]
        push    0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], ecx
        _emit 0xE8
        _emit 0x77
        _emit 0x35
        _emit 0xE2
        _emit 0xFF
        cmp     eax, 4
        jz      skip
        shl     eax, 8
        push    0
        add     eax, 0x844d24
        push    eax
        _emit 0xA1
        _emit 0x68
        _emit 0x17
        _emit 0x84
        _emit 0x00
        push    0xc9a
        push    eax
        _emit 0xE8
        _emit 0x67
        _emit 0xD0
        _emit 0x03
        _emit 0x00
        push    eax
        _emit 0xE8
        _emit 0x41
        _emit 0x3A
        _emit 0xFF
        _emit 0xFF
        add     esp, 0xc
skip:
        add     esp, 0x10
        ret
    }
}
