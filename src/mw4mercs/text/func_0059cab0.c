/* FUN_0059cab0 - 1003 bytes */
/* __stdcall, this in ecx, ret 8 */

__declspec(naked) void FUN_0059cab0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern void __cdecl FUN_10041255a(void);
extern void __cdecl FUN_10041254c(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10041253b(void);
extern int DAT_0076b420;
extern void __cdecl FUN_100412372(void);
extern void __cdecl FUN_1004124c8(void);
extern void __cdecl FUN_100408250(void);
extern void __cdecl FUN_10041233a(void);
extern void __cdecl FUN_100412490(void);
extern void __cdecl FUN_100408218(void);
extern void __cdecl FUN_100412302(void);
extern void __cdecl FUN_100412458(void);
extern void __cdecl FUN_1004081e0(void);
extern void __cdecl FUN_1004122ca(void);
extern void __cdecl FUN_100412420(void);
extern void __cdecl FUN_1004081a8(void);
extern void __cdecl FUN_100412282(void);
extern void __cdecl FUN_1004123d8(void);
extern void __cdecl FUN_100408160(void);
extern int DAT_0076b320;
extern void __cdecl FUN_100408123(void);
extern void __cdecl FUN_100408108(void);
extern int DAT_0059ce9c;
__asm {
sub     esp, 0x28
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    0x76b768
        lea     ecx, [esp + 0x10]
        mov     esi, 1
        mov     ebx, 0xbfa
        /* __emit: call 0x412570 - MSVC6 can't encode call to absolute address */
        call FUN_10041255a
        push    0x76b768
        lea     ecx, [esp + 0x14]
        /* __emit: call 0x412570 - MSVC6 can't encode call to absolute address */
        call FUN_10041254c
        mov     eax, [esp + 0x3c]
        cmp     eax, -1
        jne     loc_59caea
        mov     eax, [edi + 0x28]
loc_59caea:
        lea     edi, [eax*8]
        sub     edi, eax
        inc     edi
loc_59caf4:
        cmp     esi, 2
        jne     loc_59cb08
        cmp     edi, 0x1c
        jle     loc_59cb3d
        sub     edi, 0x1c
        mov     esi, 3
        jmp     loc_59caf4

loc_59cb08:
        cmp     esi, 4
        je      loc_59cb32
        cmp     esi, 6
        je      loc_59cb32
        cmp     esi, 9
        je      loc_59cb32
        cmp     esi, 0xb
        je      loc_59cb32
        cmp     edi, 0x1f
        jle     loc_59cb3d
        sub     edi, 0x1f
        inc     esi
        cmp     esi, 0xd
        jne     loc_59caf4
        mov     esi, 1
        inc     ebx
        jmp     loc_59caf4

loc_59cb32:
        cmp     edi, 0x1e
        jle     loc_59cb3d
        sub     edi, 0x1e
        inc     esi
        jmp     loc_59caf4

loc_59cb3d:
        lea     eax, [esi - 1]
        cmp     eax, 0xb
        ja      loc_59ccff
        jmp     dword ptr [eax*4 + DAT_0059ce9c]

        /* case 1 (esi=2): */
case_59cb50:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea7b
        jmp     loc_59ccf2

        /* case 2 (esi=3): */
case_59cb74:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea7c
        jmp     loc_59ccf2

        /* case 3 (esi=4): */
case_59cb98:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea7d
        jmp     loc_59ccf2

        /* case 4 (esi=5): */
case_59cbbc:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea7e
        jmp     loc_59ccf2

        /* case 5 (esi=6): */
case_59cbe0:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea7f
        jmp     loc_59ccf2

        /* case 6 (esi=7): */
case_59cc04:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea80
        jmp     loc_59ccf2

        /* case 7 (esi=8): */
case_59cc28:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea81
        jmp     loc_59ccf2

        /* case 8 (esi=9): */
case_59cc4c:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea82
        jmp     loc_59ccf2

        /* case 9 (esi=10): */
case_59cc70:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea83
        jmp     loc_59ccf2

        /* case 10 (esi=11): */
case_59cc91:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea84
        jmp     loc_59ccf2

        /* case 11 (esi=12): */
case_59ccb2:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea85
        jmp     loc_59ccf2

        /* case 12 (esi=13): */
case_59ccd3:
        /* __emit: mov eax, dword ptr [0x7dab44] - absolute address load */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov edx, dword ptr [0x7dab40] - absolute address load */
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    0xea86

loc_59ccf2:
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x10]
        /* __emit: call 0x412780 - MSVC6 can't encode call to absolute address */
        call FUN_10041253b

loc_59ccff:
        /* __emit: mov esi, dword ptr [0x76b420] - absolute address load */
        mov esi, dword ptr [DAT_0076b420]
        push    edi
        lea     eax, [esp + 0x18]
        push    0x76b9a8
        push    eax
        /* __emit: call esi - indirect call */
        call esi
        mov     edx, [esp + 0x1c]
        add     esp, 0xc
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x44]
        /* __emit: call 0x4125e0 - MSVC6 can't encode call to absolute address */
        call FUN_100412372
        push    eax
        lea     ecx, [esp + 0x14]
        /* __emit: call 0x412740 - MSVC6 can't encode call to absolute address */
        call FUN_1004124c8
        mov     eax, [esp + 0x3c]
        test    eax, eax
        je      loc_59cd4d
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     loc_59cd4d
        push    eax
        /* __emit: call 0x4084e0 - MSVC6 can't encode call to absolute address */
        call FUN_100408250
        add     esp, 4

