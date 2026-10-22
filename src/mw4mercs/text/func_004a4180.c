/* FUN_004a4180 - MLR (MidLevelRenderer) destructor, __fastcall */
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void func_004a4180(void)
{
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xa0]
        test eax, eax
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x77032c
        mov dword ptr [esp + 0x8], eax
        jz L_a41df
        xor edi, edi
        test eax, eax
        jle L_a41df
        push ebx
        mov ebx, dword ptr [esi + 0x10]
        push ebp
        mov ebp, dword ptr [esi + 0xa8]
L_a41b0:
        mov esi, dword ptr [ebx + 0x270]
        imul esi, edi
        mov ecx, dword ptr [esi + ebp*0x1 + 0x70]
        add esi, ebp
        test ecx, ecx
        jz L_a41d4
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x70], 0x0
L_a41d4:
        inc edi
        cmp edi, eax
        jl L_a41b0
        mov esi, dword ptr [esp + 0x14]
        pop ebp
        pop ebx
L_a41df:
        mov eax, dword ptr [esi + 0xa8]
        test eax, eax
        jz L_a41f2
        push eax
        call FUN_004084e0
        add esp, 0x4
L_a41f2:
        mov ecx, esi
        call FUN_00494140
        pop edi
        pop esi
        add esp, 0x8
        ret
    }
}
