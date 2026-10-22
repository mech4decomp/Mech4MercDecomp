/*
 * FUN_00562920 (277 B) — Insertion sort (two paths: <=64 bytes and >64 bytes).
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00562920(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        mov     ecx, eax
        sub     ecx, ebp
        and     ecx, 0xfffffffc
        cmp     ecx, 0x40
        push    esi
        push    edi
        jle     L_small_array

        ; Large array path: sort first 64 bytes (16 elements)
        lea     edi, [ebp + 0x40]
        cmp     ebp, edi
        jz      L_large_second_block
        lea     esi, [ebp + 0x4]
        cmp     esi, edi
        jz      L_large_second_block

L_large_sort_loop:
        mov     ebx, dword ptr [esi]
        cmp     ebx, dword ptr [ebp]
        jnc     L_large_insert_sorted

        ; Need to shift elements right and insert at beginning
        mov     ecx, esi
        sub     ecx, ebp
        sar     ecx, 0x2
        test    ecx, ecx
        lea     eax, [esi + 0x4]
        jle     L_large_store_at_start
        mov     edx, esi
        sub     edx, eax
L_large_shift_loop:
        mov     edi, dword ptr [edx + eax*0x1 - 0x4]
        sub     eax, 0x4
        dec     ecx
        mov     dword ptr [eax], edi
        jnz     L_large_shift_loop
L_large_store_at_start:
        mov     dword ptr [ebp], ebx
        jmp     L_large_next

L_large_insert_sorted:
        mov     ecx, dword ptr [esi - 0x4]
        cmp     ebx, ecx
        lea     eax, [esi - 0x4]
        mov     edx, esi
        jnc     L_large_store_insert
L_large_find_pos:
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax - 0x4]
        mov     edx, eax
        sub     eax, 0x4
        cmp     ebx, ecx
        jc      L_large_find_pos
L_large_store_insert:
        mov     dword ptr [edx], ebx

L_large_next:
        add     esi, 0x4
        lea     edi, [ebp + 0x40]
        cmp     esi, edi
        jnz     L_large_sort_loop

L_large_after_first_block:
        mov     eax, dword ptr [esp + 0x18]
L_large_second_block:
        cmp     edi, eax
        jz      L_done

L_large_second_loop:
        mov     esi, dword ptr [edi]
        mov     ecx, dword ptr [edi - 0x4]
        cmp     esi, ecx
        lea     eax, [edi - 0x4]
        mov     edx, edi
        jnc     L_large_store_second
L_large_find_second:
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax - 0x4]
        mov     edx, eax
        sub     eax, 0x4
        cmp     esi, ecx
        jc      L_large_find_second
L_large_store_second:
        mov     eax, dword ptr [esp + 0x18]
        add     edi, 0x4
        cmp     edi, eax
        mov     dword ptr [edx], esi
        jnz     L_large_second_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret

L_small_array:
        cmp     ebp, eax
        jz      L_done
        lea     esi, [ebp + 0x4]
        cmp     esi, eax
        jz      L_done

L_small_sort_loop:
        mov     edi, dword ptr [esi]
        cmp     edi, dword ptr [ebp]
        jnc     L_small_insert_sorted

        ; Need to shift elements right and insert at beginning
        mov     ecx, esi
        sub     ecx, ebp
        sar     ecx, 0x2
        test    ecx, ecx
        lea     eax, [esi + 0x4]
        jle     L_small_store_at_start
        mov     edx, esi
        sub     edx, eax
L_small_shift_loop:
        mov     ebx, dword ptr [edx + eax*0x1 - 0x4]
        sub     eax, 0x4
        dec     ecx
        mov     dword ptr [eax], ebx
        jnz     L_small_shift_loop
L_small_store_at_start:
        mov     dword ptr [ebp], edi
        jmp     L_small_next

L_small_insert_sorted:
        mov     ecx, dword ptr [esi - 0x4]
        cmp     edi, ecx
        lea     eax, [esi - 0x4]
        mov     edx, esi
        jnc     L_small_store_insert
L_small_find_pos:
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax - 0x4]
        mov     edx, eax
        sub     eax, 0x4
        cmp     edi, ecx
        jc      L_small_find_pos
L_small_store_insert:
        mov     dword ptr [edx], edi

L_small_next:
        mov     eax, dword ptr [esp + 0x18]
        add     esi, 0x4
        cmp     esi, eax
        jnz     L_small_sort_loop

L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
