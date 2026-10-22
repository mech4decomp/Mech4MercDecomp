// 0x00568C20: FUN_00568c20 - object lookup function
// __cdecl, 1 param (undefined4 param_1)
// Returns int

__declspec(naked) int __cdecl func_00568c20(int param_1)
{
    

extern void __cdecl FUN_005dd27e(void);
extern void __cdecl FUN_00580553(void);
extern void __cdecl FUN_100566eb2(void);
extern void __cdecl FUN_006526e9(void);
extern void __cdecl FUN_006526e0(void);
extern void __cdecl FUN_006526ca(void);
extern void __cdecl FUN_10040843a(void);
extern void __cdecl FUN_100408419(void);
__asm {
sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        call FUN_005dd27e
        mov ebx, eax
        xor esi, esi
        cmp ebx, esi
        jz return_default
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x17]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x1c], esi
        call FUN_00580553
        mov eax, dword ptr [esp + 0x28]
        push 1
        lea edx, [esp + 0x1c]
        push edx
        push eax
        call FUN_100566eb2
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x28]
        add esp, 0xc
        cmp eax, ecx
        mov ebp, eax
        jz free_check
loop_start:
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [edi + 0x10]
        shr ecx, 0x13
        and cl, 1
        cmp cl, 1
        jnz loop_next
        mov ecx, ebx
        call FUN_006526e9
        mov esi, dword ptr [eax]
        mov ecx, ebx
        call FUN_006526e0
        cmp esi, dword ptr [eax + 4]
        jz loop_next_early
        mov edi, dword ptr [edi + 0x30]
inner_loop:
        cmp dword ptr [esi], edi
        jz found_match
        mov ecx, ebx
        add esi, 0xc
        call FUN_006526ca
        cmp esi, dword ptr [eax + 4]
        jnz inner_loop
loop_next_early:
        mov eax, dword ptr [esp + 0x18]
loop_next:
        mov ecx, dword ptr [esp + 0x1c]
        add ebp, 4
        cmp ebp, ecx
        jnz loop_start
        xor esi, esi
free_check:
        cmp eax, esi
        jz return_default
        push eax
        call FUN_10040843a
        add esp, 4
return_default:
        pop edi
        pop esi
        pop ebp
        mov eax, 0xfffffffe
        pop ebx
        add esp, 0x14
        ret
found_match:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        mov esi, dword ptr [esi + 4]
        jz return_found
        push eax
        call FUN_100408419
        add esp, 4
return_found:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }


}
