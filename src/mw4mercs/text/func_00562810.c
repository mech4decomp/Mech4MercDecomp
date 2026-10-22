/*
 * FUN_00562810 (272 B) — Introsort (quicksort with heapsort fallback).
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00562810(void *a, void *b, int c, int d);
extern void __stdcall FUN_00562dd0(void *a, void *b, int c, int d);
extern void __stdcall FUN_00562e90(void *a, int b, int c, int d);

__declspec(naked) void __stdcall FUN_00562810(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, ebx
        sub     eax, edi
        and     eax, 0xfffffffc
        cmp     eax, 0x40
        jle     L_done2

L_outer_loop:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_use_heapsort

        ; Quicksort partition
        mov     ecx, dword ptr [edi]          ; left = *first
        mov     ebp, dword ptr [ebx - 0x4]    ; right = *(last-1)
        mov     esi, eax                      ; depth counter
        mov     eax, ebx
        sub     eax, edi
        sar     eax, 0x2
        cdq
        sub     eax, edx
        sar     eax, 0x1
        mov     edx, dword ptr [edi + eax*0x4] ; pivot = mid element
        dec     esi
        cmp     ecx, edx                      ; compare left vs pivot
        lea     eax, [edi + eax*0x4]           ; EAX = &pivot
        mov     dword ptr [esp + 0x20], esi    ; save depth-1
        lea     esi, [ebx - 0x4]               ; ESI = &right (last-1)
        jnc     L_left_ge_pivot

        ; left < pivot
        cmp     edx, ebp                      ; compare pivot vs right
        jc      L_pivot_selected              ; pivot < right -> use pivot (EAX already set)
        cmp     ecx, ebp                      ; compare left vs right
        jnc     L_use_left                    ; left >= right -> use left
        jmp     L_use_right                   ; else use right

L_left_ge_pivot:
        cmp     ecx, ebp                      ; compare left vs right
        jnc     L_pivot_or_right              ; left >= right -> check pivot vs right
L_use_left:
        mov     eax, edi                      ; use left
        jmp     L_pivot_selected
L_pivot_or_right:
        cmp     edx, ebp                      ; compare pivot vs right
        jnc     L_pivot_selected              ; pivot >= right -> use pivot (EAX already set)
L_use_right:
        mov     eax, esi                      ; use right

L_pivot_selected:
        mov     ecx, dword ptr [eax]          ; pivot value
        mov     eax, ebx
        mov     esi, edi

L_partition_loop:
        cmp     dword ptr [esi], ecx
        jnc     L_find_right
L_scan_left:
        mov     edx, dword ptr [esi + 0x4]
        add     esi, 0x4
        cmp     edx, ecx
        jc      L_scan_left
L_find_right:
        mov     edx, dword ptr [eax - 0x4]
        sub     eax, 0x4
        cmp     ecx, edx
        jnc     L_find_right_cont
L_scan_right:
        mov     edx, dword ptr [eax - 0x4]
        sub     eax, 0x4
        cmp     ecx, edx
        jc      L_scan_right
L_find_right_cont:
        cmp     esi, eax
        jnc     L_partition_done
        mov     edx, dword ptr [esi]
        mov     ebp, dword ptr [eax]
        mov     dword ptr [esi], ebp
        mov     dword ptr [eax], edx
        add     esi, 0x4
        jmp     L_partition_loop

L_partition_done:
        ; Recurse on right partition
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    0x0
        push    ebx
        push    esi
        call    FUN_00562810
        mov     ebx, esi
        sub     esi, edi
        and     esi, 0xfffffffc
        add     esp, 0x10
        cmp     esi, 0x40
        jg      L_outer_loop
        ; fall through to L_done_early

L_done_early:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret

L_use_heapsort:
        push    0x0
        push    0x0
        push    ebx
        push    edi
        call    FUN_00562dd0
        mov     esi, ebx
        sub     ebx, edi
        and     ebx, 0xfffffffc
        add     esp, 0x10
        cmp     ebx, 0x4
        jle     L_done2

L_heapsort_loop:
        mov     ecx, dword ptr [esi - 0x4]
        mov     edx, dword ptr [edi]
        mov     eax, esi
        sub     eax, edi
        add     esi, -0x4
        push    ecx
        sub     eax, 0x4
        sar     eax, 0x2
        push    eax
        push    0x0
        push    edi
        mov     dword ptr [esi], edx
        call    FUN_00562e90
        mov     eax, esi
        sub     eax, edi
        and     eax, 0xfffffffc
        add     esp, 0x10
        cmp     eax, 0x4
        jg      L_heapsort_loop
L_done2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
