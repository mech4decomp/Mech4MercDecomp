/* FUN_006bc0b0 - gosScript anim/script update loop (large) */

extern int g_82f394;                /* 0x0082f394 */
extern int g_82f3ac;                /* 0x0082f3ac */
extern int g_82f3c8;                /* 0x0082f3c8 */
extern int g_82f3c0;                /* 0x0082f3c0 */
extern int g_82f348;                /* 0x0082f348 */
extern int g_82f338;                /* 0x0082f338 */
extern unsigned char g_82f3e0;      /* 0x0082f3e0 */
extern int g_82e234;                /* 0x0082e234 */
extern int g_82e23c;                /* 0x0082e23c */
extern int g_82e2cc;                /* 0x0082e2cc */
extern int g_82e244;                /* 0x0082e244 */
extern int g_82e248;                /* 0x0082e248 */
extern int g_82e24c;                /* 0x0082e24c */
extern int g_82e250;                /* 0x0082e250 */
extern int g_82e254;                /* 0x0082e254 */
extern int g_82e26c;                /* 0x0082e26c */
extern int g_82e270;                /* 0x0082e270 */
extern int g_82e274;                /* 0x0082e274 */
extern int g_82e278;                /* 0x0082e278 */
extern int g_82e27c;                /* 0x0082e27c */
extern int g_82f398;                /* 0x0082f398 */
extern int g_82f39c;                /* 0x0082f39c */
extern int g_82f3a0;                /* 0x0082f3a0 */
extern int g_82f3a4;                /* 0x0082f3a4 */
extern int g_82f3a8;                /* 0x0082f3a8 */
extern int g_82f3d4;                /* 0x0082f3d4 */
extern int g_82f3dc;                /* 0x0082f3dc */
extern unsigned char g_82e2da;      /* 0x0082e2da */
extern int g_82f33c;                /* 0x0082f33c */
extern double g_82e2d0;             /* 0x0082e2d0 */
extern int g_858940;                /* 0x00858940 */
extern int g_858944;                /* 0x00858944 */
extern int g_859b90;                /* 0x00859b90 */
extern int g_7b60b4;                /* 0x007b60b4 */
extern float g_76d070;              /* 0x0076d070 */
extern float g_76dd60;              /* 0x0076dd60 */
extern float g_76d064;              /* 0x0076d064 */
extern char g_896b88[];             /* 0x00896b88 */
extern void (*g_76b314)(void);      /* 0x0076b314 */

