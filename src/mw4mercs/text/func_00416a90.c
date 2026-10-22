/*
 * FUN_00416a90 (203 B) — __thiscall (ECX=this, 2 stack args) sorted-list
 * insertion. Calls vtable[0x20](param1,param2) to build a new node, then
 * walks the list at this+0xc using vtable[0x28] as the comparator and
 * splices the new node into the doubly-linked list (prev this+0x10 /
 * next this+0x14).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416970(void);
extern void __cdecl FUN_00415be0(void);

__declspec(naked) void FUN_00416a90(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x10]   ; param2
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x14]   ; param1
        mov     eax, dword ptr [esi]
        push    ebp
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        mov     ebx, dword ptr [esi+0xc]
        test    ebx, ebx
        mov     edi, eax
        jnz     L_16acf
        push    ebx
        push    ebx
        mov     ecx, edi
        call    FUN_00416970
        push    edi
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi+0xc], edi
        mov     dword ptr [esi+0x10], edi
        call    FUN_00415be0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_16acf:
        mov     edx, dword ptr [esi]
        push    ebx
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx+0x28]
        test    eax, eax
        jl      L_16ae5
        mov     ebx, dword ptr [ebx+0x10]
        test    ebx, ebx
        jnz     L_16acf
        jmp     L_16ae9
    L_16ae5:
        test    ebx, ebx
        jnz     L_16b0d
    L_16ae9:
        mov     ebx, dword ptr [esi+0x10]
        push    ebx
        push    0
        mov     ecx, edi
        call    FUN_00416970
        push    edi
        push    0
        mov     ecx, esi
        mov     dword ptr [ebx+0x10], edi
        mov     dword ptr [esi+0x10], edi
        call    FUN_00415be0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_16b0d:
        mov     ebp, dword ptr [esi+0xc]
        cmp     ebx, ebp
        jnz     L_16b35
        push    0
        push    ebp
        mov     ecx, edi
        call    FUN_00416970
        push    edi
        push    0
        mov     ecx, esi
        mov     dword ptr [ebp+0x14], edi
        mov     dword ptr [esi+0xc], edi
        call    FUN_00415be0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_16b35:
        mov     eax, dword ptr [ebx+0x14]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00416970
        mov     ecx, dword ptr [ebx+0x14]
        push    edi
        mov     dword ptr [ecx+0x10], edi
        push    0
        mov     ecx, esi
        mov     dword ptr [ebx+0x14], edi
        call    FUN_00415be0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
