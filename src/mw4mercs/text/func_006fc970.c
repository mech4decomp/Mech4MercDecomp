/*
 * FUN_006FC970 (size=171) - File read + error log.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f91d0(void);

__declspec(naked) void __cdecl FUN_006FC970(void)
{
    __asm {
        mov edi, dword ptr [ebp + 0xc]
        mov ebx, dword ptr [ebp + 8]
    l_0006:
        mov edx, dword ptr [esi + 4]
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push edi
        push ebx
        push edx
        _emit 0xFF
        _emit 0x15
        _emit 0xE4
        _emit 0xB0
        _emit 0x76
        _emit 0x00
        test eax, eax
        jne l_004d
        lea eax, [esi + 8]
        push eax
        lea ecx, [ebp - 0x104]
        push 0x7a02e0
        push ecx
        _emit 0xFF
        _emit 0x15
        _emit 0x20
        _emit 0xB4
        _emit 0x76
        _emit 0x00
        add esp, 0xc
        lea edx, [ebp - 0x104]
        push edx
        push 0x982
        call FUN_006f91d0
        test eax, eax
        je l_0006
        _emit 0xCC
        jmp l_0006
    l_004d:
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        _emit 0xE9
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
    l_0070:
        xor eax, eax
        or ecx, 0xffffffff
        _emit 0xA3
        _emit 0xFC
        _emit 0x67
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x00
        _emit 0x68
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0xF8
        _emit 0x67
        _emit 0x85
        _emit 0x00
        _emit 0xA2
        _emit 0x04
        _emit 0x68
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x08
        _emit 0x68
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x0C
        _emit 0x68
        _emit 0x85
        _emit 0x00
        _emit 0x89
        _emit 0x0D
        _emit 0x10
        _emit 0x68
        _emit 0x85
        _emit 0x00
        _emit 0x89
        _emit 0x0D
        _emit 0x14
        _emit 0x68
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x18
        _emit 0x68
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x1C
        _emit 0x68
        _emit 0x85
        _emit 0x00
    }
}
