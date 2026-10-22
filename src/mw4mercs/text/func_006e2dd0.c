/*
 * FUN_006E2DD0 (size=155) - Buffer append with bounds check.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2920(void);
extern void __cdecl FUN_006e2c50(void);
extern void __cdecl FUN_006e2dc0(void);

__declspec(naked) void __fastcall FUN_006E2DD0(void)
{
    __asm {
        cmp edi, 1
        lea esi, [eax - 0xc]
        jg l_003f
        mov edi, dword ptr [eax - 8]
        push ebp
        mov ebp, dword ptr [eax - 4]
        lea ebx, [edi + edx]
        cmp ebx, ebp
        pop ebp
        jg l_003f
        mov esi, dword ptr [esp + 0x14]
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        add edi, eax
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [eax - 8]
        pop edi
        add ecx, edx
        pop esi
        mov dword ptr [eax - 8], ecx
        mov byte ptr [ecx + eax], 0
        pop ebx
        ret 8
    l_003f:
        mov edi, dword ptr [esp + 0x14]
        push edi
        push edx
        mov edx, dword ptr [eax - 8]
        push eax
        push edx
        call FUN_006e2c50
        push esi
        call FUN_006e2920
        pop edi
        pop esi
        pop ebx
        ret 8
        nop
        nop
        nop
        nop
        nop
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        jne l_007c
        xor eax, eax
        push edi
        push eax
        call FUN_006e2dc0
        pop edi
        mov eax, esi
        pop esi
        ret 4
    l_007c:
        push edi
        _emit 0xFF
        _emit 0x15
        _emit 0x34
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        push edi
        push eax
        mov ecx, esi
        call FUN_006e2dc0
        pop edi
        mov eax, esi
        pop esi
        ret 4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}
