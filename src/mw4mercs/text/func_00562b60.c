// 0x00562B60: quicksort partition function
// __cdecl, 3 params (int *left, int *right, int pivot)
// Partitions array around pivot value, returns nothing

__declspec(naked) void __cdecl func_00562b60(int *left, int *right, int pivot)
{
    __asm {
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
loop_start:
        cmp dword ptr [eax], edx
        jae advance_right
left_loop_body:
        mov esi, dword ptr [eax + 4]
        add eax, 4
        cmp esi, edx
        jb  left_loop_body
advance_right:
        mov esi, dword ptr [ecx - 4]
        sub ecx, 4
        cmp edx, esi
        jae check_done
right_loop_body:
        mov esi, dword ptr [ecx - 4]
        sub ecx, 4
        cmp edx, esi
        jb  right_loop_body
check_done:
        cmp eax, ecx
        jae done
        mov esi, dword ptr [eax]
        mov edi, dword ptr [ecx]
        mov dword ptr [eax], edi
        mov dword ptr [ecx], esi
        add eax, 4
        jmp loop_start
done:
        pop edi
        pop esi
        ret
    }
}