extern void __cdecl FUN_006bb970(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00723180(void);
extern void __cdecl FUN_00723b40(void);
extern void __cdecl FUN_006bee00(void);
extern void __cdecl FUN_006cbfe0(void);
extern void __cdecl FUN_006bc040(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_00723bd0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_006bbe80(void);
extern void __cdecl FUN_006cc250(void);
extern void __cdecl FUN_006bb9b0(void);

void __declspec(naked) func_006bc0b0(void)
{
    __asm {
        sub esp, 0x3c
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        push ebx
        call FUN_006bb970
        push 0x1
        call FUN_00707e70
        fstp dword ptr [esp+0x14]
        lea eax, [esp+0x30]
        push eax
        lea ecx, [esp+0x1c]
        push ecx
        push ebx
        push ebx
        lea edx, [esp+0x38]
        push edx
        lea eax, [esp+0x38]
        push eax
        mov dword ptr [g_82f394], ebx
        mov dword ptr [g_82f3ac], ebx
        call FUN_00723180
        cmp dword ptr [g_7b60b4], -1
        mov ebp, 0x2
        jnz L_1a5
        fild dword ptr [g_858940]
        mov eax, dword ptr [g_82f3c8]
        push 0x1
        fmul dword ptr [esp+0x28]
        fsub dword ptr [g_76d070]
        fadd dword ptr [g_76dd60]
        fstp dword ptr [esp+0x24]
        mov ecx, dword ptr [esp+0x24]
        fild dword ptr [g_858944]
        and ecx, 0x7fffff
        sub ecx, 0x400000
        mov dword ptr [eax], ecx
        fmul dword ptr [esp+0x2c]
        fsub dword ptr [g_76d070]
        fadd dword ptr [g_76dd60]
        fstp dword ptr [esp+0x24]
        mov edx, dword ptr [esp+0x24]
        and edx, 0x7fffff
        sub edx, 0x400000
        mov dword ptr [eax+0x4], edx
        mov ecx, dword ptr [esp+0x1c]
        mov dword ptr [eax+0x8], ecx
        call FUN_00723b40
        push ebp
        mov dword ptr [g_82e244], eax
        call FUN_00723b40
        push 0x3
        mov dword ptr [g_82e248], eax
        call FUN_00723b40
        push 0x4
        mov dword ptr [g_82e24c], eax
        call FUN_00723b40
        push 0x5
        mov dword ptr [g_82e250], eax
        call FUN_00723b40
        mov dword ptr [g_82e254], eax
        jmp L_1aa
L_1a5:
        call FUN_006bee00
L_1aa:
        mov eax, dword ptr [g_82f348]
        mov edx, dword ptr [g_82f3c0]
        xor edi, edi
        cmp eax, ebx
        mov byte ptr [g_82f3e0], 0x0
        mov dword ptr [g_82f338], eax
        mov dword ptr [g_82e234], edx
        mov dword ptr [g_82e23c], ebx
        mov dword ptr [esp+0x1c], edi
        jz L_26e
L_1db:
        mov ecx, dword ptr [g_858940]
        cmp ecx, dword ptr [g_82e2cc]
        jz L_1f9
        mov edx, dword ptr [eax+0x8]
        push 0x15
        push edx
        call FUN_006cbfe0
        mov eax, dword ptr [g_82f338]
L_1f9:
        mov esi, dword ptr [eax+0x4]
        cmp esi, ebx
        jz L_25b
L_200:
        test byte ptr [esi+0x34], 0x1
        jz L_24e
        cmp dword ptr [esi+0x28], ebx
        jz L_24e
        cmp dword ptr [eax+0xc], ebp
        jz L_24e
        cmp dword ptr [g_859b90], ebx
        jz L_22c
        mov ecx, dword ptr [esi+0x10]
        cmp dword ptr [ecx], 0x2000
        jge L_22c
        mov edx, dword ptr [esp+0x14]
        mov dword ptr [esi+0x1c], edx
        jmp L_255
L_22c:
        push 0x82e234
        inc edi
        push edi
        call FUN_006bc040
        mov eax, dword ptr [g_82e234]
        mov dword ptr [eax], esi
        add eax, 0x4
        mov dword ptr [g_82e234], eax
        mov eax, dword ptr [g_82f338]
        jmp L_255
L_24e:
        mov ecx, dword ptr [esp+0x14]
        mov dword ptr [esi+0x1c], ecx
L_255:
        mov esi, dword ptr [esi]
        cmp esi, ebx
        jnz L_200
L_25b:
        mov eax, dword ptr [eax]
        cmp eax, ebx
        mov dword ptr [g_82f338], eax
        jnz L_1db
        mov dword ptr [esp+0x1c], edi
L_26e:
        mov eax, dword ptr [g_82f3c0]
        mov edx, dword ptr [g_858940]
        push 0x6bcf50
        push 0x4
        push edi
        push eax
        mov dword ptr [g_82e2cc], edx
        mov dword ptr [g_82e23c], edi
        call dword ptr [g_76b314]
        mov esi, dword ptr [g_82f3c0]
        add esp, 0x10
        cmp edi, ebx
        mov byte ptr [esp+0x13], 0x0
        mov dword ptr [g_82e234], esi
        mov dword ptr [esp+0x20], ebx
        jle L_bde
L_2b4:
        mov ecx, dword ptr [g_82e244]
        mov eax, dword ptr [g_82e24c]
        mov edx, dword ptr [g_82e248]
        mov dword ptr [g_82f398], ecx
        mov ecx, dword ptr [g_82e250]
        mov dword ptr [g_82f39c], edx
        mov edx, dword ptr [g_82e254]
        mov dword ptr [g_82f3a0], eax
        mov eax, dword ptr [esi]
        mov dword ptr [g_82f3a4], ecx
        mov ecx, dword ptr [eax+0x8]
        mov dword ptr [g_82f3a8], edx
        cmp dword ptr [ecx+0xc], ebx
        mov dword ptr [g_82f338], ecx
        jz L_31e
        push 0x1
        call FUN_00707e70
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        add esi, 0x4
        fstp dword ptr [eax+0x1c]
        mov dword ptr [g_82e234], esi
        __emit 0xE9  /* __emit: MSVC6 miscomputes forward jmp rel32 (off-by-2) when a call-reloc sits between branch and target */
        __emit 0xAF
        __emit 0x08
        __emit 0x00
        __emit 0x00
L_31e:
        cmp eax, dword ptr [g_82f3d4]
        jnz L_3ac
        push ebx
        push ebx
        push ebx
        push 0x27
        call FUN_00704a80
        test al, 0x2
        jnz L_34e
        mov ecx, dword ptr [g_82f3d4]
        push 0x3
        push ecx
        call FUN_006cbfe0
        mov dword ptr [g_82f3d4], ebx
        jmp L_3a6
L_34e:
        call FUN_00723bd0
        cmp eax, ebx
        mov dword ptr [g_82f3dc], eax
        jz L_3a6
L_35c:
        mov edx, dword ptr [g_82f3d4]
        push 0x12
        push edx
        call FUN_006cbfe0
        mov al, byte ptr [g_82e2da]
        test al, al
        jz L_37c
        mov byte ptr [g_82e2da], 0x0
        jmp L_398
L_37c:
        mov eax, dword ptr [g_82f3dc]
        mov ecx, eax
        and ecx, 0xff
        mov dl, byte ptr [ecx + g_896b88]
        test dl, dl
        jz L_398
        mov byte ptr [g_82e2da], al
L_398:
        call FUN_00723bd0
        cmp eax, ebx
        mov dword ptr [g_82f3dc], eax
        jnz L_35c
L_3a6:
        mov esi, dword ptr [g_82e234]
L_3ac:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx+0x24]
        mov edx, dword ptr [eax+0x4]
        mov ebp, dword ptr [eax]
        mov dword ptr [esp+0x38], edx
        mov edx, dword ptr [eax+0xc]
        mov eax, dword ptr [eax+0x10]
        mov dword ptr [esp+0x44], eax
        mov eax, ecx
        cmp eax, ebx
        mov dword ptr [esp+0x40], edx
        jz L_3f9
L_3ce:
        mov edx, dword ptr [eax+0x20]
        mov edi, dword ptr [edx]
        mov edx, dword ptr [edx+0x4]
        add dword ptr [esp+0x38], edx
        add dword ptr [esp+0x40], edi
        mov ebx, dword ptr [esp+0x44]
        add ebx, edx
        mov edx, dword ptr [eax+0x3c]
        add ebp, edi
        cmp dword ptr [edx], 0x0
        mov dword ptr [esp+0x44], ebx
        jz L_3f9
        mov eax, dword ptr [eax+0x30]
        test eax, eax
        jnz L_3ce
L_3f9:
        mov eax, dword ptr [ecx+0xc]
        cmp dword ptr [eax], 0x0
        mov ebx, 0x3
        mov edi, 0x4
        jnz L_45d
        mov edx, dword ptr [g_82f3c8]
        mov eax, dword ptr [edx]
        cmp eax, ebp
        jl L_42c
        cmp eax, dword ptr [esp+0x40]
        jge L_42c
        mov eax, dword ptr [edx+0x4]
        cmp eax, dword ptr [esp+0x38]
        jl L_42c
        cmp eax, dword ptr [esp+0x44]
        jl L_45d
L_42c:
        mov eax, dword ptr [ecx+0x34]
        test al, 0x2
        jz L_ac8
        and eax, 0xfffffff9
        mov dword ptr [ecx+0x34], eax
        test byte ptr [g_82f3ac], 0x80
        jnz L_ac8
        push 0x7
        push ecx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        jmp L_ac8
L_45d:
        mov al, byte ptr [esp+0x13]
        test al, al
        jnz L_4d0
        mov eax, dword ptr [ecx+0x34]
        test al, 0x2
        jnz L_5ae
        push 0x6
        or eax, 0x2
        push ecx
        mov dword ptr [ecx+0x34], eax
        call FUN_006cbfe0
        test byte ptr [g_82f3ac], 0x40
        jz L_5c8
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [g_82f3c0]
        lea edi, [esi+0x4]
        cmp edi, eax
        mov byte ptr [esp+0x13], 0x1
        ja L_4cb
L_4a2:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx+0x34]
        test al, 0x2
        jz L_4bf
        push 0x7
        and eax, 0xfffffff9
        push ecx
        mov dword ptr [ecx+0x34], eax
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
L_4bf:
        mov eax, dword ptr [g_82f3c0]
        add edi, 0x4
        cmp edi, eax
        jbe L_4a2
L_4cb:
        mov edi, 0x4
L_4d0:
        mov eax, dword ptr [esp+0x18]
        test eax, eax
        jz L_4e2
        mov eax, dword ptr [g_82f3ac]
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x20
        jz L_4ec
L_4e2:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx+0xc]
        cmp dword ptr [edx], 0x0
        jz L_4fc
L_4ec:
        mov eax, dword ptr [esi]
        push 0xd
        push eax
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
L_4fc:
        mov eax, dword ptr [g_82f3ac]
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz L_514
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx+0xc]
        cmp dword ptr [edx], 0x0
        jz L_62b
