/*
 * FUN_00562210 (341 B) — Red-black tree node insertion with rebalancing.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_00562bf0(void *param);
extern void __stdcall FUN_00410a60(void *a, void *b);
extern void __stdcall FUN_00410ab0(void *a, void *b);

__declspec(naked) void __stdcall FUN_00562210(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     edi, esi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_alloc_else
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_alloc_else
        mov     eax, dword ptr [ebx]
        cmp     eax, dword ptr [edi + 0x10]
        jl      L_alloc_else

        ; Allocate and init (first path)
        push    0x18
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_skip_init1
        push    ebx
        call    FUN_00562bf0
L_skip_init1:
        cmp     edi, dword ptr [esi + 0xc]
        mov     dword ptr [edi + 0xc], ebp
        jnz     L_done_alloc
        mov     dword ptr [esi + 0xc], ebp
        jmp     L_done_alloc

L_alloc_else:
        push    0x18
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_skip_init2
        push    ebx
        call    FUN_00562bf0
L_skip_init2:
        cmp     edi, esi
        mov     dword ptr [edi + 0x8], ebp
        jnz     L_not_head
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi + 0xc], ebp
        jmp     L_done_alloc
L_not_head:
        cmp     edi, dword ptr [esi + 0x8]
        jnz     L_done_alloc
        mov     dword ptr [esi + 0x8], ebp

L_done_alloc:
        xor     eax, eax
        mov     dword ptr [ebp + 0x4], edi
        lea     edi, [esi + 0x4]
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     byte ptr [ebp], al
        cmp     ebp, dword ptr [edi]
        mov     esi, ebp
        jz      L_rebalance_done

L_rebalance_loop:
        mov     eax, dword ptr [esi + 0x4]
        cmp     byte ptr [eax], 0x0
        jnz     L_rebalance_done

        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx + 0x8]
        cmp     eax, ecx
        jnz     L_uncle_is_left

        ; Uncle is right child
        mov     ecx, dword ptr [edx + 0xc]
        test    ecx, ecx
        jz      L_uncle_black_or_null
        cmp     byte ptr [ecx], 0x0
        jnz     L_uncle_black_or_null

        ; Uncle is red - recolor
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_continue_rebalance

L_uncle_black_or_null:
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_right_left_case
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 0x8
L_right_left_case:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410ab0
        jmp     L_after_rotate

L_uncle_is_left:
        test    ecx, ecx
        jz      L_uncle_black_or_null2
        cmp     byte ptr [ecx], 0x0
        jnz     L_uncle_black_or_null2

        ; Uncle is red - recolor
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_continue_rebalance

L_uncle_black_or_null2:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_left_right_case
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 0x8
L_left_right_case:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410a60

L_after_rotate:
        add     esp, 0x8

L_continue_rebalance:
        cmp     esi, dword ptr [edi]
        jnz     L_rebalance_loop

L_rebalance_done:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esp + 0x10]
        mov     byte ptr [ecx], 0x1
        mov     ecx, dword ptr [eax + 0x4]
        inc     ecx
        pop     edi
        mov     dword ptr [eax + 0x4], ecx
        mov     eax, dword ptr [esp + 0x14]
        pop     esi
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
