/* FUN_00598c90 (0x00598C90, 391 bytes) */
/* Tree node insertion with rebalancing */

__declspec(naked) void func_00598c90(void)
{
    

extern void __cdecl FUN_100408482(void);
extern void __cdecl FUN_005997a0(void);
extern void __cdecl FUN_10040845a(void);
extern void __cdecl FUN_00599778(void);
extern void __cdecl FUN_100410961(void);
extern void __cdecl FUN_10041099b(void);
extern void __cdecl FUN_100410972(void);
extern void __cdecl FUN_10041090c(void);
__asm {
push    ecx
        push    ebx
        mov     ebx, [esp + 0x18]
        push    ebp
        mov     ebp, [esp + 0x18]
        push    esi
        push    edi
        mov     edi, [ecx]
        cmp     ebp, edi
        mov     [esp + 0x10], ecx
        je      L_skip_first
        mov     eax, [esp + 0x1c]
        test    eax, eax
        jne     L_skip_first
        mov     esi, [ebp + 0x10]
        mov     eax, [ebx]
L_strcmp_loop:
        mov     dl, [eax]
        mov     cl, dl
        cmp     dl, [esi]
        jne     L_strcmp_diff
        test    cl, cl
        je      L_strcmp_eq
        mov     dl, [eax + 1]
        mov     cl, dl
        cmp     dl, [esi + 1]
        jne     L_strcmp_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_strcmp_loop
L_strcmp_eq:
        xor     eax, eax
        jmp     L_strcmp_done
L_strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1
L_strcmp_done:
        test    eax, eax
        jl      L_skip_first
        push    0x18
        /* call 0x4084d0 */
        call FUN_100408482
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        add     esp, 4
        test    ecx, ecx
        je      L_init_skip1
        push    ebx
        /* call 0x599800 */
        call FUN_005997a0
L_init_skip1:
        cmp     ebp, [edi + 0xc]
        mov     ebx, esi
        mov     [ebp + 0xc], esi
        jne     L_rebalance
        mov     [edi + 0xc], esi
        jmp     L_rebalance
L_skip_first:
        push    0x18
        /* call 0x4084d0 */
        call FUN_10040845a
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        add     esp, 4
        test    ecx, ecx
        je      L_init_skip2
        push    ebx
        /* call 0x599800 */
        call FUN_00599778
L_init_skip2:
        cmp     ebp, edi
        mov     ebx, esi
        mov     [ebp + 8], esi
        jne     L_not_root
        mov     [edi + 4], esi
        mov     [edi + 0xc], esi
        jmp     L_rebalance
L_not_root:
        cmp     ebp, [edi + 8]
        jne     L_rebalance
        mov     [edi + 8], esi
L_rebalance:
        mov     eax, [edi + 4]
        add     edi, 4
        mov     [ebx + 4], ebp
        xor     ebp, ebp
        cmp     ebx, eax
        mov     [ebx + 8], ebp
        mov     [ebx + 0xc], ebp
        mov     esi, ebx
        mov     byte ptr [ebx], 0
        je      L_rebalance_done
L_rb_loop:
        mov     eax, [esi + 4]
        cmp     byte ptr [eax], 0
        jne     L_rebalance_done
        mov     edx, [eax + 4]
        mov     ecx, [edx + 8]
        cmp     eax, ecx
        jne     L_rb_uncle_left
        /* uncle is right child */
        mov     ecx, [edx + 0xc]
        cmp     ecx, ebp
        je      L_uncle_black_right
        cmp     byte ptr [ecx], 0
        jne     L_uncle_black_right
        /* case: uncle is red */
        mov     byte ptr [eax], 1
        mov     eax, [eax + 4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L_rb_continue
L_uncle_black_right:
        cmp     esi, [eax + 0xc]
        jne     L_rb_rotate_left
        mov     esi, eax
        push    edi
        push    esi
        /* call 0x410a60 */
        call FUN_100410961
        add     esp, 8
L_rb_rotate_left:
        mov     eax, [esi + 4]
        mov     byte ptr [eax], 1
        mov     eax, [eax + 4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        /* call 0x410ab0 */
        call FUN_10041099b
        jmp     L_rb_cont2
L_rb_uncle_left:
        /* uncle is left child */
        cmp     ecx, ebp
        je      L_uncle_black_left
        cmp     byte ptr [ecx], 0
        jne     L_uncle_black_left
        /* case: uncle is red */
        mov     byte ptr [eax], 1
        mov     eax, [eax + 4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L_rb_continue
L_uncle_black_left:
        cmp     esi, [eax + 8]
        jne     L_rb_rotate_right
        mov     esi, eax
        push    edi
        push    esi
        /* call 0x410ab0 */
        call FUN_100410972
        add     esp, 8
L_rb_rotate_right:
        mov     eax, [esi + 4]
        mov     byte ptr [eax], 1
        mov     eax, [eax + 4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        /* call 0x410a60 */
        call FUN_10041090c
L_rb_cont2:
        add     esp, 8
L_rb_continue:
        cmp     esi, [edi]
        jne     L_rb_loop
L_rebalance_done:
        mov     eax, [edi]
        mov     byte ptr [eax], 1
        mov     eax, [esp + 0x10]
        mov     ecx, [eax + 4]
        pop     edi
        inc     ecx
        pop     esi
        mov     [eax + 4], ecx
        mov     eax, [esp + 0x10]
        pop     ebp
        mov     [eax], ebx
        pop     ebx
        pop     ecx
        ret     0x10
    }


}
