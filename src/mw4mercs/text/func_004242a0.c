/*
 * FUN_004242a0 (1516 B) — __thiscall, RET 0x4. MLR render-state setup /
 * buffer-sync routine. Calls a chain of virtual methods on the source
 * (param_1) and destination (this) objects, reallocates several
 * element buffers (12-byte, 8-byte, 4-byte stride arrays) copying old
 * contents, and copies a 6-dword block into the destination.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_0040ccd0(int a);
extern void __cdecl FUN_00406c90(void *a, int b, int c, void *d);
extern void __cdecl FUN_00428750(int a);

extern int g_007b9640;
extern int g_007b963c;

__declspec(naked) void FUN_004242a0(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        mov     ebx, dword ptr [esp+0x28]
        mov     eax, dword ptr [ebx+0xc]
        test    eax, eax
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp+0x14], esi
        jz      L_3c0
        mov     ecx, dword ptr [eax+0x14]
        test    ecx, ecx
        jbe     L_3c0
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp+0x10]
        push    ecx
        lea     edx, [esp+0x20]
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax+0x28]
        mov     ebp, dword ptr [esi+0xc]
        mov     eax, dword ptr [esp+0x10]
        mov     esi, dword ptr [ebp+0x14]
        cmp     eax, esi
        mov     dword ptr [esp+0x2c], eax
        jz      L_38e
        test    eax, eax
        jbe     L_370
        mov     edi, eax
        lea     eax, [eax+eax*2]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_312
        dec     edi
        mov     dword ptr [esp+0x18], edi
        mov     dword ptr [esp+0x18], eax
        jmp     L_31a
L_312:
        mov     dword ptr [esp+0x18], 0
L_31a:
        mov     eax, dword ptr [ebp+0x10]
        test    eax, eax
        jz      L_367
        mov     eax, dword ptr [esp+0x2c]
        cmp     eax, esi
        jc      L_32b
        mov     eax, esi
L_32b:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_35b
        mov     ecx, dword ptr [esp+0x18]
        mov     ebx, dword ptr [ebp+0x10]
        lea     edx, [eax+eax*2]
        lea     esi, [ecx+edx*4]
        sub     ebx, ecx
        lea     edi, [eax+1]
L_344:
        lea     eax, [ebx+esi]
        push    eax
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      L_344
        mov     ebx, dword ptr [esp+0x34]
L_35b:
        mov     eax, dword ptr [ebp+0x10]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_367:
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [ebp+0x10], ecx
        jmp     L_383
L_370:
        mov     edx, dword ptr [ebp+0x10]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp+0x10], 0
L_383:
        mov     eax, dword ptr [esp+0x2c]
        mov     dword ptr [ebp+0x14], eax
        mov     eax, dword ptr [esp+0x10]
L_38e:
        mov     edx, dword ptr [ebp+0x10]
        mov     esi, dword ptr [esp+0x1c]
        lea     ecx, [eax+eax*2]
        shl     ecx, 2
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x14]
        mov     eax, dword ptr [ecx]
        push    esi
        push    edx
        call    dword ptr [eax+0x24]
        mov     esi, dword ptr [esp+0x14]
        jmp     L_3e2
L_3c0:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x28]
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esi]
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0x24]
L_3e2:
        mov     eax, dword ptr [ebx+0xc]
        test    eax, eax
        jz      L_4b5
        mov     ecx, dword ptr [eax+4]
        test    ecx, ecx
        jbe     L_4b5
        mov     edx, dword ptr [ebx]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x8c]
        mov     ebp, dword ptr [esp+0x14]
        mov     esi, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [esp+0x10]
        mov     edi, dword ptr [esi+4]
        cmp     ecx, edi
        mov     dword ptr [esp+0x18], ecx
        jz      L_48c
        test    ecx, ecx
        jbe     L_470
        push    ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [esi]
        add     esp, 4
        test    ecx, ecx
        mov     dword ptr [esp+0x2c], eax
        jz      L_468
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, edi
        jc      L_443
        mov     eax, edi
L_443:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_45f
        mov     edi, dword ptr [esp+0x2c]
L_44e:
        mov     dl, byte ptr [ecx+eax]
        mov     byte ptr [eax+edi], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_44e
        mov     ebp, dword ptr [esp+0x14]
L_45f:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
L_468:
        mov     eax, dword ptr [esp+0x2c]
        mov     dword ptr [esi], eax
        jmp     L_481
L_470:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_481:
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [esi+4], edx
        mov     ecx, dword ptr [esp+0x10]
L_48c:
        mov     eax, dword ptr [esi]
        mov     esi, dword ptr [esp+0x20]
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, eax
        rep movsd
        mov     ecx, edx
        mov     edx, dword ptr [ebp]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp+0x10]
        push    ecx
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx+0x88]
        jmp     L_4e1
L_4b5:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x8c]
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x20]
        mov     edx, dword ptr [esi]
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0x88]
        mov     ebp, dword ptr [esp+0x14]
L_4e1:
        mov     edx, dword ptr [ebx]
        mov     esi, dword ptr [ebp]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx+8]
        push    eax
        push    0
        mov     ecx, ebp
        call    dword ptr [esi+0xc]
        mov     eax, dword ptr [ebx+0xc]
        test    eax, eax
        jz      L_5e5
        mov     ecx, dword ptr [eax+0x1c]
        test    ecx, ecx
        jbe     L_5e5
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp+0x10]
        push    ecx
        lea     edx, [esp+0x28]
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax+0x30]
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, dword ptr [esp+0x10]
        mov     edi, dword ptr [esi+0x1c]
        cmp     eax, edi
        mov     dword ptr [esp+0x2c], eax
        jz      L_5b7
        test    eax, eax
        jbe     L_599
        mov     ebx, eax
        shl     eax, 3
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_551
        dec     ebx
        mov     dword ptr [esp+0x18], ebx
        mov     ebx, eax
        jmp     L_553
L_551:
        xor     ebx, ebx
L_553:
        mov     eax, dword ptr [esi+0x18]
        test    eax, eax
        jz      L_594
        mov     edx, dword ptr [esp+0x2c]
        cmp     edx, edi
        jc      L_564
        mov     edx, edi
L_564:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_588
        mov     ecx, dword ptr [esi+0x18]
        lea     eax, [ebx+edx*8]
        sub     ecx, ebx
        inc     edx
L_574:
        mov     edi, dword ptr [ecx+eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_574
L_588:
        mov     eax, dword ptr [esi+0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_594:
        mov     dword ptr [esi+0x18], ebx
        jmp     L_5ac
L_599:
        mov     edx, dword ptr [esi+0x18]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x18], 0
L_5ac:
        mov     eax, dword ptr [esp+0x2c]
        mov     dword ptr [esi+0x1c], eax
        mov     eax, dword ptr [esp+0x10]
L_5b7:
        mov     edx, dword ptr [esi+0x18]
        mov     esi, dword ptr [esp+0x24]
        /* __emit: no-base SIB lea ecx,[eax*8+0] (8D 0C C5 00 00 00 00) */
        __emit 0x8D
        __emit 0x0C
        __emit 0xC5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp+0x10]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax+0x2c]
        jmp     L_608