L_514:
        mov eax, dword ptr [g_82e26c]
        cmp eax, 0x5
        jz L_522
        cmp eax, edi
        jnz L_538
L_522:
        mov eax, dword ptr [esi]
        push 0x8
        push eax
        mov dword ptr [g_82f398], ebx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
L_538:
        mov eax, dword ptr [g_82e244]
        dec eax
        jz L_611
        dec eax
        jz L_5ff
        dec eax
        jnz L_62b
        mov eax, dword ptr [g_82e26c]
        test eax, eax
        jnz L_5d3
        mov ecx, dword ptr [esi]
        push 0x8
        push ecx
        mov dword ptr [g_82f398], 0x1
        call FUN_006cbfe0
        mov edx, dword ptr [g_82e234]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xff
        shr ecx, 0x6
        and ecx, 0x1
        push 0x8
        or ecx, edi
        push eax
        mov dword ptr [g_82f398], ecx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov dword ptr [g_82f398], ebx
        mov dword ptr [g_82e244], 0x5
        jmp L_62b
L_5ae:
        test byte ptr [ecx+0x38], 0x40
        mov dword ptr [g_82f394], ecx
        jz L_4d0
        mov byte ptr [esp+0x13], 0x1
        jmp L_4d0
L_5c8:
        mov esi, dword ptr [g_82e234]
        jmp L_4d0
