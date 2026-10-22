/*
 * FUN_10017a50 (1097 B) - __stdcall RET 0x8. Copies a stats record
 * (param_2) into a client object (param_1): validates 6 wide strings,
 * copies scalar fields into the [obj+0x34] struct, and _wcsdup's each
 * string into the struct + a shadow buffer. No SEH.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000b7d0(void);
extern void __cdecl FUN_1000b850(void);

extern void *g_1002105c;   /* IsBadStringPtrW */
extern void *g_10021130;   /* _wcsdup */
extern void *g_100210ec;   /* free */

__declspec(naked) unsigned long __cdecl FUN_10017a50(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        xor     ebp, ebp
        mov     ecx, dword ptr [edi + 8]
        cmp     ecx, ebp
        jl      L_17e8d
        mov     eax, dword ptr [edi + 4]
        cmp     eax, ebp
        jl      L_17e8d
        cmp     ecx, eax
        jle     L_17a7c
        cmp     eax, ebp
        jnz     L_17e8d
L_17a7c:
        mov     eax, dword ptr [edi + 0x14]
        mov     ebx, dword ptr [g_1002105c]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jnz     L_17aa2
        mov     ecx, dword ptr [edi + 0x14]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        jz      L_17e83
L_17aa2:
        mov     eax, dword ptr [edi + 0x18]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jnz     L_17ac2
        mov     ecx, dword ptr [edi + 0x18]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        jz      L_17e83
L_17ac2:
        mov     eax, dword ptr [edi + 0x1c]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jnz     L_17ae2
        mov     ecx, dword ptr [edi + 0x1c]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        jz      L_17e83
L_17ae2:
        mov     eax, dword ptr [edi + 0x20]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jnz     L_17b02
        mov     ecx, dword ptr [edi + 0x20]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        jz      L_17e83
L_17b02:
        mov     eax, dword ptr [edi + 0x24]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jnz     L_17b22
        mov     ecx, dword ptr [edi + 0x24]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        jz      L_17e83
L_17b22:
        mov     eax, dword ptr [edi + 0x28]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jnz     L_17b42
        mov     ecx, dword ptr [edi + 0x28]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        jz      L_17e83
L_17b42:
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi]
        push    -1
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 0x34]
        mov     dword ptr [edx + 0x34], eax
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [edi + 4]
        mov     dword ptr [ecx + 4], edx
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [edi + 8]
        mov     dword ptr [eax + 8], ecx
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 0xc]
        mov     dword ptr [edx + 0xc], eax
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [edi + 0x10]
        mov     dword ptr [ecx + 0x10], edx
        mov     eax, dword ptr [edi + 0x14]
        push    eax
        call    ebx
        test    eax, eax
        jnz     L_17bc4
        mov     edx, dword ptr [edi + 0x14]
        lea     ecx, [esi + 0xd4]
        push    ecx
        push    edx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        jz      L_17bc4
        mov     eax, dword ptr [edi + 0x14]
        push    eax
        call    dword ptr [g_10021130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x14], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x14], ebp
        jnz     L_17bfa
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_17bc4:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x14], ebp
        mov     eax, dword ptr [esi + 0xe0]
        cmp     eax, ebp
        jbe     L_17be8
        mov     eax, dword ptr [esi + 0xd4]
        cmp     eax, ebp
        jz      L_17be8
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_17be8:
        mov     dword ptr [esi + 0xd4], ebp
        mov     dword ptr [esi + 0xe4], ebp
        mov     dword ptr [esi + 0xe0], ebp
L_17bfa:
        mov     ecx, dword ptr [edi + 0x18]
        push    -1
        push    ecx
        call    ebx
        test    eax, eax
        jnz     L_17c44
        mov     eax, dword ptr [edi + 0x18]
        lea     edx, [esi + 0x16c]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        jz      L_17c44
        mov     ecx, dword ptr [edi + 0x18]
        push    ecx
        call    dword ptr [g_10021130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x18], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x18], ebp
        jnz     L_17c7a
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_17c44:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x18], ebp
        mov     eax, dword ptr [esi + 0x178]
        cmp     eax, ebp
        jbe     L_17c68
        mov     eax, dword ptr [esi + 0x16c]
        cmp     eax, ebp
        jz      L_17c68
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_17c68:
        mov     dword ptr [esi + 0x16c], ebp
        mov     dword ptr [esi + 0x17c], ebp
        mov     dword ptr [esi + 0x178], ebp
