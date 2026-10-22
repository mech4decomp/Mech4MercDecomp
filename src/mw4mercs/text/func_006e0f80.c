/*
 * FUN_006E0F80 (size=149) - Object serialization write.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412a50(void);

__declspec(naked) void __fastcall FUN_006E0F80(void)
{
    __asm {
        _emit 0x1A
        _emit 0xD3
        _emit 0xFF
        _emit 0x8B
        _emit 0x4E
        _emit 0x2C
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x09
        _emit 0x8B
        _emit 0x11
        _emit 0xFF
        _emit 0x52
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x04
        _emit 0x8D
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0x57
        _emit 0xE8
        _emit 0xAF
        _emit 0x1A
        _emit 0xD3
        _emit 0xFF
        mov ecx, dword ptr [esi + 0x3c]
        add esp, 8
        test ecx, ecx
        je l_0034
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 4]
        test eax, eax
        jne l_0038
    l_0034:
        lea eax, [esp + 0xc]
    l_0038:
        push eax
        push edi
        call FUN_00412a50
        mov edx, dword ptr [edi]
        add esp, 8
        push 4
        lea eax, [esi + 0x40]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x24]
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        je l_006a
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne l_006a
        push eax
        call FUN_004084e0
        add esp, 4
    l_006a:
        mov edx, dword ptr [edi]
        push 4
        lea eax, [esi + 0x30]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [eax]
        push 4
        add esi, 0x34
        push esi
        mov ecx, eax
        call dword ptr [edx + 0x24]
        pop edi
        pop esi
        ret 8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push esi
        mov esi, dword ptr [esp + 0xc]
    }
}
