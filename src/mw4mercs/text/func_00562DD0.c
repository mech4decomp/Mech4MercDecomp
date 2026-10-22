/*
 * FUN_00562dd0 (185 B) — Build heap (heapify).
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00562DD0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    ebx
        sub     eax, ecx
        push    ebp
        mov     edx, eax
        and     edx, 0xfffffffc
        cmp     edx, 0x8
        push    esi
        push    edi
        jl      L_done

        sar     eax, 0x2
        mov     dword ptr [esp + 0x1c], eax
        add     eax, -0x2
        cdq
        sub     eax, edx
        mov     edi, eax
        sar     edi, 0x1
        lea     ebp, [edi + edi*0x1 + 0x2]
        mov     dword ptr [esp + 0x10], ebp
        lea     eax, [ecx + edi*0x4]

L_outer_loop:
        mov     edx, eax
        mov     ebx, dword ptr [edx]
        mov     edx, dword ptr [esp + 0x1c]
        cmp     ebp, edx
        mov     dword ptr [esp + 0x18], eax
        mov     esi, edi
        mov     eax, ebp
        jge     L_check_last

L_sift_loop:
        mov     ebp, dword ptr [ecx + eax*0x4]
        cmp     ebp, dword ptr [ecx + eax*0x4 - 0x4]
        jnc     L_no_swap
        dec     eax
L_no_swap:
        mov     ebp, dword ptr [ecx + eax*0x4]
        mov     dword ptr [ecx + esi*0x4], ebp
        mov     esi, eax
        lea     eax, [eax + eax*0x1 + 0x2]
        cmp     eax, edx
        jl      L_sift_loop
        mov     ebp, dword ptr [esp + 0x10]

L_check_last:
        cmp     eax, edx
        jnz     L_sift_up
        mov     edx, dword ptr [ecx + eax*0x4 - 0x4]
        mov     dword ptr [ecx + esi*0x4], edx
        lea     esi, [eax - 0x1]

L_sift_up:
        lea     eax, [esi - 0x1]
        cdq
        sub     eax, edx
        sar     eax, 0x1
        cmp     esi, edi
        jle     L_store
L_sift_up_loop:
        mov     edx, dword ptr [ecx + eax*0x4]
        cmp     edx, ebx
        jnc     L_store
        mov     dword ptr [ecx + esi*0x4], edx
        mov     esi, eax
        dec     eax
        cdq
        sub     eax, edx
        sar     eax, 0x1
        cmp     esi, edi
        jg      L_sift_up_loop

L_store:
        test    edi, edi
        mov     dword ptr [ecx + esi*0x4], ebx
        jz      L_done

        mov     eax, dword ptr [esp + 0x18]
        sub     ebp, 0x2
        dec     edi
        mov     dword ptr [esp + 0x10], ebp
        sub     eax, 0x4
        jmp     L_outer_loop

L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
