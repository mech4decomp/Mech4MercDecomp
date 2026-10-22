/*
 * FUN_006E2A30 (size=154) - Memory copy + string set.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e27b0(void);
extern void __cdecl FUN_006e2890(void);

__declspec(naked) void __fastcall FUN_006E2A30(void)
{
    __asm {
        _emit 0x5B
        _emit 0xC2
        _emit 0x10
        _emit 0x00
        push edi
        mov edi, dword ptr [esp + 0x10]
        push eax
        mov ecx, edi
        call FUN_006e2890
        mov esi, dword ptr [esi]
        mov edi, dword ptr [edi]
        mov ecx, ebx
        mov ebx, dword ptr [esp + 0x18]
        mov eax, ecx
        add esi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebx
        ret 0x10
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
        nop
        nop
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call FUN_006e27b0
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov eax, dword ptr [eax]
        mov dword ptr [ebx], eax
        je l_007d
        push esi
        _emit 0xFF
        _emit 0x15
        _emit 0x34
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        mov edi, eax
        test edi, edi
        je l_007d
        push edi
        mov ecx, ebx
        call FUN_006e2890
        mov ecx, edi
        mov edi, dword ptr [ebx]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
    l_007d:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
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
        push ebx
        push esi
        mov esi, ecx
        call FUN_006e27b0
    }
}
