/*
 * FUN_006E7680 (size=157) - Window creation helper.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e5910(void);
extern void __cdecl FUN_006e7840(void);

__declspec(naked) void __cdecl FUN_006E7680(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x00
        xor eax, eax
        mov ecx, 0x11
        lea edi, [esp + 0x1c]
        rep stosd
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0x79ed44
        push 0
        mov dword ptr [esp + 0x44], 0x44
        mov dword ptr [esp + 0x70], 1
        mov word ptr [esp + 0x74], 5
        _emit 0xFF
        _emit 0x15
        _emit 0xD4
        _emit 0xB0
        _emit 0x76
        _emit 0x00
        test eax, eax
        je l_0090
        mov edx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        _emit 0x89
        _emit 0x15
        _emit 0x74
        _emit 0x8D
        _emit 0x84
        _emit 0x00
        xor eax, eax
        pop ebx
        add esp, 0x54
        ret 0x10
        mov eax, dword ptr [esp + 0x64]
        push eax
        call FUN_006e7840
        add esp, 4
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x54
        ret 0x10
        call FUN_006e5910
        mov ecx, dword ptr [esp + 0x64]
        push 1
        push ecx
        _emit 0xFF
        _emit 0x15
        _emit 0x70
        _emit 0xB5
        _emit 0x76
        _emit 0x00
    l_0090:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x54
        ret 0x10
        nop
    }
}
