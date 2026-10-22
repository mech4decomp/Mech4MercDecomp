/*
 * FUN_0048b230 (1618 B) — MLR render-state setter (__thiscall, RET 0x10).
 * Decodes a packed render-state bitfield (param_2) and pushes each
 * decoded sub-state through FUN_00713cc0 (state dispatcher). Also
 * resolves texture objects via virtual calls and sets texture stages.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_006fab90(void);
extern char g_007da86c;

__declspec(naked) void FUN_0048b230(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        xor     edi, esi
        mov     eax, edi
        and     eax, 0x40000000
        mov     ebx, ecx
        mov     dword ptr [ebp + 0xc], eax
        jz      L_b43e
        test    esi, 0x40000000
        jnz     L_b43e
        push    0x0
        push    0x1c
        call    FUN_00713cc0
        push    0x0
        push    0x2
        call    FUN_00713cc0
        push    0x0
        push    0x3
        call    FUN_00713cc0
        mov     eax, esi
        and     eax, 0x3fff
        jz      L_b29e
        test    eax, eax
        jle     L_b29e
        mov     ecx, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [ecx + eax*4 + 0x24]
        test    eax, eax
        jz      L_b29e
        mov     edx, dword ptr [eax]
        push    0x0
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        jmp     L_b2a0
L_b29e:
        push    0x0
L_b2a0:
        push    0x1
        call    FUN_00713cc0
        mov     eax, esi
        and     eax, 0x1c000
        cmp     eax, 0xc000
        ja      L_b2f4
        jz      L_b349
        test    eax, eax
        jz      L_b2e7
        cmp     eax, 0x4000
        jz      L_b2da
        cmp     eax, 0x8000
        jnz     L_b309
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x5
        jmp     L_b342
L_b2da:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x2
        jmp     L_b342
L_b2e7:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x1
        jmp     L_b342
L_b2f4:
        cmp     eax, 0x10000
        jz      L_b337
        cmp     eax, 0x14000
        jz      L_b32a
        cmp     eax, 0x18000
        jz      L_b31d
L_b309:
        push    0x76fe60
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_b349
        int     3
        jmp     L_b349
L_b31d:
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x1
        jmp     L_b342
L_b32a:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x4
        jmp     L_b342
L_b337:
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x3
L_b342:
        push    0xd
        call    FUN_00713cc0
L_b349:
        mov     eax, esi
        and     eax, 0x60000
        jz      L_b37c
        cmp     eax, 0x20000
        jz      L_b378
        cmp     eax, 0x40000
        jz      L_b374
        push    0x76fe48
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_b385
        int     3
        jmp     L_b385
L_b374:
        push    0x3
        jmp     L_b37e
L_b378:
        push    0x2
        jmp     L_b37e
L_b37c:
        push    0x1
L_b37e:
        push    0x4
        call    FUN_00713cc0
L_b385:
        mov     ecx, esi
        and     ecx, 0x400000
        push    ecx
        push    0xa
        call    FUN_00713cc0
        test    esi, 0x1000000
        jz      L_b3aa
        lea     edx, [ebp + 0x10]
        mov     dword ptr [ebp + 0x10], 0xffffff
        push    edx
        jmp     L_b3ac
L_b3aa:
        push    0x0
L_b3ac:
        push    0xc
        call    FUN_00713cc0
        mov     eax, esi
        and     eax, 0x800000
        push    eax
        push    0x8
        call    FUN_00713cc0
        test    esi, 0x180000
        jz      L_b3d1
        push    0x7da85c
        jmp     L_b3d3
L_b3d1:
        push    0x0
L_b3d3:
        push    0x12
        call    FUN_00713cc0
        mov     ecx, esi
        and     ecx, 0x20000000
        neg     ecx
        sbb     ecx, ecx
        add     ecx, 0x2
        push    ecx
        push    0xf
        call    FUN_00713cc0
        mov     edx, esi
        shr     edx, 0x1a
        and     edx, 0x1
        push    edx
        push    0x6
        call    FUN_00713cc0
        mov     eax, esi
        and     eax, 0x10000000
        push    eax
        push    0x9
        call    FUN_00713cc0
        test    esi, 0x200000
        mov     ecx, 0x0
        setnz   cl
        inc     ecx
        push    ecx
        push    0xe
        call    FUN_00713cc0
        shr     esi, 0x1b
        and     esi, 0x1
        push    esi
        push    0x5
        call    FUN_00713cc0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ebp
        ret     0x10
L_b43e:
        test    edi, edi
        jz      L_b66a
        test    edi, 0x3fff
        jz      L_b47c
        mov     eax, esi
        and     eax, 0x3fff
        jz      L_b473
        test    eax, eax
        jle     L_b473
        mov     edx, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [edx + eax*4 + 0x24]
        test    ecx, ecx
        jz      L_b473
        mov     eax, dword ptr [ecx]
        push    0x0
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x1c]
        push    ecx
        jmp     L_b475
L_b473:
        push    0x0
L_b475:
        push    0x1
        call    FUN_00713cc0
L_b47c:
        test    edi, 0x1c000
        jz      L_b52a
        mov     eax, esi
        and     eax, 0x1c000
        cmp     eax, 0xc000
        ja      L_b4d5
        jz      L_b52a
        test    eax, eax
        jz      L_b4c8
        cmp     eax, 0x4000
        jz      L_b4bb
        cmp     eax, 0x8000
        jnz     L_b4ea
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x5
        jmp     L_b523
L_b4bb:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x2
        jmp     L_b523
L_b4c8:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x1
        jmp     L_b523
L_b4d5:
        cmp     eax, 0x10000
        jz      L_b518
        cmp     eax, 0x14000
        jz      L_b50b
        cmp     eax, 0x18000
        jz      L_b4fe
L_b4ea:
        push    0x76fe2c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_b52a
        int     3
        jmp     L_b52a
L_b4fe:
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x1
        jmp     L_b523
L_b50b:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x4
        jmp     L_b523
L_b518:
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x3
L_b523:
        push    0xd
        call    FUN_00713cc0
L_b52a:
        test    edi, 0x60000
        jz      L_b56e
        mov     eax, esi
        and     eax, 0x60000
        jz      L_b565
        cmp     eax, 0x20000
        jz      L_b561
        cmp     eax, 0x40000
        jz      L_b55d
        push    0x76fe48
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_b56e
        int     3
        jmp     L_b56e
L_b55d:
        push    0x3
        jmp     L_b567
L_b561:
        push    0x2
        jmp     L_b567
L_b565:
        push    0x1
L_b567:
        push    0x4
        call    FUN_00713cc0
L_b56e:
        test    edi, 0x180000
        jz      L_b58e
        test    esi, 0x180000
        jz      L_b585
        push    0x7da85c
        jmp     L_b587
L_b585:
        push    0x0
L_b587:
        push    0x12
        call    FUN_00713cc0
L_b58e:
        test    edi, 0x10000000
        jz      L_b5a6
        mov     edx, esi
        and     edx, 0x10000000
        push    edx
        push    0x9
        call    FUN_00713cc0
L_b5a6:
        test    edi, 0x200000
        jz      L_b5c5
        test    esi, 0x200000
        mov     eax, 0x0
        setnz   al
        inc     eax
        push    eax
        push    0xe
        call    FUN_00713cc0
L_b5c5:
        test    edi, 0x400000
        jz      L_b5dd
        mov     ecx, esi
        and     ecx, 0x400000
        push    ecx
        push    0xa
        call    FUN_00713cc0
L_b5dd:
        test    edi, 0x800000
        jz      L_b5f5
        mov     edx, esi
        and     edx, 0x800000
        push    edx
        push    0x8
        call    FUN_00713cc0
L_b5f5:
        test    edi, 0x3000000
        jz      L_b61b
        test    esi, 0x1000000
        jz      L_b612
        lea     eax, [ebp + 0x8]
        mov     dword ptr [ebp + 0x8], 0xffffff
        push    eax
        jmp     L_b614
L_b612:
        push    0x0
L_b614:
        push    0xc
        call    FUN_00713cc0
L_b61b:
        test    edi, 0x20000000
        jz      L_b63a
        mov     ecx, esi
        and     ecx, 0x20000000
        neg     ecx
        sbb     ecx, ecx
        add     ecx, 0x2
        push    ecx
        push    0xf
        call    FUN_00713cc0
L_b63a:
        test    edi, 0x4000000
        jz      L_b652
        mov     edx, esi
        shr     edx, 0x1a
        and     edx, 0x1
        push    edx
        push    0x6
        call    FUN_00713cc0
L_b652:
        test    edi, 0x8000000
        jz      L_b66a
        mov     eax, esi
        shr     eax, 0x1b
        and     eax, 0x1
        push    eax
        push    0x5
        call    FUN_00713cc0
L_b66a:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L_b7ce
        test    esi, 0x40000000
        jz      L_b7a1
        and     esi, 0x3fff
        jle     L_b7a1
        mov     edi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [edi + esi*4 + 0x24]
        test    eax, eax
        jz      L_b7a1
        mov     ebx, dword ptr [ebp + 0x10]
        and     ebx, 0x3fff
        jle     L_b7a1
        mov     eax, dword ptr [edi + ebx*4 + 0x24]
        test    eax, eax
        jz      L_b7a1
        mov     cl, byte ptr [g_007da86c]
        test    cl, 0x20
        jle     L_b74a
        mov     eax, dword ptr [ebp + 0x14]
        and     eax, 0x3fff
        mov     dword ptr [ebp + 0x10], eax
        jle     L_b74a
        mov     edx, dword ptr [edi + eax*4 + 0x24]
        test    edx, edx
        jz      L_b74a
        test    esi, esi
        jg      L_b6e3
        xor     ecx, ecx
        jmp     L_b6e7
L_b6e3:
        mov     ecx, dword ptr [edi + esi*4 + 0x24]
L_b6e7:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x1
        call    FUN_00713cc0
        test    ebx, ebx
        jg      L_b701
        xor     ecx, ecx
        jmp     L_b705
L_b701:
        mov     ecx, dword ptr [edi + ebx*4 + 0x24]
L_b705:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x2
        call    FUN_00713cc0
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jg      L_b722
        xor     ecx, ecx
        jmp     L_b726
L_b722:
        mov     ecx, dword ptr [edi + eax*4 + 0x24]
L_b726:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x3
        call    FUN_00713cc0
        push    0x4
        push    0x1c
        call    FUN_00713cc0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ebp
        ret     0x10
L_b74a:
        test    cl, 0x40
        jle     L_b881
        test    ebx, ebx
        jg      L_b75b
        xor     ecx, ecx
        jmp     L_b75f
L_b75b:
        mov     ecx, dword ptr [edi + ebx*4 + 0x24]
L_b75f:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x1
        call    FUN_00713cc0
        test    esi, esi
        jg      L_b779
        xor     ecx, ecx
        jmp     L_b77d
L_b779:
        mov     ecx, dword ptr [edi + esi*4 + 0x24]
L_b77d:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x2
        call    FUN_00713cc0
        push    0x5
        push    0x1c
        call    FUN_00713cc0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ebp
        ret     0x10
L_b7a1:
        push    0x0
        push    0x1c
        call    FUN_00713cc0
        push    0x0
        push    0x1
        call    FUN_00713cc0
        push    0x0
        push    0x2
        call    FUN_00713cc0
        push    0x0
        push    0x3
        call    FUN_00713cc0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ebp
        ret     0x10
L_b7ce:
        test    esi, 0x40000000
        jz      L_b881
        mov     al, byte ptr [g_007da86c]
        test    al, 0x20
        jle     L_b856
        mov     eax, dword ptr [ebp + 0x10]
        and     eax, 0x3fff
        jg      L_b7f1
        xor     ecx, ecx
        jmp     L_b7f8
L_b7f1:
        mov     ecx, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [ecx + eax*4 + 0x24]
L_b7f8:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x2
        call    FUN_00713cc0
        mov     eax, dword ptr [ebp + 0x14]
        and     eax, 0x3fff
        jg      L_b832
        xor     eax, eax
        mov     edx, dword ptr [eax]
        push    eax
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x3
        call    FUN_00713cc0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ebp
        ret     0x10
L_b832:
        mov     ecx, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [ecx + eax*4 + 0x24]
        mov     edx, dword ptr [eax]
        push    0x0
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x3
        call    FUN_00713cc0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ebp
        ret     0x10
L_b856:
        test    al, 0x40
        jle     L_b881
        mov     eax, dword ptr [ebp + 0x10]
        and     eax, 0x3fff
        jg      L_b868
        xor     ecx, ecx
        jmp     L_b86f
L_b868:
        mov     ecx, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [ecx + eax*4 + 0x24]
L_b86f:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x1c]
        push    eax
        push    0x1
        call    FUN_00713cc0
L_b881:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ebp
        ret     0x10
    }
}
