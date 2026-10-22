/*
 * FUN_0064e710 (404 B) - Tree/ordered-list insertion routine.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Walks a binary tree from *this, inserting a new node (allocated via
 * FUN_004084d0) and re-linking parent/child pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064e930(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_0064e9f0(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_0064e8b0(void);

__declspec(naked) void __stdcall FUN_0064e710(void *p1, void *p2)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebp + 0x4]
        test    edi, edi
        mov     esi, ebp
        mov     al, 0x1
        jz      L744
L72c:
        mov     ecx, dword ptr [edx]
        cmp     ecx, dword ptr [edi + 0x10]
        setl    al
        test    al, al
        mov     esi, edi
        jz      L73d
        mov     edi, dword ptr [edi + 0x8]
        jmp     L740
L73d:
        mov     edi, dword ptr [edi + 0xc]
L740:
        test    edi, edi
        __emit 0x75   /* __emit: MSVC6 miscomputes this backward jnz rel8 (75 E6 vs ref 75 E8) */
        __emit 0xE8
L744:
        test    al, al
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        jz      L7fc
        cmp     esi, dword ptr [ebp + 0x8]
        jnz     L7e7
        cmp     esi, ebp
        jz      L783
        test    edi, edi
        jnz     L783
        mov     eax, dword ptr [edx]
        cmp     eax, dword ptr [esi + 0x10]
        jl      L783
        push    edx
        mov     ecx, ebx
        call    FUN_0064e930
        mov     ebp, dword ptr [ebx]
        mov     edi, eax
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [ebp + 0xc]
        jnz     L7b4
        mov     dword ptr [ebp + 0xc], edi
        jmp     L7b4
L783:
        push    0x28
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x28]
        mov     edi, eax
        push    ecx
        lea     edx, [edi + 0x10]
        push    edx
        call    FUN_0064e9f0
        add     esp, 0xc
        cmp     esi, ebp
        mov     dword ptr [esi + 0x8], edi
        jnz     L7ac
        mov     dword ptr [ebp + 0x4], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L7b4
L7ac:
        cmp     esi, dword ptr [ebp + 0x8]
        jnz     L7b4
        mov     dword ptr [ebp + 0x8], edi
L7b4:
        add     ebp, 0x4
        xor     eax, eax
        push    ebp
        push    edi
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0xc], eax
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8
L7e7:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004114b0
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x4
L7fc:
        mov     eax, dword ptr [edx]
        cmp     dword ptr [ecx + 0x10], eax
        jge     L87f
        cmp     esi, ebp
        jz      L829
        test    edi, edi
        jnz     L829
        cmp     eax, dword ptr [esi + 0x10]
        jl      L829
        push    edx
        mov     ecx, ebx
        call    FUN_0064e930
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L84c
        mov     dword ptr [eax + 0xc], edi
        jmp     L84c
L829:
        push    edx
        mov     ecx, ebx
        call    FUN_0064e930
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        cmp     esi, eax
        mov     dword ptr [esi + 0x8], edi
        jnz     L844
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L84c
L844:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L84c
        mov     dword ptr [eax + 0x8], edi
L84c:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0x8], ecx
        mov     dword ptr [edi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8
L87f:
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_0064e8b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