L_5d3:
        mov esi, dword ptr [esi]
        test byte ptr [esi+0x34], 0x4
        jz L_5e7
        mov dword ptr [g_82f398], edi
        mov dword ptr [g_82e244], edi
L_5e7:
        push 0x8
        push esi
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xfffffffb
        jmp L_628
L_5ff:
        mov edx, dword ptr [esi]
        push 0x8
        push edx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        jmp L_62b
L_611:
        mov eax, dword ptr [esi]
        push 0x8
        push eax
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        or ecx, edi
L_628:
        mov dword ptr [eax+0x34], ecx
L_62b:
        mov eax, dword ptr [g_82f3ac]
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x04
        jz L_643
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx+0xc]
        cmp dword ptr [edx], 0x0
        jz L_74b
L_643:
        mov eax, dword ptr [g_82e270]
        cmp eax, 0x5
        jz L_651
        cmp eax, edi
        jnz L_667
L_651:
        mov eax, dword ptr [esi]
        push 0xa
        push eax
        mov dword ptr [g_82f39c], ebx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
L_667:
        mov eax, dword ptr [g_82e248]
        dec eax
        jz L_731
        dec eax
        jz L_71f
        dec eax
        jnz L_74b
        mov eax, dword ptr [g_82e270]
        test eax, eax
        jnz L_6f3
        mov ecx, dword ptr [esi]
        push 0xa
        push ecx
        mov dword ptr [g_82f39c], 0x1
        call FUN_006cbfe0
        mov edx, dword ptr [g_82e234]
        mov eax, dword ptr [edx]
        push 0xa
        push eax
        mov dword ptr [g_82f39c], ebx
        call FUN_006cbfe0
        mov ecx, dword ptr [g_82e234]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+0x34]
        and edx, 0xff
        shr edx, 0x6
        and edx, 0x1
        push 0xa
        or edx, edi
        push eax
        mov dword ptr [g_82f39c], edx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov dword ptr [g_82f39c], ebx
        mov dword ptr [g_82e248], 0x5
        jmp L_74b
L_6f3:
        mov esi, dword ptr [esi]
        test byte ptr [esi+0x34], 0x4
        jz L_707
        mov dword ptr [g_82f39c], edi
        mov dword ptr [g_82e248], edi
