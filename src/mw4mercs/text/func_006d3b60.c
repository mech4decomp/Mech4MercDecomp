/*
 * FUN_006D3B60 (size=160) - Scalar deleting destructor.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_006D3B60(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_00415380
        test byte ptr [esp + 8], 1
        je l_0018
        push esi
        call FUN_004084e0
        add esp, 4
    l_0018:
        mov eax, esi
        pop esi
        ret 4
        nop
        nop
        lea eax, [ecx + 0x34]
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
        nop
        nop
        nop
        push ebp
        mov ebp, esp
        sub esp, 0xc
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov eax, dword ptr [edi]
        mov esi, ecx
        push 4
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x20]
        mov ebx, dword ptr [ebp + 0x10]
        cmp ebx, 5
        mov dword ptr [ebp + 8], 0
        jle l_0094
        mov eax, dword ptr [ebp - 4]
        test eax, eax
        jle l_0087
        lea edx, [ebp + 8]
        push edx
        push edi
        call FUN_00412a00
        add esp, 8
        lea ecx, [ebp + 8]
        call FUN_004128e0
        mov eax, dword ptr [ebp + 8]
        push eax
        call FUN_00412ab0
        add esp, 4
        mov dword ptr [ebp - 4], eax
        jmp l_0094
    l_0087:
        mov edx, dword ptr [edi]
        push 4
        lea eax, [ebp - 4]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x20]
    l_0094:
        mov edx, dword ptr [edi]
        push 2
        lea eax, [ebp - 8]
        push eax
        mov ecx, edi
    }
}
