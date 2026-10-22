/*
 * FUN_00659060 (341 B) — __thiscall, RET 0x10 (4 stack params).
 *   Inserts a node into a doubly-linked list structure with balancing.
 *   Calls FUN_004084d0 (alloc), FUN_006598d0 (init), FUN_00410a60 /
 *   FUN_00410ab0 (list rebalance helpers).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_006598d0(void *p);
extern void __cdecl FUN_00410a60(void *a, void *b);
extern void __cdecl FUN_00410ab0(void *a, void *b);

__declspec(naked) void __fastcall FUN_00659060(void)
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
        jz      L_6590ac
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_6590ac
        mov     eax, dword ptr [ebx]
        cmp     eax, dword ptr [edi + 0x10]
        jl      L_6590ac
        push    0x18
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_65909f
        push    ebx
        call    FUN_006598d0
L_65909f:
        cmp     edi, dword ptr [esi + 0xc]
        mov     dword ptr [edi + 0xc], ebp
        jnz     L_6590dc
        mov     dword ptr [esi + 0xc], ebp
        jmp     L_6590dc
L_6590ac:
        push    0x18
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_6590c5
        push    ebx
        call    FUN_006598d0
L_6590c5:
        cmp     edi, esi
        mov     dword ptr [edi + 0x8], ebp
        jnz     L_6590d4
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi + 0xc], ebp
        jmp     L_6590dc
L_6590d4:
        cmp     edi, dword ptr [esi + 0x8]
        jnz     L_6590dc
        mov     dword ptr [esi + 0x8], ebp
L_6590dc:
        xor     eax, eax
        mov     dword ptr [ebp + 0x4], edi
        lea     edi, [esi + 0x4]
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     byte ptr [ebp], al
        cmp     ebp, dword ptr [edi]
        mov     esi, ebp
        jz      L_659197
L_6590f7:
        mov     eax, dword ptr [esi + 0x4]
        cmp     byte ptr [eax], 0x0
        jnz     L_659197
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx + 0x8]
        cmp     eax, ecx
        jnz     L_65914f
        mov     ecx, dword ptr [edx + 0xc]
        test    ecx, ecx
        jz      L_659129
        cmp     byte ptr [ecx], 0x0
        jnz     L_659129
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_65918f
L_659129:
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_65913a
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 0x8
L_65913a:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410ab0
        jmp     L_65918c
L_65914f:
        test    ecx, ecx
        jz      L_659168
        cmp     byte ptr [ecx], 0x0
        jnz     L_659168
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_65918f
L_659168:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_659179
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 0x8
L_659179:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410a60
L_65918c:
        add     esp, 0x8
L_65918f:
        cmp     esi, dword ptr [edi]
        jnz     L_6590f7
L_659197:
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
