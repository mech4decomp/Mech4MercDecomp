/*
 * FUN_006A0670 (341 B) — __thiscall, RET 0x10 (4 stack params).
 *   Inserts a node into a doubly-linked list structure with balancing.
 *   Calls FUN_004084d0 (alloc 0x1c), FUN_006a07d0 (init), FUN_00410a60 /
 *   FUN_00410ab0 (list rebalance helpers).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_006a07d0(void *p);
extern void __cdecl FUN_00410a60(void *a, void *b);
extern void __cdecl FUN_00410ab0(void *a, void *b);

__declspec(naked) void __fastcall FUN_006A0670(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     edi, esi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_6a06bc
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_6a06bc
        mov     eax, dword ptr [ebx]
        cmp     eax, dword ptr [edi + 0x10]
        jl      L_6a06bc
        push    0x1c
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_6a06af
        push    ebx
        call    FUN_006a07d0
L_6a06af:
        cmp     edi, dword ptr [esi + 0xc]
        mov     dword ptr [edi + 0xc], ebp
        jnz     L_6a06ec
        mov     dword ptr [esi + 0xc], ebp
        jmp     L_6a06ec
L_6a06bc:
        push    0x1c
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_6a06d5
        push    ebx
        call    FUN_006a07d0
L_6a06d5:
        cmp     edi, esi
        mov     dword ptr [edi + 0x8], ebp
        jnz     L_6a06e4
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi + 0xc], ebp
        jmp     L_6a06ec
L_6a06e4:
        cmp     edi, dword ptr [esi + 0x8]
        jnz     L_6a06ec
        mov     dword ptr [esi + 0x8], ebp
L_6a06ec:
        xor     eax, eax
        mov     dword ptr [ebp + 0x4], edi
        lea     edi, [esi + 0x4]
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     byte ptr [ebp], al
        cmp     ebp, dword ptr [edi]
        mov     esi, ebp
        jz      L_6a07a7
L_6a0707:
        mov     eax, dword ptr [esi + 0x4]
        cmp     byte ptr [eax], 0x0
        jnz     L_6a07a7
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx + 0x8]
        cmp     eax, ecx
        jnz     L_6a075f
        mov     ecx, dword ptr [edx + 0xc]
        test    ecx, ecx
        jz      L_6a0739
        cmp     byte ptr [ecx], 0x0
        jnz     L_6a0739
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_6a079f
L_6a0739:
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_6a074a
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 0x8
L_6a074a:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410ab0
        jmp     L_6a079c
L_6a075f:
        test    ecx, ecx
        jz      L_6a0778
        cmp     byte ptr [ecx], 0x0
        jnz     L_6a0778
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_6a079f
L_6a0778:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_6a0789
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 0x8
L_6a0789:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410a60
L_6a079c:
        add     esp, 0x8
L_6a079f:
        cmp     esi, dword ptr [edi]
        jnz     L_6a0707
L_6a07a7:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esp + 0x10]
        mov     byte ptr [ecx], 0x1
        mov     ecx, dword ptr [eax + 0x4]
        inc     ecx
        pop     edi
        mov     dword ptr [eax + 0x4], ecx
        mov     eax, dword ptr [esp + 0x14]
        pop     esi
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
