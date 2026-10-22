/*
 * FUN_006EE340 (size=158) - Log/output helper 2.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00512510(void);

__declspec(naked) void __cdecl FUN_006EE340(void)
{
    __asm {
        _emit 0xC3
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        sub esp, 0xc
        push esi
        mov esi, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x416
        push esi
        mov dword ptr [esp + 0x14], 8
        _emit 0xFF
        _emit 0x15
        _emit 0xA0
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        jg l_0050
        push 0
        push 1
        push 0x416
        push esi
        mov dword ptr [esp + 0x24], 1
        _emit 0xFF
        _emit 0x15
        _emit 0x20
        _emit 0xB5
        _emit 0x76
        _emit 0x00
    l_0050:
        lea edx, [esp + 8]
        push edx
        push 2
        lea eax, [esp + 0xc]
        lea ecx, [esp + 0x1c]
        push 0
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], ecx
        call FUN_00512510
        pop esi
        add esp, 0xc
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x10]
        push edi
        push 0
        push 0
        push 0x147
        push 0x41b
        push eax
    }
}
