/*
 * FUN_005cb970 (343 B) — Vector/array resize (element size 0x10).
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *   param_1 (ESP+0x28) = new element count
 *   param_2 (ESP+0x24) = source array pointer
 *   param_3 (ESP+0x20) = end pointer
 *
 * Reallocates the internal buffer (via FUN_004084d0) to hold
 * max(current_count, param_1) elements, copies the existing range
 * [begin,end), then appends param_1 elements from param_2, then
 * shifts the tail [end, old_end) down. Frees the old buffer via
 * FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005cb970(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx]
        sub     eax, esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        sar     eax, 0x4
        cmp     eax, edi
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x28]
        jc      l_99b
        lea     ecx, [esp + 0x14]
l_99b:
        mov     ebp, dword ptr [ecx]
        add     ebp, eax
        mov     dword ptr [esp + 0x10], ebp
        jz      l_9b9
        mov     eax, ebp
        shl     eax, 0x4
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        jmp     l_9c1
l_9b9:
        mov     dword ptr [esp + 0x14], 0x0
l_9c1:
        mov     edx, dword ptr [esp + 0x20]
        cmp     esi, edx
        mov     eax, dword ptr [esp + 0x14]
        jz      l_9ff
        mov     ecx, esi
l_9cf:
        test    eax, eax
        jz      l_9f5
        mov     esi, ecx
        mov     ebp, dword ptr [esi]
        mov     edi, eax
        mov     dword ptr [edi], ebp
        mov     ebp, dword ptr [esi + 0x4]
        mov     dword ptr [edi + 0x4], ebp
        mov     ebp, dword ptr [esi + 0x8]
        mov     dword ptr [edi + 0x8], ebp
        mov     esi, dword ptr [esi + 0xc]
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0xc], esi
        mov     edi, dword ptr [esp + 0x28]
l_9f5:
        add     ecx, 0x10
        add     eax, 0x10
        cmp     ecx, edx
        jnz     l_9cf
l_9ff:
        cmp     edi, 0x1
        jnz     l_a29
        test    eax, eax
        jz      l_a24
        mov     ecx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [ecx]
        mov     esi, eax
        mov     dword ptr [esi], edi
        mov     edi, dword ptr [ecx + 0x4]
        mov     dword ptr [esi + 0x4], edi
        mov     edi, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], ecx
l_a24:
        add     eax, 0x10
        jmp     l_a5f
l_a29:
        test    edi, edi
        jbe     l_a5f
        mov     esi, dword ptr [esp + 0x24]
        mov     ecx, edi
l_a33:
        test    eax, eax
        jz      l_a59
        mov     edi, esi
        mov     ebp, dword ptr [edi]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edi + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebp, dword ptr [edi + 0x8]
        mov     edi, dword ptr [edi + 0xc]
        mov     dword ptr [ebx + 0x8], ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0xc], edi
        mov     ebx, dword ptr [esp + 0x18]
l_a59:
        add     eax, 0x10
        dec     ecx
        jnz     l_a33
l_a5f:
        mov     edi, dword ptr [ebx + 0x4]
        cmp     edx, edi
        mov     esi, eax
        jz      l_a99
        mov     ecx, edx
        sub     ecx, eax
l_a6c:
        test    esi, esi
        jz      l_a8f
        lea     edx, [ecx + esi*0x1]
        mov     ebp, dword ptr [edx]
        mov     eax, esi
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     dword ptr [eax + 0x4], ebp
        mov     ebp, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [eax + 0x8], ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0xc], edx
l_a8f:
        add     esi, 0x10
        lea     eax, [ecx + esi*0x1]
        cmp     eax, edi
        jnz     l_a6c
l_a99:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        jz      l_aac
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_aac:
        mov     eax, dword ptr [esp + 0x14]
        shl     ebp, 0x4
        pop     edi
        mov     dword ptr [ebx + 0x4], esi
        add     ebp, eax
        pop     esi
        mov     dword ptr [ebx + 0x8], ebp
        pop     ebp
        mov     dword ptr [ebx], eax
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