L_5e5:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x30]
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x24]
        mov     edx, dword ptr [ebp]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx+0x2c]
L_608:
        mov     ebp, dword ptr [g_007b9640]
        mov     eax, dword ptr [esp+0x10]
        mov     edi, dword ptr [ebp+4]
        cmp     eax, edi
        mov     dword ptr [esp+0x2c], eax
        jz      L_6a6
        test    eax, eax
        jbe     L_688
        /* __emit: no-base SIB lea edx,[eax*8+0] (8D 14 C5 00 00 00 00) */
        __emit 0x8D
        __emit 0x14
        __emit 0xC5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        mov     esi, eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_644
        dec     esi
        mov     dword ptr [esp+0x18], esi
        mov     esi, eax
        jmp     L_646
L_644:
        xor     esi, esi
L_646:
        mov     ebx, dword ptr [ebp]
        test    ebx, ebx
        jz      L_683
        mov     edx, dword ptr [esp+0x2c]
        cmp     edx, edi
        jc      L_657
        mov     edx, edi
L_657:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_67a
        mov     ecx, ebx
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_666:
        mov     edi, dword ptr [ecx+eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_666
L_67a:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_683:
        mov     dword ptr [ebp], esi
        jmp     L_69b
L_688:
        mov     ecx, dword ptr [ebp]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0
L_69b:
        mov     edx, dword ptr [esp+0x2c]
        mov     dword ptr [ebp+4], edx
        mov     eax, dword ptr [esp+0x10]
L_6a6:
        mov     ebp, dword ptr [g_007b963c]
        mov     ebx, dword ptr [ebp+4]
        cmp     eax, ebx
        mov     dword ptr [esp+0x2c], eax
        jz      L_741
        test    eax, eax
        jbe     L_727
        mov     edi, eax
        shl     eax, 3
        push    eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_6e3
        push    0x423b70
        push    edi
        push    8
        push    esi
        call    FUN_00406c90
        jmp     L_6e5
L_6e3:
        xor     esi, esi
L_6e5:
        mov     edi, dword ptr [ebp]
        test    edi, edi
        jz      L_722
        mov     edx, dword ptr [esp+0x2c]
        cmp     edx, ebx
        jc      L_6f6
        mov     edx, ebx
L_6f6:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_719
        mov     ecx, edi
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_705:
        mov     ebx, dword ptr [ecx+eax]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], ebx
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_705
L_719:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_722:
        mov     dword ptr [ebp], esi
        jmp     L_73a
