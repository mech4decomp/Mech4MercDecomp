/*
 * FUN_00492d60 (391 B) — __thiscall red-black tree node insertion with
 * rebalancing (MLR material registry). Allocates a node, links it into
 * the tree, and performs the RB fix-up rotations.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00410a60(void);
extern void __cdecl FUN_00410ab0(void);
extern void __cdecl FUN_004931c0(void);

__declspec(naked) void FUN_00492d60(void)
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
        jz      L_492dd9
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_492dd9
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebx]
    L_492d84:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_492da8
        test    cl, cl
        jz      L_492da4
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_492da8
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492d84
    L_492da4:
        xor     eax, eax
        jmp     L_492dad
    L_492da8:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492dad:
        test    eax, eax
        jl      L_492dd9
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_492dca
        push    ebx
        call    FUN_004931c0
    L_492dca:
        cmp     ebp, dword ptr [edi + 0xc]
        mov     ebx, esi
        mov     dword ptr [ebp + 0xc], esi
        jnz     L_492e0b
        mov     dword ptr [edi + 0xc], esi
        jmp     L_492e0b
    L_492dd9:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_492df2
        push    ebx
        call    FUN_004931c0
    L_492df2:
        cmp     ebp, edi
        mov     ebx, esi
        mov     dword ptr [ebp + 0x8], esi
        jnz     L_492e03
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0xc], esi
        jmp     L_492e0b
    L_492e03:
        cmp     ebp, dword ptr [edi + 0x8]
        jnz     L_492e0b
        mov     dword ptr [edi + 0x8], esi
    L_492e0b:
        mov     eax, dword ptr [edi + 0x4]
        add     edi, 0x4
        mov     dword ptr [ebx + 0x4], ebp
        xor     ebp, ebp
        cmp     ebx, eax
        mov     dword ptr [ebx + 0x8], ebp
        mov     dword ptr [ebx + 0xc], ebp
        mov     esi, ebx
        mov     byte ptr [ebx], 0x0
        jz      L_492ec9
    L_492e29:
        mov     eax, dword ptr [esi + 0x4]
        cmp     byte ptr [eax], 0x0
        jnz     L_492ec9
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx + 0x8]
        cmp     eax, ecx
        jnz     L_492e81
        mov     ecx, dword ptr [edx + 0xc]
        cmp     ecx, ebp
        jz      L_492e5b
        cmp     byte ptr [ecx], 0x0
        jnz     L_492e5b
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_492ec1
    L_492e5b:
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_492e6c
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 0x8
    L_492e6c:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410ab0
        jmp     L_492ebe
    L_492e81:
        cmp     ecx, ebp
        jz      L_492e9a
        cmp     byte ptr [ecx], 0x0
        jnz     L_492e9a
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_492ec1
    L_492e9a:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_492eab
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 0x8
    L_492eab:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410a60
    L_492ebe:
        add     esp, 0x8
    L_492ec1:
        cmp     esi, dword ptr [edi]
        jnz     L_492e29
    L_492ec9:
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
