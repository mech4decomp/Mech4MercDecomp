/*
 * FUN_00767BD0 (94 B true extent; 240 B slice incl. 2 adjacent fns) —
 * in-.text data block function (block 0x767B52). Walks a linked list,
 * compares strings via IAT callback 0x76b2e0, calls vtable method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__cdecl *g_0076b2e0)(void);   /* IAT @ 0x76b2e0 */

__declspec(naked) void FUN_00767BD0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        or      ecx, 0xffffffff
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        repne scasb
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, dword ptr [eax + 4]
        not     ecx
        dec     ecx
        xor     ebp, ebp
        test    esi, esi
        mov     dword ptr [esp + 0x10], ecx
        je      L7C24
L7BF6:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        lea     edi, [esi + 8]
        push    edi
        call    dword ptr [g_0076b2e0]
        add     esp, 0xc
        test    eax, eax
        jne     L7C1E
        mov     ecx, dword ptr [esi + 4]
        mov     eax, dword ptr [ebx]
        push    ecx
        push    edi
        mov     ecx, ebx
        inc     ebp
        call    dword ptr [eax + 4]
L7C1E:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jne     L7BF6
L7C24:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
