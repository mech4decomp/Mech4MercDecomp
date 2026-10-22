/*
 * FUN_0069A5F0 (198 B) — binary-search-tree lookup by string, returning the
 * matching node through an output pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0069a7d0(void);

__declspec(naked) void FUN_0069A5F0(void)
{
    __asm {
        sub     esp, 0xc
        mov     ecx, dword ptr [ecx]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x1c]
        push    esi
        mov     esi, dword ptr [ecx+4]
        test    esi, esi
        push    edi
        mov     dword ptr [esp+0x10], ecx
        mov     ebx, ecx
        je      L_69a638
        mov     edi, dword ptr [ebp+4]
        mov     eax, dword ptr [ebp]
    L_69a60d:
        mov     ecx, dword ptr [esi+0x10]
        push    edi
        push    eax
        mov     eax, dword ptr [esi+0x14]
        push    eax
        push    ecx
        call    FUN_0069a7d0
        add     esp, 0x10
        test    eax, eax
        jl      L_69a62d
        mov     ebx, esi
        mov     esi, dword ptr [esi+8]
        jmp     L_69a630
    L_69a62d:
        mov     esi, dword ptr [esi+0xc]
    L_69a630:
        test    esi, esi
        /* __emit: MSVC6 miscomputes backward jne rel-offset (75 DC vs ref 75 D9) */
        __emit 0x75
        __emit 0xD9
        mov     ecx, dword ptr [esp+0x10]
    L_69a638:
        cmp     ebx, ecx
        mov     dword ptr [esp+0x18], ebx
        je      L_69a69c
        mov     edi, dword ptr [ebx+0x10]
        mov     esi, dword ptr [ebp]
        mov     eax, dword ptr [ebp+4]
        mov     edx, dword ptr [ebx+0x14]
        sub     eax, esi
        sub     edx, edi
        cmp     edx, eax
        mov     dword ptr [esp+0x14], eax
        mov     dword ptr [esp+0x24], edx
        lea     ecx, [esp+0x24]
        jl      L_69a664
        lea     ecx, [esp+0x14]
    L_69a664:
        mov     ecx, dword ptr [ecx]
        xor     ebx, ebx
        repe cmpsb
        je      L_69a671
        sbb     ebx, ebx
        sbb     ebx, -1
    L_69a671:
        test    ebx, ebx
        jne     L_69a680
        cmp     eax, edx
        jl      L_69a698
        cmp     eax, edx
        setg    bl
        test    ebx, ebx
    L_69a680:
        jl      L_69a698
        pop     edi
        lea     eax, [esp+0x14]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x1c]
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0xc
        ret     8
    L_69a698:
        mov     ecx, dword ptr [esp+0x10]
    L_69a69c:
        pop     edi
        lea     eax, [esp+0x20]
        pop     esi
        mov     dword ptr [esp+0x1c], ecx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x18]
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}
