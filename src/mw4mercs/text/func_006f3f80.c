/*
 * FUN_006F3F80 (size=166) - Pool allocator list management.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f49f0(void);

__declspec(naked) void __cdecl FUN_006F3F80(void)
{
    __asm {
        jmp l_0006
        cmp esi, ebx
        jne l_002e
    l_0006:
        xor eax, eax
        _emit 0x66
        _emit 0x8B
        _emit 0x04
        _emit 0x7D
        _emit 0x84
        _emit 0x6E
        _emit 0x7B
        _emit 0x00
        push eax
        call FUN_006f49f0
        mov esi, eax
        _emit 0x8B
        _emit 0x04
        _emit 0xBD
        _emit 0x98
        _emit 0x92
        _emit 0x84
        _emit 0x00
        cmp eax, ebx
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], ebx
        je l_0059
        mov dword ptr [eax + 4], esi
        jmp l_0059
    l_002e:
        cmp word ptr [esi + 0x38], 1
        jbe l_0060
        _emit 0x8B
        _emit 0x0C
        _emit 0xBD
        _emit 0x98
        _emit 0x92
        _emit 0x84
        _emit 0x00
        cmp ecx, esi
        je l_0060
        mov eax, dword ptr [esi + 8]
        cmp eax, ebx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [edx + 8], eax
        je l_0050
        mov dword ptr [eax + 4], edx
    l_0050:
        mov dword ptr [ecx + 4], esi
        mov dword ptr [esi + 8], ecx
        mov dword ptr [esi + 4], ebx
    l_0059:
        _emit 0x89
        _emit 0x34
        _emit 0xBD
        _emit 0x98
        _emit 0x92
        _emit 0x84
        _emit 0x00
    l_0060:
        _emit 0xA1
        _emit 0x80
        _emit 0x6E
        _emit 0x7B
        _emit 0x00
        xor ecx, ecx
        mov cx, word ptr [esi + 0x38]
        xor edi, edi
        _emit 0x66
        _emit 0x8B
        _emit 0x7C
        _emit 0x4E
        _emit 0x3A
        add edi, esi
        cmp eax, ebx
        _emit 0x74
        _emit 0x5B
        mov eax, edi
        sub eax, esi
        cdq
        xor ecx, ecx
        mov cx, word ptr [esi + 0x14]
        and edx, 0xfff
        add eax, edx
        mov ebx, eax
        sar ebx, 0xc
        mov eax, ecx
        sub eax, esi
        add eax, edi
        cdq
        and edx, 0xfff
        add eax, edx
        sar eax, 0xc
    }
}
