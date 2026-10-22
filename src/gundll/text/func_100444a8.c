/*
 * FUN_100444a8 (1185 B) - __thiscall, RET. Number/string parser with a
 * jump table at 0x10044949 (just past the function end).
 *
 * CFLAGS: /O1
 */

extern char g_10051b94;
extern int g_10051b90;
extern int g_10051984;
extern int g_10044949[];

extern void FUN_100399db(void);
extern void FUN_100443e1(void);
extern void FUN_100459db(void);

__declspec(naked) void FUN_100444a8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x5c
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        lea     eax, [ebp + -0x5c]
        push    0x1
        mov     dword ptr [ebp + -0xc], eax
        xor     eax, eax
        pop     edx
        mov     dword ptr [ebp + -0x28], eax
        mov     dword ptr [ebp + -0x18], edx
        mov     dword ptr [ebp + -0x4], eax
        mov     dword ptr [ebp + -0x10], eax
        mov     dword ptr [ebp + -0x24], eax
        mov     dword ptr [ebp + -0x20], eax
        mov     dword ptr [ebp + -0x2c], eax
        mov     dword ptr [ebp + -0x30], eax
        mov     dword ptr [ebp + -0x1c], eax
        mov     dword ptr [ebp + -0x8], eax
        mov     dword ptr [ebp + -0x14], eax
        mov     dword ptr [ebp + 0x10], edi
    L_100444e3:
        mov     cl, byte ptr [edi]
        cmp     cl, 0x20
        jz      L_100444f9
        cmp     cl, 0x9
        jz      L_100444f9
        cmp     cl, 0xa
        jz      L_100444f9
        cmp     cl, 0xd
        jnz     L_100444fc
    L_100444f9:
        inc     edi
        jmp     L_100444e3
    L_100444fc:
        push    0x4
        pop     esi
    L_100444ff:
        mov     bl, byte ptr [edi]
        inc     edi
        cmp     eax, 0xb
        ja      L_10044782
        jmp     dword ptr [eax*0x4 + g_10044949]
    L_10044512:
        cmp     bl, 0x31
        jl      L_10044523
        cmp     bl, 0x39
        jg      L_10044523
    L_1004451c:
        push    0x3
        jmp     L_10044740
    L_10044523:
        cmp     bl, byte ptr [g_10051b94]
        jnz     L_10044532
    L_1004452b:
        push    0x5
        jmp     L_10044778
    L_10044532:
        movsx   eax, bl
        sub     eax, 0x2b
        jz      L_10044558
        dec     eax
        dec     eax
        jz      L_1004454c
        sub     eax, 0x3
        jnz     L_1004481b
        jmp     L_100445db
    L_1004454c:
        push    0x2
        mov     dword ptr [ebp + -0x28], 0x8000
        pop     eax
        jmp     L_100444ff
    L_10044558:
        and     dword ptr [ebp + -0x28], 0x0
        push    0x2
        pop     eax
        jmp     L_100444ff
    L_10044561:
        cmp     bl, 0x31
        mov     dword ptr [ebp + -0x10], edx
        jl      L_1004456e
        cmp     bl, 0x39
        jle     L_1004451c
    L_1004456e:
        cmp     bl, byte ptr [g_10051b94]
        jz      L_10044636
        cmp     bl, 0x2b
        jz      L_100445b0
        cmp     bl, 0x2d
        jz      L_100445b0
        cmp     bl, 0x30
        jz      L_100445db
    L_10044589:
        cmp     bl, 0x43
        jle     L_1004481b
        cmp     bl, 0x45
        jle     L_100445a9
        cmp     bl, 0x63
        jle     L_1004481b
        cmp     bl, 0x65
        jg      L_1004481b
    L_100445a9:
        push    0x6
        jmp     L_10044778
    L_100445b0:
        dec     edi
        push    0xb
        jmp     L_10044778
    L_100445b8:
        cmp     bl, 0x31
        jl      L_100445c6
        cmp     bl, 0x39
        jle     L_1004451c
    L_100445c6:
        cmp     bl, byte ptr [g_10051b94]
        jz      L_1004452b
        cmp     bl, 0x30
        jnz     L_10044790
    L_100445db:
        mov     eax, edx
        jmp     L_100444ff
    L_100445e2:
        mov     dword ptr [ebp + -0x10], edx
    L_100445e5:
        cmp     dword ptr [g_10051b90], edx
        jle     L_100445fe
        movzx   eax, bl
        push    esi
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        push    0x1
        pop     edx
        jmp     L_1004460c
    L_100445fe:
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, bl
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, esi
    L_1004460c:
        test    eax, eax
        jz      L_1004462e
        cmp     dword ptr [ebp + -0x4], 0x19
        jnc     L_10044626
        mov     eax, dword ptr [ebp + -0xc]
        inc     dword ptr [ebp + -0x4]
        sub     bl, 0x30
        inc     dword ptr [ebp + -0xc]
        mov     byte ptr [eax], bl
        jmp     L_10044629
    L_10044626:
        inc     dword ptr [ebp + -0x8]
    L_10044629:
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L_100445e5
    L_1004462e:
        cmp     bl, byte ptr [g_10051b94]
        jnz     L_1004469d
    L_10044636:
        mov     eax, esi
        jmp     L_100444ff
    L_1004463d:
        cmp     dword ptr [ebp + -0x4], 0x0
        mov     dword ptr [ebp + -0x10], edx
        mov     dword ptr [ebp + -0x24], edx
        jnz     L_10044656
    L_10044649:
        cmp     bl, 0x30
        jnz     L_10044656
        dec     dword ptr [ebp + -0x8]
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L_10044649
    L_10044656:
        cmp     dword ptr [g_10051b90], edx
        jle     L_1004466f
        movzx   eax, bl
        push    esi
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        push    0x1
        pop     edx
        jmp     L_1004467d
    L_1004466f:
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, bl
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, esi
    L_1004467d:
        test    eax, eax
        jz      L_1004469d
        cmp     dword ptr [ebp + -0x4], 0x19
        jnc     L_10044698
        mov     eax, dword ptr [ebp + -0xc]
        inc     dword ptr [ebp + -0x4]
        sub     bl, 0x30
        inc     dword ptr [ebp + -0xc]
        dec     dword ptr [ebp + -0x8]
        mov     byte ptr [eax], bl
    L_10044698:
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L_10044656
    L_1004469d:
        cmp     bl, 0x2b
        jz      L_100445b0
        cmp     bl, 0x2d
        jz      L_100445b0
        jmp     L_10044589
    L_100446b4:
        cmp     dword ptr [g_10051b90], edx
        mov     dword ptr [ebp + -0x24], edx
        jle     L_100446d0
        movzx   eax, bl
        push    esi
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        push    0x1
        pop     edx
        jmp     L_100446de
    L_100446d0:
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, bl
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, esi
    L_100446de:
        test    eax, eax
        jz      L_10044790
        mov     eax, esi
        jmp     L_10044741
    L_100446ea:
        lea     ecx, [edi + -0x2]
        cmp     bl, 0x31
        mov     dword ptr [ebp + 0x10], ecx
        jl      L_100446fa
        cmp     bl, 0x39
        jle     L_1004473e
    L_100446fa:
        movsx   eax, bl
        sub     eax, 0x2b
        jz      L_10044776
        dec     eax
        dec     eax
        jz      L_1004476a
        sub     eax, 0x3
        jnz     L_1004481e
    L_1004470f:
        push    0x8
        jmp     L_10044778
    L_10044713:
        mov     dword ptr [ebp + -0x20], edx
    L_10044716:
        cmp     bl, 0x30
        jnz     L_10044720
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L_10044716
    L_10044720:
        cmp     bl, 0x31
        jl      L_1004481b
        cmp     bl, 0x39
        jg      L_1004481b
        jmp     L_1004473e
    L_10044734:
        cmp     bl, 0x31
        jl      L_10044747
        cmp     bl, 0x39
        jg      L_10044747
    L_1004473e:
        push    0x9
    L_10044740:
        pop     eax
    L_10044741:
        dec     edi
        jmp     L_100444ff
    L_10044747:
        cmp     bl, 0x30
        jnz     L_10044790
        jmp     L_1004470f
    L_1004474e:
        cmp     dword ptr [ebp + 0x20], 0x0
        jz      L_1004477e
        movsx   eax, bl
        lea     ecx, [edi + -0x1]
        sub     eax, 0x2b
        mov     dword ptr [ebp + 0x10], ecx
        jz      L_10044776
        dec     eax
        dec     eax
        jnz     L_1004481e
    L_1004476a:
        or      dword ptr [ebp + -0x18], 0xffffffff
        push    0x7
        pop     eax
        jmp     L_100444ff
    L_10044776:
        push    0x7
    L_10044778:
        pop     eax
        jmp     L_100444ff
    L_1004477e:
        push    0xa
        dec     edi
        pop     eax
    L_10044782:
        cmp     eax, 0xa
        jz      L_10044820
        jmp     L_100444ff
    L_10044790:
        mov     edi, dword ptr [ebp + 0x10]
        jmp     L_10044820
    L_10044798:
        mov     dword ptr [ebp + -0x20], 0x1
        xor     esi, esi
    L_100447a1:
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_100447b9
        movzx   eax, bl
        push    0x4
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_100447c8
    L_100447b9:
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, bl
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x4
    L_100447c8:
        test    eax, eax
        jz      L_100447e8
        movsx   ecx, bl
        lea     eax, [esi + esi*0x4]
        lea     esi, [ecx + eax*0x2 + -0x30]
        cmp     esi, 0x1450
        jg      L_100447e3
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L_100447a1
    L_100447e3:
        mov     esi, 0x1451
    L_100447e8:
        mov     dword ptr [ebp + -0x1c], esi
    L_100447eb:
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_10044803
        movzx   eax, bl
        push    0x4
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_10044812
    L_10044803:
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, bl
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x4
    L_10044812:
        test    eax, eax
        jz      L_1004481b
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L_100447eb
    L_1004481b:
        dec     edi
        jmp     L_10044820
    L_1004481e:
        mov     edi, ecx
    L_10044820:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     dword ptr [ebp + -0x10], 0x0
        mov     dword ptr [eax], edi
        jz      L_10044908
        push    0x18
        pop     eax
        cmp     dword ptr [ebp + -0x4], eax
        jbe     L_1004484c
        cmp     byte ptr [ebp + -0x45], 0x5
        jl      L_10044840
        inc     byte ptr [ebp + -0x45]
    L_10044840:
        mov     dword ptr [ebp + -0x4], eax
        mov     eax, dword ptr [ebp + -0xc]
        dec     eax
        inc     dword ptr [ebp + -0x8]
        jmp     L_1004484f
    L_1004484c:
        mov     eax, dword ptr [ebp + -0xc]
    L_1004484f:
        cmp     dword ptr [ebp + -0x4], 0x0
        jbe     L_100448fe
    L_10044859:
        dec     eax
        cmp     byte ptr [eax], 0x0
        jnz     L_10044867
        dec     dword ptr [ebp + -0x4]
        inc     dword ptr [ebp + -0x8]
        jmp     L_10044859
    L_10044867:
        lea     eax, [ebp + -0x40]
        push    eax
        lea     eax, [ebp + -0x5c]
        push    dword ptr [ebp + -0x4]
        push    eax
        call    FUN_100443e1
        mov     eax, dword ptr [ebp + -0x1c]
        xor     ecx, ecx
        add     esp, 0xc
        cmp     dword ptr [ebp + -0x18], ecx
        jge     L_10044886
        neg     eax
    L_10044886:
        add     eax, dword ptr [ebp + -0x8]
        cmp     dword ptr [ebp + -0x20], ecx
        jnz     L_10044891
        add     eax, dword ptr [ebp + 0x18]
    L_10044891:
        cmp     dword ptr [ebp + -0x24], ecx
        jnz     L_10044899
        sub     eax, dword ptr [ebp + 0x1c]
    L_10044899:
        cmp     eax, 0x1450
        jle     L_100448d0
        mov     dword ptr [ebp + -0x2c], 0x1
    L_100448a7:
        mov     ebx, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0x10]
    L_100448b3:
        cmp     dword ptr [ebp + -0x2c], 0x0
        jz      L_10044919
        xor     ebx, ebx
        mov     eax, 0x7fff
        mov     esi, 0x80000000
        xor     edx, edx
        mov     dword ptr [ebp + -0x14], 0x2
        jmp     L_1004492e
    L_100448d0:
        cmp     eax, 0xffffebb0
        jge     L_100448e0
        mov     dword ptr [ebp + -0x30], 0x1
        jmp     L_100448a7
    L_100448e0:
        push    dword ptr [ebp + 0x14]
        push    eax
        lea     eax, [ebp + -0x40]
        push    eax
        call    FUN_100459db
        mov     edx, dword ptr [ebp + -0x40]
        mov     ebx, dword ptr [ebp + -0x3e]
        mov     esi, dword ptr [ebp + -0x3a]
        mov     eax, dword ptr [ebp + -0x36]
        add     esp, 0xc
        jmp     L_100448b3
    L_100448fe:
        xor     edx, edx
        xor     eax, eax
        xor     esi, esi
        xor     ebx, ebx
        jmp     L_100448b3
    L_10044908:
        xor     edx, edx
        xor     eax, eax
        xor     esi, esi
        xor     ebx, ebx
        mov     dword ptr [ebp + -0x14], 0x4
        jmp     L_1004492e
    L_10044919:
        cmp     dword ptr [ebp + -0x30], 0x0
        jz      L_1004492e
        xor     edx, edx
        xor     eax, eax
        xor     esi, esi
        xor     ebx, ebx
        mov     dword ptr [ebp + -0x14], 0x1
    L_1004492e:
        mov     ecx, dword ptr [ebp + 0x8]
        or      eax, dword ptr [ebp + -0x28]
        pop     edi
        mov     dword ptr [ecx + 0x6], esi
        mov     dword ptr [ecx + 0x2], ebx
        mov     word ptr [ecx + 0xa], ax
        mov     eax, dword ptr [ebp + -0x14]
        pop     esi
        mov     word ptr [ecx], dx
        pop     ebx
        leave
        ret
    }
}
