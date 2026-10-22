// 0x00562110: binary search tree lookup
// __fastcall, this in ecx (pointer to tree root pointer), 2 stack params
// Params: (int key, void **outResult)
// Returns nothing, sets *outResult to found node or parent

__declspec(naked) void __fastcall func_00562110(void *this, int dummy, int key, void **outResult)
{
    __asm {
        push ecx
        mov ecx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov edx, ecx
        je  check_parent
        mov esi, dword ptr [edi]
loop_start:
        cmp dword ptr [eax + 0x10], esi
        jl  go_right
        mov edx, eax
        mov eax, dword ptr [eax + 8]
        jmp check_null
go_right:
        mov eax, dword ptr [eax + 0xc]
check_null:
        test eax, eax
        jne loop_start
check_parent:
        cmp edx, ecx
        mov dword ptr [esp + 0x14], edx
        je  set_root
        mov eax, dword ptr [edi]
        cmp eax, dword ptr [edx + 0x10]
        jl  set_root
        lea eax, [esp + 0x14]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        pop esi
        pop ecx
        ret 8
set_root:
        lea eax, [esp + 8]
        mov dword ptr [esp + 8], ecx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        pop esi
        pop ecx
        ret 8
    }
}
