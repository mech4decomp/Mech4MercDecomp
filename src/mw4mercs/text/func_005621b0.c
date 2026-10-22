// 0x005621B0: binary tree inorder successor traversal
// __cdecl, 1 param (pointer to pointer to node)
// Node layout:
//   0x00: left child
//   0x04: parent
//   0x08: right child
//   0x0C: next/thread pointer

__declspec(naked) void __cdecl func_005621b0(void **ppNode)
{
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 0xc]
        test ecx, ecx
        je  no_right
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        je  store_ecx
loop_find_leftmost:
        mov ecx, eax
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        jne loop_find_leftmost
store_ecx:
        mov dword ptr [edx], ecx
        ret
no_right:
        mov ecx, dword ptr [eax + 4]
        cmp eax, dword ptr [ecx + 0xc]
        jne check2
loop_up:
        mov eax, ecx
        mov ecx, dword ptr [ecx + 4]
        cmp eax, dword ptr [ecx + 0xc]
        je  loop_up
check2:
        cmp dword ptr [eax + 0xc], ecx
        jne store_ecx
        mov dword ptr [edx], eax
        ret
    }
}