L_707:
        push 0xa
        push esi
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xfffffffb
        jmp L_748
L_71f:
        mov eax, dword ptr [esi]
        push 0xa
        push eax
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        jmp L_74b
L_731:
        mov ecx, dword ptr [esi]
        push 0xa
        push ecx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        or ecx, edi
L_748:
        mov dword ptr [eax+0x34], ecx
L_74b:
        mov eax, dword ptr [g_82f3ac]
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x02
        jz L_763
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx+0xc]
        cmp dword ptr [eax], 0x0
        jz L_854
L_763:
        mov eax, dword ptr [g_82e274]
        cmp eax, 0x5
        jz L_771
        cmp eax, edi
        jnz L_787
L_771:
        mov ecx, dword ptr [esi]
        push 0x9
        push ecx
        mov dword ptr [g_82f3a0], ebx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
L_787:
        mov eax, dword ptr [g_82e24c]
        dec eax
        jz L_83a
        dec eax
        jz L_828
        dec eax
        jnz L_854
        mov eax, dword ptr [g_82e274]
        test eax, eax
        jnz L_7fc
        mov edx, dword ptr [esi]
        push 0x9
        push edx
        mov dword ptr [g_82f3a0], 0x1
        call FUN_006cbfe0
        mov eax, dword ptr [g_82e234]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xff
        shr ecx, 0x6
        and ecx, 0x1
        push 0x9
        or ecx, edi
        push eax
        mov dword ptr [g_82f3a0], ecx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov dword ptr [g_82f3a0], ebx
        mov dword ptr [g_82e24c], 0x5
        jmp L_854
L_7fc:
        mov esi, dword ptr [esi]
        test byte ptr [esi+0x34], 0x4
        jz L_810
        mov dword ptr [g_82f3a0], edi
        mov dword ptr [g_82e24c], edi
L_810:
        push 0x9
        push esi
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xfffffffb
        jmp L_851
L_828:
        mov edx, dword ptr [esi]
        push 0x9
        push edx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        jmp L_854
L_83a:
        mov eax, dword ptr [esi]
        push 0x9
        push eax
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        or ecx, edi
L_851:
        mov dword ptr [eax+0x34], ecx
L_854:
        mov eax, dword ptr [g_82f3ac]
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x08
        jz L_86c
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx+0xc]
        cmp dword ptr [edx], 0x0
        jz L_95e
L_86c:
        mov eax, dword ptr [g_82e278]
        cmp eax, 0x5
        jz L_87a
        cmp eax, edi
        jnz L_890
L_87a:
        mov eax, dword ptr [esi]
        push 0x8
        push eax
        mov dword ptr [g_82f3a4], ebx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
L_890:
        mov eax, dword ptr [g_82e250]
        dec eax
        jz L_944
        dec eax
        jz L_932
        dec eax
        jnz L_95e
        mov eax, dword ptr [g_82e278]
        test eax, eax
        jnz L_906
        mov ecx, dword ptr [esi]
        push 0xb
        push ecx
        mov dword ptr [g_82f3a4], 0x1
        call FUN_006cbfe0
        mov edx, dword ptr [g_82e234]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xff
        shr ecx, 0x6
        and ecx, 0x1
        push 0xb
        or ecx, edi
        push eax
        mov dword ptr [g_82f3a4], ecx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov dword ptr [g_82f3a4], ebx
        mov dword ptr [g_82e250], 0x5
        jmp L_95e
L_906:
        mov esi, dword ptr [esi]
        test byte ptr [esi+0x34], 0x4
        jz L_91a
        mov dword ptr [g_82f3a4], edi
        mov dword ptr [g_82e250], edi
L_91a:
        push 0xb
        push esi
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xfffffffb
        jmp L_95b
L_932:
        mov edx, dword ptr [esi]
        push 0xb
        push edx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        jmp L_95e
L_944:
        mov eax, dword ptr [esi]
        push 0xb
        push eax
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        or ecx, edi
L_95b:
        mov dword ptr [eax+0x34], ecx
L_95e:
        mov eax, dword ptr [g_82f3ac]
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x10
        jz L_976
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx+0xc]
        cmp dword ptr [edx], 0x0
        jz L_a68
L_976:
        mov eax, dword ptr [g_82e27c]
        cmp eax, 0x5
        jz L_984
        cmp eax, edi
        jnz L_99a
