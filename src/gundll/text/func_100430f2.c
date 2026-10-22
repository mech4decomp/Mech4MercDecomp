/*
 * FUN_100430f2 (1007 B) - __cdecl, RET.
 * Format-string dispatch switch (handles %-style conversion chars).
 *
 * CFLAGS: /O1
 */

extern int g_10075818;
extern int g_1007581c;
extern int g_10054ccc[];

extern void FUN_10043508(void);
extern void FUN_100435c0(void);
extern void FUN_100434e1(void);
extern void FUN_10044ea2(void);

__declspec(naked) void FUN_100430f2(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        movsx   eax, byte ptr [ebp + 0x8]
        push    ebx
        push    esi
        cmp     eax, 0x5a
        push    edi
        jg      L_100432d4
        jz      L_10043410
        cmp     eax, 0x4d
        jg      L_100431dc
        jz      L_100431c2
        sub     eax, 0x25
        jz      L_100431ae
        sub     eax, 0x1c
        jz      L_10043196
        dec     eax
        jz      L_1004317e
        sub     eax, 0x6
        jz      L_10043161
        dec     eax
        jnz     L_100434dc
        mov     eax, dword ptr [g_10075818]
        push    0xc
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        pop     ecx
        mov     eax, dword ptr [eax + 0x8]
        cdq
        idiv    ecx
        test    edx, edx
        jnz     L_10043153
        push    ecx
        pop     edx
    L_10043153:
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    0x2
    L_1004315b:
        push    edx
        jmp     L_1004322e
    L_10043161:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [g_10075818]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        push    0x2
        push    dword ptr [eax + 0x8]
        jmp     L_1004322e
    L_1004317e:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x10]
        push    dword ptr [ecx + eax*0x4 + 0x68]
        jmp     L_100434d4
    L_10043196:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x18]
        push    dword ptr [ecx + eax*0x4 + 0x1c]
        jmp     L_100434d4
    L_100431ae:
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [eax]
        mov     byte ptr [ecx], 0x25
        inc     dword ptr [eax]
        mov     eax, dword ptr [ebp + 0x14]
        dec     dword ptr [eax]
        jmp     L_100434dc
    L_100431c2:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [g_10075818]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        push    0x2
        push    dword ptr [eax + 0x4]
        jmp     L_1004322e
    L_100431dc:
        sub     eax, 0x53
        jz      L_100432b8
        dec     eax
        dec     eax
        jz      L_10043278
        dec     eax
        dec     eax
        jz      L_1004325a
        dec     eax
        jz      L_1004323b
        dec     eax
        jnz     L_100434dc
        mov     eax, dword ptr [g_10075818]
        push    dword ptr [ebp + 0x14]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [eax + 0x14]
        push    0x4
        mov     eax, ecx
        push    0x64
        cdq
        pop     esi
        idiv    esi
        push    0x64
        mov     esi, eax
        mov     eax, ecx
        cdq
        pop     ecx
        add     esi, 0x13
        idiv    ecx
        imul    esi, esi, 0x64
        add     esi, edx
        push    esi
    L_1004322e:
        call    FUN_10043508
        add     esp, 0x10
        jmp     L_100434dc
    L_1004323b:
        mov     eax, dword ptr [ebp + 0x18]
        and     dword ptr [g_10075818], 0
        push    eax
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [eax + 0xa8]
        jmp     L_10043478
    L_1004325a:
        mov     eax, dword ptr [g_10075818]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        jnz     L_10043273
        push    0x6
        pop     esi
        jmp     L_10043288
    L_10043273:
        lea     esi, [ecx + -0x1]
        jmp     L_10043288
    L_10043278:
        mov     eax, dword ptr [g_10075818]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [eax + 0x18]
    L_10043288:
        mov     ecx, dword ptr [eax + 0x1c]
        cmp     ecx, esi
        jge     L_10043293
        xor     edi, edi
        jmp     L_100432aa
    L_10043293:
        mov     eax, ecx
        push    0x7
        cdq
        pop     edi
        idiv    edi
        push    0x7
        mov     edi, eax
        mov     eax, ecx
        cdq
        pop     ecx
        idiv    ecx
        cmp     edx, esi
        jl      L_100432aa
        inc     edi
    L_100432aa:
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    0x2
        push    edi
        jmp     L_1004322e
    L_100432b8:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [g_10075818]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        push    0x2
        push    dword ptr [eax]
        jmp     L_1004322e
    L_100432d4:
        cmp     eax, 0x6d
        jg      L_100433f1
        jz      L_100433d4
        sub     eax, 0x61
        jz      L_100433bd
        dec     eax
        jz      L_100433a5
        dec     eax
        jz      L_1004333e
        dec     eax
        jz      L_10043321
        sub     eax, 0x6
        jnz     L_100434dc
        mov     eax, dword ptr [g_10075818]
        push    dword ptr [ebp + 0x14]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x1c]
        push    0x3
    L_1004331a:
        inc     eax
        push    eax
        jmp     L_1004322e
    L_10043321:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [g_10075818]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        push    0x2
        push    dword ptr [eax + 0xc]
        jmp     L_1004322e
    L_1004333e:
        cmp     dword ptr [g_10075818], 0
        jz      L_10043365
        mov     ebx, dword ptr [ebp + 0x18]
        mov     esi, dword ptr [ebp + 0x14]
        mov     edi, dword ptr [ebp + 0x10]
        and     dword ptr [g_10075818], 0
        push    ebx
        push    esi
        push    edi
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebx + 0xa4]
        jmp     L_1004337a
    L_10043365:
        mov     ebx, dword ptr [ebp + 0x18]
        mov     esi, dword ptr [ebp + 0x14]
        mov     edi, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        push    edi
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebx + 0xa0]
    L_1004337a:
        call    FUN_100435c0
        add     esp, 0x14
        cmp     dword ptr [esi], 0
        jz      L_100434dc
        mov     eax, dword ptr [edi]
        push    ebx
        push    esi
        push    edi
        push    dword ptr [ebp + 0xc]
        mov     byte ptr [eax], 0x20
        inc     dword ptr [edi]
        dec     dword ptr [esi]
        push    dword ptr [ebx + 0xa8]
        jmp     L_10043478
    L_100433a5:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x10]
        push    dword ptr [ecx + eax*0x4 + 0x38]
        jmp     L_100434d4
    L_100433bd:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x18]
        push    dword ptr [ecx + eax*0x4]
        jmp     L_100434d4
    L_100433d4:
        mov     eax, dword ptr [g_10075818]
        push    dword ptr [ebp + 0x14]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x10]
        push    0x2
        jmp     L_1004331a
    L_100433f1:
        sub     eax, 0x70
        jz      L_100434b4
        sub     eax, 0x7
        jz      L_10043497
        dec     eax
        jz      L_10043455
        dec     eax
        jz      L_10043432
        dec     eax
        jnz     L_100434dc
    L_10043410:
        call    FUN_10044ea2
        mov     ecx, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x14]
        xor     eax, eax
        cmp     dword ptr [ecx + 0x20], eax
        push    dword ptr [ebp + 0x10]
        setnz   al
        push    dword ptr [eax*0x4 + g_10054ccc]
        jmp     L_100434d4
    L_10043432:
        mov     eax, dword ptr [g_10075818]
        push    dword ptr [ebp + 0x14]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x14]
        push    0x2
        push    0x64
        cdq
        pop     ecx
        idiv    ecx
        jmp     L_1004315b
    L_10043455:
        cmp     dword ptr [g_10075818], 0
        jz      L_10043482
        mov     eax, dword ptr [ebp + 0x18]
        and     dword ptr [g_10075818], 0
        push    eax
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [eax + 0xa4]
    L_10043478:
        call    FUN_100435c0
        add     esp, 0x14
        jmp     L_100434dc
    L_10043482:
        mov     eax, dword ptr [ebp + 0x18]
        push    eax
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [eax + 0xa0]
        jmp     L_10043478
    L_10043497:
        push    dword ptr [ebp + 0x14]
        mov     eax, dword ptr [g_10075818]
        mov     dword ptr [g_1007581c], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        push    0x1
        push    dword ptr [eax + 0x18]
        jmp     L_1004322e
    L_100434b4:
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x14]
        cmp     dword ptr [eax + 0x8], 0xb
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x18]
        jg      L_100434ce
        push    dword ptr [eax + 0x98]
        jmp     L_100434d4
    L_100434ce:
        push    dword ptr [eax + 0x9c]
    L_100434d4:
        call    FUN_100434e1
        add     esp, 0xc
    L_100434dc:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
