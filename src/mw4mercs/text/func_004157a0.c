/*
 * FUN_004157a0 (305 B) — __thiscall (RET 4, 1 stack arg): removes a node
 * from the BST rooted at [this+0xc]. Node layout: +0x10=left, +0x14=right,
 * +0x18=parent. Handles all three cases (leaf, one child, two children).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004157a0(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        mov     eax, dword ptr [edx+0x14]
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jnz     L_right
        mov     eax, dword ptr [edx+0x10]
        cmp     eax, edi
        jnz     L_left
        ; leaf: no children
        cmp     edx, dword ptr [ecx+0xc]
        jnz     L_both_parent
        mov     dword ptr [ecx+0xc], edi
        pop     edi
        pop     esi
        ret     4
    L_both_parent:
        mov     eax, dword ptr [edx+0x18]
        cmp     dword ptr [eax+0x10], edx
        jnz     L_both_right
        mov     dword ptr [eax+0x10], edi
        pop     edi
        pop     esi
        ret     4
    L_both_right:
        mov     dword ptr [eax+0x14], edi
        pop     edi
        pop     esi
        ret     4
    L_left:
        cmp     edx, dword ptr [ecx+0xc]
        jnz     L_left_parent
        mov     dword ptr [ecx+0xc], eax
        mov     eax, dword ptr [edx+0x10]
        mov     dword ptr [eax+0x18], edi
        pop     edi
        pop     esi
        ret     4
    L_left_parent:
        mov     ecx, dword ptr [edx+0x18]
        cmp     dword ptr [ecx+0x10], edx
        jnz     L_left_parent_right
        mov     dword ptr [ecx+0x10], eax
        mov     ecx, dword ptr [edx+0x10]
        mov     edx, dword ptr [edx+0x18]
        pop     edi
        mov     dword ptr [ecx+0x18], edx
        pop     esi
        ret     4
    L_left_parent_right:
        mov     dword ptr [ecx+0x14], eax
        mov     ecx, dword ptr [edx+0x10]
        mov     edx, dword ptr [edx+0x18]
        pop     edi
        mov     dword ptr [ecx+0x18], edx
        pop     esi
        ret     4
    L_right:
        cmp     dword ptr [edx+0x10], edi
        jnz     L_right2
        cmp     edx, dword ptr [ecx+0xc]
        jnz     L_right_parent
        mov     dword ptr [ecx+0xc], eax
        mov     eax, dword ptr [edx+0x14]
        mov     dword ptr [eax+0x18], edi
        pop     edi
        pop     esi
        ret     4
    L_right_parent:
        mov     ecx, dword ptr [edx+0x18]
        cmp     dword ptr [ecx+0x10], edx
        jnz     L_right_parent_right
        mov     dword ptr [ecx+0x10], eax
        mov     ecx, dword ptr [edx+0x14]
        mov     edx, dword ptr [edx+0x18]
        pop     edi
        mov     dword ptr [ecx+0x18], edx
        pop     esi
        ret     4
    L_right_parent_right:
        mov     dword ptr [ecx+0x14], eax
        mov     ecx, dword ptr [edx+0x14]
        mov     edx, dword ptr [edx+0x18]
        pop     edi
        mov     dword ptr [ecx+0x18], edx
        pop     esi
        ret     4
    L_right2:
        mov     esi, dword ptr [eax+0x10]
        cmp     esi, edi
        jz      L_find
    L_findloop:
        mov     eax, esi
        mov     esi, dword ptr [eax+0x10]
        cmp     esi, edi
        jnz     L_findloop
    L_find:
        mov     esi, dword ptr [eax+0x18]
        push    ebx
        cmp     dword ptr [esi+0x10], eax
        mov     ebx, dword ptr [eax+0x14]
        jnz     L_find_right
        mov     dword ptr [esi+0x10], ebx
        jmp     L_find_cont
    L_find_right:
        mov     dword ptr [esi+0x14], ebx
    L_find_cont:
        mov     esi, dword ptr [eax+0x14]
        cmp     esi, edi
        jz      L_find_cont2
        mov     ebx, dword ptr [eax+0x18]
        mov     dword ptr [esi+0x18], ebx
    L_find_cont2:
        mov     esi, dword ptr [edx+0x18]
        mov     dword ptr [eax+0x18], esi
        mov     esi, dword ptr [edx+0x10]
        mov     dword ptr [eax+0x10], esi
        mov     esi, dword ptr [edx+0x14]
        mov     dword ptr [eax+0x14], esi
        cmp     dword ptr [ecx+0xc], edx
        pop     ebx
        jnz     L_find_root_parent
        mov     dword ptr [ecx+0xc], eax
        jmp     L_find_done
    L_find_root_parent:
        mov     ecx, dword ptr [eax+0x18]
        cmp     dword ptr [ecx+0x10], edx
        jnz     L_find_root_right
        mov     dword ptr [ecx+0x10], eax
        jmp     L_find_done
    L_find_root_right:
        mov     dword ptr [ecx+0x14], eax
    L_find_done:
        mov     ecx, dword ptr [eax+0x14]
        cmp     ecx, edi
        jz      L_find_done2
        mov     dword ptr [ecx+0x18], eax
    L_find_done2:
        mov     ecx, dword ptr [eax+0x10]
        cmp     ecx, edi
        jz      L_find_done3
        mov     dword ptr [ecx+0x18], eax
    L_find_done3:
        pop     edi
        pop     esi
        ret     4
    }
}
