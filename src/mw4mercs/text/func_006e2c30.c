/*
 * FUN_006E2C30 (size=165) - Memory block copy.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e2890(void);
extern void __cdecl FUN_006e2f20(void);

__declspec(naked) void __fastcall FUN_006E2C30(void)
{
    __asm {
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0x6A
        _emit 0xFF
        mov ecx, esi
        call FUN_006e2f20
        pop edi
        mov eax, esi
        pop esi
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
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        add eax, ebp
        test eax, eax
        mov ebx, ecx
        je l_006c
        push esi
        push edi
        push eax
        call FUN_006e2890
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [esp + 0x18]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [esp + 0x1c]
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [esp + 0x20]
        mov eax, ecx
        add edi, ebp
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
    l_006c:
        pop ebp
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
        push ecx
        push esi
        lea ecx, [esp + 4]
        call FUN_006e2840
        mov eax, dword ptr [esp + 0x14]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [eax - 8]
        mov ecx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [ecx - 8]
        push edx
        push ecx
        push eax
        lea ecx, [esp + 0x14]
    }
}
