/*
 * FUN_00410d30 (391 B) — Binary tree node insertion + rebalance (string-keyed).
 *   __thiscall (ECX = this = tree root holder). Inserts a new node keyed by
 *   a string into an ordered binary tree, then walks the tree rebalancing
 *   (red/black-style) using the FUN_00410a60 / FUN_00410ab0 splice helpers.
 *
 *   RET 0x10 (4 stack args).
 *
 *   Callees:
 *     FUN_004084d0 (__cdecl allocator, 1 arg)
 *     FUN_004118a0 (__cdecl, 1 arg)
 *     FUN_00410a60 (__cdecl, 2 args)
 *     FUN_00410ab0 (__cdecl, 2 args)
 *
 * CFLAGS: /O1
 * Match: 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004118a0(void);
extern void __cdecl FUN_00410a60(void);
extern void __cdecl FUN_00410ab0(void);

__declspec(naked) void __stdcall FUN_00410d30(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx]
        cmp     ebp, edi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_410da9
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_410da9
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebx]
L_410d54:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_410d78
        test    cl, cl
        jz      L_410d74
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_410d78
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_410d54
L_410d74:
        xor     eax, eax
        jmp     L_410d7d
L_410d78:
        sbb     eax, eax
        sbb     eax, -0x1
L_410d7d:
        test    eax, eax
        jl      L_410da9
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_410d9a
        push    ebx
        call    FUN_004118a0
L_410d9a:
        cmp     ebp, dword ptr [edi + 0xc]
        mov     ebx, esi
        mov     dword ptr [ebp + 0xc], esi
        jnz     L_410ddb
        mov     dword ptr [edi + 0xc], esi
        jmp     L_410ddb
L_410da9:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_410dc2
        push    ebx
        call    FUN_004118a0
L_410dc2:
        cmp     ebp, edi
        mov     ebx, esi
        mov     dword ptr [ebp + 0x8], esi
        jnz     L_410dd3
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0xc], esi
        jmp     L_410ddb
L_410dd3:
        cmp     ebp, dword ptr [edi + 0x8]
        jnz     L_410ddb
        mov     dword ptr [edi + 0x8], esi
L_410ddb:
        mov     eax, dword ptr [edi + 0x4]
        add     edi, 0x4
        mov     dword ptr [ebx + 0x4], ebp
        xor     ebp, ebp
        cmp     ebx, eax
        mov     dword ptr [ebx + 0x8], ebp
        mov     dword ptr [ebx + 0xc], ebp
        mov     esi, ebx
        mov     byte ptr [ebx], 0x0
        jz      L_410e99
L_410df9:
        mov     eax, dword ptr [esi + 0x4]
        cmp     byte ptr [eax], 0x0
        jnz     L_410e99
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx + 0x8]
        cmp     eax, ecx
        jnz     L_410e51
        mov     ecx, dword ptr [edx + 0xc]
        cmp     ecx, ebp
        jz      L_410e2b
        cmp     byte ptr [ecx], 0x0
        jnz     L_410e2b
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_410e91
L_410e2b:
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_410e3c
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 0x8
L_410e3c:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410ab0
        jmp     L_410e8e
L_410e51:
        cmp     ecx, ebp
        jz      L_410e6a
        cmp     byte ptr [ecx], 0x0
        jnz     L_410e6a
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_410e91
L_410e6a:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_410e7b
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 0x8
L_410e7b:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410a60
L_410e8e:
        add     esp, 0x8
L_410e91:
        cmp     esi, dword ptr [edi]
        jnz     L_410df9
L_410e99:
        mov     eax, dword ptr [edi]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0x4]
        pop     edi
        inc     ecx
        pop     esi
        mov     dword ptr [eax + 0x4], ecx
        mov     eax, dword ptr [esp + 0x10]
        pop     ebp
        mov     dword ptr [eax], ebx
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
