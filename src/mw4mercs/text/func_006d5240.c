/*
 * FUN_006d5240 (818 B) - __thiscall cleanup + shell-sort. Frees per-tile
 * record buffers (offsets 0x124/0x11c), rebuilds the tile->record index,
 * and shell-sorts each tile's record list by key at +0x18. Calls
 * FUN_006d57e0 at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);   /* free */
extern void __cdecl FUN_004084d0(void);   /* alloc */
extern void __cdecl FUN_006d57e0(void);

__declspec(naked) void FUN_006d5240(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x8]
        test    eax, eax
        mov     dword ptr [esp + 0x14], edi
        jle     L_52b4
        mov     ebp, dword ptr [edi + 0xc]
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x20], eax
    L_5263:
        test    ebp, ebp
        jle     L_5298
        mov     esi, dword ptr [edi + 0x124]
        add     esi, dword ptr [esp + 0x10]
        mov     ebx, ebp
    L_5273:
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      L_5292
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi + 0x4], 0x0
    L_5292:
        add     esi, 0x8
        dec     ebx
        jnz     L_5273
    L_5298:
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [ebp*8 + 0x0]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x20]
        dec     eax
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x20], eax
        jnz     L_5263
    L_52b4:
        mov     eax, dword ptr [edi + 0x118]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jle     L_5445
    L_52ca:
        mov     ecx, dword ptr [edi + 0x11c]
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ecx + edx*4]
        mov     ebp, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [edi + 0x4]
        mov     eax, ebp
        sar     eax, cl
        xor     edx, edx
        test    eax, eax
        setl    dl
        dec     edx
        and     edx, eax
        mov     eax, dword ptr [esi + 0x4]
        mov     ebx, dword ptr [eax + 0x8]
        add     ebx, ebp
        sar     ebx, cl
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x24], edx
        inc     ebx
        cmp     ebx, eax
        mov     dword ptr [esp + 0x1c], ebx
        jle     L_530f
        mov     dword ptr [esp + 0x1c], eax
        mov     ebx, eax
    L_530f:
        mov     esi, dword ptr [esi + 0x8]
        xor     edx, edx
        mov     eax, esi
        sar     eax, cl
        test    eax, eax
        setl    dl
        dec     edx
        and     edx, eax
        mov     eax, dword ptr [esp + 0x28]
        mov     ebp, edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edi + 0xc]
        add     edx, esi
        sar     edx, cl
        mov     dword ptr [esp + 0x2c], ebp
        inc     edx
        cmp     edx, eax
        mov     dword ptr [esp + 0x18], edx
        jle     L_5343
        mov     dword ptr [esp + 0x18], eax
        mov     edx, eax
    L_5343:
        mov     ecx, dword ptr [esp + 0x24]
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x28], ecx
        jge     L_542e
    L_5353:
        cmp     ebp, edx
        mov     dword ptr [esp + 0x24], ebp
        jge     L_5421
    L_535f:
        mov     esi, dword ptr [edi + 0x124]
        mov     eax, ecx
        imul    eax, dword ptr [edi + 0xc]
        add     eax, ebp
        lea     esi, [esi + eax*8]
        mov     eax, dword ptr [esi + 0x4]
        lea     edi, [eax + 0x1]
        mov     ebx, eax
        cmp     edi, ebx
        mov     dword ptr [esp + 0x20], eax
        jz      L_53f2
        test    edi, edi
        jbe     L_53d2
        lea     ecx, [edi*4 + 0x0]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        test    edx, edx
        mov     ebp, eax
        jz      L_53ca
        cmp     edi, ebx
        mov     ecx, edi
        jc      L_53a4
        mov     ecx, ebx
    L_53a4:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_53bf
        lea     eax, [ebp + ecx*4]
        sub     edx, ebp
        inc     ecx
    L_53b2:
        mov     ebx, dword ptr [edx + eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_53b2
    L_53bf:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_53ca:
        mov     dword ptr [esi], ebp
        mov     ebp, dword ptr [esp + 0x24]
        jmp     L_53e3
    L_53d2:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
    L_53e3:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x4], edi
    L_53f2:
        mov     edi, dword ptr [esp + 0x14]
        mov     edi, dword ptr [edi + 0x11c]
        mov     ebx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [edi + ebx*4]
        mov     esi, dword ptr [esi]
        inc     ebp
        cmp     ebp, edx
        mov     dword ptr [esi + eax*4], edi
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x24], ebp
        jl      L_535f
        mov     ebp, dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x1c]
    L_5421:
        inc     ecx
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x28], ecx
        jl      L_5353
    L_542e:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edi + 0x118]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_52ca
    L_5445:
        mov     eax, dword ptr [edi + 0x8]
        test    eax, eax
        jle     L_5563
        mov     ecx, dword ptr [edi + 0xc]
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x1c], 0x0
        mov     dword ptr [esp + 0x10], eax
    L_5463:
        test    ecx, ecx
        jle     L_5543
    L_546b:
        mov     ebx, dword ptr [edi + 0x124]
        add     ebx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x18], ecx
    L_547d:
        mov     ebp, dword ptr [ebx + 0x4]
        mov     eax, 0x38e38e39
        imul    ebp
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        mov     esi, 0x1
        add     edx, eax
        cmp     edx, esi
        mov     dword ptr [esp + 0x20], ebp
        jle     L_54ad
    L_549d:
        lea     esi, [esi + esi*2 + 0x1]
        cmp     esi, edx
        jl      L_549d
        test    esi, esi
        jle     L_552d
    L_54ad:
        cmp     esi, ebp
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], ecx
        jge     L_5515
        mov     edx, dword ptr [ebx]
    L_54b9:
        cmp     ecx, esi
        mov     edi, dword ptr [edx + ecx*4]
        lea     eax, [ecx*4 + 0x0]
        mov     dword ptr [esp + 0x2c], edi
        mov     ebx, ecx
        jl      L_5501
    L_54cd:
        mov     ebp, dword ptr [edi + 0x18]
        lea     edi, [esi*4 + 0x0]
    L_54d7:
        mov     ecx, eax
        sub     ecx, edi
        mov     ecx, dword ptr [ecx + edx*1]
        cmp     dword ptr [ecx + 0x18], ebp
        jle     L_54f5
        mov     ecx, eax
        sub     ecx, edi
        mov     ecx, dword ptr [ecx + edx*1]
        mov     dword ptr [eax + edx*1], ecx
        sub     ebx, esi
        sub     eax, edi
        cmp     ebx, esi
        jge     L_54d7
    L_54f5:
        mov     edi, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x20]
    L_5501:
        inc     ecx
        cmp     ecx, ebp
        mov     dword ptr [edx + ebx*4], edi
        mov     dword ptr [esp + 0x28], ecx
        jl      L_54b9
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x24]
    L_5515:
        mov     eax, 0x55555556
        imul    esi
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     esi, edx
        test    esi, esi
        jg      L_54ad
        mov     ecx, dword ptr [esp + 0x30]
    L_552d:
        mov     eax, dword ptr [esp + 0x18]
        add     ebx, 0x8
        dec     eax
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x18], eax
        jnz     L_547d
    L_5543:
        mov     edx, dword ptr [esp + 0x1c]
        lea     eax, [ecx*8 + 0x0]
        add     edx, eax
        mov     eax, dword ptr [esp + 0x10]
        dec     eax
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x10], eax
        jnz     L_5463
    L_5563:
        mov     ecx, edi
        call    FUN_006d57e0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret
    }
}
