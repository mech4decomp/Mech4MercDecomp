/*
 * FUN_0069A85C (365 B) — __thiscall (ECX = this, RET 0x10, 4 stack params).
 *
 * In-.text data block at 0x69A85C (4 NOP pad + body). Doubly-linked-list
 * node insertion: allocates a 0x28-byte node (FUN_004084d0), initializes
 * it, and splices it into a list anchored at *this, updating head/tail
 * links and a count at [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_0069a7d0(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_0069ada0(void);
extern void __cdecl FUN_00410a60(void);
extern void __cdecl FUN_00410ab0(void);

__declspec(naked) void __cdecl FUN_0069A85C(void)
{
    __asm {
        nop
        nop
        nop
        nop
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
        je      L8c0
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jne     L8c0
        mov     eax, dword ptr [edi + 0x14]
        mov     ecx, dword ptr [edi + 0x10]
        mov     edx, dword ptr [ebx + 4]
        push    eax
        mov     eax, dword ptr [ebx]
        push    ecx
        push    edx
        push    eax
        call    FUN_0069a7d0
        add     esp, 0x10
        test    eax, eax
        jl      L8c0
        push    0x28
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 4
        test    ecx, ecx
        je      L8b3
        push    ebx
        call    FUN_0069ada0
L8b3:
        cmp     edi, dword ptr [esi + 0xc]
        mov     dword ptr [edi + 0xc], ebp
        jne     L8f0
        mov     dword ptr [esi + 0xc], ebp
        jmp     L8f0
L8c0:
        push    0x28
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 4
        test    ecx, ecx
        je      L8d9
        push    ebx
        call    FUN_0069ada0
L8d9:
        cmp     edi, esi
        mov     dword ptr [edi + 8], ebp
        jne     L8e8
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [esi + 0xc], ebp
        jmp     L8f0
L8e8:
        cmp     edi, dword ptr [esi + 8]
        jne     L8f0
        mov     dword ptr [esi + 8], ebp
L8f0:
        xor     eax, eax
        mov     dword ptr [ebp + 4], edi
        lea     edi, [esi + 4]
        mov     dword ptr [ebp + 8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     byte ptr [ebp], al
        cmp     ebp, dword ptr [edi]
        mov     esi, ebp
        je      L9ab
L90b:
        mov     eax, dword ptr [esi + 4]
        cmp     byte ptr [eax], 0
        jne     L9ab
        mov     edx, dword ptr [eax + 4]
        mov     ecx, dword ptr [edx + 8]
        cmp     eax, ecx
        jne     L963
        mov     ecx, dword ptr [edx + 0xc]
        test    ecx, ecx
        je      L93d
        cmp     byte ptr [ecx], 0
        jne     L93d
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax + 4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L9a3
L93d:
        cmp     esi, dword ptr [eax + 0xc]
        jne     L94e
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 8
L94e:
        mov     eax, dword ptr [esi + 4]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax + 4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        call    FUN_00410ab0
        jmp     L9a0
L963:
        test    ecx, ecx
        je      L97c
        cmp     byte ptr [ecx], 0
        jne     L97c
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax + 4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L9a3
L97c:
        cmp     esi, dword ptr [eax + 8]
        jne     L98d
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 8
L98d:
        mov     eax, dword ptr [esi + 4]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax + 4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        call    FUN_00410a60
L9a0:
        add     esp, 8
L9a3:
        cmp     esi, dword ptr [edi]
        jne     L90b
L9ab:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esp + 0x10]
        mov     byte ptr [ecx], 1
        mov     ecx, dword ptr [eax + 4]
        inc     ecx
        pop     edi
        mov     dword ptr [eax + 4], ecx
        mov     eax, dword ptr [esp + 0x14]
        pop     esi
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
