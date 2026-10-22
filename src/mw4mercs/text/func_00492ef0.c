/*
 * FUN_00492ef0 (549 B) — __thiscall binary-tree node insertion with
 * rebalancing (MLR material registry). Walks the tree, allocates a node,
 * links it in, and returns the new node through the out-param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_00493120(void);
extern void __cdecl FUN_00493180(void);
extern void __cdecl FUN_004931a0(void);

__declspec(naked) void FUN_00492ef0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebx]
        mov     ebp, dword ptr [edi + 0x4]
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], ebx
        mov     al, 0x1
        jz      L_492f59
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x10], ecx
    L_492f12:
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, ebp
    L_492f1b:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_492f3f
        test    cl, cl
        jz      L_492f3b
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_492f3f
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492f1b
    L_492f3b:
        xor     eax, eax
        jmp     L_492f44
    L_492f3f:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492f44:
        test    eax, eax
        setl    al
        test    al, al
        jz      L_492f52
        mov     ebp, dword ptr [ebp + 0x8]
        jmp     L_492f55
    L_492f52:
        mov     ebp, dword ptr [ebp + 0xc]
    L_492f55:
        test    ebp, ebp
        jnz     L_492f12
    L_492f59:
        test    al, al
        mov     dword ptr [esp + 0x10], edi
        jz      L_492ff7
        mov     eax, dword ptr [ebx]
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_492fea
        cmp     edi, eax
        jz      L_492fae
        test    ebp, ebp
        jnz     L_492fae
        mov     eax, dword ptr [esp + 0x24]
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax]
    L_492f7d:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_492fa1
        test    cl, cl
        jz      L_492f9d
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_492fa1
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492f7d
    L_492f9d:
        xor     eax, eax
        jmp     L_492fa6
    L_492fa1:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492fa6:
        test    eax, eax
        jge     L_493075
    L_492fae:
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x28]
        mov     esi, eax
        push    ecx
        lea     edx, [esi + 0x10]
        push    edx
        call    FUN_004931a0
        mov     eax, dword ptr [ebx]
        add     esp, 0xc
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_492fdc
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_4930b9
    L_492fdc:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_4930b9
        jmp     L_4930b6
    L_492fea:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004114b0
        add     esp, 0x4
    L_492ff7:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x10]
        mov     esi, edx
    L_493006:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_49302a
        test    cl, cl
        jz      L_493026
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_49302a
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_493006
    L_493026:
        xor     eax, eax
        jmp     L_49302f
    L_49302a:
        sbb     eax, eax
        sbb     eax, -0x1
    L_49302f:
        test    eax, eax
        jge     L_4930ec
        mov     ebx, dword ptr [esp + 0x14]
        cmp     edi, dword ptr [ebx]
        jz      L_493092
        test    ebp, ebp
        jnz     L_493092
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, edx
    L_493048:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_49306c
        test    cl, cl
        jz      L_493068
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_49306c
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_493048
    L_493068:
        xor     eax, eax
        jmp     L_493071
    L_49306c:
        sbb     eax, eax
        sbb     eax, -0x1
    L_493071:
        test    eax, eax
        jl      L_493092
    L_493075:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, ebx
        call    FUN_00493120
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [edi + 0xc], esi
        cmp     edi, dword ptr [eax + 0xc]
        jnz     L_4930b9
        mov     dword ptr [eax + 0xc], esi
        jmp     L_4930b9
    L_493092:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    FUN_00493120
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_4930b1
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_4930b9
    L_4930b1:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_4930b9
    L_4930b6:
        mov     dword ptr [eax + 0x8], esi
    L_4930b9:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    esi
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8
    L_4930ec:
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_00493180
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