L_727:
        mov     edx, dword ptr [ebp]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0
L_73a:
        mov     eax, dword ptr [esp+0x2c]
        mov     dword ptr [ebp+4], eax
L_741:
        mov     ecx, dword ptr [esp+0x14]
        mov     ebp, dword ptr [esp+0x34]
        mov     edx, dword ptr [ebp]
        lea     ebx, [ecx+0x2c]
        push    0
        mov     ecx, ebp
        call    dword ptr [edx+0x18]
        mov     esi, eax
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, 6
        mov     edi, ebx
        rep movsd
        mov     esi, dword ptr [ebx]
        mov     edx, dword ptr [ebx+8]
        mov     word ptr [eax+0x56], 0
        mov     eax, dword ptr [ebp+0xc]
        or      esi, 0x40000000
        or      edx, 0x40000000
        test    eax, eax
        mov     dword ptr [ebx], esi
        mov     dword ptr [ebx+8], edx
        jz      L_84b
        mov     ecx, dword ptr [eax+0x24]
        test    ecx, ecx
        jbe     L_84b
        mov     edx, dword ptr [ebp]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x2c]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx+0xa8]
        mov     ebx, dword ptr [esp+0x14]
        mov     esi, dword ptr [ebx+0xc]
        mov     ecx, dword ptr [esp+0x10]
        mov     edi, dword ptr [esi+0x24]
        cmp     ecx, edi
        mov     dword ptr [esp+0x34], ecx
        jz      L_836
        test    ecx, ecx
        jbe     L_814
        /* __emit: no-base SIB lea edx,[ecx*4+0] (8D 14 8D 00 00 00 00) */
        __emit 0x8D
        __emit 0x14
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        call    FUN_004084d0
        mov     ebx, dword ptr [esi+0x20]
        add     esp, 4
        test    ebx, ebx
        mov     ebp, eax
        jz      L_80f
        mov     ecx, dword ptr [esp+0x34]
        cmp     ecx, edi
        jc      L_7e9
        mov     ecx, edi
L_7e9:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_806
        mov     edx, ebx
        lea     eax, [ebp+ecx*4]
        sub     edx, ebp
        inc     ecx
L_7f9:
        mov     edi, dword ptr [edx+eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_7f9
L_806:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_80f:
        mov     dword ptr [esi+0x20], ebp
        jmp     L_827
L_814:
        mov     ecx, dword ptr [esi+0x20]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x20], 0
L_827:
        mov     edx, dword ptr [esp+0x34]
        mov     ebx, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x24], edx
        mov     ecx, dword ptr [esp+0x10]
L_836:
        mov     eax, dword ptr [esi+0x20]
        mov     esi, dword ptr [esp+0x28]
        mov     edx, dword ptr [ebx]
        mov     edi, eax
        rep movsd
        mov     ecx, dword ptr [esp+0x10]
        push    ecx
        push    eax
        jmp     L_870
L_84b:
        mov     edx, dword ptr [ebp]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x2c]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx+0xa8]
        mov     eax, dword ptr [esp+0x10]
        mov     ebx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x28]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
L_870:
        mov     ecx, ebx
        call    dword ptr [edx+0xa4]
        push    0
        lea     ecx, [ebx+0x5c]
        call    FUN_00428750
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     4
    }
}
