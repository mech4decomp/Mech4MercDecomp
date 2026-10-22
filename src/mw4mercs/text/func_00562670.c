/*
 * FUN_00562670 (404 B) — Red-black tree insertion (search + insert).
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_00562bd0(void *a, void *b);
extern int __stdcall FUN_00562a70(void *param);
extern void __stdcall FUN_00411670(void *a, void *b);
extern void __stdcall FUN_004114b0(void *param);
extern void __stdcall FUN_00562b00(void *param);

__declspec(naked) void __stdcall FUN_00562670(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebp + 0x4]
        test    edi, edi
        mov     esi, ebp
        mov     al, 0x1
        jz      L_search_done

        ; First iteration: load key
        mov     ecx, dword ptr [edx]
L_search_cmp:
        cmp     ecx, dword ptr [edi + 0x10]
        setl    al
        test    al, al
        mov     esi, edi
        jz      L_go_right
        mov     edi, dword ptr [edi + 0x8]
        jmp     L_continue_search
L_go_right:
        mov     edi, dword ptr [edi + 0xc]
L_continue_search:
        test    edi, edi
        jnz     L_search_cmp

L_search_done:
        test    al, al
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_go_left_branch

        cmp     esi, dword ptr [ebp + 0x8]
        jnz     L_call_114b0

        cmp     esi, ebp
        jz      L_alloc_new_node
        test    edi, edi
        jnz     L_alloc_new_node
        mov     eax, dword ptr [edx]
        cmp     eax, dword ptr [esi + 0x10]
        jl      L_alloc_new_node

        push    edx
        mov     ecx, ebx
        call    FUN_00562a70
        mov     ebp, dword ptr [ebx]
        mov     edi, eax
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [ebp + 0xc]
        jnz     L_common_setup
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_common_setup

L_alloc_new_node:
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x28]
        mov     edi, eax
        push    ecx
        lea     edx, [edi + 0x10]
        push    edx
        call    FUN_00562bd0
        add     esp, 0xc
        cmp     esi, ebp
        mov     dword ptr [esi + 0x8], edi
        jnz     L_not_root1
        mov     dword ptr [ebp + 0x4], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_common_setup
L_not_root1:
        cmp     esi, dword ptr [ebp + 0x8]
        jnz     L_common_setup
        mov     dword ptr [ebp + 0x8], edi
        ; fall through to L_common_setup

L_common_setup:
        add     ebp, 0x4
        xor     eax, eax
        push    ebp
        push    edi
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0xc], eax
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8

L_call_114b0:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004114b0
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x4

L_go_left_branch:
        mov     eax, dword ptr [edx]
        cmp     dword ptr [ecx + 0x10], eax
        jge     L_found_exact

        cmp     esi, ebp
        jz      L_alloc_via_62a70_2
        test    edi, edi
        jnz     L_alloc_via_62a70_2
        cmp     eax, dword ptr [esi + 0x10]
        jl      L_alloc_via_62a70_2

        push    edx
        mov     ecx, ebx
        call    FUN_00562a70
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_common_setup2
        mov     dword ptr [eax + 0xc], edi
        jmp     L_common_setup2

L_alloc_via_62a70_2:
        push    edx
        mov     ecx, ebx
        call    FUN_00562a70
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        cmp     esi, eax
        mov     dword ptr [esi + 0x8], edi
        jnz     L_not_root2
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L_common_setup2
L_not_root2:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_common_setup2
        mov     dword ptr [eax + 0x8], edi
        ; fall through to L_common_setup2

L_common_setup2:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0x8], ecx
        mov     dword ptr [edi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8

L_found_exact:
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_00562b00
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
