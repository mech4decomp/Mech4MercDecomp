/*
 * FUN_0060B28B (1882 B) — gameplay: renderer/table setup routine.
 * __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041db30(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041db70(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00416a00(void);
extern void __cdecl FUN_0041dac0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004169c0(void);

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;
extern unsigned int g_007b8c10;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern void* g_0076b2b0;

__declspec(naked) void FUN_0060B28B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x5c
        mov     eax, dword ptr [esp + 0x60]
        mov     edx, dword ptr [eax + 8]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 0xc]
        push    edi
        mov     edi, dword ptr [esi + 0x38]
        xor     ebx, ebx
        cmp     edi, ebx
        mov     dword ptr [esp + 0x38], esi
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [eax], ebx
        mov     dword ptr [esp + 0x18], edi
        je      L_60b9d7
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    ebp
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x4c]
        xor     ecx, 0x85739531
        mov     byte ptr [esp + 0x70], bl
        mov     byte ptr [esp + 0x13], bl
        je      L_60b2ee
        mov     byte ptr [esp + 0x70], 1
L_60b2ee:
        mov     edx, dword ptr [eax + 0x58]
        xor     edx, 0x85739531
        je      L_60b2fe
        mov     byte ptr [esp + 0x13], 1
L_60b2fe:
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        je      L_60b30e
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + 0xc], ebx
L_60b30e:
        push    ebx
        lea     eax, [edi*4]
        push    eax
        call    FUN_006f3c80
        push    1
        push    ebx
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esi + 0xc], eax
        call    FUN_00416990
        lea     ecx, [edi*4 + 4]
        push    ecx
        mov     dword ptr [esp + 0x48], 0x76d654
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        je      L_60b362
        mov     dword ptr [eax], edi
        lea     edx, [eax + 4]
        lea     eax, [edi - 1]
        cmp     eax, ebx
        jl      L_60b35c
        lea     ecx, [eax + 1]
        xor     eax, eax
        mov     edi, edx
        rep     stosd
L_60b35c:
        mov     dword ptr [esp + 0x14], edx
        jmp     L_60b366
L_60b362:
        mov     dword ptr [esp + 0x14], ebx
L_60b366:
        mov     edx, dword ptr [g_007dab44]
        mov     edi, dword ptr [edx]
        mov     esi, dword ptr [g_007dab40]
        push    0x14
        xor     edi, esi
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        je      L_60b3a7
        mov     eax, dword ptr [edi + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x84]
        add     ecx, 0x10
        push    ecx
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779e88
        jmp     L_60b3a9
L_60b3a7:
        xor     esi, esi
L_60b3a9:
        push    0x779e68
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x28], esi
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        je      L_60b3d9
        mov     edx, dword ptr [esp + 0x30]
        push    1
        push    edx
        mov     ecx, eax
        call    FUN_0041d890
        jmp     L_60b3db
L_60b3d9:
        xor     eax, eax
L_60b3db:
        mov     ecx, eax
        mov     dword ptr [esp + 0x20], eax
        call    FUN_0041db30
        cmp     eax, ebx
        je      L_60b591
        jmp     L_60b3f4
L_60b3f0:
        mov     esi, dword ptr [esp + 0x24]
L_60b3f4:
        push    eax
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00412780
        lea     ecx, [esp + 0x18]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 8]
        mov     ecx, esi
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        je      L_60b4a6
L_60b42a:
        mov     esi, dword ptr [ebp + 0x18]
        test    esi, esi
        je      L_60b4f1
        inc     byte ptr [esi - 1]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
L_60b444:
        test    esi, esi
        je      L_60b44b
        inc     byte ptr [esi - 1]
L_60b44b:
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    esi
        push    ecx
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        je      L_60b493
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_60b47c
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_60b47c:
        test    esi, esi
        je      L_60b493
        mov     al, byte ptr [esi - 1]
        dec     esi
        dec     al
        mov     byte ptr [esi], al
        jne     L_60b493
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_60b493:
        test    bl, bl
        jne     L_60b4a6
        mov     ecx, dword ptr [esp + 0x24]
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jne     L_60b42a
L_60b4a6:
        mov     al, byte ptr [esp + 0x70]
        test    al, al
        jne     L_60b4b8
        test    ebp, ebp
        je      L_60b4b8
        cmp     dword ptr [ebp + 0x20], 1
        je      L_60b4ca
L_60b4b8:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jne     L_60b4f8
        test    ebp, ebp
        je      L_60b4f8
        cmp     dword ptr [ebp + 0x20], 2
        jne     L_60b4f8
L_60b4ca:
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, esi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        je      L_60b576
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_60b576
        jmp     L_60b56d
L_60b4f1:
        xor     ecx, ecx
        jmp     L_60b444
L_60b4f8:
        push    0x14
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_60b53f
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        mov     ecx, esi
        call    FUN_00415180
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 8], 0
        mov     dword ptr [esi + 0xc], 0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0040f060
        mov     dword ptr [esi], 0x76d650
        jmp     L_60b541
L_60b53f:
        xor     esi, esi
L_60b541:
        lea     ecx, [esp + 0x18]
        push    ecx
        push    esi
        lea     ecx, [esp + 0x4c]
        call    FUN_00416a90
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, esi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        je      L_60b576
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_60b576
L_60b56d:
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_60b576:
        mov     ecx, esi
        call    FUN_0041db30
        test    eax, eax
        jne     L_60b3f0
        mov     edi, dword ptr [g_0076b2b0]
        mov     esi, dword ptr [esp + 0x24]
        jmp     L_60b597
L_60b591:
        mov     edi, dword ptr [g_0076b2b0]
L_60b597:
        test    esi, esi
        je      L_60b5a3
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
L_60b5a3:
        lea     eax, [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0x5c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x58]
        mov     dword ptr [esp + 0x58], 0x76d610
        xor     ebx, ebx
        call    FUN_00416cc0
        test    eax, eax
        je      L_60b618
L_60b5c8:
        mov     esi, dword ptr [esp + 0x14]
L_60b5cc:
        cmp     ebx, dword ptr [esp + 0x1c]
        je      L_60b618
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x70], eax
        je      L_60b5e0
        inc     byte ptr [eax - 1]
L_60b5e0:
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x70]
        test    eax, eax
        je      L_60b607
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_60b607
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_60b607:
        lea     ecx, [esp + 0x58]
        inc     ebx
        add     esi, 4
        call    FUN_00416cc0
        test    eax, eax
        jne     L_60b5cc
L_60b618:
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    0xf
        push    0x779e58
        xor     ebp, ebp
        push    edx
        mov     dword ptr [esp + 0x7c], ebp
        call    edi
        add     esp, 0xc
        test    eax, eax
        je      L_60b658
L_60b635:
        mov     ebx, dword ptr [esp + 0x1c]
L_60b639:
        inc     ebp
        add     esi, 4
        cmp     ebp, ebx
        je      L_60b654
        mov     eax, dword ptr [esi]
        push    0xf
        push    0x779e58
        push    eax
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     L_60b639
L_60b654:
        mov     dword ptr [esp + 0x70], ebp
L_60b658:
        cmp     ebp, dword ptr [esp + 0x1c]
        mov     ebx, ebp
        mov     dword ptr [esp + 0x18], ebx
        jge     L_60b6a2
L_60b664:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx + ebp*4]
        lea     esi, [ecx + ebp*4]
        push    0xf
        push    0x779e58
        push    edx
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     L_60b6a2
L_60b67f:
        mov     eax, dword ptr [esp + 0x1c]
        inc     ebx
        add     esi, 4
        cmp     ebx, eax
        je      L_60b69e
        mov     eax, dword ptr [esi]
        push    0xf
        push    0x779e58
        push    eax
        call    edi
        add     esp, 0xc
        test    eax, eax
        je      L_60b67f
L_60b69e:
        mov     dword ptr [esp + 0x18], ebx
L_60b6a2:
        cmp     ebx, dword ptr [esp + 0x1c]
        mov     edi, ebx
        jge     L_60b6ec
L_60b6aa:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx + ebx*4]
        lea     esi, [ecx + ebx*4]
        push    7
        push    0x779e50
        push    edx
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        jne     L_60b6ec
L_60b6c9:
        mov     eax, dword ptr [esp + 0x1c]
        inc     edi
        add     esi, 4
        cmp     edi, eax
        je      L_60b6ec
        mov     eax, dword ptr [esi]
        push    7
        push    0x779e50
        push    eax
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        je      L_60b6c9
L_60b6ec:
        mov     esi, ebx
        sub     edi, ebx
        sub     esi, ebp
        test    esi, esi
        mov     ebx, edi
        mov     dword ptr [esp + 0x28], ebx
        jle     L_60b803
        test    ebx, ebx
        jle     L_60b803
        lea     ecx, [esi*4 + 4]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_60b737
        mov     dword ptr [eax], esi
        lea     edx, [eax + 4]
        lea     eax, [esi - 1]
        test    eax, eax
        jl      L_60b731
        lea     ecx, [eax + 1]
        xor     eax, eax
        mov     edi, edx
        rep     stosd
L_60b731:
        mov     dword ptr [esp + 0x24], edx
        jmp     L_60b73f
L_60b737:
        mov     dword ptr [esp + 0x24], 0
L_60b73f:
        test    esi, esi
        jle     L_60b776
        mov     ebp, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x70]
        mov     ebx, dword ptr [esp + 0x24]
        lea     edi, [ebp + edx*4]
        mov     dword ptr [esp + 0x2c], esi
L_60b757:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x2c]
        add     edi, 4
        add     ebx, 4
        dec     eax
        mov     dword ptr [esp + 0x2c], eax
        jne     L_60b757
        mov     ebx, dword ptr [esp + 0x28]
        jmp     L_60b77a
L_60b776:
        mov     ebp, dword ptr [esp + 0x14]
L_60b77a:
        test    ebx, ebx
        jle     L_60b7af
        mov     eax, dword ptr [esp + 0x70]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x28]
        lea     ebx, [ebp + eax*4]
        lea     edi, [ebp + ecx*4]
        mov     dword ptr [esp + 0x2c], edx
L_60b796:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x2c]
        add     edi, 4
        add     ebx, 4
        dec     eax
        mov     dword ptr [esp + 0x2c], eax
        jne     L_60b796
L_60b7af:
        test    esi, esi
        jle     L_60b7d6
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x70]
        mov     edi, dword ptr [esp + 0x24]
        add     eax, ecx
        lea     ebx, [ebp + eax*4]
L_60b7c5:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        add     edi, 4
        add     ebx, 4
        dec     esi
        jne     L_60b7c5
L_60b7d6:
        mov     ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        je      L_60b803
        mov     eax, dword ptr [ecx - 4]
        lea     ebx, [ecx - 4]
        lea     esi, [ecx + eax*4]
        dec     eax
        js      L_60b7fa
        lea     edi, [eax + 1]
L_60b7ed:
        sub     esi, 4
        mov     ecx, esi
        call    FUN_0040d9b0
        dec     edi
        jne     L_60b7ed
L_60b7fa:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_60b803:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0
        jle     L_60b948
        mov     ebp, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x38]
        sub     eax, ebp
        sub     ecx, ebp
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x38], ecx
        jmp     L_60b835
L_60b831:
        mov     eax, dword ptr [esp + 0x34]
L_60b835:
        mov     ebx, dword ptr [eax + ebp]
        test    ebx, ebx
        je      L_60b83f
        inc     byte ptr [ebx - 1]
L_60b83f:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        je      L_60b853
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
L_60b853:
        push    0
        push    0x80
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebp], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edi + 8]
        test    eax, eax
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [ecx + ebp], 0
        je      L_60b901
        mov     dword ptr [esp + 0x70], eax
        inc     byte ptr [eax - 1]
        lea     ecx, [esp + 0x70]
        call    FUN_004129c0
        mov     eax, dword ptr [esp + 0x70]
        mov     esi, ebx
L_60b8af:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_60b8d3
        test    cl, cl
        je      L_60b8cf
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_60b8d3
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_60b8af
L_60b8cf:
        xor     eax, eax
        jmp     L_60b8d8
L_60b8d3:
        sbb     eax, eax
        sbb     eax, -1
L_60b8d8:
        test    eax, eax
        jne     L_60b8e6
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax], ecx
L_60b8e6:
        mov     eax, dword ptr [esp + 0x70]
        test    eax, eax
        je      L_60b901
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_60b901
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_60b901:
        mov     esi, dword ptr [esp + 0x28]
        mov     edx, dword ptr [edi + 0xc]
        mov     cx, word ptr [g_007db0ac]
        lea     eax, [edx + esi*4]
        mov     dx, word ptr [g_007db0ae]
        inc     esi
        add     ebp, 4
        test    ebx, ebx
        mov     word ptr [eax], cx
        mov     word ptr [eax + 2], dx
        mov     dword ptr [esp + 0x28], esi
        je      L_60b93f
        mov     al, byte ptr [ebx - 1]
        dec     ebx
        dec     al
        mov     byte ptr [ebx], al
        jne     L_60b93f
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_60b93f:
        cmp     esi, dword ptr [edi + 0x38]
        jl      L_60b831
L_60b948:
        lea     ecx, [esp + 0x44]
        call    FUN_00416a00
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        pop     ebp
        je      L_60b992
        mov     eax, dword ptr [ecx - 4]
        lea     edi, [ecx - 4]
        lea     esi, [ecx + eax*4]
        dec     eax
        js      L_60b989
        lea     ebx, [eax + 1]
L_60b969:
        mov     eax, dword ptr [esi - 4]
        sub     esi, 4
        test    eax, eax
        je      L_60b986
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_60b986
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_60b986:
        dec     ebx
        jne     L_60b969
L_60b989:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_60b992:
        mov     esi, dword ptr [esp + 0x1c]
        test    esi, esi
        je      L_60b9aa
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_60b9aa:
        lea     ecx, [esp + 0x54]
        call    FUN_00416c60
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        je      L_60b9ce
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_60b9ce
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_60b9ce:
        lea     ecx, [esp + 0x40]
        call    FUN_004169c0
L_60b9d7:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x5c
        ret     8
    }
}
