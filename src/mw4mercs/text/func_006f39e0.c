/*
 * FUN_006F39E0 (86 B) — Memory check: calls GlobalMemoryStatus, checks if
 * available memory is below threshold, shows message box if so.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0072d830(int, int);
extern void __cdecl FUN_0070c960(void);

__declspec(naked) void __cdecl FUN_006f39e0(void)
{
    __asm {
        sub     esp, 0x20
        ; lea eax, [esp] -- force 4-byte encoding
        _emit   0x8D
        _emit   0x44
        _emit   0x24
        _emit   0x00
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x44
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0xC]
        _emit   0xA1
        _emit   0x38
        _emit   0x89
        _emit   0x85
        _emit   0x00
        add     ecx, edx
        shl     eax, 0x14
        cmp     ecx, eax
        jnc     l_done
        _emit   0x8B
        _emit   0x0D
        _emit   0x88
        _emit   0x6C
        _emit   0x89
        _emit   0x00
        push    0x2011
        push    0x859694
        push    0x273F
        push    ecx
        call    FUN_0072d830
        push    eax
        push    0
        _emit   0xFF
        _emit   0x15
        _emit   0x98
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        cmp     eax, 2
        jnz     l_done
        call    FUN_0070c960
    l_done:
        add     esp, 0x20
        ret
    }
}
