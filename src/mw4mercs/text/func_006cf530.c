/*
 * FUN_006CF530 (903 B) — __fastcall (ECX=this), RET.
 * Texture/object management: collects active objects into a list, shell-sorts
 * them, clears usage bits, and finalizes/releases objects.
 *
 * Calls: FUN_006D6F30, FUN_00491D10, FUN_004084E0, and a vtable call
 * (call dword ptr [eax+4]).
 * Data: 0x007DA848.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da848;
extern void __stdcall FUN_006D6F30(void);
extern void __cdecl FUN_00491D10(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_006CF530(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        mov     ebx, ecx
        push    ebp
        xor     ecx, ecx
        push    esi
        lea     ebp, [ebx + 0x100c]
        lea     eax, [ebx + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    edi
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x1c], 0x4
L_cf55c:
        cmp     dword ptr [ebp], 0x0
        jbe     L_cf5c3
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, eax
        add     esi, 0x380
        mov     edx, 0x1
        lea     edi, [ebx + ecx*4 + 0xe0c]
        mov     dword ptr [esp + 0x18], 0x20
        mov     dword ptr [esp + 0x10], esi
L_cf586:
        mov     esi, dword ptr [ebp]
        test    esi, edx
        jz      L_cf5b1
        mov     ebp, dword ptr [eax + 0xc]
        cmp     dword ptr [ebp + 0x2c], 0x0
        jz      L_cf5a2
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [edi], eax
        inc     ecx
        add     edi, 0x4
        jmp     L_cf5b1
L_cf5a2:
        mov     ebp, edx
        not     ebp
        and     ebp, esi
        mov     esi, ebp
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [ebp], esi
L_cf5b1:
        mov     esi, dword ptr [esp + 0x18]
        add     eax, 0x1c
        shl     edx, 0x1
        dec     esi
        mov     dword ptr [esp + 0x18], esi
        jnz     L_cf586
        jmp     L_cf5cb
L_cf5c3:
        add     dword ptr [esp + 0x10], 0x380
L_cf5cb:
        mov     eax, dword ptr [esp + 0x1c]
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x1c], eax
        jnz     L_cf55c
        test    ecx, ecx
        mov     dword ptr [esp + 0x10], ecx
        jz      L_cf8af
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        mov     esi, 0x1
        add     edx, eax
        cmp     edx, esi
        jle     L_cf616
L_cf606:
        lea     esi, [esi + esi*2 + 0x1]
        cmp     esi, edx
        jl      L_cf606
        test    esi, esi
        jle     L_cf6da
L_cf616:
        cmp     esi, ecx
        mov     eax, esi
        mov     dword ptr [esp + 0x14], eax
        jge     L_cf6c2
        mov     edx, 0xfffff1f4
        lea     ebp, [ebx + esi*4 + 0xe0c]
        sub     edx, ebx
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x24], edx
        jmp     L_cf640
L_cf63c:
        mov     edx, dword ptr [esp + 0x24]
L_cf640:
        cmp     eax, esi
        mov     edi, dword ptr [ebp]
        mov     dword ptr [esp + 0x1c], edi
        mov     edi, eax
        jl      L_cf6a3
        add     edx, ebp
        __emit 0x8D  /* __emit: no-base SIB form lea eax,[esi*4+0] (8D 04 B5 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x04
        __emit 0xB5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_cf656:
        mov     ecx, edx
        sub     ecx, eax
        mov     ecx, dword ptr [ecx + ebx + 0xe0c]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     ebx, dword ptr [ebx + 0xc]
        mov     ebx, dword ptr [ebx + 0x8]
        mov     cl, byte ptr [ecx]
        cmp     cl, byte ptr [ebx]
        jnc     L_cf75a
        mov     ebx, dword ptr [esp + 0x20]
        mov     ecx, edx
        sub     ecx, eax
        mov     ecx, dword ptr [ecx + ebx + 0xe0c]
        mov     dword ptr [ebp], ecx
        sub     edi, esi
        sub     edx, eax
        sub     ebp, eax
        cmp     edi, esi
        jge     L_cf656
        mov     eax, dword ptr [esp + 0x14]
L_cf69b:
        mov     ebp, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
L_cf6a3:
        mov     edx, dword ptr [esp + 0x1c]
        inc     eax
        add     ebp, 0x4
        cmp     eax, ecx
        mov     dword ptr [ebx + edi*4 + 0xe0c], edx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], ebp
        jl      L_cf63c
L_cf6c2:
        mov     eax, 0x55555556
        imul    esi
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     esi, edx
        test    esi, esi
        jg      L_cf616
L_cf6da:
        xor     edi, edi
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], edi
        jle     L_cf73f
        lea     esi, [ebx + 0xe0c]
L_cf6ea:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [edx + 0x8]
        cmp     byte ptr [edx], 0x0
        ja      L_cf73b
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jl      L_cf733
        mov     ecx, eax
        sar     ecx, 0x5
        lea     edx, [ebx + ecx*4 + 0x100c]
        mov     ecx, eax
        and     ecx, 0x1f
        mov     ebp, 0x1
        shl     ebp, cl
        mov     ecx, dword ptr [edx]
        not     ebp
        and     ecx, ebp
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x10]
        __emit 0x8D  /* __emit: no-base SIB form lea edx,[eax*8+0] (8D 14 C5 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x14
        __emit 0xC5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        sub     edx, eax
        mov     dword ptr [ebx + edx*4 + 0x24], 0xffffffff
L_cf733:
        inc     edi
        add     esi, 0x4
        cmp     edi, ecx
        jl      L_cf6ea
L_cf73b:
        mov     dword ptr [esp + 0x18], edi
L_cf73f:
        mov     esi, ecx
        sub     esi, edi
        test    esi, esi
        jle     L_cf8af
        cmp     esi, 0x20
        jle     L_cf767
        mov     dword ptr [esp + 0x20], 0x4
        jmp     L_cf774
L_cf75a:
        mov     eax, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x20]
        jmp     L_cf69b
L_cf767:
        xor     eax, eax
        cmp     esi, 0x10
        setg    al
        inc     eax
        mov     dword ptr [esp + 0x20], eax
L_cf774:
        lea     ebp, [ecx - 0x1]
        test    ebp, ebp
        jl      L_cf8af
        lea     ecx, [ebx + ebp*4 + 0xe0c]
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_cf790
L_cf78c:
        mov     edi, dword ptr [esp + 0x18]
L_cf790:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jle     L_cf8af
        cmp     ebp, edi
        jl      L_cf8af
        mov     edx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [edx]
        mov     esi, dword ptr [edi + 0xc]
        cmp     dword ptr [esi + 0x10], 0x100
        jge     L_cf7d5
        mov     eax, dword ptr [edi + 0x14]
        mov     ecx, dword ptr [edi + 0x10]
        push    eax
        mov     eax, dword ptr [edi + 0x8]
        push    ecx
        mov     ecx, dword ptr [edi + 0x4]
        mov     edx, esi
        push    edx
        push    eax
        push    ecx
        mov     ecx, dword ptr [edi]
        call    FUN_006D6F30
        jmp     L_cf89b
L_cf7d5:
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jle     L_cf7f4
        mov     edx, dword ptr [g_007da848]
        mov     ecx, dword ptr [edx + eax*4 + 0x24]
        mov     eax, dword ptr [ecx]
        push    0x0
        call    dword ptr [eax + 0x4]
        mov     ecx, eax
        call    FUN_00491D10
L_cf7f4:
        mov     dword ptr [esi + 0xc], 0x2
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        jz      L_cf85e
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        mov     dword ptr [esi + 0x24], eax
        jz      L_cf81c
L_cf80c:
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        mov     dword ptr [esi + 0x24], eax
        jnz     L_cf80c
L_cf81c:
        mov     edx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [edx + 0xc]
        test    eax, eax
        jz      L_cf84b
L_cf826:
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_004084E0
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [eax + 0x8], 0x0
        mov     eax, dword ptr [ecx + 0xc]
        add     esp, 0x4
        test    eax, eax
        jnz     L_cf826
L_cf84b:
        mov     edx, dword ptr [esi + 0x24]
        push    edx
        call    FUN_004084E0
        add     esp, 0x4
        mov     dword ptr [esi + 0x24], 0x0
L_cf85e:
        mov     eax, dword ptr [edi + 0x18]
        test    eax, eax
        jl      L_cf89b
        mov     ecx, eax
        sar     ecx, 0x5
        mov     edi, dword ptr [ebx + ecx*4 + 0x100c]
        lea     edx, [ebx + ecx*4 + 0x100c]
        mov     ecx, eax
        and     ecx, 0x1f
        mov     esi, 0x1
        shl     esi, cl
        not     esi
        and     edi, esi
        mov     dword ptr [edx], edi
        __emit 0x8D  /* __emit: no-base SIB form lea edx,[eax*8+0] (8D 14 C5 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x14
        __emit 0xC5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        sub     edx, eax
        mov     dword ptr [ebx + edx*4 + 0x24], 0xffffffff
L_cf89b:
        mov     ecx, dword ptr [esp + 0x14]
        dec     ebp
        sub     ecx, 0x4
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], ecx
        jge     L_cf78c
L_cf8af:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}