L_984:
        mov eax, dword ptr [esi]
        push 0xc
        push eax
        mov dword ptr [g_82f3a8], ebx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
L_99a:
        mov eax, dword ptr [g_82e254]
        dec eax
        jz L_a4e
        dec eax
        jz L_a3c
        dec eax
        jnz L_a68
        mov eax, dword ptr [g_82e27c]
        test eax, eax
        jnz L_a10
        mov ecx, dword ptr [esi]
        push 0xc
        push ecx
        mov dword ptr [g_82f3a8], 0x1
        call FUN_006cbfe0
        mov edx, dword ptr [g_82e234]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xff
        shr ecx, 0x6
        and ecx, 0x1
        push 0xc
        or ecx, edi
        push eax
        mov dword ptr [g_82f3a8], ecx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov dword ptr [g_82f3a8], ebx
        mov dword ptr [g_82e254], 0x5
        jmp L_a68
L_a10:
        mov esi, dword ptr [esi]
        test byte ptr [esi+0x34], 0x4
        jz L_a24
        mov dword ptr [g_82f3a8], edi
        mov dword ptr [g_82e254], edi
L_a24:
        push 0xc
        push esi
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        and ecx, 0xfffffffb
        jmp L_a65
L_a3c:
        mov edx, dword ptr [esi]
        push 0xc
        push edx
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        jmp L_a68
L_a4e:
        mov eax, dword ptr [esi]
        push 0xc
        push eax
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x34]
        or ecx, edi
L_a65:
        mov dword ptr [eax+0x34], ecx
L_a68:
        mov eax, dword ptr [g_82f394]
        test eax, eax
        jnz L_ac8
        mov eax, dword ptr [g_82f3c0]
        mov ecx, dword ptr [esi]
        lea edi, [esi+0x4]
        cmp edi, eax
        mov dword ptr [g_82f394], ecx
        ja L_ac8
L_a85:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax+0x34]
        test cl, 0x2
        jz L_ab5
        and ecx, 0xfffffff9
        mov dword ptr [eax+0x34], ecx
        test byte ptr [g_82f3ac], 0x80
        jnz L_aac
        push 0x7
        push eax
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
L_aac:
        test byte ptr [g_82f3ac], 0x80
        jnz L_ac3
L_ab5:
        mov eax, dword ptr [g_82f3c0]
        add edi, 0x4
        cmp edi, eax
        jbe L_a85
        jmp L_ac8
L_ac3:
        mov byte ptr [esp+0x13], 0x1
L_ac8:
        mov eax, dword ptr [g_82e248]
        mov ecx, dword ptr [g_82e24c]
        mov edi, dword ptr [esi]
        mov edx, dword ptr [g_82e244]
        mov dword ptr [g_82f39c], eax
        mov eax, dword ptr [g_82e254]
        mov dword ptr [g_82f3a0], ecx
        mov ecx, dword ptr [edi+0x14]
        mov dword ptr [g_82f3a8], eax
        mov eax, dword ptr [ecx]
        test eax, eax
        mov dword ptr [g_82f398], edx
        mov edx, dword ptr [g_82e250]
        mov dword ptr [g_82f3a4], edx
        mov dword ptr [esp+0x2c], eax
        jle L_b96
        fild dword ptr [esp+0x2c]
        fdivr dword ptr [g_76d064]
        fld dword ptr [esp+0x14]
        fsub dword ptr [edi+0x1c]
        fld st(0)
        fdiv st(0), st(2)
        call FUN_0075db4a
        mov ecx, dword ptr [g_82f338]
        mov ebx, eax
        mov eax, dword ptr [ecx+0x20]
        mov dword ptr [esp+0x2c], ebx
        fild dword ptr [esp+0x2c]
        xor ebp, ebp
        cmp eax, 0x1
        fmul st(0), st(2)
        fsubr st(0), st(1)
        fstp dword ptr [esp+0x2c]
        fstp st(0)
        fstp st(0)
        jz L_b87
L_b53:
        mov edx, dword ptr [edi+0x34]
        and edx, 0x8
        cmp dl, 0x8
        jz L_b87
        cmp ebp, ebx
        jge L_b87
        push 0xf
        push edi
        inc ebp
        call FUN_006cbfe0
        mov esi, dword ptr [g_82e234]
        mov edi, dword ptr [esi]
        mov eax, dword ptr [edi+0x18]
        cmp dword ptr [eax], 0x0
        jz L_b87
        mov ecx, dword ptr [g_82f338]
        cmp dword ptr [ecx+0x20], 0x1
        jnz L_b53
