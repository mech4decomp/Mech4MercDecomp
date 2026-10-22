/*
 * FUN_005C83F0 (426 B) — __thiscall, RET 4, void.
 * Manages a growable array of 12-byte elements at [esi+0x5c4/0x5c8/0x5cc].
 * Shifts elements, grows the buffer via FUN_004084d0 / FUN_005b8a30 /
 * FUN_0040c5d0 / FUN_004084e0, and copies a 12-byte param into a slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005b8a30(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005cbb20(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __cdecl FUN_005c83f0(void *param_1, void *param_2)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, [esi + 0x5c8]
        mov     ebp, [esi + 0x5c4]
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0xc
        push    edi
        jbe     l_after_shift

    l_shift_outer:
        lea     ebx, [ebp + 0xc]
    l_shift_loop:
        mov     edi, [esi + 0x5c8]
        cmp     ebx, edi
        jz      l_shift_done
        mov     ecx, edi
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        test    edx, edx
        jle     l_shift_done
        lea     eax, [ebp + 0x14]
    l_shift_inner:
        mov     ecx, [eax - 8]
        mov     [eax - 0x14], ecx
        mov     ecx, [eax - 4]
        mov     [eax - 0x10], ecx
        mov     ecx, [eax]
        mov     [eax - 0xc], ecx
        add     eax, 0xc
        dec     edx
        jnz     l_shift_inner
    l_shift_done:
        mov     edx, [esi + 0x5c4]
        add     edi, -0xc
        mov     ecx, edi
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0xc
        mov     [esi + 0x5c8], edi
        ja      l_shift_loop

    l_after_shift:
        mov     edi, [esi + 0x5c8]
        cmp     edi, [esi + 0x5cc]
        jz      l_grow
        test    edi, edi
        jz      l_skip_copy
        mov     eax, [esp + 0x1c]
        mov     ecx, [eax]
        mov     edx, [eax + 4]
        mov     eax, [eax + 8]
        mov     [edi], ecx
        mov     [edi + 4], edx
        mov     [edi + 8], eax
    l_skip_copy:
        add     edi, 0xc
        mov     [esi + 0x5c8], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4

    l_grow:
        mov     ebp, [esi + 0x5c4]
        mov     ecx, edi
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 1
        mov     dword ptr [esp + 0x10], 1
        mov     [esp + 0x14], edx
        lea     eax, [esp + 0x10]
        jc      l_sel_done
        lea     eax, [esp + 0x14]
    l_sel_done:
        mov     ebx, [eax]
        add     ebx, edx
        mov     [esp + 0x14], ebx
        jz      l_alloc_zero
        lea     edx, [ebx + ebx*2]
        shl     edx, 2
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     [esp + 0x10], eax
        jmp     l_alloc_done
    l_alloc_zero:
        mov     dword ptr [esp + 0x10], 0
    l_alloc_done:
        mov     eax, [esp + 0x1c]
        mov     ecx, [esp + 0x10]
        push    eax
        push    ecx
        push    edi
        push    ebp
        call    FUN_005b8a30
        mov     ebp, eax
        add     esp, 0x10
        test    ebp, ebp
        jz      l_no_init
        mov     edx, [esp + 0x1c]
        push    edx
        mov     ecx, ebp
        call    FUN_0040c5d0
    l_no_init:
        add     ebp, 0xc
        cmp     edi, edi
        jz      l_free_old
        mov     ebx, edi
    l_copy_loop:
        push    ebx
        push    ebp
        call    FUN_005cbb20
        add     ebx, 0xc
        add     esp, 8
        add     ebp, 0xc
        cmp     ebx, edi
        jnz     l_copy_loop
        mov     ebx, [esp + 0x14]
    l_free_old:
        mov     eax, [esi + 0x5c4]
        test    eax, eax
        mov     [esp + 0x1c], eax
        jz      l_no_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_no_free:
        mov     eax, [esp + 0x10]
        lea     ecx, [ebx + ebx*2]
        pop     edi
        lea     edx, [eax + ecx*4]
        mov     [esi + 0x5c8], ebp
        mov     [esi + 0x5c4], eax
        mov     [esi + 0x5cc], edx
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}
