/*
 * FUN_00410b00 (549 B) — Binary search tree node insertion (string-keyed).
 *   __thiscall (ECX = this = tree root holder). Inserts a new node keyed by
 *   a string into an ordered binary tree, rebalancing the root links.
 *
 *   param_1 (ESP+0x24) = pointer to key string (byte**)
 *   param_2 (ESP+0x20) = output pointer (int**)
 *
 *   Node layout (offsets used):
 *     +0x00  left child
 *     +0x04  right child
 *     +0x08  parent (or list link)
 *     +0x0c  parent (or list link)
 *     +0x10  key string pointer
 *
 *   Callees:
 *     FUN_004084d0 (__cdecl allocator, 1 arg)
 *     FUN_00411800 (__cdecl, 2 args)
 *     FUN_004114b0 (__cdecl, 1 arg)
 *     FUN_00411500 (__thiscall/__stdcall, 1 arg)
 *     FUN_00411670 (__cdecl, 2 args)
 *     FUN_004115d0 (__thiscall/__stdcall, 1 arg)
 *
 * CFLAGS: /O1
 * Match: 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00411800(void);
extern void __cdecl FUN_004114b0(void);
extern void __stdcall FUN_00411500(void);
extern void __cdecl FUN_00411670(void);
extern void __stdcall FUN_004115d0(void);

__declspec(naked) void __stdcall FUN_00410b00(void)
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
        jz      L_410b69
L_410b18:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x10], ecx
L_410b22:
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, ebp
L_410b2b:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_410b4f
        test    cl, cl
        jz      L_410b4b
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_410b4f
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_410b2b
L_410b4b:
        xor     eax, eax
        jmp     L_410b54
L_410b4f:
        sbb     eax, eax
        sbb     eax, -0x1
L_410b54:
        test    eax, eax
        setl    al
        test    al, al
        jz      L_410b62
        mov     ebp, dword ptr [ebp + 0x8]
        jmp     L_410b65
L_410b62:
        mov     ebp, dword ptr [ebp + 0xc]
L_410b65:
        test    ebp, ebp
        jnz     L_410b22
L_410b69:
        test    al, al
        mov     dword ptr [esp + 0x10], edi
        jz      L_410c07
        mov     eax, dword ptr [ebx]
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_410bfa
        cmp     edi, eax
        jz      L_410bbe
        test    ebp, ebp
        jnz     L_410bbe
        mov     eax, dword ptr [esp + 0x24]
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax]
L_410b8d:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_410bb1
        test    cl, cl
        jz      L_410bad
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_410bb1
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_410b8d
L_410bad:
        xor     eax, eax
        jmp     L_410bb6
L_410bb1:
        sbb     eax, eax
        sbb     eax, -0x1
L_410bb6:
        test    eax, eax
        jge     L_410c85
L_410bbe:
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x28]
        mov     esi, eax
        push    ecx
        lea     edx, [esi + 0x10]
        push    edx
        call    FUN_00411800
        mov     eax, dword ptr [ebx]
        add     esp, 0xc
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_410bec
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_410cc9
L_410bec:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_410cc9
        jmp     L_410cc6
L_410bfa:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004114b0
        add     esp, 0x4
L_410c07:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x10]
        mov     esi, edx
L_410c16:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_410c3a
        test    cl, cl
        jz      L_410c36
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_410c3a
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_410c16
L_410c36:
        xor     eax, eax
        jmp     L_410c3f
L_410c3a:
        sbb     eax, eax
        sbb     eax, -0x1
L_410c3f:
        test    eax, eax
        jge     L_410cfc
        mov     ebx, dword ptr [esp + 0x14]
        cmp     edi, dword ptr [ebx]
        jz      L_410ca2
        test    ebp, ebp
        jnz     L_410ca2
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, edx
L_410c58:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_410c7c
        test    cl, cl
        jz      L_410c78
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_410c7c
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_410c58
L_410c78:
        xor     eax, eax
        jmp     L_410c81
L_410c7c:
        sbb     eax, eax
        sbb     eax, -0x1
L_410c81:
        test    eax, eax
        jl      L_410ca2
L_410c85:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, ebx
        call    FUN_00411500
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [edi + 0xc], esi
        cmp     edi, dword ptr [eax + 0xc]
        jnz     L_410cc9
        mov     dword ptr [eax + 0xc], esi
        jmp     L_410cc9
L_410ca2:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    FUN_00411500
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_410cc1
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_410cc9
L_410cc1:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_410cc9
L_410cc6:
        mov     dword ptr [eax + 0x8], esi
L_410cc9:
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
L_410cfc:
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_004115d0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
