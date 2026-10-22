/*
 * FUN_00562c60 (353 B) — Heapsort.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00562e90(void *a, int b, int c, int d);

__declspec(naked) void __stdcall FUN_00562C60(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        sub     ecx, esi
        mov     eax, ecx
        and     eax, 0xfffffffc
        cmp     eax, 0x8
        push    edi
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_after_heapify

        ; Build heap
        mov     ebx, ecx
        sar     ebx, 0x2
        lea     eax, [ebx - 0x2]
        cdq
        sub     eax, edx
        mov     edi, eax
        sar     edi, 0x1
        lea     ebp, [esi + edi*0x4]
L_heapify_loop:
        mov     eax, dword ptr [ebp]
        push    eax
        push    ebx
        push    edi
        push    esi
        call    FUN_00562e90
        add     esp, 0x10
        test    edi, edi
        jz      L_heapify_done
        dec     edi
        sub     ebp, 0x4
        jmp     L_heapify_loop

L_heapify_done:
        mov     ecx, dword ptr [esp + 0x18]
L_after_heapify:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, dword ptr [esp + 0x20]
        mov     ebp, edi
        jnc     L_extract_loop

L_sort_loop:
        mov     ebx, dword ptr [ebp]
        mov     eax, dword ptr [esi]
        cmp     ebx, eax
        jnc     L_next_element

        mov     dword ptr [ebp], eax
        sar     ecx, 0x2
        mov     eax, 0x2
        xor     edi, edi
        cmp     ecx, eax
        jle     L_sift_down_check_last
L_sift_down_loop:
        mov     edx, dword ptr [esi + eax*0x4]
        cmp     edx, dword ptr [esi + eax*0x4 - 0x4]
        jnc     L_sift_down_no_swap
        dec     eax
L_sift_down_no_swap:
        mov     edx, dword ptr [esi + eax*0x4]
        mov     dword ptr [esi + edi*0x4], edx
        mov     edi, eax
        lea     eax, [eax + eax*0x1 + 0x2]
        cmp     eax, ecx
        jl      L_sift_down_loop

L_sift_down_check_last:
        cmp     eax, ecx
        jnz     L_sift_up
        mov     ecx, dword ptr [esi + eax*0x4 - 0x4]
        mov     dword ptr [esi + edi*0x4], ecx
        lea     edi, [eax - 0x1]

L_sift_up:
        lea     eax, [edi - 0x1]
        cdq
        sub     eax, edx
        sar     eax, 0x1
        test    edi, edi
        mov     ecx, edi
        jle     L_store_root
L_sift_up_loop:
        mov     edx, dword ptr [esi + eax*0x4]
        cmp     edx, ebx
        jnc     L_store_root
        mov     dword ptr [esi + ecx*0x4], edx
        mov     ecx, eax
        dec     eax
        cdq
        sub     eax, edx
        sar     eax, 0x1
        test    ecx, ecx
        jg      L_sift_up_loop
L_store_root:
        mov     dword ptr [esi + ecx*0x4], ebx
        mov     ecx, dword ptr [esp + 0x18]

L_next_element:
        mov     eax, dword ptr [esp + 0x20]
        add     ebp, 0x4
        cmp     ebp, eax
        jc      L_sort_loop
        mov     edi, dword ptr [esp + 0x1c]

L_extract_loop:
        cmp     dword ptr [esp + 0x10], 0x4
        jle     L_done

L_extract_inner:
        mov     edx, dword ptr [esi]
        mov     ebx, dword ptr [edi - 0x4]
        mov     eax, edi
        sub     eax, esi
        lea     ecx, [edi - 0x4]
        sub     eax, 0x4
        sar     eax, 0x2
        mov     dword ptr [ecx], edx
        mov     edx, eax
        mov     edi, ecx
        mov     eax, 0x2
        xor     ecx, ecx
        cmp     edx, eax
        jle     L_extract_check_last
L_extract_sift_loop:
        mov     ebp, dword ptr [esi + eax*0x4]
        cmp     ebp, dword ptr [esi + eax*0x4 - 0x4]
        jnc     L_extract_no_swap
        dec     eax
L_extract_no_swap:
        mov     ebp, dword ptr [esi + eax*0x4]
        mov     dword ptr [esi + ecx*0x4], ebp
        mov     ecx, eax
        lea     eax, [eax + eax*0x1 + 0x2]
        cmp     eax, edx
        jl      L_extract_sift_loop

L_extract_check_last:
        cmp     eax, edx
        jnz     L_extract_sift_up
        mov     edx, dword ptr [esi + eax*0x4 - 0x4]
        mov     dword ptr [esi + ecx*0x4], edx
        lea     ecx, [eax - 0x1]

L_extract_sift_up:
        lea     eax, [ecx - 0x1]
        cdq
        sub     eax, edx
        sar     eax, 0x1
        test    ecx, ecx
        jle     L_extract_store
L_extract_sift_up_loop:
        mov     edx, dword ptr [esi + eax*0x4]
        cmp     edx, ebx
        jnc     L_extract_store
        mov     dword ptr [esi + ecx*0x4], edx
        mov     ecx, eax
        dec     eax
        cdq
        sub     eax, edx
        sar     eax, 0x1
        test    ecx, ecx
        jg      L_extract_sift_up_loop
L_extract_store:
        mov     eax, edi
        sub     eax, esi
        and     eax, 0xfffffffc
        cmp     eax, 0x4
        mov     dword ptr [esi + ecx*0x4], ebx
        jg      L_extract_inner

L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
