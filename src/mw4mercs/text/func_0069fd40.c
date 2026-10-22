/*
 * FUN_0069fd40 (137 B) — __thiscall (ECX = this), RET 0x4 (1 stack param).
 * Binary-tree traversal: finds the min/max nodes bracketing param_1, then
 * counts the nodes between them (in-order successor walk). Returns the count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0069fd40(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x4]
        push    ebx
        push    esi
        mov     eax, edx
        test    eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, ecx
        jz      l_fd69
l_fd54:
        mov     esi, dword ptr [edi]
l_fd56:
        cmp     esi, dword ptr [eax + 0x10]
        jge     l_fd62
        mov     ebx, eax
        mov     eax, dword ptr [eax + 0x8]
        jmp     l_fd65
l_fd62:
        mov     eax, dword ptr [eax + 0xc]
l_fd65:
        test    eax, eax
        jnz     l_fd56
l_fd69:
        mov     eax, edx
        test    eax, eax
        jz      l_fd84
l_fd6f:
        mov     edx, dword ptr [edi]
l_fd71:
        cmp     dword ptr [eax + 0x10], edx
        jl      l_fd7d
        mov     ecx, eax
        mov     eax, dword ptr [eax + 0x8]
        jmp     l_fd80
l_fd7d:
        mov     eax, dword ptr [eax + 0xc]
l_fd80:
        test    eax, eax
        jnz     l_fd71
l_fd84:
        xor     eax, eax
        cmp     ecx, ebx
        jz      l_fdc3
l_fd8a:
        mov     edx, dword ptr [ecx + 0xc]
        test    edx, edx
        jz      l_fda5
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 0x8]
        test    edx, edx
        jz      l_fdbe
l_fd9a:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 0x8]
        test    edx, edx
        jnz     l_fd9a
        jmp     l_fdbe
l_fda5:
        mov     edx, dword ptr [ecx + 0x4]
        cmp     ecx, dword ptr [edx + 0xc]
        jnz     l_fdb7
l_fdad:
        mov     ecx, edx
        mov     edx, dword ptr [edx + 0x4]
        cmp     ecx, dword ptr [edx + 0xc]
        jz      l_fdad
l_fdb7:
        cmp     dword ptr [ecx + 0xc], edx
        jz      l_fdbe
        mov     ecx, edx
l_fdbe:
        inc     eax
        cmp     ecx, ebx
        jnz     l_fd8a
l_fdc3:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
