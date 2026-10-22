/*
 * FUN_00566570 (229 B) — Buffer/array insertion helper.
 *
 * Manages a dynamic array (begin/end/capacity pointers), inserts elements
 * with optional fill. __thiscall (ECX = this pointer to {begin, end, cap}).
 *
 * __thiscall (ECX = this), RET 12 (3 stack params).
 * CFLAGS: /O1
 */

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00566570(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esp + 0x20]
        push    edi
        mov     edi, dword ptr [esi]
        mov     eax, ebx
        sub     eax, edi
        sar     eax, 0x2
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x24]
        jc      l_use_param
        lea     ecx, [esp + 0x10]
l_use_param:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      l_alloc_zero
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     l_alloc_done
l_alloc_zero:
        xor     ebp, ebp
l_alloc_done:
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        mov     edx, ebp
        jle     l_copy_done1
        mov     ecx, edi
        sub     ecx, ebp
l_copy_loop1:
        mov     edi, dword ptr [ecx + edx]
        mov     dword ptr [edx], edi
        add     edx, 0x4
        dec     eax
        jnz     l_copy_loop1
l_copy_done1:
        mov     ecx, dword ptr [esp + 0x24]
        cmp     ecx, 0x1
        jnz     l_not_one
        test    edx, edx
        jz      l_skip_store_one
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [edx], eax
l_skip_store_one:
        add     edx, 0x4
        jmp     l_fill_done
l_not_one:
        test    ecx, ecx
        jbe     l_fill_done
        mov     eax, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax]
        mov     edi, edx
        rep stosd
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x20], eax
        lea     edx, [edx + ecx*4]
l_fill_done:
        sub     ebx, dword ptr [esp + 0x1c]
        sar     ebx, 0x2
        mov     eax, ebx
        test    eax, eax
        mov     edi, edx
        jle     l_copy_done2
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, eax
        rep movsd
        mov     esi, dword ptr [esp + 0x14]
        lea     edi, [edx + eax*4]
l_copy_done2:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_skip_free_old
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_skip_free_old:
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x4], edi
        lea     eax, [ebp + edx*4]
        pop     edi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
