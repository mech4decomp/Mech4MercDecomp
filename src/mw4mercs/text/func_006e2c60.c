/*
 * FUN_006E2C60 (size=175) - Memory block copy (continuation).
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e2850(void);
extern void __cdecl FUN_006e2890(void);
extern void __cdecl FUN_006e29e0(void);
extern void __cdecl FUN_006e2c50(void);

__declspec(naked) void __fastcall FUN_006E2C60(void)
{
    __asm {
        je l_003c
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
    l_003c:
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
        call FUN_006e2c50
        mov esi, dword ptr [esp + 0xc]
        lea ecx, [esp + 4]
        push ecx
        mov ecx, esi
        call FUN_006e2850
        lea ecx, [esp + 4]
        call FUN_006e29e0
        mov eax, esi
        pop esi
        pop ecx
        ret
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
        mov esi, dword ptr [esp + 0x14]
    }
}
