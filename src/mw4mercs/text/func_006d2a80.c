/*
 * FUN_006D2A80 (size=151) - Constructor + iterator loop.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416e20(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_004db630(void);

__declspec(naked) void __fastcall FUN_006D2A80(void)
{
    __asm {
        _emit 0xC4
        _emit 0x04
        _emit 0xC7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x90
        push esi
        push edi
        mov esi, ecx
        push 1
        lea edi, [esi + 4]
        push 0
        mov ecx, edi
        call FUN_00416e20
        mov dword ptr [edi], 0x79e9ac
        pop edi
        mov dword ptr [esi], 0
        mov byte ptr [esi + 0x5c], 0
        mov eax, esi
        pop esi
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
        sub esp, 0x14
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 4]
        push edi
        lea ecx, [esp + 0xc]
        call FUN_00417170
        lea ecx, [esp + 8]
        mov dword ptr [esp + 8], 0x79e9d8
        call FUN_00417230
        test eax, eax
        je l_008a
    l_0069:
        mov ecx, dword ptr [eax + 0x24]
        shr ecx, 3
        test cl, 1
        je l_007d
        push eax
        call FUN_004db630
        add esp, 4
    l_007d:
        lea ecx, [esp + 8]
        call FUN_00417230
        test eax, eax
        jne l_0069
    l_008a:
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 8]
        mov eax, dword ptr [esi]
        test eax, eax
    }
}
