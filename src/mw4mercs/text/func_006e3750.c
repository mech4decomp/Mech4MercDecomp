/*
 * FUN_006E3750 (size=172) - Token/value parser.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */


__declspec(naked) void __cdecl FUN_006E3750(void)
{
    __asm {
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        _emit 0xEB
        _emit 0x20
        _emit 0x2D
        _emit 0x63
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x74
        _emit 0x27
        sub eax, 0x10
        _emit 0x0F
        _emit 0x85
        _emit 0x71
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [ebp]
        add ebp, 4
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0x04
        _emit 0xB4
        _emit 0x76
        _emit 0x00
        add esp, 4
        mov esi, eax
        cmp esi, 1
        jge l_003d
        mov esi, 1
        jmp l_0045
        mov esi, 2
        add ebp, 4
        jmp l_0045
    l_003d:
        test esi, esi
        _emit 0x0F
        _emit 0x84
        _emit 0x41
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
    l_0045:
        mov eax, dword ptr [esp + 0x28]
        cmp esi, eax
        jg l_004f
        mov esi, eax
    l_004f:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je l_0097
        cmp esi, eax
        jl l_0097
        mov esi, eax
        jmp l_0097
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x28]
        mov esi, 0x80
        lea eax, [ecx + edx]
        add ebp, 8
        cmp eax, esi
        jl l_0097
        mov esi, eax
        jmp l_0097
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x28]
        mov esi, 0x20
        add eax, ecx
        add ebp, 4
        cmp eax, esi
        jl l_0097
        mov esi, eax
        jmp l_0097
        add ebp, 4
    l_0097:
        mov eax, dword ptr [esp + 0x14]
        add eax, esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x14], eax
        mov ecx, eax
        _emit 0xEB
        _emit 0x05
        inc ecx
    }
}