loc_59cd4d:
        mov     eax, [esp + 0x10]
        push    0x76cb8c
        push    eax
        lea     ecx, [esp + 0x44]
        /* __emit: call 0x4125e0 - MSVC6 can't encode call to absolute address */
        call FUN_10041233a
        push    eax
        lea     ecx, [esp + 0x14]
        /* __emit: call 0x412740 - MSVC6 can't encode call to absolute address */
        call FUN_100412490
        mov     eax, [esp + 0x3c]
        test    eax, eax
        je      loc_59cd85
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     loc_59cd85
        push    eax
        /* __emit: call 0x4084e0 - MSVC6 can't encode call to absolute address */
        call FUN_100408218
        add     esp, 4

loc_59cd85:
        mov     ecx, [esp + 0xc]
        mov     edx, [esp + 0x10]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x44]
        /* __emit: call 0x4125e0 - MSVC6 can't encode call to absolute address */
        call FUN_100412302
        push    eax
        lea     ecx, [esp + 0x14]
        /* __emit: call 0x412740 - MSVC6 can't encode call to absolute address */
        call FUN_100412458
        mov     eax, [esp + 0x3c]
        test    eax, eax
        je      loc_59cdbd
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     loc_59cdbd
        push    eax
        /* __emit: call 0x4084e0 - MSVC6 can't encode call to absolute address */
        call FUN_1004081e0
        add     esp, 4

loc_59cdbd:
        mov     eax, [esp + 0x10]
        push    0x76cb8c
        push    eax
        lea     ecx, [esp + 0x44]
        /* __emit: call 0x4125e0 - MSVC6 can't encode call to absolute address */
        call FUN_1004122ca
        push    eax
        lea     ecx, [esp + 0x14]
        /* __emit: call 0x412740 - MSVC6 can't encode call to absolute address */
        call FUN_100412420
        mov     eax, [esp + 0x3c]
        test    eax, eax
        je      loc_59cdf5
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     loc_59cdf5
        push    eax
        /* __emit: call 0x4084e0 - MSVC6 can't encode call to absolute address */
        call FUN_1004081a8
        add     esp, 4

loc_59cdf5:
        push    ebx
        lea     ecx, [esp + 0x18]
        push    0x76b9a8
        push    ecx
        /* __emit: call esi - indirect call */
        call esi
        mov     eax, [esp + 0x1c]
        add     esp, 0xc
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        lea     ecx, [esp + 0x44]
        /* __emit: call 0x4125e0 - MSVC6 can't encode call to absolute address */
        call FUN_100412282
        push    eax
        lea     ecx, [esp + 0x14]
        /* __emit: call 0x412740 - MSVC6 can't encode call to absolute address */
        call FUN_1004123d8
        mov     eax, [esp + 0x3c]
        test    eax, eax
        je      loc_59ce3d
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     loc_59ce3d
        push    eax
        /* __emit: call 0x4084e0 - MSVC6 can't encode call to absolute address */
        call FUN_100408160
        add     esp, 4

loc_59ce3d:
        mov     edx, [esp + 0x10]
        or      ecx, -1
        mov     edi, edx
        xor     eax, eax
        repne scasb
        not     ecx
        push    ecx
        mov     ecx, [esp + 0x3c]
        push    edx
        push    ecx
        /* __emit: call dword ptr [0x76b320] - indirect call through import */
        call dword ptr [DAT_0076b320]
        mov     eax, [esp + 0x1c]
        add     esp, 0xc
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        je      loc_59ce7a
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     loc_59ce7a
        push    eax
        /* __emit: call 0x4084e0 - MSVC6 can't encode call to absolute address */
        call FUN_100408123
        add     esp, 4

loc_59ce7a:
        /* __emit: mov eax, [esp] - MSVC6 drops zero displacement, encodes as 8B 04 24 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        je      loc_59ce95
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     loc_59ce95
        push    eax
        /* __emit: call 0x4084e0 - MSVC6 can't encode call to absolute address */
        call FUN_100408108
        add     esp, 4

loc_59ce95:
        add     esp, 0x28
        ret     8
    }


}
