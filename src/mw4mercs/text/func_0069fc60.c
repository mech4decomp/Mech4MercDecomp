/*
 * FUN_0069FC60 (208 B) — __thiscall (ECX=this, RET 8) that inserts a node
 * into a binary tree rooted at this->field0. Walks the tree comparing
 * *param_2 against node->key (+0x10), allocates a 0x14-byte node via
 * FUN_004084d0, initializes it via FUN_0062bc10, links it into the tree,
 * and updates the parent list via FUN_00411670.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084d0(int);
extern void  __cdecl FUN_0062bc10(void*, void*);
extern void  __cdecl FUN_00411670(void*, void*);

__declspec(naked) void FUN_0069fc60(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp]
        lea     eax, [ebx + 0x4]
        mov     dword ptr [esp + 0x8], eax
        mov     eax, dword ptr [eax]
        test    eax, eax
        push    esi
        push    edi
        mov     esi, ebx
        jz      l_92
    l_7f:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, dword ptr [eax + 0x10]
        mov     esi, eax
        jge     l_8b
        mov     eax, dword ptr [eax + 0x8]
        jmp     l_8e
    l_8b:
        mov     eax, dword ptr [eax + 0xc]
    l_8e:
        test    eax, eax
        __emit 0x75  /* __emit: backward jcc rel8 offset miscomputed by MSVC6 (75 ED vs 75 E7) */
        __emit 0xED
    l_92:
        cmp     esi, ebx
        jz      l_ce
        test    eax, eax
        jnz     l_ce
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edx]
        cmp     eax, dword ptr [esi + 0x10]
        jl      l_ce
        push    0x14
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x20]
        mov     edi, eax
        push    ecx
        lea     edx, [edi + 0x10]
        push    edx
        call    FUN_0062bc10
        mov     dword ptr [esi + 0xc], edi
        mov     eax, dword ptr [ebx + 0xc]
        add     esp, 0xc
        cmp     esi, eax
        jnz     l_02
        mov     dword ptr [ebx + 0xc], edi
        jmp     l_02
    l_ce:
        push    0x14
        call    FUN_004084d0
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        lea     ecx, [edi + 0x10]
        push    ecx
        call    FUN_0062bc10
        add     esp, 0xc
        cmp     esi, ebx
        mov     dword ptr [esi + 0x8], edi
        jnz     l_fa
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx], edi
        mov     dword ptr [ebx + 0xc], edi
        jmp     l_02
    l_fa:
        cmp     esi, dword ptr [ebx + 0x8]
        jnz     l_02
        mov     dword ptr [ebx + 0x8], edi
    l_02:
        xor     eax, eax
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0xc], eax
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    edi
        mov     dword ptr [edi + 0x4], esi
        call    FUN_00411670
        mov     eax, dword ptr [ebp + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebp + 0x4], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