L_b87:
        fld dword ptr [esp+0x14]
        mov edx, dword ptr [esi]
        fsub dword ptr [esp+0x2c]
        fstp dword ptr [edx+0x1c]
        jmp L_bbe
L_b96:
        cmp eax, -1
        jnz L_bbe
        mov eax, dword ptr [g_82f338]
        cmp dword ptr [eax+0x20], 0x1
        jz L_bbe
        mov edx, dword ptr [edi+0x34]
        and edx, 0x8
        cmp dl, 0x8
        jz L_bbe
        mov eax, dword ptr [esp+0x14]
        mov dword ptr [ecx], 0x0
        mov dword ptr [edi+0x1c], eax
L_bbe:
        mov edi, dword ptr [esp+0x1c]
        add esi, 0x4
        mov dword ptr [g_82e234], esi
L_bcd:
        xor ebx, ebx
        mov eax, dword ptr [esp+0x20]
        inc eax
        cmp eax, edi
        mov dword ptr [esp+0x20], eax
        jl L_2b4
L_bde:
        mov ecx, dword ptr [g_82f348]
        mov edx, dword ptr [g_82f3c0]
        xor edi, edi
        cmp ecx, ebx
        mov dword ptr [g_82f338], ecx
        mov dword ptr [g_82e234], edx
        jz L_cc9e
L_cc00:
        cmp dword ptr [ecx+0x20], 0x1
        mov ebp, dword ptr [ecx]
        jnz L_cc10
        push ecx
        call FUN_006bbe80
        jmp L_cc8e
L_cc10:
        mov eax, dword ptr [ecx+0x4]
        cmp eax, ebx
        jz L_cc4a
L_cc17:
        mov edx, dword ptr [eax+0x34]
        mov esi, dword ptr [eax]
        and edx, 0x8
        cmp dl, 0x8
        jnz L_cc44
        mov ecx, dword ptr [g_82f33c]
        cmp ecx, dword ptr [g_82f394]
        jnz L_cc38
        mov dword ptr [g_82f394], ebx
L_cc38:
        push eax
        call FUN_006cc250
        mov ecx, dword ptr [g_82f338]
L_cc44:
        cmp esi, ebx
        mov eax, esi
        jnz L_cc17
L_cc4a:
        mov esi, dword ptr [ecx+0x4]
        cmp esi, ebx
        jz L_cc8e
L_cc51:
        mov eax, dword ptr [esi+0x34]
        test al, 0x8
        jnz L_cc88
        test al, 0x1
        jz L_cc88
        cmp dword ptr [esi+0x28], ebx
        jz L_cc88
        cmp dword ptr [ecx+0xc], 0x2
        jz L_cc88
        push 0x82e234
        inc edi
        push edi
        call FUN_006bc040
        mov eax, dword ptr [g_82e234]
        mov ecx, dword ptr [g_82f338]
        mov dword ptr [eax], esi
        add eax, 0x4
        mov dword ptr [g_82e234], eax
L_cc88:
        mov esi, dword ptr [esi]
        cmp esi, ebx
        jnz L_cc51
L_cc8e:
        cmp ebp, ebx
        mov ecx, ebp
        mov dword ptr [g_82f338], ecx
        jnz L_cc00
L_cc9e:
        push ebx
        lea edx, [edi+0x1]
        push edx
        call FUN_006bc040
        mov eax, dword ptr [g_82f3c0]
        push 0x6bce70
        push 0x4
        push edi
        push eax
        call dword ptr [g_76b314]
        fld dword ptr [esp+0x24]
        mov ecx, dword ptr [g_82f3c0]
        fstp qword ptr [g_82e2d0]
        mov edx, dword ptr [g_82e244]
        mov eax, dword ptr [g_82e248]
        mov dword ptr [ecx+edi*4], ebx
        mov ecx, dword ptr [g_82e24c]
        add esp, 0x10
        mov dword ptr [g_82e26c], edx
        mov dword ptr [g_82e270], eax
        mov dword ptr [g_82e274], ecx
        call FUN_006bb9b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3c
        ret
    }
}