L_17c7a:
        mov     edx, dword ptr [edi + 0x1c]
        push    -1
        push    edx
        call    ebx
        test    eax, eax
        jnz     L_17cc4
        mov     ecx, dword ptr [edi + 0x1c]
        lea     eax, [esi + 0x204]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        jz      L_17cc4
        mov     edx, dword ptr [edi + 0x1c]
        push    edx
        call    dword ptr [g_10021130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x1c], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x1c], ebp
        jnz     L_17cfa
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_17cc4:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x1c], ebp
        mov     eax, dword ptr [esi + 0x210]
        cmp     eax, ebp
        jbe     L_17ce8
        mov     eax, dword ptr [esi + 0x204]
        cmp     eax, ebp
        jz      L_17ce8
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_17ce8:
        mov     dword ptr [esi + 0x204], ebp
        mov     dword ptr [esi + 0x214], ebp
        mov     dword ptr [esi + 0x210], ebp
L_17cfa:
        mov     ecx, dword ptr [edi + 0x20]
        push    -1
        push    ecx
        call    ebx
        test    eax, eax
        jnz     L_17d44
        mov     eax, dword ptr [edi + 0x20]
        lea     edx, [esi + 0x29c]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        jz      L_17d44
        mov     ecx, dword ptr [edi + 0x20]
        push    ecx
        call    dword ptr [g_10021130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x20], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x20], ebp
        jnz     L_17d7a
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_17d44:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x20], ebp
        mov     eax, dword ptr [esi + 0x2a8]
        cmp     eax, ebp
        jbe     L_17d68
        mov     eax, dword ptr [esi + 0x29c]
        cmp     eax, ebp
        jz      L_17d68
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_17d68:
        mov     dword ptr [esi + 0x29c], ebp
        mov     dword ptr [esi + 0x2ac], ebp
        mov     dword ptr [esi + 0x2a8], ebp
L_17d7a:
        mov     edx, dword ptr [edi + 0x24]
        push    -1
        push    edx
        call    ebx
        test    eax, eax
        jnz     L_17dc4
        mov     ecx, dword ptr [edi + 0x24]
        lea     eax, [esi + 0x334]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        jz      L_17dc4
        mov     edx, dword ptr [edi + 0x24]
        push    edx
        call    dword ptr [g_10021130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x24], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x24], ebp
        jnz     L_17dfa
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_17dc4:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x24], ebp
        mov     eax, dword ptr [esi + 0x340]
        cmp     eax, ebp
        jbe     L_17de8
        mov     eax, dword ptr [esi + 0x334]
        cmp     eax, ebp
        jz      L_17de8
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_17de8:
        mov     dword ptr [esi + 0x334], ebp
        mov     dword ptr [esi + 0x344], ebp
        mov     dword ptr [esi + 0x340], ebp
L_17dfa:
        mov     ecx, dword ptr [edi + 0x28]
        push    -1
        push    ecx
        call    ebx
        test    eax, eax
        jnz     L_17e44
        mov     eax, dword ptr [edi + 0x28]
        lea     edx, [esi + 0x3cc]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        jz      L_17e44
        mov     ecx, dword ptr [edi + 0x28]
        push    ecx
        call    dword ptr [g_10021130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x28], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x28], ebp
        jnz     L_17e7a
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_17e44:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x28], ebp
        mov     eax, dword ptr [esi + 0x3d8]
        cmp     eax, ebp
        jbe     L_17e68
        mov     eax, dword ptr [esi + 0x3cc]
        cmp     eax, ebp
        jz      L_17e68
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_17e68:
        mov     dword ptr [esi + 0x3cc], ebp
        mov     dword ptr [esi + 0x3dc], ebp
        mov     dword ptr [esi + 0x3d8], ebp
L_17e7a:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_17e83:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     edx, dword ptr [eax]
        call    dword ptr [edx + 0x40]
L_17e8d:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        ret     8
    }
}
