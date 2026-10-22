/*
 * FUN_005cb6f0 (232 B) — Vector grow/insert (4-byte elements). __thiscall,
 * RET 0xC (3 stack params: begin-ptr, insert-ptr, count). Reallocates the
 * array, copies [begin,param1), inserts param2 (count elements), then copies
 * [param1,end).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005cb6f0(void *this, void *p1, void *p2, void *p3)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebx + 4]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x20]
        jc      l_use_p3
        lea     ecx, [esp + 0x10]
    l_use_p3:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      l_zero
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x20], eax
        jmp     l_alloc_done
    l_zero:
        mov     dword ptr [esp + 0x20], 0
    l_alloc_done:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      l_copy1_done
        mov     ecx, ebp
    l_copy1:
        test    eax, eax
        jz      l_copy1_skip
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
    l_copy1_skip:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jnz     l_copy1
    l_copy1_done:
        cmp     esi, 1
        jnz     l_insert_many
        test    eax, eax
        jz      l_insert1_skip
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
    l_insert1_skip:
        add     eax, 4
        jmp     l_insert_done
    l_insert_many:
        test    esi, esi
        jbe     l_insert_done
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1c]
    l_insert_many_loop:
        test    eax, eax
        jz      l_insert_many_skip
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
    l_insert_many_skip:
        add     eax, 4
        dec     ecx
        jnz     l_insert_many_loop
    l_insert_done:
        cmp     edx, edi
        mov     esi, eax
        jz      l_copy2_done
        mov     ecx, edx
        sub     ecx, eax
    l_copy2:
        test    esi, esi
        jz      l_copy2_skip
        mov     edx, dword ptr [ecx + esi]
        mov     dword ptr [esi], edx
    l_copy2_skip:
        add     esi, 4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jnz     l_copy2
    l_copy2_done:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      l_free_skip
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_free_skip:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ebx + 4], esi
        pop     esi
        lea     edx, [eax + ecx*4]
        pop     ebp
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 8], edx
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
