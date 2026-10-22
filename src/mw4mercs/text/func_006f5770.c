/*
 * FUN_006f5770 (320 B) — Remove an entry from a hash table / linked list.
 *
 * Hashes the key via virtual method (vtable+0x10), walks the bucket chain
 * calling virtual method (vtable+0xc) to match, then unlinks the found node
 * from the doubly-linked list rooted at [node+4]/[node+8] and frees it.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_76b2ac)(const char *, const char *);  /* _stricmp */
extern void (__cdecl *g_76b2d0)(void *);                     /* free */
extern void __cdecl FUN_006f7860(void *a, void *b);
extern void __cdecl FUN_006f5c80(void *p);

__declspec(naked) void __cdecl FUN_006f5770(void *this, void *param_1)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    eax
        mov     dword ptr [esp + 0x14], ebp
        call    dword ptr [ebp + 0x10]
        xor     ecx, ecx
        mov     cx, word ptr [ebp + 6]
        mov     edi, eax
        and     edi, 0xffff
        and     edi, ecx
        mov     ecx, dword ptr [ebp + 8]
        shl     edi, 4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      loc_6f57c1
loc_6f57a2:
        test    dword ptr [esi + 0xc], 0x80000000
        jnz     loc_6f57bb
        mov     edx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esi + 8]
        push    edx
        push    ebx
        call    dword ptr [ebp + 0xc]
        test    al, al
        jnz     loc_6f57cb
loc_6f57bb:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     loc_6f57a2
loc_6f57c1:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     8
loc_6f57cb:
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        jz      loc_6f57d5
        push    ebx
        call    eax
loc_6f57d5:
        test    ebx, ebx
        jz      loc_6f57c1
        mov     ecx, dword ptr [ebp + 0x3c]
        test    ecx, ecx
        jz      loc_6f57eb
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    ebx
        call    FUN_006f7860
loc_6f57eb:
        mov     esi, dword ptr [ebx + 4]
        test    esi, esi
        jz      loc_6f57c1
loc_6f57f2:
        test    esi, esi
        mov     ebp, esi
        jnz     loc_6f57fc
        xor     edi, edi
        jmp     loc_6f5801
loc_6f57fc:
        mov     edi, esi
        mov     esi, dword ptr [esi + 4]
loc_6f5801:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [edi]
        push    ecx
        push    edx
        call    dword ptr [g_76b2ac]
        add     esp, 8
        test    eax, eax
        jz      loc_6f5824
        test    esi, esi
        jnz     loc_6f57f2
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     8
loc_6f5824:
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        call    FUN_006f5c80
        xor     ecx, ecx
        cmp     ebp, ecx
        jz      loc_6f58a6
        cmp     ebp, dword ptr [ebx + 4]
        jnz     loc_6f5871
        mov     eax, dword ptr [ebp + 4]
        cmp     eax, ecx
        mov     dword ptr [ebx + 4], eax
        jz      loc_6f585a
        push    ebp
        mov     dword ptr [eax + 8], ecx
        call    dword ptr [g_76b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     8
loc_6f585a:
        push    ebp
        mov     dword ptr [ebx + 8], ecx
        call    dword ptr [g_76b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     8
loc_6f5871:
        cmp     ebp, dword ptr [ebx + 8]
        mov     eax, dword ptr [ebp + 8]
        jnz     loc_6f5893
        push    ebp
        mov     dword ptr [ebx + 8], eax
        mov     dword ptr [eax + 4], ecx
        call    dword ptr [g_76b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     8
loc_6f5893:
        mov     ecx, dword ptr [ebp + 4]
        push    ebp
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [ecx + 8], eax
        call    dword ptr [g_76b2d0]
        add     esp, 4
loc_6f58a6:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     8
    }
}
