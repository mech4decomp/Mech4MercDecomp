/*
 * FUN_00565af0 (773 B) — Stats update / aggregation function.
 *
 * Processes mission parameters and player stats, updates various
 * accumulators with computed values. Uses no frame pointer (EBP used
 * as general-purpose register).
 *
 * __stdcall (no params).
 * CFLAGS: /O1
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern int __stdcall FUN_006100a0(void);
extern int __stdcall FUN_00622930(int param, int val);
extern int __stdcall FUN_006234b0(void *ptr);
extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __stdcall FUN_00566570(void *a, void *b, int c);
extern int __stdcall FUN_00566660(void *a, void *b, void *c);

__declspec(naked) int __stdcall FUN_00565af0(void)
{
    

extern int DAT_007eebd4;
extern int DAT_007eebc0;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076c5b0;
extern int DAT_007eebc8;
extern int DAT_0077ed40;
__asm {
        mov eax, dword ptr [DAT_007eebd4]
        sub     esp, 0x14
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        jnz     l_global_ok
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004005
        pop     ebx
        add     esp, 0x14
        ret

l_global_ok:
        mov eax, dword ptr [DAT_007eebc0]
        test    eax, eax
        jz      l_ret_zero
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        mov     ebx, dword ptr [eax + 0xc]
        mov     edi, dword ptr [eax + 0x20]
        xor     ebx, 0x85739531
        xor     edi, 0x85739531
        mov     dword ptr [esp + 0x18], ebx
        jz      l_ret_zero
        test    ebx, ebx
        jz      l_ret_zero
        mov     eax, dword ptr [ebx + 0x50]
        test    eax, eax
        jz      l_ret_zero
        mov     al, byte ptr [edi + 0x2214]
        test    al, al
        jz      l_ret_one
        lea     esi, [edi + 0x21e8]
        mov     ecx, esi
        call    FUN_006100a0
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jnz     l_ret_one

        mov     al, byte ptr [edi + 0x2214]
        test    al, al
        jnz     l_get_weapon2
        fld dword ptr [DAT_0076c5b0]
        jmp     l_weapon2_done

l_get_weapon2:
        mov     ecx, esi
        call    FUN_006100a0

l_weapon2_done:
        fcomp qword ptr [DAT_007eebc8]
        fnstsw ax
        test    ah, 0x41
        jnz     l_ret_one

        mov     al, byte ptr [edi + 0x2214]
        test    al, al
        jnz     l_get_weapon3
        fld dword ptr [DAT_0076c5b0]
        jmp     l_weapon3_done

l_get_weapon3:
        mov     ecx, esi
        call    FUN_006100a0

l_weapon3_done:
        fadd qword ptr [DAT_0077ed40]
        lea     esi, [ebx + 0x5638]
        mov     ebp, 0xfe
        fstp qword ptr [DAT_007eebc8]

l_outer_loop1:
        mov     al, byte ptr [esi - 0xc8]
        test    al, al
        jz      l_outer_next1
        mov     eax, dword ptr [esi - 0x7c]
        test    eax, eax
        jz      l_outer_next1
        mov     ecx, dword ptr [eax + 0x170]
        test    ecx, ecx
        jz      l_outer_next1
        mov     ecx, dword ptr [edi + 0x225c]
        test    ecx, ecx
        jz      l_outer_next1
        mov     eax, dword ptr [eax + 0x170]
        mov     dl, byte ptr [eax + 0x14]
        add     eax, 0x14
        mov     byte ptr [esp + 0x10], dl
        mov     ax, word ptr [eax + 0x2]
        lea     edx, [esp + 0x10]
        push    edx
        mov     word ptr [esp + 0x16], ax
        call    FUN_006234b0
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x14], eax
        fild    dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        cmp     eax, ecx
        fstp    dword ptr [esp + 0x14]
        jz      l_full1
        test    eax, eax
        jz      l_skip_store1
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
l_skip_store1:
        add     eax, 0x4
        mov     dword ptr [esi], eax
        jmp     l_outer_next1

l_full1:
        push    0x1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        lea     ecx, [esi - 0x4]
        call    FUN_00566570

l_outer_next1:
        add     esi, 0x2038
        dec     ebp
        jnz     l_outer_loop1

        lea     esi, [ebx + 0x20607c]
        mov     ebp, 0x18

l_outer_loop2:
        mov     eax, dword ptr [esi - 0x34c]
        test    eax, eax
        jz      l_outer_next2
        mov     cl, byte ptr [esi - 0x148]
        test    cl, cl
        jz      l_outer_next2
        mov     ecx, dword ptr [edi + 0x225c]
        test    ecx, ecx
        jz      l_outer_next2
        mov     dl, byte ptr [eax + 0x14]
        mov     byte ptr [esp + 0x14], dl
        mov     ax, word ptr [eax + 0x16]
        lea     edx, [esp + 0x14]
        push    edx
        mov     word ptr [esp + 0x1a], ax
        call    FUN_006234b0
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        cmp     eax, ecx
        fstp    dword ptr [esp + 0x10]
        jz      l_full2
        test    eax, eax
        jz      l_skip_store2
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ecx
l_skip_store2:
        add     eax, 0x4
        mov     dword ptr [esi], eax
        jmp     l_outer_next2

l_full2:
        push    0x1
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        lea     ecx, [esi - 0x4]
        call    FUN_00566570

l_outer_next2:
        add     esi, 0x22ac
        dec     ebp
        jnz     l_outer_loop2

        mov     eax, dword ptr [ebx + 0x50]
        mov     ecx, dword ptr [eax + 0xe4]
        test    ecx, ecx
        jz      l_ret_zero

        mov     ecx, dword ptr [edi + 0x225c]
        mov     edx, dword ptr [esp + 0x18]
        or      ebx, 0xffffffff
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x10], ebx
        lea     edi, [edx + 0x239d70]

l_inner_loop3:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ebx
        push    0x2b
        call    FUN_00622930
        mov     esi, dword ptr [edi]
        mov     dword ptr [esp + 0x18], eax
        fild    dword ptr [esp + 0x18]
        cmp     esi, dword ptr [edi + 0x4]
        fstp    dword ptr [esp + 0x14]
        jz      l_realloc
        test    esi, esi
        jz      l_skip_store3
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi], eax
l_skip_store3:
        add     esi, 0x4
        mov     dword ptr [edi], esi
        jmp     l_loop3_next

l_realloc:
        mov     ebx, dword ptr [edi - 0x4]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x18], 0x1
        mov     dword ptr [esp + 0x20], eax
        lea     ecx, [esp + 0x18]
        jc      l_use_one
        lea     ecx, [esp + 0x20]
l_use_one:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x20], ecx
        jz      l_alloc_zero
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     l_alloc_done

l_alloc_zero:
        xor     ebp, ebp

l_alloc_done:
        push    ebp
        push    esi
        push    ebx
        call    FUN_00566660
        add     esp, 0xc
        test    eax, eax
        jz      l_skip_store4
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], edx
l_skip_store4:
        add     eax, 0x4
        push    eax
        push    esi
        push    esi
        call    FUN_00566660
        add     esp, 0xc
        test    ebx, ebx
        mov     esi, eax
        jz      l_skip_free
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
l_skip_free:
        mov     eax, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [esp + 0x10]
        lea     ecx, [ebp + eax*4]
        mov     dword ptr [edi - 0x4], ebp
        mov     dword ptr [edi], esi
        mov     dword ptr [edi + 0x4], ecx

l_loop3_next:
        add     edi, 0xc
        dec     ebx
        cmp     ebx, -0x9
        mov     dword ptr [esp + 0x10], ebx
        jg      l_inner_loop3

l_ret_zero:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x14
        ret

l_ret_one:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x14
        ret
    }


}
