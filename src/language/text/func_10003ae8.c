/*
 * FUN_10003ae8 (520 B, __cdecl) — allocate a block of `param_1` bytes from
 * the string-table arena allocator. Walks the arena free-list, splits/fills
 * blocks, and grows the arena via VirtualAlloc when needed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008360;                 /* PTR_LOOP_10008360 */
extern void *g_10005098;               /* VirtualAlloc IAT */
extern int __cdecl FUN_10003cf0(void);
extern void __cdecl FUN_10003fc0(void);
extern int __cdecl FUN_100037f0(void);

__declspec(naked) int FUN_10003ae8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [g_10008360]
        push    edi
L_3af6:
        mov     edx, dword ptr [esi + 0x10]
        cmp     edx, -1
        jz      L_3ba1
        mov     edi, dword ptr [esi + 8]
        lea     ecx, [esi + 0x2018]
        mov     eax, edi
        sub     eax, esi
        sub     eax, 0x18
        sar     eax, 3
        shl     eax, 0xc
        add     eax, edx
        cmp     edi, ecx
        mov     dword ptr [ebp - 4], eax
        jnc     L_3b5b
L_3b21:
        mov     ecx, dword ptr [edi]
        mov     ebx, dword ptr [ebp + 8]
        cmp     ecx, ebx
        jl      L_3b44
        cmp     dword ptr [edi + 4], ebx
        jbe     L_3b44
        push    ebx
        push    ecx
        push    eax
        call    FUN_10003cf0
        add     esp, 0xc
        test    eax, eax
        jnz     L_3bb3
        mov     eax, dword ptr [ebp - 4]
        mov     dword ptr [edi + 4], ebx
L_3b44:
        add     edi, 8
        lea     ecx, [esi + 0x2018]
        add     eax, 0x1000
        cmp     edi, ecx
        mov     dword ptr [ebp - 4], eax
        jc      L_3b21
        jmp     L_3b5e
L_3b5b:
        mov     ebx, dword ptr [ebp + 8]
L_3b5e:
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esi + 0x10]
        lea     edi, [esi + 0x18]
        mov     dword ptr [ebp - 8], eax
        cmp     edi, eax
        mov     dword ptr [ebp - 4], ecx
        jnc     L_3ba4
L_3b71:
        mov     eax, dword ptr [edi]
        cmp     eax, ebx
        jl      L_3b90
        cmp     dword ptr [edi + 4], ebx
        jbe     L_3b90
        push    ebx
        push    eax
        push    dword ptr [ebp - 4]
        call    FUN_10003cf0
        add     esp, 0xc
        test    eax, eax
        jnz     L_3bb3
        mov     dword ptr [edi + 4], ebx
L_3b90:
        add     dword ptr [ebp - 4], 0x1000
        add     edi, 8
        cmp     edi, dword ptr [ebp - 8]
        jc      L_3b71
        jmp     L_3ba4
L_3ba1:
        mov     ebx, dword ptr [ebp + 8]
L_3ba4:
        mov     esi, dword ptr [esi]
        cmp     esi, dword ptr [g_10008360]
        jz      L_3bc3
        jmp     L_3af6
L_3bb3:
        mov     dword ptr [g_10008360], esi
        sub     dword ptr [edi], ebx
        mov     dword ptr [esi + 8], edi
        jmp     L_3ceb
L_3bc3:
        mov     eax, 0x10006340
        mov     edi, eax
L_3bca:
        cmp     dword ptr [edi + 0x10], -1
        jz      L_3bd6
        cmp     dword ptr [edi + 0xc], 0
        jnz     L_3be2
L_3bd6:
        mov     edi, dword ptr [edi]
        cmp     edi, eax
        jz      L_3cb7
        jmp     L_3bca
L_3be2:
        mov     ebx, dword ptr [edi + 0xc]
        and     dword ptr [ebp - 4], 0
        mov     esi, ebx
        mov     eax, ebx
        sub     esi, edi
        sub     esi, 0x18
        sar     esi, 3
        shl     esi, 0xc
        add     esi, dword ptr [edi + 0x10]
        cmp     dword ptr [ebx], -1
        jnz     L_3c11
L_3c00:
        cmp     dword ptr [ebp - 4], 0x10
        jge     L_3c11
        add     eax, 8
        inc     dword ptr [ebp - 4]
        cmp     dword ptr [eax], -1
        jz      L_3c00
L_3c11:
        mov     eax, dword ptr [ebp - 4]
        push    4
        shl     eax, 0xc
        push    0x1000
        push    eax
        push    esi
        mov     dword ptr [ebp - 8], eax
        call    dword ptr [g_10005098]
        cmp     eax, esi
        jnz     L_3ce9
        push    0
        push    dword ptr [ebp - 8]
        push    esi
        call    FUN_10003fc0
        mov     edx, dword ptr [ebp - 4]
        add     esp, 0xc
        test    edx, edx
        mov     ecx, ebx
        jle     L_3c78
        lea     eax, [esi + 4]
        mov     dword ptr [ebp - 4], edx
L_3c4e:
        or      byte ptr [eax + 0xf4], 0xff
        lea     edx, [eax + 4]
        mov     dword ptr [eax - 4], edx
        mov     edx, 0xf0
        mov     dword ptr [eax], edx
        mov     dword ptr [ecx], edx
        mov     dword ptr [ecx + 4], 0xf1
        add     eax, 0x1000
        add     ecx, 8
        dec     dword ptr [ebp - 4]
        jnz     L_3c4e
L_3c78:
        mov     dword ptr [g_10008360], edi
        lea     eax, [edi + 0x2018]
        cmp     ecx, eax
        jnc     L_3c94
L_3c84:
        cmp     dword ptr [ecx], -1
        jz      L_3c92
        add     ecx, 8
        __emit 0xEB  /* __emit: backward jmp L_3c84; MSVC6 miscomputes rel8 (EB F6 vs ref EB F2) */
        __emit 0xF2
L_3c92:
        cmp     ecx, eax
L_3c94:
        sbb     eax, eax
        and     eax, ecx
        mov     dword ptr [edi + 0xc], eax
        mov     eax, dword ptr [ebp + 8]
        mov     byte ptr [esi + 8], al
        mov     dword ptr [edi + 8], ebx
        sub     dword ptr [ebx], eax
        sub     dword ptr [esi + 4], eax
        lea     ecx, [esi + eax + 8]
        lea     eax, [esi + 0x100]
        mov     dword ptr [esi], ecx
        jmp     L_3ceb
L_3cb7:
        call    FUN_100037f0
        test    eax, eax
        jz      L_3ce9
        mov     ecx, dword ptr [eax + 0x10]
        mov     byte ptr [ecx + 8], bl
        lea     edx, [ecx + ebx + 8]
        mov     dword ptr [g_10008360], eax
        mov     dword ptr [ecx], edx
        mov     edx, 0xf0
        sub     edx, ebx
        mov     dword ptr [ecx + 4], edx
        movzx   edx, bl
        sub     dword ptr [eax + 0x18], edx
        lea     eax, [ecx + 0x100]
        jmp     L_3ceb
L_3ce9:
        xor     eax, eax
L_3ceb:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
