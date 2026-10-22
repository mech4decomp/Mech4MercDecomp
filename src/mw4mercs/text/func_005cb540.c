/*
 * FUN_005cb540 (298 B) — Vector grow/insert. __thiscall, RET 0xC (3 stack
 * params: begin-ptr, insert-ptr, count). Reallocates the 12-byte-element
 * array, copies [begin,param1), inserts param2 (count elements), then copies
 * [param1,end).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005cb540(void *this, void *p1, void *p2, void *p3)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, edi
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, esi
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [esp + 0x20]
        jc      l_use_p3
        lea     eax, [esp + 0x10]
    l_use_p3:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x10], eax
        jz      l_zero
        lea     ecx, [eax + eax*2]
        shl     ecx, 2
        push    ecx
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
        mov     ebp, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], ebp
        mov     ebp, dword ptr [ecx + 8]
        mov     dword ptr [eax + 8], ebp
    l_copy1_skip:
        add     ecx, 0xc
        add     eax, 0xc
        cmp     ecx, edx
        jnz     l_copy1
    l_copy1_done:
        cmp     esi, 1
        jnz     l_insert_many
        test    eax, eax
        jz      l_insert1_skip
        mov     ecx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [eax + 4], esi
        mov     dword ptr [eax + 8], ecx
    l_insert1_skip:
        lea     esi, [eax + 0xc]
        jmp     l_insert_done
    l_insert_many:
        test    esi, esi
        jbe     l_insert_many_done
        mov     ecx, dword ptr [esp + 0x1c]
    l_insert_many_loop:
        test    eax, eax
        jz      l_insert_many_skip
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], ebp
        mov     ebp, dword ptr [ecx + 8]
        mov     dword ptr [eax + 8], ebp
    l_insert_many_skip:
        add     eax, 0xc
        dec     esi
        jnz     l_insert_many_loop
    l_insert_many_done:
        mov     esi, eax
    l_insert_done:
        cmp     edx, edi
        jz      l_copy2_done
        mov     ecx, esi
        lea     eax, [edx + 8]
        sub     ecx, edx
    l_copy2:
        test    esi, esi
        jz      l_copy2_skip
        mov     edx, dword ptr [eax - 8]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [eax - 4]
        mov     dword ptr [esi + 4], edx
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + eax], edx
    l_copy2_skip:
        add     eax, 0xc
        lea     edx, [eax - 8]
        add     esi, 0xc
        cmp     edx, edi
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
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        mov     dword ptr [ebx + 4], esi
        lea     ecx, [ecx + ecx*2]
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
