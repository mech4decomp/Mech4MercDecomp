/*
 * FUN_005cb7e0 (343 B) — Vector grow/insert (16-byte elements). __thiscall,
 * RET 0xC (3 stack params: begin-ptr, insert-ptr, count). Reallocates the
 * array, copies [begin,param1), inserts param2 (count elements), then copies
 * [param1,end).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005cb7e0(void *this, void *p1, void *p2, void *p3)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 4]
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx]
        sub     eax, esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        sar     eax, 4
        cmp     eax, edi
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x28]
        jc      l_use_p3
        lea     ecx, [esp + 0x14]
    l_use_p3:
        mov     ebp, dword ptr [ecx]
        add     ebp, eax
        mov     dword ptr [esp + 0x10], ebp
        jz      l_zero
        mov     eax, ebp
        shl     eax, 4
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x14], eax
        jmp     l_alloc_done
    l_zero:
        mov     dword ptr [esp + 0x14], 0
    l_alloc_done:
        mov     edx, dword ptr [esp + 0x20]
        cmp     esi, edx
        mov     eax, dword ptr [esp + 0x14]
        jz      l_copy1_done
        mov     ecx, esi
    l_copy1:
        test    eax, eax
        jz      l_copy1_skip
        mov     esi, ecx
        mov     ebp, dword ptr [esi]
        mov     edi, eax
        mov     dword ptr [edi], ebp
        mov     ebp, dword ptr [esi + 4]
        mov     dword ptr [edi + 4], ebp
        mov     ebp, dword ptr [esi + 8]
        mov     dword ptr [edi + 8], ebp
        mov     esi, dword ptr [esi + 0xc]
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0xc], esi
        mov     edi, dword ptr [esp + 0x28]
    l_copy1_skip:
        add     ecx, 0x10
        add     eax, 0x10
        cmp     ecx, edx
        jnz     l_copy1
    l_copy1_done:
        cmp     edi, 1
        jnz     l_insert_many
        test    eax, eax
        jz      l_insert1_skip
        mov     ecx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [ecx]
        mov     esi, eax
        mov     dword ptr [esi], edi
        mov     edi, dword ptr [ecx + 4]
        mov     dword ptr [esi + 4], edi
        mov     edi, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0xc], ecx
    l_insert1_skip:
        add     eax, 0x10
        jmp     l_insert_done
    l_insert_many:
        test    edi, edi
        jbe     l_insert_done
        mov     esi, dword ptr [esp + 0x24]
        mov     ecx, edi
    l_insert_many_loop:
        test    eax, eax
        jz      l_insert_many_skip
        mov     edi, esi
        mov     ebp, dword ptr [edi]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edi + 4]
        mov     dword ptr [ebx + 4], ebp
        mov     ebp, dword ptr [edi + 8]
        mov     edi, dword ptr [edi + 0xc]
        mov     dword ptr [ebx + 8], ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0xc], edi
        mov     ebx, dword ptr [esp + 0x18]
    l_insert_many_skip:
        add     eax, 0x10
        dec     ecx
        jnz     l_insert_many_loop
    l_insert_done:
        mov     edi, dword ptr [ebx + 4]
        cmp     edx, edi
        mov     esi, eax
        jz      l_copy2_done
        mov     ecx, edx
        sub     ecx, eax
    l_copy2:
        test    esi, esi
        jz      l_copy2_skip
        lea     edx, [ecx + esi]
        mov     ebp, dword ptr [edx]
        mov     eax, esi
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [edx + 4]
        mov     dword ptr [eax + 4], ebp
        mov     ebp, dword ptr [edx + 8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [eax + 8], ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0xc], edx
    l_copy2_skip:
        add     esi, 0x10
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jnz     l_copy2
    l_copy2_done:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        jz      l_free_skip
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_free_skip:
        mov     eax, dword ptr [esp + 0x14]
        shl     ebp, 4
        pop     edi
        mov     dword ptr [ebx + 4], esi
        add     ebp, eax
        pop     esi
        mov     dword ptr [ebx + 8], ebp
        pop     ebp
        mov     dword ptr [ebx], eax
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
