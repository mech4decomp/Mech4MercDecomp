/*
 * FUN_10006620 (154 B) - __thiscall (ECX = this, param_1 at [ebp+8]).
 * Free-list allocator: walks a linked list of blocks, allocates a new
 * block via malloc when needed, and carves out a chunk. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f8; /* IAT: malloc */

__declspec(naked) void __cdecl FUN_10006620(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        lea     ebx, [ecx + 4]
        push    esi
        mov     esi, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ebx]
        push    edi
        test    ecx, ecx
        lea     eax, [esi - 0xc]
        jz      L_4f
    L_35:
        mov     edi, dword ptr [ebp + 8]
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, edi
        jnc     L_49
        mov     ebx, ecx
        mov     ecx, dword ptr [ecx]
        test    ecx, ecx
        jnz     L_35
        jmp     L_52
    L_49:
        test    ecx, ecx
        jnz     L_92
        jmp     L_52
    L_4f:
        mov     edi, dword ptr [ebp + 8]
    L_52:
        cmp     edi, eax
        jbe     L_59
        lea     esi, [edi + 0xc]
    L_59:
        push    esi
        call    dword ptr [g_100210f8]
        mov     edx, eax
        add     esp, 0x4
        test    edx, edx
        jz      L_80
        lea     edi, [edx + 0xc]
        lea     eax, [esi - 0xc]
        mov     dword ptr [edx + 8], edi
        mov     edi, dword ptr [ebp + 8]
        mov     dword ptr [edx], 0
        mov     dword ptr [edx + 4], eax
        xor     ecx, ecx
    L_80:
        test    edx, edx
        mov     ecx, edx
        jnz     L_90
        int     3
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     8
    L_90:
        mov     dword ptr [ebx], edx
    L_92:
        mov     eax, dword ptr [ecx + 8]
        lea     edx, [edi + 3]
        and     edx, 0xfffffffc
        lea     esi, [eax + edx]
        mov     dword ptr [ecx + 8], esi
        mov     esi, dword ptr [ecx + 4]
        cmp     edx, esi
        jc      L_b4
        xor     esi, esi
        pop     edi
        mov     dword ptr [ecx + 4], esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     8
    L_b4:
        mov     esi, dword ptr [ecx + 4]
        pop     edi
        sub     esi, edx
        mov     dword ptr [ecx + 4], esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     8
    }
}
