/* auto-built transcription draft for FUN_5e0093a0 (size=19306) */

extern int g_5e035010;
extern int g_5e035aa0;
extern int g_5e035aa4;
extern int g_5e0383b8;
extern void __cdecl FUN_5e002340(void);
extern void __cdecl FUN_5e0023e0(void);
extern void __cdecl FUN_5e003cc0(void);
extern void __cdecl FUN_5e0040b0(void);
extern void __cdecl FUN_5e005220(void);
extern void __cdecl FUN_5e005420(void);
extern void __cdecl FUN_5e00e220(void);
extern void __cdecl FUN_5e00e660(void);
extern void __cdecl FUN_5e012eb0(void);
extern void __cdecl FUN_5e028100(void);
extern void __cdecl FUN_5e028260(void);

__declspec(naked) void __stdcall FUN_5e0093a0(void)
{
    __asm {        push ebp
        mov ebp,esp
        sub esp,0x34
        push esi
        mov esi,dword ptr [ebp + 0x8]
        mov eax,dword ptr [esi + 0x4874]
        and eax,0x2
        test al,al
        jnz L_5e0093ce
        push 0x5e03847c
        call dword ptr [g_5e035010]
        mov eax,0x80004005
        pop esi
        mov esp,ebp
        pop ebp
        ret 0x20
L_5e0093ce:
        push ebx
        push edi
        mov dword ptr [ebp + 0x8],0x0
        fnstcw word ptr [ebp + -0x18]
        mov ecx,dword ptr [ebp + -0x18]
        and ecx,0xfcff
        or ecx,0x3f
        mov dword ptr [ebp + -0x14],ecx
        fldcw word ptr [ebp + -0x14]
        mov eax,dword ptr [ebp + 0x10]
        mov edi,dword ptr [ebp + 0x18]
        cmp eax,0x1c4
        ja L_5e00b9b7
        cmp eax,0x1c4
        jz L_5e009699
        sub eax,0x112
        jz L_5e00946c
        sub eax,0x4
        jz L_5e00946c
        sub eax,0xac
        jnz L_5e00b9c5
        test edi,edi
        jbe L_5e009462
        mov edx,dword ptr [ebp + 0x14]
        mov ecx,0x5e57a4cc
        lea eax,[edx + 0x8]
        mov edx,edi
L_5e009430:
        mov edi,dword ptr [eax + -0x8]
        add eax,0x1c
        mov dword ptr [ecx + -0x4],edi
        mov edi,dword ptr [eax + -0x20]
        mov dword ptr [ecx],edi
        mov edi,dword ptr [eax + -0x1c]
        mov dword ptr [ecx + 0x4],edi
        mov edi,dword ptr [eax + -0x18]
        mov dword ptr [ecx + 0xc],edi
        mov edi,dword ptr [eax + -0x14]
        mov dword ptr [ecx + 0x10],edi
        mov edi,dword ptr [eax + -0x10]
        mov dword ptr [ecx + 0x14],edi
        mov edi,dword ptr [eax + -0xc]
        mov dword ptr [ecx + 0x18],edi
        add ecx,0x20
        dec edx
        jnz L_5e009430
L_5e009462:
        mov ebx,0x5e57a4c8
        jmp L_5e00ba1e
L_5e00946c:
        mov ecx,esi
        call FUN_5e003cc0
        test edi,edi
        jbe L_5e00968f
        mov eax,dword ptr [ebp + 0x14]
        mov ecx,0x5e57a4c8
        sub ecx,eax
        mov ebx,0x5e57a4cc
        mov dword ptr [ebp + -0x1c],ecx
        mov ecx,0x5e57a4d8
        sub ecx,eax
        lea edi,[eax + 0x8]
        mov dword ptr [ebp + -0x20],ecx
        mov ecx,0x5e57a4dc
        sub ecx,eax
        mov dword ptr [ebp + -0x24],ecx
        mov ecx,0x5e57a4d4
        sub ecx,eax
        mov dword ptr [ebp + -0x28],ecx
        mov ecx,0x5e57a4d0
        sub ecx,eax
        mov eax,dword ptr [ebp + 0x18]
        mov dword ptr [ebp + -0x10],ecx
        mov dword ptr [ebp + -0x14],eax
L_5e0094be:
        mov ecx,dword ptr [edi + -0x8]
        mov edx,dword ptr [edi + -0x4]
        mov eax,dword ptr [edi]
        mov dword ptr [ebx + -0x4],ecx
        mov ecx,dword ptr [ebp + -0x1c]
        mov dword ptr [ebx],edx
        mov edx,dword ptr [edi + 0x10]
        mov dword ptr [edi + ecx*0x1],eax
        mov eax,dword ptr [ebp + -0x20]
        mov ecx,dword ptr [edi + 0x14]
        test byte ptr [esi + 0x45a9],0x20
        mov dword ptr [edi + eax*0x1],edx
        mov edx,dword ptr [ebp + -0x24]
        mov eax,dword ptr [ebp + -0x28]
        mov dword ptr [edi + edx*0x1],ecx
        mov dword ptr [edi + eax*0x1],0xff000000
        jz L_5e009507
        mov edx,dword ptr [ebp + -0x10]
        mov ecx,dword ptr [esi + 0x41d0]
        mov dword ptr [edi + edx*0x1],ecx
        jmp L_5e00967c
L_5e009507:
        fld dword ptr [edi + 0xc]
        fmul dword ptr [esi + 0x41dc]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esi + 0x41d8]
        faddp   st(1), st(0)
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esi + 0x41d4]
        faddp   st(1), st(0)
        fst dword ptr [ebp + 0x14]
        fcomp dword ptr [g_5e035aa0]
        fnstsw ax
        test ah,0x1
        jz L_5e00953f
        mov dword ptr [ebp + 0x14],0x0
        jmp L_5e009556
L_5e00953f:
        fld dword ptr [ebp + 0x14]
        fcomp dword ptr [g_5e035aa4]
        fnstsw ax
        test ah,0x41
        jnz L_5e009556
        mov dword ptr [ebp + 0x14],0x3f800000
L_5e009556:
        mov ecx,esi
        call FUN_5e00e660
        fld dword ptr [ebp + 0x14]
        fmul dword ptr [esi + 0x41b0]
        test eax,eax
        fadd dword ptr [esi + 0x41c0]
        jz L_5e0095bd
        mov eax,dword ptr [esi + 0x41d0]
        fstp dword ptr [ebp + 0x14]
        shr eax,0x18
        fld dword ptr [ebp + 0x14]
        fmul dword ptr [g_5e0383b8]
        fistp dword ptr [ebp + -0x4]
        mov ecx,dword ptr [ebp + -0x4]
        test ecx,ecx
        jge L_5e009593
        xor ecx,ecx
        jmp L_5e0095a0
L_5e009593:
        cmp ecx,0xff
        jle L_5e0095a3
        mov ecx,0xff
L_5e0095a0:
        mov dword ptr [ebp + -0x4],ecx
L_5e0095a3:
        shl eax,0x8
        or eax,ecx
        shl eax,0x8
        or eax,ecx
        shl eax,0x8
        or eax,ecx
        mov ecx,dword ptr [ebp + -0x10]
        mov dword ptr [edi + ecx*0x1],eax
        jmp L_5e00967c
L_5e0095bd:
        fstp dword ptr [ebp + -0x2c]
        fld dword ptr [ebp + 0x14]
        fmul dword ptr [esi + 0x41b4]
        mov eax,dword ptr [esi + 0x41d0]
        shr eax,0x18
        fadd dword ptr [esi + 0x41c4]
        fstp dword ptr [ebp + -0x30]
        fld dword ptr [ebp + 0x14]
        fmul dword ptr [esi + 0x41b8]
        fadd dword ptr [esi + 0x41c8]
        fstp dword ptr [ebp + 0x14]
        fld dword ptr [ebp + -0x2c]
        fmul dword ptr [g_5e0383b8]
        fistp dword ptr [ebp + 0x10]
        mov ecx,dword ptr [ebp + 0x10]
        test ecx,ecx
        jge L_5e009609
        mov dword ptr [ebp + 0x10],0x0
        jmp L_5e009618
L_5e009609:
        cmp ecx,0xff
        jle L_5e009618
        mov dword ptr [ebp + 0x10],0xff
L_5e009618:
        fld dword ptr [ebp + -0x30]
        fmul dword ptr [g_5e0383b8]
        fistp dword ptr [ebp + -0x8]
        mov edx,dword ptr [ebp + -0x8]
        test edx,edx
        jge L_5e00962f
        xor edx,edx
        jmp L_5e00963c
L_5e00962f:
        cmp edx,0xff
        jle L_5e00963f
        mov edx,0xff
L_5e00963c:
        mov dword ptr [ebp + -0x8],edx
L_5e00963f:
        fld dword ptr [ebp + 0x14]
        fmul dword ptr [g_5e0383b8]
        fistp dword ptr [ebp + -0xc]
        mov ecx,dword ptr [ebp + -0xc]
        test ecx,ecx
        jge L_5e009656
        xor ecx,ecx
        jmp L_5e009663
L_5e009656:
        cmp ecx,0xff
        jle L_5e009666
        mov ecx,0xff
L_5e009663:
        mov dword ptr [ebp + -0xc],ecx
L_5e009666:
        shl eax,0x8
        or eax,dword ptr [ebp + 0x10]
        shl eax,0x8
        or eax,edx
        mov edx,dword ptr [ebp + -0x10]
        shl eax,0x8
        or eax,ecx
        mov dword ptr [edi + edx*0x1],eax
L_5e00967c:
        mov eax,dword ptr [ebp + -0x14]
        add ebx,0x20
        add edi,0x20
        dec eax
        mov dword ptr [ebp + -0x14],eax
        jnz L_5e0094be
L_5e00968f:
        mov ebx,0x5e57a4c8
        jmp L_5e00ba1e
L_5e009699:
        mov edi,dword ptr [ebp + 0x24]
        mov eax,edi
        and eax,0x4
        test al,al
        jnz L_5e00abf4
        mov ecx,dword ptr [ebp + 0x18]
        mov edx,dword ptr [ebp + 0x14]
        push ecx
        push 0x5e03a4c8
        push edx
        mov ecx,esi
        call FUN_5e00e220
        mov ecx,dword ptr [ebp + 0xc]
        mov eax,edi
        and eax,0x8
        test al,al
        lea eax,[ecx + -0x1]
        jnz L_5e00a68f
        cmp eax,0x5
        ja L_5e00deee
        jmp dword ptr [eax*0x4 + 0x5e00df0c]
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x2]
        test eax,eax
        jle L_5e00a600
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov ecx,dword ptr [ebp + 0x1c]
        add ecx,0x4
        shr edx,0x1
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],edx
L_5e009706:
        mov edi,dword ptr [ebp + 0x18]
        xor edx,edx
        xor eax,eax
        xor ecx,ecx
        mov dx,word ptr [edi]
        mov ax,word ptr [edi + -0x4]
        mov cx,word ptr [edi + -0x2]
        lea edi,[edx + edx*0x2]
        lea edx,[edx + edi*0x4]
        shl edx,0x2
        mov dword ptr [ebp + 0x14],edx
        mov edx,dword ptr [edx + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],edx
        lea edx,[ecx + ecx*0x2]
        lea ebx,[ecx + edx*0x4]
        lea edx,[eax + eax*0x2]
        shl ebx,0x2
        lea edi,[eax + edx*0x4]
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        shl edi,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [ebp + 0xc]
        and edx,ecx
        test dl,0x3f
        jnz L_5e0097ad
        or eax,dword ptr [ebx + 0x5e03a4e8]
        or eax,ecx
        and eax,0x3f
        jz L_5e00978a
        push eax
        mov eax,dword ptr [ebp + 0x14]
        lea edx,[ebx + 0x5e03a4c8]
        lea ecx,[eax + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push ecx
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0097ad
L_5e00978a:
        mov ecx,dword ptr [ebp + 0x14]
        lea eax,[ebx + 0x5e03a4c8]
        lea edx,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push edx
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e0097ad:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0097ca
        fld dword ptr [esi + 0x4580]
        jmp L_5e0097d0
L_5e0097ca:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e0097d0:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0097f6
        fld dword ptr [esi + 0x4584]
        jmp L_5e0097fc
L_5e0097f6:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e0097fc:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009822
        fld dword ptr [esi + 0x4588]
        jmp L_5e009828
L_5e009822:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e009828:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00984e
        fld dword ptr [esi + 0x458c]
        jmp L_5e009854
L_5e00984e:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e009854:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ebx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009871
        fld dword ptr [ebp + 0x20]
        jmp L_5e009877
L_5e009871:
        fld dword ptr [ebx + 0x5e03a4c8]
L_5e009877:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ebx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009897
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00989d
L_5e009897:
        fld dword ptr [ebx + 0x5e03a4c8]
L_5e00989d:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ebx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0098bd
        fld dword ptr [ebp + 0xc]
        jmp L_5e0098c3
L_5e0098bd:
        fld dword ptr [ebx + 0x5e03a4cc]
L_5e0098c3:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ebx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e0098e5
        fstp st(0)
        fld dword ptr [ebx + 0x5e03a4cc]
L_5e0098e5:
        mov ecx,dword ptr [ebp + 0x14]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009905
        fld dword ptr [ebp + 0x20]
        jmp L_5e00990b
L_5e009905:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00990b:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009928
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00992e
L_5e009928:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00992e:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00994b
        fld dword ptr [ebp + 0xc]
        jmp L_5e009951
L_5e00994b:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e009951:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e009970
        fstp st(0)
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e009970:
        mov ecx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x24]
        add ecx,0x6
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],eax
        jnz L_5e009706
        jmp L_5e00a600
        mov edi,dword ptr [ebp + 0x20]
        mov edx,dword ptr [ebp + 0x1c]
        test edi,edi
        jbe L_5e009a51
        xor eax,eax
        mov ax,word ptr [edx]
        fld dword ptr [esi + 0x4580]
        lea ecx,[eax + eax*0x2]
        lea ecx,[eax + ecx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0099ca
        fld dword ptr [esi + 0x4580]
        jmp L_5e0099d0
L_5e0099ca:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e0099d0:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0099f3
        fld dword ptr [esi + 0x4584]
        jmp L_5e0099f9
L_5e0099f3:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e0099f9:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009a1c
        fld dword ptr [esi + 0x4588]
        jmp L_5e009a22
L_5e009a1c:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e009a22:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009a45
        fld dword ptr [esi + 0x458c]
        jmp L_5e009a4b
L_5e009a45:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e009a4b:
        fstp dword ptr [esi + 0x458c]
L_5e009a51:
        lea ecx,[edi + -0x2]
        test ecx,ecx
        jle L_5e009bc5
        xor eax,eax
        mov dword ptr [ebp + 0x18],ecx
        mov ax,word ptr [edx]
        lea edi,[eax + eax*0x2]
        lea eax,[eax + edi*0x4]
        shl eax,0x2
        add edx,0x4
        mov dword ptr [ebp + 0x14],eax
        mov dword ptr [ebp + 0xc],edx
L_5e009a76:
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edx]
        mov ax,word ptr [edx + -0x2]
        lea edx,[ecx + ecx*0x2]
        lea edi,[ecx + edx*0x4]
        lea ecx,[eax + eax*0x2]
        shl edi,0x2
        lea eax,[eax + ecx*0x4]
        mov edx,dword ptr [edi + 0x5e03a4e8]
        shl eax,0x2
        mov ecx,dword ptr [eax + 0x5e03a4e8]
        mov ebx,ecx
        and ebx,edx
        mov edx,dword ptr [ebp + 0x14]
        mov edx,dword ptr [edx + 0x5e03a4e8]
        and ebx,edx
        test bl,0x3f
        jnz L_5e009b05
        or ecx,dword ptr [edi + 0x5e03a4e8]
        or ecx,edx
        and ecx,0x3f
        jz L_5e009ae2
        push ecx
        mov ecx,dword ptr [ebp + 0x14]
        lea edx,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e009b05
L_5e009ae2:
        mov ecx,dword ptr [ebp + 0x14]
        lea edx,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e009b05:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009b22
        fld dword ptr [esi + 0x4580]
        jmp L_5e009b28
L_5e009b22:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e009b28:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009b4b
        fld dword ptr [esi + 0x4584]
        jmp L_5e009b51
L_5e009b4b:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e009b51:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009b74
        fld dword ptr [esi + 0x4588]
        jmp L_5e009b7a
L_5e009b74:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e009b7a:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009b9d
        fld dword ptr [esi + 0x458c]
        jmp L_5e009ba3
L_5e009b9d:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e009ba3:
        mov edx,dword ptr [ebp + 0xc]
        mov eax,dword ptr [ebp + 0x18]
        add edx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0xc],edx
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e009a76
        mov edi,dword ptr [ebp + 0x20]
        mov edx,dword ptr [ebp + 0x1c]
L_5e009bc5:
        cmp edi,0x1
        jbe L_5e00a600
        xor eax,eax
        mov ax,word ptr [edx + edi*0x2 + -0x2]
L_5e009bd5:
        fld dword ptr [esi + 0x4580]
        lea ecx,[eax + eax*0x2]
        lea ecx,[eax + ecx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009bfb
        fld dword ptr [esi + 0x4580]
        jmp L_5e009c01
L_5e009bfb:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e009c01:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009c24
        fld dword ptr [esi + 0x4584]
        jmp L_5e009c2a
L_5e009c24:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e009c2a:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009c4d
        fld dword ptr [esi + 0x4588]
        jmp L_5e009c53
L_5e009c4d:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e009c53:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a1e2
        fld dword ptr [esi + 0x458c]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00a600
        mov edx,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        xor edi,edi
        lea eax,[edx + -0x3]
        test eax,eax
        jle L_5e009f37
        add ebx,0x4
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x24],ebx
        mov dword ptr [ebp + -0x10],eax
        lea edx,[eax + eax*0x1]
        mov dword ptr [ebp + -0x30],edx
        jmp L_5e009cad
L_5e009caa:
        mov ebx,dword ptr [ebp + 0x24]
L_5e009cad:
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [ebx]
        mov ax,word ptr [ebx + -0x4]
        xor edi,edi
        xor edx,edx
        mov di,word ptr [ebx + -0x2]
        mov dx,word ptr [ebx + 0x2]
        lea ebx,[ecx + ecx*0x2]
        mov dword ptr [ebp + -0x14],edx
        lea ebx,[ecx + ebx*0x4]
        shl ebx,0x2
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],ecx
        lea ecx,[edi + edi*0x2]
        lea edi,[edi + ecx*0x4]
        shl edi,0x2
        mov ecx,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0x10],ecx
        lea ecx,[eax + eax*0x2]
        lea eax,[eax + ecx*0x4]
        mov ecx,dword ptr [ebp + 0x10]
        shl eax,0x2
        mov dword ptr [ebp + 0x14],eax
        mov eax,dword ptr [eax + 0x5e03a4e8]
        mov dword ptr [ebp + 0x18],eax
        and eax,ecx
        mov ecx,dword ptr [ebp + 0xc]
        and eax,ecx
        test al,0x3f
        jnz L_5e009d65
        mov eax,dword ptr [ebp + 0x18]
        mov edx,dword ptr [ebp + 0x10]
        or eax,edx
        or eax,ecx
        and eax,0x3f
        jz L_5e009d3f
        mov ecx,dword ptr [ebp + 0x14]
        lea edx,[ebx + 0x5e03a4c8]
        push eax
        push edx
        lea eax,[edi + 0x5e03a4c8]
        lea edx,[ecx + 0x5e03a4c8]
        push eax
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e009d62
L_5e009d3f:
        mov edx,dword ptr [ebp + 0x14]
        lea eax,[ebx + 0x5e03a4c8]
        push eax
        lea ecx,[edi + 0x5e03a4c8]
        lea eax,[edx + 0x5e03a4c8]
        push ecx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e009d62:
        mov edx,dword ptr [ebp + -0x14]
L_5e009d65:
        lea ecx,[edx + edx*0x2]
        lea edx,[edx + ecx*0x4]
        mov ecx,dword ptr [edi + 0x5e03a4e8]
        shl edx,0x2
        mov dword ptr [ebp + 0xc],edx
        mov eax,dword ptr [edx + 0x5e03a4e8]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        and edx,ecx
        test dl,0x3f
        jnz L_5e009de0
        or eax,dword ptr [edi + 0x5e03a4e8]
        or eax,ecx
        and eax,0x3f
        jz L_5e009dbd
        mov ecx,dword ptr [ebp + 0xc]
        push eax
        lea eax,[ebx + 0x5e03a4c8]
        push eax
        lea edx,[ecx + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e009de0
L_5e009dbd:
        mov edx,dword ptr [ebp + 0xc]
        lea ecx,[ebx + 0x5e03a4c8]
        push ecx
        lea ecx,[edi + 0x5e03a4c8]
        lea eax,[edx + 0x5e03a4c8]
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e009de0:
        mov ecx,dword ptr [ebp + 0x14]
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009e00
        fld dword ptr [esi + 0x4580]
        jmp L_5e009e06
L_5e009e00:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e009e06:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009e2c
        fld dword ptr [esi + 0x4584]
        jmp L_5e009e32
L_5e009e2c:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e009e32:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009e58
        fld dword ptr [esi + 0x4588]
        jmp L_5e009e5e
L_5e009e58:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e009e5e:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009e84
        fld dword ptr [esi + 0x458c]
        jmp L_5e009e8a
L_5e009e84:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e009e8a:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009ea7
        fld dword ptr [ebp + 0x14]
        jmp L_5e009ead
L_5e009ea7:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e009ead:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e009eca
        fld dword ptr [ebp + 0xc]
        jmp L_5e009ed0
L_5e009eca:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e009ed0:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009eed
        fld dword ptr [ebp + 0x18]
        jmp L_5e009ef3
L_5e009eed:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e009ef3:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e009f12
        fstp st(0)
        fld dword ptr [edi + 0x5e03a4cc]
L_5e009f12:
        mov ecx,dword ptr [ebp + 0x24]
        mov eax,dword ptr [ebp + -0x10]
        add ecx,0x4
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x24],ecx
        mov dword ptr [ebp + -0x10],eax
        jnz L_5e009caa
        mov edi,dword ptr [ebp + -0x30]
        mov ebx,dword ptr [ebp + 0x1c]
        mov edx,dword ptr [ebp + 0x20]
L_5e009f37:
        lea eax,[edi + 0x3]
        cmp eax,edx
        jnz L_5e00a090
        xor edx,edx
        xor eax,eax
        mov dx,word ptr [ebx + edi*0x2 + 0x4]
        mov ax,word ptr [ebx + edi*0x2]
        xor ecx,ecx
        mov cx,word ptr [ebx + edi*0x2 + 0x2]
        lea edi,[edx + edx*0x2]
        lea edx,[edx + edi*0x4]
        shl edx,0x2
        mov edi,dword ptr [edx + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],edi
        lea edi,[ecx + ecx*0x2]
        lea ecx,[ecx + edi*0x4]
        lea edi,[eax + eax*0x2]
        shl ecx,0x2
        lea edi,[eax + edi*0x4]
        mov ebx,dword ptr [ecx + 0x5e03a4e8]
        shl edi,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0x18],eax
        and eax,ebx
        and eax,dword ptr [ebp + 0xc]
        test al,0x3f
        jnz L_5e009fe6
        mov ebx,dword ptr [ecx + 0x5e03a4e8]
        mov eax,dword ptr [ebp + 0x18]
        or eax,ebx
        mov ebx,dword ptr [ebp + 0xc]
        or eax,ebx
        and eax,0x3f
        jz L_5e009fc6
        push eax
        lea edx,[edx + 0x5e03a4c8]
        lea eax,[ecx + 0x5e03a4c8]
        push edx
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e009fe6
L_5e009fc6:
        lea edx,[edx + 0x5e03a4c8]
        lea eax,[ecx + 0x5e03a4c8]
        push edx
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e009fe6:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a003
        fld dword ptr [esi + 0x4580]
        jmp L_5e00a009
L_5e00a003:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00a009:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a02c
        fld dword ptr [esi + 0x4584]
        jmp L_5e00a032
L_5e00a02c:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00a032:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a055
        fld dword ptr [esi + 0x4588]
        jmp L_5e00a05b
L_5e00a055:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00a05b:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a07e
        fld dword ptr [esi + 0x458c]
        jmp L_5e00a084
L_5e00a07e:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00a084:
        mov edx,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x458c]
L_5e00a090:
        cmp edx,0x2
        jbe L_5e00a600
        xor eax,eax
        mov ax,word ptr [ebx + edx*0x2 + -0x4]
        fld dword ptr [esi + 0x4580]
        lea ecx,[eax + eax*0x2]
        lea ecx,[eax + ecx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a0c6
        fld dword ptr [esi + 0x4580]
        jmp L_5e00a0cc
L_5e00a0c6:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00a0cc:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a0f2
        fld dword ptr [esi + 0x4584]
        jmp L_5e00a0f8
L_5e00a0f2:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00a0f8:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a11e
        fld dword ptr [esi + 0x4588]
        jmp L_5e00a124
L_5e00a11e:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00a124:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a14a
        fld dword ptr [esi + 0x458c]
        jmp L_5e00a150
L_5e00a14a:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00a150:
        xor eax,eax
        mov ax,word ptr [ebx + edx*0x2 + -0x2]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        lea edx,[eax + eax*0x2]
        lea ecx,[eax + edx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a17d
        fld dword ptr [ebp + 0x20]
        jmp L_5e00a183
L_5e00a17d:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00a183:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a1a0
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00a1a6
L_5e00a1a0:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00a1a6:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a1c3
        fld dword ptr [ebp + 0x14]
        jmp L_5e00a1c9
L_5e00a1c3:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00a1c9:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00a1e8
        fstp st(0)
L_5e00a1e2:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00a1e8:
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00a600
        mov eax,dword ptr [ebp + 0x20]
        dec eax
        test eax,eax
        jle L_5e00a600
        mov ecx,dword ptr [ebp + 0x1c]
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0xc],ecx
        mov dword ptr [ebp + 0x18],eax
L_5e00a20b:
        mov edx,dword ptr [ebp + 0xc]
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edx + 0x2]
        mov ax,word ptr [edx]
        lea edx,[ecx + ecx*0x2]
        lea ebx,[ecx + edx*0x4]
        lea edx,[eax + eax*0x2]
        shl ebx,0x2
        lea edi,[eax + edx*0x4]
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        shl edi,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e00a274
        or eax,ecx
        and eax,0x3f
        jz L_5e00a25f
        push eax
        lea eax,[ebx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00a274
L_5e00a25f:
        lea edx,[ebx + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e002340
L_5e00a274:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a291
        fld dword ptr [esi + 0x4580]
        jmp L_5e00a297
L_5e00a291:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00a297:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a2bd
        fld dword ptr [esi + 0x4584]
        jmp L_5e00a2c3
L_5e00a2bd:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00a2c3:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a2e9
        fld dword ptr [esi + 0x4588]
        jmp L_5e00a2ef
L_5e00a2e9:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00a2ef:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a315
        fld dword ptr [esi + 0x458c]
        jmp L_5e00a31b
L_5e00a315:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00a31b:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ebx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a338
        fld dword ptr [ebp + 0x20]
        jmp L_5e00a33e
L_5e00a338:
        fld dword ptr [ebx + 0x5e03a4c8]
L_5e00a33e:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ebx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a35b
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00a361
L_5e00a35b:
        fld dword ptr [ebx + 0x5e03a4c8]
L_5e00a361:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ebx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a37e
        fld dword ptr [ebp + 0x14]
        jmp L_5e00a384
L_5e00a37e:
        fld dword ptr [ebx + 0x5e03a4cc]
L_5e00a384:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ebx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00a3a3
        fstp st(0)
        fld dword ptr [ebx + 0x5e03a4cc]
L_5e00a3a3:
        mov ecx,dword ptr [ebp + 0xc]
        mov eax,dword ptr [ebp + 0x18]
        add ecx,0x4
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0xc],ecx
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e00a20b
        jmp L_5e00a600
        mov ecx,dword ptr [ebp + 0x20]
        lea eax,[ecx + -0x1]
        test eax,eax
        jle L_5e00a4fe
        mov edx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0xc],eax
        mov dword ptr [ebp + 0x14],edx
L_5e00a3db:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edx]
        mov cx,word ptr [edx + 0x2]
        lea edi,[eax + eax*0x2]
        lea edx,[ecx + ecx*0x2]
        lea edi,[eax + edi*0x4]
        lea ecx,[ecx + edx*0x4]
        shl edi,0x2
        shl ecx,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov ebx,eax
        and ebx,edx
        test bl,0x3f
        jnz L_5e00a441
        or eax,edx
        and eax,0x3f
        jz L_5e00a42c
        push eax
        lea eax,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00a441
L_5e00a42c:
        lea edx,[ecx + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e002340
L_5e00a441:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a45e
        fld dword ptr [esi + 0x4580]
        jmp L_5e00a464
L_5e00a45e:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00a464:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a487
        fld dword ptr [esi + 0x4584]
        jmp L_5e00a48d
L_5e00a487:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00a48d:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a4b0
        fld dword ptr [esi + 0x4588]
        jmp L_5e00a4b6
L_5e00a4b0:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00a4b6:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a4d9
        fld dword ptr [esi + 0x458c]
        jmp L_5e00a4df
L_5e00a4d9:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00a4df:
        mov ecx,dword ptr [ebp + 0x14]
        mov eax,dword ptr [ebp + 0xc]
        dec eax
        lea edx,[ecx + 0x2]
        mov dword ptr [ebp + 0xc],eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x14],edx
        jnz L_5e00a3db
        mov ecx,dword ptr [ebp + 0x20]
L_5e00a4fe:
        cmp ecx,0x1
        jbe L_5e00a600
        mov edx,dword ptr [ebp + 0x1c]
        xor eax,eax
        mov ax,word ptr [edx + ecx*0x2 + -0x2]
        jmp L_5e009bd5
        mov eax,dword ptr [ebp + 0x20]
        test eax,eax
        jle L_5e00a600
        mov ebx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0x20],eax
L_5e00a527:
        xor eax,eax
        mov ax,word ptr [ebx]
        lea edx,[eax + eax*0x2]
        lea edi,[eax + edx*0x4]
        shl edi,0x2
        test byte ptr [edi + 0x5e03a4e8],0x3f
        jnz L_5e00a54c
        lea eax,[edi + 0x5e03a4c8]
        mov ecx,esi
        push eax
        call FUN_5e0023e0
L_5e00a54c:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a569
        fld dword ptr [esi + 0x4580]
        jmp L_5e00a56f
L_5e00a569:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00a56f:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a592
        fld dword ptr [esi + 0x4584]
        jmp L_5e00a598
L_5e00a592:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00a598:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00a5bb
        fld dword ptr [esi + 0x4588]
        jmp L_5e00a5c1
L_5e00a5bb:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00a5c1:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00a5e4
        fld dword ptr [esi + 0x458c]
        jmp L_5e00a5ea
L_5e00a5e4:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00a5ea:
        mov eax,dword ptr [ebp + 0x20]
        add ebx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x20],eax
        jnz L_5e00a527
L_5e00a600:
        mov ecx,dword ptr [esi + 0x4550]
        xor edx,edx
        mov dword ptr [ebp + -0x34],ecx
        mov dword ptr [ebp + -0x30],edx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4580]
        fnstsw ax
        test ah,0x41
        jnz L_5e00a626
        fstp dword ptr [esi + 0x4580]
        jmp L_5e00a650
L_5e00a626:
        mov eax,dword ptr [esi + 0x4558]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4584]
        fnstsw ax
        test ah,0x1
        jz L_5e00a64e
        fstp dword ptr [esi + 0x4584]
        jmp L_5e00a650
L_5e00a64e:
        fstp st(0)
L_5e00a650:
        mov ecx,dword ptr [esi + 0x4554]
        mov dword ptr [ebp + -0x30],edx
        mov dword ptr [ebp + -0x34],ecx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4588]
        fnstsw ax
        test ah,0x41
        jnz L_5e00a677
        fstp dword ptr [esi + 0x4588]
        jmp L_5e00def9
L_5e00a677:
        mov eax,dword ptr [esi + 0x455c]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        jmp L_5e00dc79
L_5e00a68f:
        cmp eax,0x5
        ja L_5e00deee
        jmp dword ptr [eax*0x4 + 0x5e00df24]
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x2]
        test eax,eax
        jle L_5e00def9
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov ecx,dword ptr [ebp + 0x1c]
        shr edx,0x1
        lea edi,[ecx + 0x4]
        mov dword ptr [ebp + 0x1c],edx
        mov dword ptr [ebp + 0x20],edi
L_5e00a6c5:
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edi + -0x2]
        mov ax,word ptr [edi + -0x4]
        xor edx,edx
        mov dx,word ptr [edi]
        lea edi,[ecx + ecx*0x2]
        lea ecx,[ecx + edi*0x4]
        shl ecx,0x2
        mov edi,dword ptr [ecx + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],edi
        lea edi,[eax + eax*0x2]
        lea eax,[eax + edi*0x4]
        lea edi,[edx + edx*0x2]
        shl eax,0x2
        lea edi,[edx + edi*0x4]
        mov ebx,dword ptr [eax + 0x5e03a4e8]
        shl edi,0x2
        mov edx,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],edx
        and edx,ebx
        and edx,dword ptr [ebp + 0x14]
        test dl,0x3f
        jnz L_5e00a767
        mov ebx,dword ptr [eax + 0x5e03a4e8]
        mov edx,dword ptr [ebp + 0xc]
        or edx,ebx
        mov ebx,dword ptr [ebp + 0x14]
        or edx,ebx
        and edx,0x3f
        jz L_5e00a747
        push edx
        lea edx,[edi + 0x5e03a4c8]
        push edx
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00a767
L_5e00a747:
        lea edx,[edi + 0x5e03a4c8]
        lea ecx,[ecx + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00a767:
        mov edi,dword ptr [ebp + 0x20]
        mov eax,dword ptr [ebp + 0x1c]
        add edi,0x6
        dec eax
        mov dword ptr [ebp + 0x20],edi
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e00a6c5
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        lea ebx,[eax + -0x2]
        test ebx,ebx
        jle L_5e00def9
        mov ecx,dword ptr [ebp + 0x1c]
        xor eax,eax
        mov dword ptr [ebp + 0xc],ebx
        mov ax,word ptr [ecx]
        lea edx,[eax + eax*0x2]
        lea edi,[eax + edx*0x4]
        lea edx,[ecx + 0x4]
        shl edi,0x2
        mov dword ptr [ebp + 0x20],edi
        mov dword ptr [ebp + 0x1c],edx
L_5e00a7ad:
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edx]
        mov ax,word ptr [edx + -0x2]
        mov edi,dword ptr [edi + 0x5e03a4e8]
        lea edx,[ecx + ecx*0x2]
        mov ebx,edi
        lea ecx,[ecx + edx*0x4]
        shl ecx,0x2
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],edx
        lea edx,[eax + eax*0x2]
        lea eax,[eax + edx*0x4]
        shl eax,0x2
        mov edx,dword ptr [eax + 0x5e03a4e8]
        and ebx,edx
        mov edx,dword ptr [ebp + 0x14]
        and ebx,edx
        test bl,0x3f
        jnz L_5e00a841
        or edi,dword ptr [eax + 0x5e03a4e8]
        or edi,edx
        and edi,0x3f
        jz L_5e00a81c
        push edi
        mov edi,dword ptr [ebp + 0x20]
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[edi + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00a844
L_5e00a81c:
        mov edi,dword ptr [ebp + 0x20]
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[edi + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        jmp L_5e00a844
L_5e00a841:
        mov edi,dword ptr [ebp + 0x20]
L_5e00a844:
        mov edx,dword ptr [ebp + 0x1c]
        mov eax,dword ptr [ebp + 0xc]
        add edx,0x2
        dec eax
        mov dword ptr [ebp + 0x1c],edx
        mov dword ptr [ebp + 0xc],eax
        jnz L_5e00a7ad
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        add eax,-0x3
        xor edi,edi
        test eax,eax
        jle L_5e00a9ce
        add ebx,0x4
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x18],ebx
        mov dword ptr [ebp + 0x24],eax
        lea ecx,[eax + eax*0x1]
        mov dword ptr [ebp + -0x30],ecx
L_5e00a884:
        mov edi,dword ptr [ebp + 0x18]
        xor ecx,ecx
        xor eax,eax
        xor edx,edx
        mov cx,word ptr [edi + -0x2]
        mov ax,word ptr [edi + -0x4]
        mov dx,word ptr [edi]
        xor ebx,ebx
        mov bx,word ptr [edi + 0x2]
        lea edi,[ecx + ecx*0x2]
        mov dword ptr [ebp + 0x10],ebx
        lea ebx,[edx + edx*0x2]
        lea edi,[ecx + edi*0x4]
        shl edi,0x2
        lea ebx,[edx + ebx*0x4]
        mov ecx,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],ecx
        lea ecx,[eax + eax*0x2]
        shl ebx,0x2
        lea eax,[eax + ecx*0x4]
        mov edx,dword ptr [ebx + 0x5e03a4e8]
        shl eax,0x2
        mov dword ptr [ebp + 0xc],edx
        mov ecx,dword ptr [eax + 0x5e03a4e8]
        and edx,ecx
        mov ecx,dword ptr [ebp + 0x14]
        and edx,ecx
        test dl,0x3f
        jnz L_5e00a934
        mov edx,dword ptr [eax + 0x5e03a4e8]
        mov ecx,dword ptr [ebp + 0xc]
        or ecx,edx
        mov edx,dword ptr [ebp + 0x14]
        or ecx,edx
        and ecx,0x3f
        jz L_5e00a914
        lea edx,[ebx + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[edi + 0x5e03a4c8]
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00a934
L_5e00a914:
        lea ecx,[ebx + 0x5e03a4c8]
        lea edx,[edi + 0x5e03a4c8]
        push ecx
        lea eax,[eax + 0x5e03a4c8]
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00a934:
        mov eax,dword ptr [ebp + 0x10]
        lea ecx,[eax + eax*0x2]
        lea eax,[eax + ecx*0x4]
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        shl eax,0x2
        mov dword ptr [ebp + 0x14],eax
        mov eax,dword ptr [eax + 0x5e03a4e8]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [edi + 0x5e03a4e8]
        and edx,ecx
        test dl,0x3f
        jnz L_5e00a9b2
        or eax,dword ptr [ebx + 0x5e03a4e8]
        or eax,ecx
        and eax,0x3f
        jz L_5e00a98f
        mov ecx,dword ptr [ebp + 0x14]
        push eax
        lea eax,[ebx + 0x5e03a4c8]
        push eax
        lea edx,[ecx + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00a9b2
L_5e00a98f:
        mov edx,dword ptr [ebp + 0x14]
        lea ecx,[ebx + 0x5e03a4c8]
        push ecx
        lea ecx,[edi + 0x5e03a4c8]
        lea eax,[edx + 0x5e03a4c8]
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00a9b2:
        mov ecx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x24]
        add ecx,0x4
        dec eax
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],eax
        jnz L_5e00a884
        mov edi,dword ptr [ebp + -0x30]
        mov ebx,dword ptr [ebp + 0x1c]
L_5e00a9ce:
        mov eax,dword ptr [ebp + 0x20]
        lea edx,[edi + 0x3]
        cmp edx,eax
        jnz L_5e00def9
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [ebx + edi*0x2 + 0x2]
        mov ax,word ptr [ebx + edi*0x2]
        xor edx,edx
        mov dx,word ptr [ebx + edi*0x2 + 0x4]
        lea edi,[ecx + ecx*0x2]
        lea ecx,[ecx + edi*0x4]
        shl ecx,0x2
        mov edi,dword ptr [ecx + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],edi
        lea edi,[eax + eax*0x2]
        lea eax,[eax + edi*0x4]
        lea edi,[edx + edx*0x2]
        shl eax,0x2
        lea edi,[edx + edi*0x4]
        mov ebx,dword ptr [eax + 0x5e03a4e8]
        shl edi,0x2
        mov edx,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],edx
        and edx,ebx
        and edx,dword ptr [ebp + 0x14]
        test dl,0x3f
        jnz L_5e00def9
        mov ebx,dword ptr [eax + 0x5e03a4e8]
        mov edx,dword ptr [ebp + 0xc]
        or edx,ebx
        mov ebx,dword ptr [ebp + 0x14]
        or edx,ebx
        and edx,0x3f
        jz L_5e00aa68
        push edx
        lea edx,[edi + 0x5e03a4c8]
        push edx
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00def9
L_5e00aa68:
        lea edx,[edi + 0x5e03a4c8]
        lea ecx,[ecx + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        dec eax
        test eax,eax
        jle L_5e00def9
        mov edx,dword ptr [ebp + 0x1c]
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x20],edx
        mov dword ptr [ebp + 0x1c],eax
L_5e00aaa5:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edx]
        mov cx,word ptr [edx + 0x2]
        lea edi,[eax + eax*0x2]
        lea edx,[ecx + ecx*0x2]
        lea eax,[eax + edi*0x4]
        lea ecx,[ecx + edx*0x4]
        shl eax,0x2
        shl ecx,0x2
        mov edi,dword ptr [eax + 0x5e03a4e8]
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov ebx,edi
        and ebx,edx
        test bl,0x3f
        jnz L_5e00ab0b
        or edi,edx
        and edi,0x3f
        jz L_5e00aaf6
        lea ecx,[ecx + 0x5e03a4c8]
        push edi
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00ab0b
L_5e00aaf6:
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e002340
L_5e00ab0b:
        mov edx,dword ptr [ebp + 0x20]
        mov eax,dword ptr [ebp + 0x1c]
        add edx,0x4
        dec eax
        mov dword ptr [ebp + 0x20],edx
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e00aaa5
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        dec eax
        test eax,eax
        jle L_5e00def9
        mov edx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0x1c],eax
        mov dword ptr [ebp + 0x20],edx
L_5e00ab37:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edx]
        mov cx,word ptr [edx + 0x2]
        lea edi,[eax + eax*0x2]
        lea edx,[ecx + ecx*0x2]
        lea eax,[eax + edi*0x4]
        lea ecx,[ecx + edx*0x4]
        shl eax,0x2
        shl ecx,0x2
        mov edi,dword ptr [eax + 0x5e03a4e8]
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov ebx,edi
        and ebx,edx
        test bl,0x3f
        jnz L_5e00ab9d
        or edi,edx
        and edi,0x3f
        jz L_5e00ab88
        lea ecx,[ecx + 0x5e03a4c8]
        push edi
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00ab9d
L_5e00ab88:
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e002340
L_5e00ab9d:
        mov eax,dword ptr [ebp + 0x20]
        lea edx,[eax + 0x2]
        mov eax,dword ptr [ebp + 0x1c]
        dec eax
        mov dword ptr [ebp + 0x20],edx
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e00ab37
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        test eax,eax
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
        mov ebx,eax
L_5e00abc4:
        xor eax,eax
        mov ax,word ptr [edi]
        lea ecx,[eax + eax*0x2]
        lea eax,[eax + ecx*0x4]
        shl eax,0x2
        test byte ptr [eax + 0x5e03a4e8],0x3f
        jnz L_5e00abe9
        lea edx,[eax + 0x5e03a4c8]
        mov ecx,esi
        push edx
        call FUN_5e0023e0
L_5e00abe9:
        add edi,0x2
        dec ebx
        jnz L_5e00abc4
        jmp L_5e00def9
L_5e00abf4:
        mov ecx,dword ptr [ebp + 0xc]
        mov eax,edi
        and eax,0x8
        test al,al
        lea eax,[ecx + -0x1]
        jnz L_5e00b758
        cmp eax,0x5
        ja L_5e00deee
        jmp dword ptr [eax*0x4 + 0x5e00df3c]
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x2]
        test eax,eax
        jle L_5e00b6c9
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov ecx,dword ptr [ebp + 0x1c]
        add ecx,0x4
        shr edx,0x1
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x10],edx
L_5e00ac3d:
        mov edi,dword ptr [ebp + 0x18]
        xor ecx,ecx
        xor edx,edx
        xor eax,eax
        mov cx,word ptr [edi + -0x2]
        mov dx,word ptr [edi]
        mov ax,word ptr [edi + -0x4]
        mov edi,dword ptr [ebp + 0x14]
        shl edx,0x5
        shl ecx,0x5
        add edx,edi
        shl eax,0x5
        lea ebx,[ecx + edi*0x1]
        add edi,eax
        push edx
        push ebx
        push edi
        lea ecx,[esi + 0x400c]
        mov dword ptr [ebp + 0x24],edx
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00ac8e
        fld dword ptr [esi + 0x4580]
        jmp L_5e00ac90
L_5e00ac8e:
        fld dword ptr [edi]
L_5e00ac90:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00acb2
        fld dword ptr [esi + 0x4584]
        jmp L_5e00acb4
L_5e00acb2:
        fld dword ptr [edi]
L_5e00acb4:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00acd7
        fld dword ptr [esi + 0x4588]
        jmp L_5e00acda
L_5e00acd7:
        fld dword ptr [edi + 0x4]
L_5e00acda:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00acfd
        fld dword ptr [esi + 0x458c]
        jmp L_5e00ad00
L_5e00acfd:
        fld dword ptr [edi + 0x4]
L_5e00ad00:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00ad19
        fld dword ptr [ebp + 0x20]
        jmp L_5e00ad1b
L_5e00ad19:
        fld dword ptr [ebx]
L_5e00ad1b:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00ad37
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00ad39
L_5e00ad37:
        fld dword ptr [ebx]
L_5e00ad39:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00ad56
        fld dword ptr [ebp + 0xc]
        jmp L_5e00ad59
L_5e00ad56:
        fld dword ptr [ebx + 0x4]
L_5e00ad59:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00ad75
        fstp st(0)
        fld dword ptr [ebx + 0x4]
L_5e00ad75:
        mov ecx,dword ptr [ebp + 0x24]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00ad91
        fld dword ptr [ebp + 0x20]
        jmp L_5e00ad93
L_5e00ad91:
        fld dword ptr [ecx]
L_5e00ad93:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00adac
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00adae
L_5e00adac:
        fld dword ptr [ecx]
L_5e00adae:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00adc8
        fld dword ptr [ebp + 0xc]
        jmp L_5e00adcb
L_5e00adc8:
        fld dword ptr [ecx + 0x4]
L_5e00adcb:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00ade4
        fstp st(0)
        fld dword ptr [ecx + 0x4]
L_5e00ade4:
        mov ecx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x10]
        add ecx,0x6
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x10],eax
        jnz L_5e00ac3d
        jmp L_5e00b6c9
        mov edi,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        mov edx,dword ptr [ebp + 0x14]
        test edi,edi
        jbe L_5e00aeaa
        xor eax,eax
        mov ax,word ptr [ebx]
        fld dword ptr [esi + 0x4580]
        shl eax,0x5
        fld dword ptr [eax + edx*0x1]
        lea ecx,[eax + edx*0x1]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00ae3b
        fld dword ptr [esi + 0x4580]
        jmp L_5e00ae3d
L_5e00ae3b:
        fld dword ptr [ecx]
L_5e00ae3d:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00ae5c
        fld dword ptr [esi + 0x4584]
        jmp L_5e00ae5e
L_5e00ae5c:
        fld dword ptr [ecx]
L_5e00ae5e:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00ae7e
        fld dword ptr [esi + 0x4588]
        jmp L_5e00ae81
L_5e00ae7e:
        fld dword ptr [ecx + 0x4]
L_5e00ae81:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00aea1
        fld dword ptr [esi + 0x458c]
        jmp L_5e00aea4
L_5e00aea1:
        fld dword ptr [ecx + 0x4]
L_5e00aea4:
        fstp dword ptr [esi + 0x458c]
L_5e00aeaa:
        lea eax,[edi + -0x2]
        test eax,eax
        jle L_5e00af93
        xor ecx,ecx
        mov dword ptr [ebp + 0x18],eax
        mov cx,word ptr [ebx]
        shl ecx,0x5
        add ecx,edx
        add ebx,0x2
        mov dword ptr [ebp + 0xc],ecx
L_5e00aec8:
        mov ecx,dword ptr [ebp + 0x14]
        xor eax,eax
        mov ax,word ptr [ebx + 0x2]
        mov edx,dword ptr [ebp + 0xc]
        shl eax,0x5
        push edx
        lea edi,[eax + ecx*0x1]
        xor eax,eax
        mov ax,word ptr [ebx]
        push edi
        shl eax,0x5
        add eax,ecx
        lea ecx,[esi + 0x400c]
        push eax
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00af0b
        fld dword ptr [esi + 0x4580]
        jmp L_5e00af0d
L_5e00af0b:
        fld dword ptr [edi]
L_5e00af0d:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00af2c
        fld dword ptr [esi + 0x4584]
        jmp L_5e00af2e
L_5e00af2c:
        fld dword ptr [edi]
L_5e00af2e:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00af4e
        fld dword ptr [esi + 0x4588]
        jmp L_5e00af51
L_5e00af4e:
        fld dword ptr [edi + 0x4]
L_5e00af51:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00af71
        fld dword ptr [esi + 0x458c]
        jmp L_5e00af74
L_5e00af71:
        fld dword ptr [edi + 0x4]
L_5e00af74:
        mov eax,dword ptr [ebp + 0x18]
        add ebx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e00aec8
        mov ebx,dword ptr [ebp + 0x1c]
        mov edi,dword ptr [ebp + 0x20]
        mov edx,dword ptr [ebp + 0x14]
L_5e00af93:
        cmp edi,0x1
        jbe L_5e00b6c9
        xor ecx,ecx
        mov cx,word ptr [ebx + edi*0x2 + -0x2]
        shl ecx,0x5
L_5e00afa6:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ecx + edx*0x1]
        add ecx,edx
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00afc2
        fld dword ptr [esi + 0x4580]
        jmp L_5e00afc4
L_5e00afc2:
        fld dword ptr [ecx]
L_5e00afc4:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00afe3
        fld dword ptr [esi + 0x4584]
        jmp L_5e00afe5
L_5e00afe3:
        fld dword ptr [ecx]
L_5e00afe5:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b005
        fld dword ptr [esi + 0x4588]
        jmp L_5e00b008
L_5e00b005:
        fld dword ptr [ecx + 0x4]
L_5e00b008:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b3b5
        fld dword ptr [esi + 0x458c]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00b6c9
        mov edx,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        xor ecx,ecx
        lea eax,[edx + -0x3]
        test eax,eax
        jle L_5e00b1d0
        add ebx,0x4
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0xc],ebx
        mov dword ptr [ebp + -0x14],eax
        lea edx,[eax + eax*0x1]
        mov dword ptr [ebp + -0x30],edx
L_5e00b05a:
        mov edi,dword ptr [ebp + 0xc]
        xor ecx,ecx
        xor edx,edx
        xor eax,eax
        mov cx,word ptr [edi + -0x2]
        mov dx,word ptr [edi]
        mov ax,word ptr [edi + -0x4]
        mov edi,dword ptr [ebp + 0x14]
        shl edx,0x5
        shl ecx,0x5
        add edx,edi
        shl eax,0x5
        lea ebx,[ecx + edi*0x1]
        add edi,eax
        push edx
        push ebx
        push edi
        lea ecx,[esi + 0x400c]
        mov dword ptr [ebp + 0x24],edx
        call FUN_5e012eb0
        mov edx,dword ptr [ebp + 0xc]
        mov eax,dword ptr [ebp + 0x24]
        xor ecx,ecx
        push eax
        mov cx,word ptr [edx + 0x2]
        mov eax,dword ptr [ebp + 0x14]
        shl ecx,0x5
        add ecx,eax
        push ecx
        push ebx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b0cd
        fld dword ptr [esi + 0x4580]
        jmp L_5e00b0cf
L_5e00b0cd:
        fld dword ptr [edi]
L_5e00b0cf:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b0f1
        fld dword ptr [esi + 0x4584]
        jmp L_5e00b0f3
L_5e00b0f1:
        fld dword ptr [edi]
L_5e00b0f3:
        fst dword ptr [ebp + 0x24]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b116
        fld dword ptr [esi + 0x4588]
        jmp L_5e00b119
L_5e00b116:
        fld dword ptr [edi + 0x4]
L_5e00b119:
        fst dword ptr [ebp + 0x10]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b13c
        fld dword ptr [esi + 0x458c]
        jmp L_5e00b13f
L_5e00b13c:
        fld dword ptr [edi + 0x4]
L_5e00b13f:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b158
        fld dword ptr [ebp + 0x18]
        jmp L_5e00b15a
L_5e00b158:
        fld dword ptr [ebx]
L_5e00b15a:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x24]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b173
        fld dword ptr [ebp + 0x24]
        jmp L_5e00b175
L_5e00b173:
        fld dword ptr [ebx]
L_5e00b175:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x10]
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b18f
        fld dword ptr [ebp + 0x10]
        jmp L_5e00b192
L_5e00b18f:
        fld dword ptr [ebx + 0x4]
L_5e00b192:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00b1ab
        fstp st(0)
        fld dword ptr [ebx + 0x4]
L_5e00b1ab:
        mov ecx,dword ptr [ebp + 0xc]
        mov eax,dword ptr [ebp + -0x14]
        add ecx,0x4
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0xc],ecx
        mov dword ptr [ebp + -0x14],eax
        jnz L_5e00b05a
        mov ebx,dword ptr [ebp + 0x1c]
        mov ecx,dword ptr [ebp + -0x30]
        mov edx,dword ptr [ebp + 0x20]
L_5e00b1d0:
        lea eax,[ecx + 0x3]
        cmp eax,edx
        jnz L_5e00b29b
        mov edx,dword ptr [ebp + 0x14]
        xor eax,eax
        mov ax,word ptr [ebx + ecx*0x2]
        shl eax,0x5
        lea edi,[eax + edx*0x1]
        xor eax,eax
        mov ax,word ptr [ebx + ecx*0x2 + 0x4]
        shl eax,0x5
        add eax,edx
        push eax
        xor eax,eax
        mov ax,word ptr [ebx + ecx*0x2 + 0x2]
        lea ecx,[esi + 0x400c]
        shl eax,0x5
        add eax,edx
        push eax
        push edi
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b229
        fld dword ptr [esi + 0x4580]
        jmp L_5e00b22b
L_5e00b229:
        fld dword ptr [edi]
L_5e00b22b:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b24a
        fld dword ptr [esi + 0x4584]
        jmp L_5e00b24c
L_5e00b24a:
        fld dword ptr [edi]
L_5e00b24c:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b26c
        fld dword ptr [esi + 0x4588]
        jmp L_5e00b26f
L_5e00b26c:
        fld dword ptr [edi + 0x4]
L_5e00b26f:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b28f
        fld dword ptr [esi + 0x458c]
        jmp L_5e00b292
L_5e00b28f:
        fld dword ptr [edi + 0x4]
L_5e00b292:
        mov edx,dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x458c]
L_5e00b29b:
        cmp edx,0x2
        jbe L_5e00b6c9
        mov edi,dword ptr [ebp + 0x14]
        xor ecx,ecx
        mov cx,word ptr [ebx + edx*0x2 + -0x4]
        fld dword ptr [esi + 0x4580]
        shl ecx,0x5
        add ecx,edi
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b2cc
        fld dword ptr [esi + 0x4580]
        jmp L_5e00b2ce
L_5e00b2cc:
        fld dword ptr [ecx]
L_5e00b2ce:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b2f0
        fld dword ptr [esi + 0x4584]
        jmp L_5e00b2f2
L_5e00b2f0:
        fld dword ptr [ecx]
L_5e00b2f2:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b315
        fld dword ptr [esi + 0x4588]
        jmp L_5e00b318
L_5e00b315:
        fld dword ptr [ecx + 0x4]
L_5e00b318:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b33b
        fld dword ptr [esi + 0x458c]
        jmp L_5e00b33e
L_5e00b33b:
        fld dword ptr [ecx + 0x4]
L_5e00b33e:
        fst dword ptr [esi + 0x458c]
        xor eax,eax
        mov ax,word ptr [ebx + edx*0x2 + -0x2]
        fld dword ptr [ebp + 0x20]
        shl eax,0x5
        fld dword ptr [eax + edi*0x1]
        lea ecx,[eax + edi*0x1]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b365
        fld dword ptr [ebp + 0x20]
        jmp L_5e00b367
L_5e00b365:
        fld dword ptr [ecx]
L_5e00b367:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b380
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00b382
L_5e00b380:
        fld dword ptr [ecx]
L_5e00b382:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b39c
        fld dword ptr [ebp + 0x14]
        jmp L_5e00b39f
L_5e00b39c:
        fld dword ptr [ecx + 0x4]
L_5e00b39f:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00b3b8
        fstp st(0)
L_5e00b3b5:
        fld dword ptr [ecx + 0x4]
L_5e00b3b8:
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00b6c9
        mov ecx,dword ptr [ebp + 0x20]
        lea eax,[ecx + -0x1]
        test eax,eax
        jle L_5e00b6c9
        mov edx,dword ptr [ebp + 0x1c]
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x18],edx
        mov dword ptr [ebp + 0x24],eax
L_5e00b3dd:
        mov edx,dword ptr [ebp + 0x18]
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edx + 0x2]
        mov ax,word ptr [edx]
        mov edx,dword ptr [ebp + 0x14]
        shl ecx,0x5
        shl eax,0x5
        lea ebx,[ecx + edx*0x1]
        mov ecx,esi
        lea edi,[eax + edx*0x1]
        push ebx
        push edi
        call FUN_5e002340
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b41c
        fld dword ptr [esi + 0x4580]
        jmp L_5e00b41e
L_5e00b41c:
        fld dword ptr [edi]
L_5e00b41e:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b440
        fld dword ptr [esi + 0x4584]
        jmp L_5e00b442
L_5e00b440:
        fld dword ptr [edi]
L_5e00b442:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b465
        fld dword ptr [esi + 0x4588]
        jmp L_5e00b468
L_5e00b465:
        fld dword ptr [edi + 0x4]
L_5e00b468:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b48b
        fld dword ptr [esi + 0x458c]
        jmp L_5e00b48e
L_5e00b48b:
        fld dword ptr [edi + 0x4]
L_5e00b48e:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b4a7
        fld dword ptr [ebp + 0x20]
        jmp L_5e00b4a9
L_5e00b4a7:
        fld dword ptr [ebx]
L_5e00b4a9:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b4c2
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00b4c4
L_5e00b4c2:
        fld dword ptr [ebx]
L_5e00b4c4:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b4de
        fld dword ptr [ebp + 0xc]
        jmp L_5e00b4e1
L_5e00b4de:
        fld dword ptr [ebx + 0x4]
L_5e00b4e1:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00b4fa
        fstp st(0)
        fld dword ptr [ebx + 0x4]
L_5e00b4fa:
        mov ecx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x24]
        add ecx,0x4
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],eax
        jnz L_5e00b3dd
        jmp L_5e00b6c9
        mov ecx,dword ptr [ebp + 0x20]
        lea eax,[ecx + -0x1]
        test eax,eax
        jle L_5e00b5ec
        mov ebx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0xc],eax
L_5e00b52f:
        mov ecx,dword ptr [ebp + 0x14]
        xor eax,eax
        mov ax,word ptr [ebx]
        shl eax,0x5
        lea edi,[eax + ecx*0x1]
        xor eax,eax
        mov ax,word ptr [ebx + 0x2]
        shl eax,0x5
        add eax,ecx
        mov ecx,esi
        push eax
        push edi
        call FUN_5e002340
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b56a
        fld dword ptr [esi + 0x4580]
        jmp L_5e00b56c
L_5e00b56a:
        fld dword ptr [edi]
L_5e00b56c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b58b
        fld dword ptr [esi + 0x4584]
        jmp L_5e00b58d
L_5e00b58b:
        fld dword ptr [edi]
L_5e00b58d:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b5ad
        fld dword ptr [esi + 0x4588]
        jmp L_5e00b5b0
L_5e00b5ad:
        fld dword ptr [edi + 0x4]
L_5e00b5b0:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b5d0
        fld dword ptr [esi + 0x458c]
        jmp L_5e00b5d3
L_5e00b5d0:
        fld dword ptr [edi + 0x4]
L_5e00b5d3:
        mov eax,dword ptr [ebp + 0xc]
        add ebx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0xc],eax
        jnz L_5e00b52f
        mov ecx,dword ptr [ebp + 0x20]
L_5e00b5ec:
        cmp ecx,0x1
        jbe L_5e00b6c9
        mov eax,dword ptr [ebp + 0x1c]
        xor edx,edx
        mov dx,word ptr [eax + ecx*0x2 + -0x2]
        mov ecx,dword ptr [ebp + 0x14]
        shl edx,0x5
        jmp L_5e00afa6
        mov eax,dword ptr [ebp + 0x20]
        test eax,eax
        jle L_5e00b6c9
        mov ebx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0x20],eax
L_5e00b61b:
        mov edx,dword ptr [ebp + 0x14]
        xor eax,eax
        mov ax,word ptr [ebx]
        mov ecx,esi
        shl eax,0x5
        lea edi,[eax + edx*0x1]
        push edi
        call FUN_5e0023e0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b64a
        fld dword ptr [esi + 0x4580]
        jmp L_5e00b64c
L_5e00b64a:
        fld dword ptr [edi]
L_5e00b64c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b66b
        fld dword ptr [esi + 0x4584]
        jmp L_5e00b66d
L_5e00b66b:
        fld dword ptr [edi]
L_5e00b66d:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00b68d
        fld dword ptr [esi + 0x4588]
        jmp L_5e00b690
L_5e00b68d:
        fld dword ptr [edi + 0x4]
L_5e00b690:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00b6b0
        fld dword ptr [esi + 0x458c]
        jmp L_5e00b6b3
L_5e00b6b0:
        fld dword ptr [edi + 0x4]
L_5e00b6b3:
        mov eax,dword ptr [ebp + 0x20]
        add ebx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x20],eax
        jnz L_5e00b61b
L_5e00b6c9:
        mov ecx,dword ptr [esi + 0x4550]
        xor edx,edx
        mov dword ptr [ebp + -0x34],ecx
        mov dword ptr [ebp + -0x30],edx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4580]
        fnstsw ax
        test ah,0x41
        jnz L_5e00b6ef
        fstp dword ptr [esi + 0x4580]
        jmp L_5e00b719
L_5e00b6ef:
        mov eax,dword ptr [esi + 0x4558]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4584]
        fnstsw ax
        test ah,0x1
        jz L_5e00b717
        fstp dword ptr [esi + 0x4584]
        jmp L_5e00b719
L_5e00b717:
        fstp st(0)
L_5e00b719:
        mov ecx,dword ptr [esi + 0x4554]
        mov dword ptr [ebp + -0x30],edx
        mov dword ptr [ebp + -0x34],ecx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4588]
        fnstsw ax
        test ah,0x41
        jnz L_5e00b740
        fstp dword ptr [esi + 0x4588]
        jmp L_5e00def9
L_5e00b740:
        mov eax,dword ptr [esi + 0x455c]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        jmp L_5e00dc79
L_5e00b758:
        cmp eax,0x5
        ja L_5e00deee
        jmp dword ptr [eax*0x4 + 0x5e00df54]
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x2]
        test eax,eax
        jle L_5e00def9
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov ecx,dword ptr [ebp + 0x1c]
        mov ebx,dword ptr [ebp + 0x14]
        add esi,0x400c
        mov dword ptr [ebp + 0x20],esi
        mov esi,edx
        lea edi,[ecx + 0x2]
        shr esi,0x1
L_5e00b796:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edi + 0x2]
        mov cx,word ptr [edi]
        xor edx,edx
        mov dx,word ptr [edi + -0x2]
        shl eax,0x5
        shl ecx,0x5
        add eax,ebx
        add ecx,ebx
        shl edx,0x5
        push eax
        add edx,ebx
        push ecx
        mov ecx,dword ptr [ebp + 0x20]
        push edx
        call FUN_5e012eb0
        add edi,0x6
        dec esi
        jnz L_5e00b796
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        add eax,-0x2
        test eax,eax
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
        mov ebx,dword ptr [ebp + 0x14]
        xor ecx,ecx
        add esi,0x400c
        mov cx,word ptr [edi]
        mov dword ptr [ebp + 0x20],esi
        shl ecx,0x5
        add ecx,ebx
        add edi,0x2
        mov dword ptr [ebp + 0xc],ecx
        mov esi,eax
L_5e00b7fb:
        mov edx,dword ptr [ebp + 0xc]
        xor eax,eax
        mov ax,word ptr [edi + 0x2]
        xor ecx,ecx
        mov cx,word ptr [edi]
        push edx
        shl eax,0x5
        shl ecx,0x5
        add eax,ebx
        add ecx,ebx
        push eax
        push ecx
        mov ecx,dword ptr [ebp + 0x20]
        call FUN_5e012eb0
        add edi,0x2
        dec esi
        jnz L_5e00b7fb
        jmp L_5e00def9
        mov edx,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x14]
        xor eax,eax
        lea ecx,[edx + -0x3]
        mov edx,dword ptr [ebp + 0x1c]
        test ecx,ecx
        mov dword ptr [ebp + 0xc],eax
        jle L_5e00b8b6
        mov eax,edx
        lea edi,[eax + 0x4]
        lea eax,[ecx + 0x1]
        shr eax,0x1
        mov dword ptr [ebp + 0x14],eax
        lea ecx,[eax + eax*0x1]
        mov dword ptr [ebp + 0xc],ecx
L_5e00b851:
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edi]
        mov ax,word ptr [edi + -0x2]
        xor edx,edx
        mov dx,word ptr [edi + -0x4]
        shl ecx,0x5
        shl eax,0x5
        add ecx,ebx
        add eax,ebx
        shl edx,0x5
        push ecx
        add edx,ebx
        mov dword ptr [ebp + 0x18],ecx
        push eax
        push edx
        lea ecx,[esi + 0x400c]
        mov dword ptr [ebp + 0x24],eax
        call FUN_5e012eb0
        mov eax,dword ptr [ebp + 0x18]
        mov edx,dword ptr [ebp + 0x24]
        xor ecx,ecx
        push eax
        mov cx,word ptr [edi + 0x2]
        shl ecx,0x5
        add ecx,ebx
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        mov eax,dword ptr [ebp + 0x14]
        add edi,0x4
        dec eax
        mov dword ptr [ebp + 0x14],eax
        jnz L_5e00b851
        mov eax,dword ptr [ebp + 0xc]
        mov edx,dword ptr [ebp + 0x1c]
L_5e00b8b6:
        mov edi,dword ptr [ebp + 0x20]
        lea ecx,[eax + 0x3]
        cmp ecx,edi
        jnz L_5e00def9
        xor ecx,ecx
        mov cx,word ptr [edx + eax*0x2 + 0x4]
        shl ecx,0x5
        add ecx,ebx
        push ecx
        xor ecx,ecx
        mov cx,word ptr [edx + eax*0x2 + 0x2]
        shl ecx,0x5
        add ecx,ebx
        push ecx
        xor ecx,ecx
        mov cx,word ptr [edx + eax*0x2]
        shl ecx,0x5
        add ecx,ebx
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        jmp L_5e00def9
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x1]
        test eax,eax
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
        mov ebx,dword ptr [ebp + 0x14]
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x20],eax
L_5e00b914:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edi + 0x2]
        mov cx,word ptr [edi]
        shl eax,0x5
        shl ecx,0x5
        add eax,ebx
        add ecx,ebx
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e002340
        mov eax,dword ptr [ebp + 0x20]
        add edi,0x4
        dec eax
        mov dword ptr [ebp + 0x20],eax
        jnz L_5e00b914
        jmp L_5e00def9
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x1]
        test eax,eax
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
        mov ebx,dword ptr [ebp + 0x14]
        mov dword ptr [ebp + 0x20],eax
L_5e00b95a:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edi + 0x2]
        mov cx,word ptr [edi]
        shl eax,0x5
        shl ecx,0x5
        add eax,ebx
        add ecx,ebx
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e002340
        mov eax,dword ptr [ebp + 0x20]
        add edi,0x2
        dec eax
        mov dword ptr [ebp + 0x20],eax
        jnz L_5e00b95a
        jmp L_5e00def9
        mov ebx,dword ptr [ebp + 0x20]
        test ebx,ebx
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
L_5e00b997:
        mov ecx,dword ptr [ebp + 0x14]
        xor edx,edx
        mov dx,word ptr [edi]
        shl edx,0x5
        add edx,ecx
        mov ecx,esi
        push edx
        call FUN_5e0023e0
        add edi,0x2
        dec ebx
        jnz L_5e00b997
        jmp L_5e00def9
L_5e00b9b7:
        cmp eax,0x1e2
        jz L_5e00ba1b
        cmp eax,0x2c2
        jz L_5e00b9d1
L_5e00b9c5:
        mov dword ptr [ebp + 0x8],0x80004005
        jmp L_5e00def9
L_5e00b9d1:
        test edi,edi
        jbe L_5e00ba14
        mov eax,dword ptr [ebp + 0x14]
        mov ecx,0x5e57a4cc
        add eax,0x8
        mov edx,edi
L_5e00b9e2:
        mov edi,dword ptr [eax + -0x8]
        add eax,0x24
        mov dword ptr [ecx + -0x4],edi
        mov edi,dword ptr [eax + -0x28]
        mov dword ptr [ecx],edi
        mov edi,dword ptr [eax + -0x24]
        mov dword ptr [ecx + 0x4],edi
        mov edi,dword ptr [eax + -0x20]
        mov dword ptr [ecx + 0xc],edi
        mov edi,dword ptr [eax + -0x1c]
        mov dword ptr [ecx + 0x10],edi
        mov edi,dword ptr [eax + -0x18]
        mov dword ptr [ecx + 0x14],edi
        mov edi,dword ptr [eax + -0x14]
        mov dword ptr [ecx + 0x18],edi
        add ecx,0x20
        dec edx
        jnz L_5e00b9e2
L_5e00ba14:
        mov ebx,0x5e57a4c8
        jmp L_5e00ba1e
L_5e00ba1b:
        mov ebx,dword ptr [ebp + 0x14]
L_5e00ba1e:
        mov ecx,esi
        call FUN_5e0040b0
        mov edi,dword ptr [ebp + 0x24]
        mov ecx,edi
        and ecx,0x4
        test cl,cl
        jnz L_5e00cf81
        mov ecx,dword ptr [ebp + 0x18]
        lea edx,[esi + 0x454c]
        push 0x5e03a4c8
        lea eax,[esi + 0x450c]
        push edx
        push eax
        push ecx
        push ebx
        call FUN_5e028260
        mov edx,edi
        and edx,0x8
        test dl,dl
        jnz L_5e00ca22
        mov eax,dword ptr [ebp + 0xc]
        dec eax
        cmp eax,0x5
        ja L_5e00deee
        jmp dword ptr [eax*0x4 + 0x5e00df6c]
        mov ecx,dword ptr [ebp + 0x20]
        lea eax,[ecx + -0x2]
        test eax,eax
        jle L_5e00c993
        mov edx,dword ptr [ebp + 0x1c]
        lea ecx,[eax + 0x2]
        add edx,0x4
        mov eax,0xaaaaaaab
        mov dword ptr [ebp + 0x18],edx
        mul ecx
        shr edx,0x1
        mov dword ptr [ebp + 0x24],edx
L_5e00ba99:
        mov edi,dword ptr [ebp + 0x18]
        xor edx,edx
        xor eax,eax
        xor ecx,ecx
        mov dx,word ptr [edi]
        mov ax,word ptr [edi + -0x4]
        mov cx,word ptr [edi + -0x2]
        lea edi,[edx + edx*0x2]
        lea edx,[edx + edi*0x4]
        shl edx,0x2
        mov dword ptr [ebp + 0x14],edx
        mov edx,dword ptr [edx + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],edx
        lea edx,[ecx + ecx*0x2]
        lea ebx,[ecx + edx*0x4]
        lea edx,[eax + eax*0x2]
        shl ebx,0x2
        lea edi,[eax + edx*0x4]
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        shl edi,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [ebp + 0xc]
        and edx,ecx
        test dl,0x3f
        jnz L_5e00bb40
        or eax,dword ptr [ebx + 0x5e03a4e8]
        or eax,ecx
        and eax,0x3f
        jz L_5e00bb1d
        push eax
        mov eax,dword ptr [ebp + 0x14]
        lea edx,[ebx + 0x5e03a4c8]
        lea ecx,[eax + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push ecx
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00bb40
L_5e00bb1d:
        mov ecx,dword ptr [ebp + 0x14]
        lea eax,[ebx + 0x5e03a4c8]
        lea edx,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push edx
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00bb40:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bb5d
        fld dword ptr [esi + 0x4580]
        jmp L_5e00bb63
L_5e00bb5d:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00bb63:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bb89
        fld dword ptr [esi + 0x4584]
        jmp L_5e00bb8f
L_5e00bb89:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00bb8f:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bbb5
        fld dword ptr [esi + 0x4588]
        jmp L_5e00bbbb
L_5e00bbb5:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00bbbb:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bbe1
        fld dword ptr [esi + 0x458c]
        jmp L_5e00bbe7
L_5e00bbe1:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00bbe7:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ebx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bc04
        fld dword ptr [ebp + 0x20]
        jmp L_5e00bc0a
L_5e00bc04:
        fld dword ptr [ebx + 0x5e03a4c8]
L_5e00bc0a:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ebx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bc2a
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00bc30
L_5e00bc2a:
        fld dword ptr [ebx + 0x5e03a4c8]
L_5e00bc30:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ebx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bc50
        fld dword ptr [ebp + 0xc]
        jmp L_5e00bc56
L_5e00bc50:
        fld dword ptr [ebx + 0x5e03a4cc]
L_5e00bc56:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ebx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00bc78
        fstp st(0)
        fld dword ptr [ebx + 0x5e03a4cc]
L_5e00bc78:
        mov ecx,dword ptr [ebp + 0x14]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bc98
        fld dword ptr [ebp + 0x20]
        jmp L_5e00bc9e
L_5e00bc98:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00bc9e:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bcbb
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00bcc1
L_5e00bcbb:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00bcc1:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bcde
        fld dword ptr [ebp + 0xc]
        jmp L_5e00bce4
L_5e00bcde:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00bce4:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00bd03
        fstp st(0)
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00bd03:
        mov ecx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x24]
        add ecx,0x6
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],eax
        jnz L_5e00ba99
        jmp L_5e00c993
        mov edi,dword ptr [ebp + 0x20]
        mov edx,dword ptr [ebp + 0x1c]
        test edi,edi
        jbe L_5e00bde4
        xor eax,eax
        mov ax,word ptr [edx]
        fld dword ptr [esi + 0x4580]
        lea ecx,[eax + eax*0x2]
        lea ecx,[eax + ecx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bd5d
        fld dword ptr [esi + 0x4580]
        jmp L_5e00bd63
L_5e00bd5d:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00bd63:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bd86
        fld dword ptr [esi + 0x4584]
        jmp L_5e00bd8c
L_5e00bd86:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00bd8c:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bdaf
        fld dword ptr [esi + 0x4588]
        jmp L_5e00bdb5
L_5e00bdaf:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00bdb5:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bdd8
        fld dword ptr [esi + 0x458c]
        jmp L_5e00bdde
L_5e00bdd8:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00bdde:
        fstp dword ptr [esi + 0x458c]
L_5e00bde4:
        lea ecx,[edi + -0x2]
        test ecx,ecx
        jle L_5e00bf58
        xor eax,eax
        mov dword ptr [ebp + 0x18],ecx
        mov ax,word ptr [edx]
        lea edi,[eax + eax*0x2]
        lea eax,[eax + edi*0x4]
        shl eax,0x2
        add edx,0x4
        mov dword ptr [ebp + 0x14],eax
        mov dword ptr [ebp + 0xc],edx
L_5e00be09:
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edx]
        mov ax,word ptr [edx + -0x2]
        lea edx,[ecx + ecx*0x2]
        lea edi,[ecx + edx*0x4]
        lea ecx,[eax + eax*0x2]
        shl edi,0x2
        lea eax,[eax + ecx*0x4]
        mov edx,dword ptr [edi + 0x5e03a4e8]
        shl eax,0x2
        mov ecx,dword ptr [eax + 0x5e03a4e8]
        mov ebx,ecx
        and ebx,edx
        mov edx,dword ptr [ebp + 0x14]
        mov edx,dword ptr [edx + 0x5e03a4e8]
        and ebx,edx
        test bl,0x3f
        jnz L_5e00be98
        or ecx,dword ptr [edi + 0x5e03a4e8]
        or ecx,edx
        and ecx,0x3f
        jz L_5e00be75
        push ecx
        mov ecx,dword ptr [ebp + 0x14]
        lea edx,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00be98
L_5e00be75:
        mov ecx,dword ptr [ebp + 0x14]
        lea edx,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00be98:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00beb5
        fld dword ptr [esi + 0x4580]
        jmp L_5e00bebb
L_5e00beb5:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00bebb:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bede
        fld dword ptr [esi + 0x4584]
        jmp L_5e00bee4
L_5e00bede:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00bee4:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bf07
        fld dword ptr [esi + 0x4588]
        jmp L_5e00bf0d
L_5e00bf07:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00bf0d:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bf30
        fld dword ptr [esi + 0x458c]
        jmp L_5e00bf36
L_5e00bf30:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00bf36:
        mov edx,dword ptr [ebp + 0xc]
        mov eax,dword ptr [ebp + 0x18]
        add edx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0xc],edx
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e00be09
        mov edx,dword ptr [ebp + 0x1c]
        mov edi,dword ptr [ebp + 0x20]
L_5e00bf58:
        cmp edi,0x1
        jbe L_5e00c993
        xor eax,eax
        mov ax,word ptr [edx + edi*0x2 + -0x2]
L_5e00bf68:
        fld dword ptr [esi + 0x4580]
        lea ecx,[eax + eax*0x2]
        lea ecx,[eax + ecx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bf8e
        fld dword ptr [esi + 0x4580]
        jmp L_5e00bf94
L_5e00bf8e:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00bf94:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00bfb7
        fld dword ptr [esi + 0x4584]
        jmp L_5e00bfbd
L_5e00bfb7:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00bfbd:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00bfe0
        fld dword ptr [esi + 0x4588]
        jmp L_5e00bfe6
L_5e00bfe0:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00bfe6:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c575
        fld dword ptr [esi + 0x458c]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00c993
        mov edx,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        xor edi,edi
        lea eax,[edx + -0x3]
        test eax,eax
        jle L_5e00c2ca
        add ebx,0x4
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x24],ebx
        mov dword ptr [ebp + -0x10],eax
        lea edx,[eax + eax*0x1]
        mov dword ptr [ebp + -0x30],edx
        jmp L_5e00c040
L_5e00c03d:
        mov ebx,dword ptr [ebp + 0x24]
L_5e00c040:
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [ebx]
        mov ax,word ptr [ebx + -0x4]
        xor edi,edi
        xor edx,edx
        mov di,word ptr [ebx + -0x2]
        mov dx,word ptr [ebx + 0x2]
        lea ebx,[ecx + ecx*0x2]
        mov dword ptr [ebp + -0x14],edx
        lea ebx,[ecx + ebx*0x4]
        shl ebx,0x2
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],ecx
        lea ecx,[edi + edi*0x2]
        lea edi,[edi + ecx*0x4]
        shl edi,0x2
        mov ecx,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0x10],ecx
        lea ecx,[eax + eax*0x2]
        lea eax,[eax + ecx*0x4]
        mov ecx,dword ptr [ebp + 0x10]
        shl eax,0x2
        mov dword ptr [ebp + 0x14],eax
        mov eax,dword ptr [eax + 0x5e03a4e8]
        mov dword ptr [ebp + 0x18],eax
        and eax,ecx
        mov ecx,dword ptr [ebp + 0xc]
        and eax,ecx
        test al,0x3f
        jnz L_5e00c0f8
        mov eax,dword ptr [ebp + 0x18]
        mov edx,dword ptr [ebp + 0x10]
        or eax,edx
        or eax,ecx
        and eax,0x3f
        jz L_5e00c0d2
        mov ecx,dword ptr [ebp + 0x14]
        lea edx,[ebx + 0x5e03a4c8]
        push eax
        push edx
        lea eax,[edi + 0x5e03a4c8]
        lea edx,[ecx + 0x5e03a4c8]
        push eax
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00c0f5
L_5e00c0d2:
        mov edx,dword ptr [ebp + 0x14]
        lea eax,[ebx + 0x5e03a4c8]
        push eax
        lea ecx,[edi + 0x5e03a4c8]
        lea eax,[edx + 0x5e03a4c8]
        push ecx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00c0f5:
        mov edx,dword ptr [ebp + -0x14]
L_5e00c0f8:
        lea ecx,[edx + edx*0x2]
        lea edx,[edx + ecx*0x4]
        mov ecx,dword ptr [edi + 0x5e03a4e8]
        shl edx,0x2
        mov dword ptr [ebp + 0xc],edx
        mov eax,dword ptr [edx + 0x5e03a4e8]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        and edx,ecx
        test dl,0x3f
        jnz L_5e00c173
        or eax,dword ptr [edi + 0x5e03a4e8]
        or eax,ecx
        and eax,0x3f
        jz L_5e00c150
        mov ecx,dword ptr [ebp + 0xc]
        push eax
        lea eax,[ebx + 0x5e03a4c8]
        push eax
        lea edx,[ecx + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00c173
L_5e00c150:
        mov edx,dword ptr [ebp + 0xc]
        lea ecx,[ebx + 0x5e03a4c8]
        push ecx
        lea ecx,[edi + 0x5e03a4c8]
        lea eax,[edx + 0x5e03a4c8]
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00c173:
        mov ecx,dword ptr [ebp + 0x14]
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c193
        fld dword ptr [esi + 0x4580]
        jmp L_5e00c199
L_5e00c193:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00c199:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c1bf
        fld dword ptr [esi + 0x4584]
        jmp L_5e00c1c5
L_5e00c1bf:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00c1c5:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c1eb
        fld dword ptr [esi + 0x4588]
        jmp L_5e00c1f1
L_5e00c1eb:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00c1f1:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c217
        fld dword ptr [esi + 0x458c]
        jmp L_5e00c21d
L_5e00c217:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00c21d:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c23a
        fld dword ptr [ebp + 0x14]
        jmp L_5e00c240
L_5e00c23a:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c240:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c25d
        fld dword ptr [ebp + 0xc]
        jmp L_5e00c263
L_5e00c25d:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c263:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c280
        fld dword ptr [ebp + 0x18]
        jmp L_5e00c286
L_5e00c280:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c286:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00c2a5
        fstp st(0)
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c2a5:
        mov ecx,dword ptr [ebp + 0x24]
        mov eax,dword ptr [ebp + -0x10]
        add ecx,0x4
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x24],ecx
        mov dword ptr [ebp + -0x10],eax
        jnz L_5e00c03d
        mov ebx,dword ptr [ebp + 0x1c]
        mov edi,dword ptr [ebp + -0x30]
        mov edx,dword ptr [ebp + 0x20]
L_5e00c2ca:
        lea eax,[edi + 0x3]
        cmp eax,edx
        jnz L_5e00c423
        xor edx,edx
        xor eax,eax
        mov dx,word ptr [ebx + edi*0x2 + 0x4]
        mov ax,word ptr [ebx + edi*0x2]
        xor ecx,ecx
        mov cx,word ptr [ebx + edi*0x2 + 0x2]
        lea edi,[edx + edx*0x2]
        lea edx,[edx + edi*0x4]
        shl edx,0x2
        mov edi,dword ptr [edx + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],edi
        lea edi,[ecx + ecx*0x2]
        lea ecx,[ecx + edi*0x4]
        lea edi,[eax + eax*0x2]
        shl ecx,0x2
        lea edi,[eax + edi*0x4]
        mov ebx,dword ptr [ecx + 0x5e03a4e8]
        shl edi,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0x18],eax
        and eax,ebx
        and eax,dword ptr [ebp + 0xc]
        test al,0x3f
        jnz L_5e00c379
        mov ebx,dword ptr [ecx + 0x5e03a4e8]
        mov eax,dword ptr [ebp + 0x18]
        or eax,ebx
        mov ebx,dword ptr [ebp + 0xc]
        or eax,ebx
        and eax,0x3f
        jz L_5e00c359
        push eax
        lea edx,[edx + 0x5e03a4c8]
        lea eax,[ecx + 0x5e03a4c8]
        push edx
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00c379
L_5e00c359:
        lea edx,[edx + 0x5e03a4c8]
        lea eax,[ecx + 0x5e03a4c8]
        push edx
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00c379:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c396
        fld dword ptr [esi + 0x4580]
        jmp L_5e00c39c
L_5e00c396:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c39c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c3bf
        fld dword ptr [esi + 0x4584]
        jmp L_5e00c3c5
L_5e00c3bf:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c3c5:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c3e8
        fld dword ptr [esi + 0x4588]
        jmp L_5e00c3ee
L_5e00c3e8:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c3ee:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c411
        fld dword ptr [esi + 0x458c]
        jmp L_5e00c417
L_5e00c411:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c417:
        mov edx,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x458c]
L_5e00c423:
        cmp edx,0x2
        jbe L_5e00c993
        xor eax,eax
        mov ax,word ptr [ebx + edx*0x2 + -0x4]
        fld dword ptr [esi + 0x4580]
        lea ecx,[eax + eax*0x2]
        lea ecx,[eax + ecx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c459
        fld dword ptr [esi + 0x4580]
        jmp L_5e00c45f
L_5e00c459:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00c45f:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c485
        fld dword ptr [esi + 0x4584]
        jmp L_5e00c48b
L_5e00c485:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00c48b:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c4b1
        fld dword ptr [esi + 0x4588]
        jmp L_5e00c4b7
L_5e00c4b1:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00c4b7:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c4dd
        fld dword ptr [esi + 0x458c]
        jmp L_5e00c4e3
L_5e00c4dd:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00c4e3:
        xor eax,eax
        mov ax,word ptr [ebx + edx*0x2 + -0x2]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        lea edx,[eax + eax*0x2]
        lea ecx,[eax + edx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c510
        fld dword ptr [ebp + 0x20]
        jmp L_5e00c516
L_5e00c510:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00c516:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c533
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00c539
L_5e00c533:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00c539:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c556
        fld dword ptr [ebp + 0x14]
        jmp L_5e00c55c
L_5e00c556:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00c55c:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00c57b
        fstp st(0)
L_5e00c575:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e00c57b:
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00c993
        mov eax,dword ptr [ebp + 0x20]
        dec eax
        test eax,eax
        jle L_5e00c993
        mov ecx,dword ptr [ebp + 0x1c]
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0xc],ecx
        mov dword ptr [ebp + 0x18],eax
L_5e00c59e:
        mov edx,dword ptr [ebp + 0xc]
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edx + 0x2]
        mov ax,word ptr [edx]
        lea edx,[ecx + ecx*0x2]
        lea ebx,[ecx + edx*0x4]
        lea edx,[eax + eax*0x2]
        shl ebx,0x2
        lea edi,[eax + edx*0x4]
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        shl edi,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e00c607
        or eax,ecx
        and eax,0x3f
        jz L_5e00c5f2
        push eax
        lea eax,[ebx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00c607
L_5e00c5f2:
        lea edx,[ebx + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e002340
L_5e00c607:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c624
        fld dword ptr [esi + 0x4580]
        jmp L_5e00c62a
L_5e00c624:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c62a:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c650
        fld dword ptr [esi + 0x4584]
        jmp L_5e00c656
L_5e00c650:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c656:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c67c
        fld dword ptr [esi + 0x4588]
        jmp L_5e00c682
L_5e00c67c:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c682:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c6a8
        fld dword ptr [esi + 0x458c]
        jmp L_5e00c6ae
L_5e00c6a8:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c6ae:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ebx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c6cb
        fld dword ptr [ebp + 0x20]
        jmp L_5e00c6d1
L_5e00c6cb:
        fld dword ptr [ebx + 0x5e03a4c8]
L_5e00c6d1:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ebx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c6ee
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00c6f4
L_5e00c6ee:
        fld dword ptr [ebx + 0x5e03a4c8]
L_5e00c6f4:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ebx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c711
        fld dword ptr [ebp + 0x14]
        jmp L_5e00c717
L_5e00c711:
        fld dword ptr [ebx + 0x5e03a4cc]
L_5e00c717:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ebx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00c736
        fstp st(0)
        fld dword ptr [ebx + 0x5e03a4cc]
L_5e00c736:
        mov ecx,dword ptr [ebp + 0xc]
        mov eax,dword ptr [ebp + 0x18]
        add ecx,0x4
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0xc],ecx
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e00c59e
        jmp L_5e00c993
        mov ecx,dword ptr [ebp + 0x20]
        lea eax,[ecx + -0x1]
        test eax,eax
        jle L_5e00c891
        mov edx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0xc],eax
        mov dword ptr [ebp + 0x14],edx
L_5e00c76e:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edx]
        mov cx,word ptr [edx + 0x2]
        lea edi,[eax + eax*0x2]
        lea edx,[ecx + ecx*0x2]
        lea edi,[eax + edi*0x4]
        lea ecx,[ecx + edx*0x4]
        shl edi,0x2
        shl ecx,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov ebx,eax
        and ebx,edx
        test bl,0x3f
        jnz L_5e00c7d4
        or eax,edx
        and eax,0x3f
        jz L_5e00c7bf
        push eax
        lea eax,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00c7d4
L_5e00c7bf:
        lea edx,[ecx + 0x5e03a4c8]
        lea eax,[edi + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e002340
L_5e00c7d4:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c7f1
        fld dword ptr [esi + 0x4580]
        jmp L_5e00c7f7
L_5e00c7f1:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c7f7:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c81a
        fld dword ptr [esi + 0x4584]
        jmp L_5e00c820
L_5e00c81a:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c820:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c843
        fld dword ptr [esi + 0x4588]
        jmp L_5e00c849
L_5e00c843:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c849:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c86c
        fld dword ptr [esi + 0x458c]
        jmp L_5e00c872
L_5e00c86c:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c872:
        mov ecx,dword ptr [ebp + 0x14]
        mov eax,dword ptr [ebp + 0xc]
        dec eax
        lea edx,[ecx + 0x2]
        mov dword ptr [ebp + 0xc],eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x14],edx
        jnz L_5e00c76e
        mov ecx,dword ptr [ebp + 0x20]
L_5e00c891:
        cmp ecx,0x1
        jbe L_5e00c993
        mov edx,dword ptr [ebp + 0x1c]
        xor eax,eax
        mov ax,word ptr [edx + ecx*0x2 + -0x2]
        jmp L_5e00bf68
        mov eax,dword ptr [ebp + 0x20]
        test eax,eax
        jle L_5e00c993
        mov ebx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0x20],eax
L_5e00c8ba:
        xor eax,eax
        mov ax,word ptr [ebx]
        lea edx,[eax + eax*0x2]
        lea edi,[eax + edx*0x4]
        shl edi,0x2
        test byte ptr [edi + 0x5e03a4e8],0x3f
        jnz L_5e00c8df
        lea eax,[edi + 0x5e03a4c8]
        mov ecx,esi
        push eax
        call FUN_5e0023e0
L_5e00c8df:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c8fc
        fld dword ptr [esi + 0x4580]
        jmp L_5e00c902
L_5e00c8fc:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c902:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c925
        fld dword ptr [esi + 0x4584]
        jmp L_5e00c92b
L_5e00c925:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00c92b:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00c94e
        fld dword ptr [esi + 0x4588]
        jmp L_5e00c954
L_5e00c94e:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c954:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00c977
        fld dword ptr [esi + 0x458c]
        jmp L_5e00c97d
L_5e00c977:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00c97d:
        mov eax,dword ptr [ebp + 0x20]
        add ebx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x20],eax
        jnz L_5e00c8ba
L_5e00c993:
        mov ecx,dword ptr [esi + 0x4550]
        xor edx,edx
        mov dword ptr [ebp + -0x34],ecx
        mov dword ptr [ebp + -0x30],edx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4580]
        fnstsw ax
        test ah,0x41
        jnz L_5e00c9b9
        fstp dword ptr [esi + 0x4580]
        jmp L_5e00c9e3
L_5e00c9b9:
        mov eax,dword ptr [esi + 0x4558]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4584]
        fnstsw ax
        test ah,0x1
        jz L_5e00c9e1
        fstp dword ptr [esi + 0x4584]
        jmp L_5e00c9e3
L_5e00c9e1:
        fstp st(0)
L_5e00c9e3:
        mov ecx,dword ptr [esi + 0x4554]
        mov dword ptr [ebp + -0x30],edx
        mov dword ptr [ebp + -0x34],ecx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4588]
        fnstsw ax
        test ah,0x41
        jnz L_5e00ca0a
        fstp dword ptr [esi + 0x4588]
        jmp L_5e00def9
L_5e00ca0a:
        mov eax,dword ptr [esi + 0x455c]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        jmp L_5e00dc79
L_5e00ca22:
        mov ecx,dword ptr [ebp + 0xc]
        lea eax,[ecx + -0x1]
        cmp eax,0x5
        ja L_5e00deee
        jmp dword ptr [eax*0x4 + 0x5e00df84]
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x2]
        test eax,eax
        jle L_5e00def9
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov ecx,dword ptr [ebp + 0x1c]
        shr edx,0x1
        lea edi,[ecx + 0x4]
        mov dword ptr [ebp + 0x1c],edx
        mov dword ptr [ebp + 0x20],edi
L_5e00ca5e:
        xor edx,edx
        xor eax,eax
        mov dx,word ptr [edi]
        mov ax,word ptr [edi + -0x4]
        xor ecx,ecx
        mov cx,word ptr [edi + -0x2]
        lea edi,[edx + edx*0x2]
        lea edx,[edx + edi*0x4]
        shl edx,0x2
        mov edi,dword ptr [edx + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],edi
        lea edi,[ecx + ecx*0x2]
        lea ecx,[ecx + edi*0x4]
        lea edi,[eax + eax*0x2]
        shl ecx,0x2
        lea edi,[eax + edi*0x4]
        mov ebx,dword ptr [ecx + 0x5e03a4e8]
        shl edi,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],eax
        and eax,ebx
        and eax,dword ptr [ebp + 0x14]
        test al,0x3f
        jnz L_5e00caff
        mov ebx,dword ptr [ecx + 0x5e03a4e8]
        mov eax,dword ptr [ebp + 0xc]
        or eax,ebx
        mov ebx,dword ptr [ebp + 0x14]
        or eax,ebx
        and eax,0x3f
        jz L_5e00cadf
        push eax
        lea eax,[edx + 0x5e03a4c8]
        lea ecx,[ecx + 0x5e03a4c8]
        push eax
        lea edx,[edi + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00caff
L_5e00cadf:
        lea eax,[edx + 0x5e03a4c8]
        lea ecx,[ecx + 0x5e03a4c8]
        push eax
        lea edx,[edi + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00caff:
        mov edi,dword ptr [ebp + 0x20]
        mov eax,dword ptr [ebp + 0x1c]
        add edi,0x6
        dec eax
        mov dword ptr [ebp + 0x20],edi
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e00ca5e
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        lea edi,[eax + -0x2]
        test edi,edi
        jle L_5e00def9
        mov ecx,dword ptr [ebp + 0x1c]
        xor eax,eax
        mov dword ptr [ebp + 0x14],edi
        mov ax,word ptr [ecx]
        lea edx,[eax + eax*0x2]
        lea eax,[eax + edx*0x4]
        lea edx,[ecx + 0x4]
        shl eax,0x2
        mov dword ptr [ebp + 0x20],eax
        mov dword ptr [ebp + 0x1c],edx
L_5e00cb45:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edx + -0x2]
        mov cx,word ptr [edx]
        lea edi,[eax + eax*0x2]
        lea edx,[ecx + ecx*0x2]
        lea eax,[eax + edi*0x4]
        lea ecx,[ecx + edx*0x4]
        shl eax,0x2
        shl ecx,0x2
        mov edi,dword ptr [eax + 0x5e03a4e8]
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov ebx,edi
        and ebx,edx
        mov edx,dword ptr [ebp + 0x20]
        mov edx,dword ptr [edx + 0x5e03a4e8]
        and ebx,edx
        test bl,0x3f
        jnz L_5e00cbd4
        or edi,dword ptr [ecx + 0x5e03a4e8]
        or edi,edx
        and edi,0x3f
        jz L_5e00cbb1
        mov edx,dword ptr [ebp + 0x20]
        push edi
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[edx + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00cbd4
L_5e00cbb1:
        mov edx,dword ptr [ebp + 0x20]
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[edx + 0x5e03a4c8]
        push edx
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00cbd4:
        mov edx,dword ptr [ebp + 0x1c]
        mov eax,dword ptr [ebp + 0x14]
        add edx,0x2
        dec eax
        mov dword ptr [ebp + 0x1c],edx
        mov dword ptr [ebp + 0x14],eax
        jnz L_5e00cb45
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        add eax,-0x3
        xor edi,edi
        test eax,eax
        jle L_5e00cd5c
        add ebx,0x4
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x18],ebx
        mov dword ptr [ebp + 0x24],eax
        lea ecx,[eax + eax*0x1]
        mov dword ptr [ebp + -0x30],ecx
L_5e00cc14:
        mov edi,dword ptr [ebp + 0x18]
        xor edx,edx
        xor eax,eax
        xor ecx,ecx
        mov dx,word ptr [edi]
        mov ax,word ptr [edi + -0x4]
        mov cx,word ptr [edi + -0x2]
        xor ebx,ebx
        mov bx,word ptr [edi + 0x2]
        lea edi,[edx + edx*0x2]
        mov dword ptr [ebp + 0x10],ebx
        lea edi,[edx + edi*0x4]
        shl edi,0x2
        mov edx,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],edx
        lea edx,[ecx + ecx*0x2]
        lea ebx,[ecx + edx*0x4]
        lea edx,[eax + eax*0x2]
        shl ebx,0x2
        lea eax,[eax + edx*0x4]
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        shl eax,0x2
        mov edx,dword ptr [eax + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],edx
        and edx,ecx
        and edx,dword ptr [ebp + 0x14]
        test dl,0x3f
        jnz L_5e00ccc2
        mov edx,dword ptr [ebx + 0x5e03a4e8]
        mov ecx,dword ptr [ebp + 0xc]
        or ecx,edx
        mov edx,dword ptr [ebp + 0x14]
        or ecx,edx
        and ecx,0x3f
        jz L_5e00cca2
        push ecx
        lea ecx,[edi + 0x5e03a4c8]
        lea edx,[ebx + 0x5e03a4c8]
        push ecx
        lea eax,[eax + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00ccc2
L_5e00cca2:
        lea ecx,[edi + 0x5e03a4c8]
        lea edx,[ebx + 0x5e03a4c8]
        push ecx
        lea eax,[eax + 0x5e03a4c8]
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00ccc2:
        mov eax,dword ptr [ebp + 0x10]
        lea ecx,[eax + eax*0x2]
        lea eax,[eax + ecx*0x4]
        mov ecx,dword ptr [ebx + 0x5e03a4e8]
        shl eax,0x2
        mov dword ptr [ebp + 0x14],eax
        mov eax,dword ptr [eax + 0x5e03a4e8]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [edi + 0x5e03a4e8]
        and edx,ecx
        test dl,0x3f
        jnz L_5e00cd40
        or eax,dword ptr [ebx + 0x5e03a4e8]
        or eax,ecx
        and eax,0x3f
        jz L_5e00cd1d
        mov ecx,dword ptr [ebp + 0x14]
        push eax
        lea eax,[edi + 0x5e03a4c8]
        push eax
        lea edx,[ecx + 0x5e03a4c8]
        lea eax,[ebx + 0x5e03a4c8]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00cd40
L_5e00cd1d:
        mov edx,dword ptr [ebp + 0x14]
        lea ecx,[edi + 0x5e03a4c8]
        push ecx
        lea ecx,[ebx + 0x5e03a4c8]
        lea eax,[edx + 0x5e03a4c8]
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00cd40:
        mov ecx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x24]
        add ecx,0x4
        dec eax
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],eax
        jnz L_5e00cc14
        mov edi,dword ptr [ebp + -0x30]
        mov ebx,dword ptr [ebp + 0x1c]
L_5e00cd5c:
        mov eax,dword ptr [ebp + 0x20]
        lea edx,[edi + 0x3]
        cmp edx,eax
        jnz L_5e00def9
        xor edx,edx
        xor eax,eax
        mov dx,word ptr [ebx + edi*0x2 + 0x4]
        mov ax,word ptr [ebx + edi*0x2]
        xor ecx,ecx
        mov cx,word ptr [ebx + edi*0x2 + 0x2]
        lea edi,[edx + edx*0x2]
        lea edx,[edx + edi*0x4]
        shl edx,0x2
        mov edi,dword ptr [edx + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],edi
        lea edi,[ecx + ecx*0x2]
        lea ecx,[ecx + edi*0x4]
        lea edi,[eax + eax*0x2]
        shl ecx,0x2
        lea edi,[eax + edi*0x4]
        mov ebx,dword ptr [ecx + 0x5e03a4e8]
        shl edi,0x2
        mov eax,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],eax
        and eax,ebx
        and eax,dword ptr [ebp + 0x14]
        test al,0x3f
        jnz L_5e00def9
        mov ebx,dword ptr [ecx + 0x5e03a4e8]
        mov eax,dword ptr [ebp + 0xc]
        or eax,ebx
        mov ebx,dword ptr [ebp + 0x14]
        or eax,ebx
        and eax,0x3f
        jz L_5e00cdf5
        push eax
        lea eax,[edx + 0x5e03a4c8]
        lea ecx,[ecx + 0x5e03a4c8]
        push eax
        lea edx,[edi + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00def9
L_5e00cdf5:
        lea eax,[edx + 0x5e03a4c8]
        lea ecx,[ecx + 0x5e03a4c8]
        push eax
        lea edx,[edi + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        dec eax
        test eax,eax
        jle L_5e00def9
        mov edx,dword ptr [ebp + 0x1c]
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x20],edx
        mov dword ptr [ebp + 0x1c],eax
L_5e00ce32:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edx]
        mov cx,word ptr [edx + 0x2]
        lea edi,[eax + eax*0x2]
        lea edx,[ecx + ecx*0x2]
        lea eax,[eax + edi*0x4]
        lea ecx,[ecx + edx*0x4]
        shl eax,0x2
        shl ecx,0x2
        mov edi,dword ptr [eax + 0x5e03a4e8]
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov ebx,edi
        and ebx,edx
        test bl,0x3f
        jnz L_5e00ce98
        or edi,edx
        and edi,0x3f
        jz L_5e00ce83
        lea ecx,[ecx + 0x5e03a4c8]
        push edi
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00ce98
L_5e00ce83:
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e002340
L_5e00ce98:
        mov edx,dword ptr [ebp + 0x20]
        mov eax,dword ptr [ebp + 0x1c]
        add edx,0x4
        dec eax
        mov dword ptr [ebp + 0x20],edx
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e00ce32
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        dec eax
        test eax,eax
        jle L_5e00def9
        mov edx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0x1c],eax
        mov dword ptr [ebp + 0x20],edx
L_5e00cec4:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edx]
        mov cx,word ptr [edx + 0x2]
        lea edi,[eax + eax*0x2]
        lea edx,[ecx + ecx*0x2]
        lea eax,[eax + edi*0x4]
        lea ecx,[ecx + edx*0x4]
        shl eax,0x2
        shl ecx,0x2
        mov edi,dword ptr [eax + 0x5e03a4e8]
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov ebx,edi
        and ebx,edx
        test bl,0x3f
        jnz L_5e00cf2a
        or edi,edx
        and edi,0x3f
        jz L_5e00cf15
        lea ecx,[ecx + 0x5e03a4c8]
        push edi
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00cf2a
L_5e00cf15:
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e002340
L_5e00cf2a:
        mov eax,dword ptr [ebp + 0x20]
        lea edx,[eax + 0x2]
        mov eax,dword ptr [ebp + 0x1c]
        dec eax
        mov dword ptr [ebp + 0x20],edx
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e00cec4
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        test eax,eax
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
        mov ebx,eax
L_5e00cf51:
        xor eax,eax
        mov ax,word ptr [edi]
        lea ecx,[eax + eax*0x2]
        lea eax,[eax + ecx*0x4]
        shl eax,0x2
        test byte ptr [eax + 0x5e03a4e8],0x3f
        jnz L_5e00cf76
        lea edx,[eax + 0x5e03a4c8]
        mov ecx,esi
        push edx
        call FUN_5e0023e0
L_5e00cf76:
        add edi,0x2
        dec ebx
        jnz L_5e00cf51
        jmp L_5e00def9
L_5e00cf81:
        mov edx,dword ptr [ebp + 0x18]
        lea eax,[esi + 0x454c]
        push 0x5e37a4c8
        lea ecx,[esi + 0x450c]
        push eax
        push ecx
        push edx
        push ebx
        call FUN_5e028100
        mov ecx,dword ptr [ebp + 0xc]
        mov eax,edi
        and eax,0x8
        test al,al
        lea eax,[ecx + -0x1]
        jnz L_5e00dc95
        cmp eax,0x5
        ja L_5e00deee
        jmp dword ptr [eax*0x4 + 0x5e00df9c]
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x2]
        test eax,eax
        jle L_5e00dbef
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov ecx,dword ptr [ebp + 0x1c]
        add ecx,0x4
        shr edx,0x1
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],edx
L_5e00cfe7:
        mov edi,dword ptr [ebp + 0x18]
        xor eax,eax
        xor edx,edx
        xor ecx,ecx
        mov ax,word ptr [edi + -0x4]
        mov dx,word ptr [edi]
        mov cx,word ptr [edi + -0x2]
        shl edx,0x5
        shl eax,0x5
        shl ecx,0x5
        mov dword ptr [ebp + 0x10],edx
        mov ebx,eax
        lea edx,[edx + 0x5e37a4c8]
        mov dword ptr [ebp + 0x14],ecx
        lea ecx,[ecx + 0x5e37a4c8]
        lea edi,[ebx + 0x5e37a4c8]
        push edx
        push ecx
        push edi
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d045
        fld dword ptr [esi + 0x4580]
        jmp L_5e00d047
L_5e00d045:
        fld dword ptr [edi]
L_5e00d047:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d069
        fld dword ptr [esi + 0x4584]
        jmp L_5e00d06b
L_5e00d069:
        fld dword ptr [edi]
L_5e00d06b:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ebx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d091
        fld dword ptr [esi + 0x4588]
        jmp L_5e00d097
L_5e00d091:
        fld dword ptr [ebx + 0x5e37a4cc]
L_5e00d097:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ebx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d0bd
        fld dword ptr [esi + 0x458c]
        jmp L_5e00d0c3
L_5e00d0bd:
        fld dword ptr [ebx + 0x5e37a4cc]
L_5e00d0c3:
        mov ecx,dword ptr [ebp + 0x14]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d0e3
        fld dword ptr [ebp + 0x20]
        jmp L_5e00d0e9
L_5e00d0e3:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d0e9:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d109
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00d10f
L_5e00d109:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d10f:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d12f
        fld dword ptr [ebp + 0xc]
        jmp L_5e00d135
L_5e00d12f:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d135:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00d157
        fstp st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d157:
        mov ecx,dword ptr [ebp + 0x10]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d177
        fld dword ptr [ebp + 0x20]
        jmp L_5e00d17d
L_5e00d177:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d17d:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d19a
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00d1a0
L_5e00d19a:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d1a0:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d1bd
        fld dword ptr [ebp + 0x14]
        jmp L_5e00d1c3
L_5e00d1bd:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d1c3:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00d1e2
        fstp st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d1e2:
        mov ecx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x24]
        add ecx,0x6
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],eax
        jnz L_5e00cfe7
        jmp L_5e00dbef
        mov edx,dword ptr [ebp + 0x20]
        mov ebx,dword ptr [ebp + 0x1c]
        test edx,edx
        jbe L_5e00d2bd
        fld dword ptr [esi + 0x4580]
        xor ecx,ecx
        mov cx,word ptr [ebx]
        shl ecx,0x5
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d236
        fld dword ptr [esi + 0x4580]
        jmp L_5e00d23c
L_5e00d236:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d23c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d25f
        fld dword ptr [esi + 0x4584]
        jmp L_5e00d265
L_5e00d25f:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d265:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d288
        fld dword ptr [esi + 0x4588]
        jmp L_5e00d28e
L_5e00d288:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d28e:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d2b1
        fld dword ptr [esi + 0x458c]
        jmp L_5e00d2b7
L_5e00d2b1:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d2b7:
        fstp dword ptr [esi + 0x458c]
L_5e00d2bd:
        lea eax,[edx + -0x2]
        test eax,eax
        jle L_5e00d3bd
        xor ecx,ecx
        mov dword ptr [ebp + 0xc],eax
        mov cx,word ptr [ebx]
        shl ecx,0x5
        add ebx,0x2
        lea edx,[ecx + 0x5e37a4c8]
        mov dword ptr [ebp + 0x18],edx
L_5e00d2df:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [ebx + 0x2]
        mov cx,word ptr [ebx]
        shl eax,0x5
        mov dword ptr [ebp + 0x14],eax
        lea edi,[eax + 0x5e37a4c8]
        mov eax,dword ptr [ebp + 0x18]
        shl ecx,0x5
        push eax
        add ecx,0x5e37a4c8
        push edi
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d329
        fld dword ptr [esi + 0x4580]
        jmp L_5e00d32b
L_5e00d329:
        fld dword ptr [edi]
L_5e00d32b:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d34a
        fld dword ptr [esi + 0x4584]
        jmp L_5e00d34c
L_5e00d34a:
        fld dword ptr [edi]
L_5e00d34c:
        mov ecx,dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d372
        fld dword ptr [esi + 0x4588]
        jmp L_5e00d378
L_5e00d372:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d378:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d39b
        fld dword ptr [esi + 0x458c]
        jmp L_5e00d3a1
L_5e00d39b:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d3a1:
        mov eax,dword ptr [ebp + 0xc]
        add ebx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0xc],eax
        jnz L_5e00d2df
        mov ebx,dword ptr [ebp + 0x1c]
        mov edx,dword ptr [ebp + 0x20]
L_5e00d3bd:
        cmp edx,0x1
        jbe L_5e00dbef
        xor ecx,ecx
        mov cx,word ptr [ebx + edx*0x2 + -0x2]
L_5e00d3cd:
        fld dword ptr [esi + 0x4580]
        shl ecx,0x5
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d3ed
        fld dword ptr [esi + 0x4580]
        jmp L_5e00d3f3
L_5e00d3ed:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d3f3:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d416
        fld dword ptr [esi + 0x4584]
        jmp L_5e00d41c
L_5e00d416:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d41c:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d43f
        fld dword ptr [esi + 0x4588]
        jmp L_5e00d445
L_5e00d43f:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d445:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d871
        fld dword ptr [esi + 0x458c]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00dbef
        mov edx,dword ptr [ebp + 0x20]
        mov edi,dword ptr [ebp + 0x1c]
        xor ecx,ecx
        lea eax,[edx + -0x3]
        test eax,eax
        jle L_5e00d647
        add edi,0x4
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x10],eax
        lea edx,[eax + eax*0x1]
        mov dword ptr [ebp + -0x30],edx
L_5e00d497:
        xor edx,edx
        xor ecx,ecx
        mov dx,word ptr [edi]
        mov cx,word ptr [edi + -0x2]
        xor eax,eax
        mov ax,word ptr [edi + -0x4]
        shl edx,0x5
        shl ecx,0x5
        shl eax,0x5
        lea edx,[edx + 0x5e37a4c8]
        mov dword ptr [ebp + 0x14],ecx
        lea ecx,[ecx + 0x5e37a4c8]
        lea ebx,[eax + 0x5e37a4c8]
        push edx
        push ecx
        push ebx
        lea ecx,[esi + 0x400c]
        mov dword ptr [ebp + 0xc],edx
        mov dword ptr [ebp + 0x24],eax
        call FUN_5e012eb0
        mov eax,dword ptr [ebp + 0xc]
        mov edx,dword ptr [ebp + 0x14]
        xor ecx,ecx
        push eax
        mov cx,word ptr [edi + 0x2]
        lea eax,[edx + 0x5e37a4c8]
        shl ecx,0x5
        add ecx,0x5e37a4c8
        push ecx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d51c
        fld dword ptr [esi + 0x4580]
        jmp L_5e00d51e
L_5e00d51c:
        fld dword ptr [ebx]
L_5e00d51e:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d540
        fld dword ptr [esi + 0x4584]
        jmp L_5e00d542
L_5e00d540:
        fld dword ptr [ebx]
L_5e00d542:
        mov ecx,dword ptr [ebp + 0x24]
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d56b
        fld dword ptr [esi + 0x4588]
        jmp L_5e00d571
L_5e00d56b:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d571:
        fst dword ptr [ebp + 0x24]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d597
        fld dword ptr [esi + 0x458c]
        jmp L_5e00d59d
L_5e00d597:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d59d:
        mov ecx,dword ptr [ebp + 0x14]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d5bd
        fld dword ptr [ebp + 0xc]
        jmp L_5e00d5c3
L_5e00d5bd:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d5c3:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d5e0
        fld dword ptr [ebp + 0x18]
        jmp L_5e00d5e6
L_5e00d5e0:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d5e6:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x24]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d603
        fld dword ptr [ebp + 0x24]
        jmp L_5e00d609
L_5e00d603:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d609:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00d628
        fstp st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d628:
        mov eax,dword ptr [ebp + 0x10]
        add edi,0x4
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x10],eax
        jnz L_5e00d497
        mov ecx,dword ptr [ebp + -0x30]
        mov edi,dword ptr [ebp + 0x1c]
        mov edx,dword ptr [ebp + 0x20]
L_5e00d647:
        lea eax,[ecx + 0x3]
        cmp eax,edx
        jnz L_5e00d72b
        xor eax,eax
        xor edx,edx
        mov ax,word ptr [edi + ecx*0x2]
        mov dx,word ptr [edi + ecx*0x2 + 0x4]
        shl eax,0x5
        mov dword ptr [ebp + 0x24],eax
        lea ebx,[eax + 0x5e37a4c8]
        xor eax,eax
        mov ax,word ptr [edi + ecx*0x2 + 0x2]
        lea ecx,[esi + 0x400c]
        shl edx,0x5
        shl eax,0x5
        add edx,0x5e37a4c8
        add eax,0x5e37a4c8
        push edx
        push eax
        push ebx
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d6aa
        fld dword ptr [esi + 0x4580]
        jmp L_5e00d6ac
L_5e00d6aa:
        fld dword ptr [ebx]
L_5e00d6ac:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d6cb
        fld dword ptr [esi + 0x4584]
        jmp L_5e00d6cd
L_5e00d6cb:
        fld dword ptr [ebx]
L_5e00d6cd:
        mov ecx,dword ptr [ebp + 0x24]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d6f3
        fld dword ptr [esi + 0x4588]
        jmp L_5e00d6f9
L_5e00d6f3:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d6f9:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d71c
        fld dword ptr [esi + 0x458c]
        jmp L_5e00d722
L_5e00d71c:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d722:
        mov edx,dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x458c]
L_5e00d72b:
        cmp edx,0x2
        jbe L_5e00dbef
        fld dword ptr [esi + 0x4580]
        xor ecx,ecx
        mov cx,word ptr [edi + edx*0x2 + -0x4]
        shl ecx,0x5
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d75b
        fld dword ptr [esi + 0x4580]
        jmp L_5e00d761
L_5e00d75b:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d761:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d787
        fld dword ptr [esi + 0x4584]
        jmp L_5e00d78d
L_5e00d787:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d78d:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d7b3
        fld dword ptr [esi + 0x4588]
        jmp L_5e00d7b9
L_5e00d7b3:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d7b9:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d7df
        fld dword ptr [esi + 0x458c]
        jmp L_5e00d7e5
L_5e00d7df:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d7e5:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        xor ecx,ecx
        mov cx,word ptr [edi + edx*0x2 + -0x2]
        shl ecx,0x5
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d80c
        fld dword ptr [ebp + 0x20]
        jmp L_5e00d812
L_5e00d80c:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d812:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d82f
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00d835
L_5e00d82f:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d835:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d852
        fld dword ptr [ebp + 0x14]
        jmp L_5e00d858
L_5e00d852:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d858:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00d877
        fstp st(0)
L_5e00d871:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d877:
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00dbef
        mov ecx,dword ptr [ebp + 0x20]
        lea eax,[ecx + -0x1]
        test eax,eax
        jle L_5e00dbef
        mov edx,dword ptr [ebp + 0x1c]
        inc eax
        shr eax,0x1
        mov dword ptr [ebp + 0x18],edx
        mov dword ptr [ebp + 0x24],eax
L_5e00d89c:
        mov edx,dword ptr [ebp + 0x18]
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edx]
        mov cx,word ptr [edx + 0x2]
        shl eax,0x5
        shl ecx,0x5
        mov ebx,eax
        mov dword ptr [ebp + 0x14],ecx
        lea ecx,[ecx + 0x5e37a4c8]
        lea edi,[ebx + 0x5e37a4c8]
        push ecx
        push edi
        mov ecx,esi
        call FUN_5e002340
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d8e3
        fld dword ptr [esi + 0x4580]
        jmp L_5e00d8e5
L_5e00d8e3:
        fld dword ptr [edi]
L_5e00d8e5:
        fst dword ptr [ebp + 0x20]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d907
        fld dword ptr [esi + 0x4584]
        jmp L_5e00d909
L_5e00d907:
        fld dword ptr [edi]
L_5e00d909:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ebx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d92f
        fld dword ptr [esi + 0x4588]
        jmp L_5e00d935
L_5e00d92f:
        fld dword ptr [ebx + 0x5e37a4cc]
L_5e00d935:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ebx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d95b
        fld dword ptr [esi + 0x458c]
        jmp L_5e00d961
L_5e00d95b:
        fld dword ptr [ebx + 0x5e37a4cc]
L_5e00d961:
        mov ecx,dword ptr [ebp + 0x14]
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x20]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d981
        fld dword ptr [ebp + 0x20]
        jmp L_5e00d987
L_5e00d981:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d987:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00d9a4
        fld dword ptr [ebp + 0x1c]
        jmp L_5e00d9aa
L_5e00d9a4:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e00d9aa:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00d9c7
        fld dword ptr [ebp + 0xc]
        jmp L_5e00d9cd
L_5e00d9c7:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d9cd:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00d9ec
        fstp st(0)
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e00d9ec:
        mov ecx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x24]
        add ecx,0x4
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],ecx
        mov dword ptr [ebp + 0x24],eax
        jnz L_5e00d89c
        jmp L_5e00dbef
        mov ecx,dword ptr [ebp + 0x20]
        lea eax,[ecx + -0x1]
        test eax,eax
        jle L_5e00dafc
        mov ecx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0xc],eax
        mov dword ptr [ebp + 0x14],ecx
L_5e00da24:
        mov ecx,dword ptr [ebp + 0x14]
        xor eax,eax
        xor edx,edx
        mov ax,word ptr [ecx]
        mov dx,word ptr [ecx + 0x2]
        shl eax,0x5
        mov ebx,eax
        mov ecx,esi
        shl edx,0x5
        add edx,0x5e37a4c8
        lea edi,[ebx + 0x5e37a4c8]
        push edx
        push edi
        call FUN_5e002340
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00da68
        fld dword ptr [esi + 0x4580]
        jmp L_5e00da6a
L_5e00da68:
        fld dword ptr [edi]
L_5e00da6a:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00da89
        fld dword ptr [esi + 0x4584]
        jmp L_5e00da8b
L_5e00da89:
        fld dword ptr [edi]
L_5e00da8b:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ebx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00daae
        fld dword ptr [esi + 0x4588]
        jmp L_5e00dab4
L_5e00daae:
        fld dword ptr [ebx + 0x5e37a4cc]
L_5e00dab4:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ebx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00dad7
        fld dword ptr [esi + 0x458c]
        jmp L_5e00dadd
L_5e00dad7:
        fld dword ptr [ebx + 0x5e37a4cc]
L_5e00dadd:
        mov eax,dword ptr [ebp + 0x14]
        add eax,0x2
        mov dword ptr [ebp + 0x14],eax
        mov eax,dword ptr [ebp + 0xc]
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0xc],eax
        jnz L_5e00da24
        mov ecx,dword ptr [ebp + 0x20]
L_5e00dafc:
        cmp ecx,0x1
        jbe L_5e00dbef
        mov eax,dword ptr [ebp + 0x1c]
        xor edx,edx
        mov dx,word ptr [eax + ecx*0x2 + -0x2]
        mov ecx,edx
        jmp L_5e00d3cd
        mov eax,dword ptr [ebp + 0x20]
        test eax,eax
        jle L_5e00dbef
        mov ecx,dword ptr [ebp + 0x1c]
        mov dword ptr [ebp + 0x1c],eax
        mov dword ptr [ebp + 0x20],ecx
L_5e00db2a:
        mov edx,dword ptr [ebp + 0x20]
        xor eax,eax
        mov ecx,esi
        mov ax,word ptr [edx]
        shl eax,0x5
        mov ebx,eax
        lea edi,[ebx + 0x5e37a4c8]
        push edi
        call FUN_5e0023e0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00db5e
        fld dword ptr [esi + 0x4580]
        jmp L_5e00db60
L_5e00db5e:
        fld dword ptr [edi]
L_5e00db60:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00db7f
        fld dword ptr [esi + 0x4584]
        jmp L_5e00db81
L_5e00db7f:
        fld dword ptr [edi]
L_5e00db81:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ebx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00dba4
        fld dword ptr [esi + 0x4588]
        jmp L_5e00dbaa
L_5e00dba4:
        fld dword ptr [ebx + 0x5e37a4cc]
L_5e00dbaa:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ebx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00dbcd
        fld dword ptr [esi + 0x458c]
        jmp L_5e00dbd3
L_5e00dbcd:
        fld dword ptr [ebx + 0x5e37a4cc]
L_5e00dbd3:
        mov ecx,dword ptr [ebp + 0x20]
        mov eax,dword ptr [ebp + 0x1c]
        add ecx,0x2
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x20],ecx
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e00db2a
L_5e00dbef:
        mov ecx,dword ptr [esi + 0x4550]
        xor edx,edx
        mov dword ptr [ebp + -0x34],ecx
        mov dword ptr [ebp + -0x30],edx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4580]
        fnstsw ax
        test ah,0x41
        jnz L_5e00dc15
        fstp dword ptr [esi + 0x4580]
        jmp L_5e00dc3f
L_5e00dc15:
        mov eax,dword ptr [esi + 0x4558]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4584]
        fnstsw ax
        test ah,0x1
        jz L_5e00dc3d
        fstp dword ptr [esi + 0x4584]
        jmp L_5e00dc3f
L_5e00dc3d:
        fstp st(0)
L_5e00dc3f:
        mov ecx,dword ptr [esi + 0x4554]
        mov dword ptr [ebp + -0x30],edx
        mov dword ptr [ebp + -0x34],ecx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4588]
        fnstsw ax
        test ah,0x41
        jnz L_5e00dc66
        fstp dword ptr [esi + 0x4588]
        jmp L_5e00def9
L_5e00dc66:
        mov eax,dword ptr [esi + 0x455c]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
L_5e00dc79:
        fcom dword ptr [esi + 0x458c]
        fnstsw ax
        test ah,0x1
        jz L_5e00def7
        fstp dword ptr [esi + 0x458c]
        jmp L_5e00def9
L_5e00dc95:
        cmp eax,0x5
        ja L_5e00deee
        jmp dword ptr [eax*0x4 + 0x5e00dfb4]
        mov edx,dword ptr [ebp + 0x20]
        lea eax,[edx + -0x2]
        test eax,eax
        jle L_5e00def9
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov ecx,dword ptr [ebp + 0x1c]
        mov ebx,edx
        add esi,0x400c
        lea edi,[ecx + 0x2]
        shr ebx,0x1
L_5e00dccd:
        xor eax,eax
        xor ecx,ecx
        mov ax,word ptr [edi + 0x2]
        mov cx,word ptr [edi]
        xor edx,edx
        mov dx,word ptr [edi + -0x2]
        shl eax,0x5
        shl ecx,0x5
        add eax,0x5e37a4c8
        add ecx,0x5e37a4c8
        shl edx,0x5
        push eax
        add edx,0x5e37a4c8
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e012eb0
        add edi,0x6
        dec ebx
        jnz L_5e00dccd
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        add eax,-0x2
        test eax,eax
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
        xor ecx,ecx
        add esi,0x400c
        mov cx,word ptr [edi]
        mov dword ptr [ebp + 0x20],esi
        shl ecx,0x5
        add edi,0x2
        mov esi,eax
        lea ebx,[ecx + 0x5e37a4c8]
L_5e00dd3a:
        xor edx,edx
        xor eax,eax
        mov dx,word ptr [edi + 0x2]
        mov ax,word ptr [edi]
        mov ecx,dword ptr [ebp + 0x20]
        push ebx
        shl edx,0x5
        shl eax,0x5
        add edx,0x5e37a4c8
        add eax,0x5e37a4c8
        push edx
        push eax
        call FUN_5e012eb0
        add edi,0x2
        dec esi
        jnz L_5e00dd3a
        jmp L_5e00def9
        mov ecx,dword ptr [ebp + 0x20]
        mov edi,dword ptr [ebp + 0x1c]
        add ecx,-0x3
        xor eax,eax
        test ecx,ecx
        jle L_5e00ddfa
        lea eax,[ecx + 0x1]
        add edi,0x4
        shr eax,0x1
        mov dword ptr [ebp + 0x14],eax
        lea edx,[eax + eax*0x1]
        mov dword ptr [ebp + 0x18],edx
L_5e00dd8c:
        xor ecx,ecx
        xor eax,eax
        mov cx,word ptr [edi]
        mov ax,word ptr [edi + -0x2]
        shl ecx,0x5
        shl eax,0x5
        lea ebx,[ecx + 0x5e37a4c8]
        lea ecx,[esi + 0x400c]
        lea eax,[eax + 0x5e37a4c8]
        push ebx
        mov dword ptr [ebp + 0xc],eax
        push eax
        xor eax,eax
        mov ax,word ptr [edi + -0x4]
        shl eax,0x5
        add eax,0x5e37a4c8
        push eax
        call FUN_5e012eb0
        mov edx,dword ptr [ebp + 0xc]
        xor ecx,ecx
        mov cx,word ptr [edi + 0x2]
        push ebx
        shl ecx,0x5
        add ecx,0x5e37a4c8
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        mov eax,dword ptr [ebp + 0x14]
        add edi,0x4
        dec eax
        mov dword ptr [ebp + 0x14],eax
        jnz L_5e00dd8c
        mov eax,dword ptr [ebp + 0x18]
        mov edi,dword ptr [ebp + 0x1c]
L_5e00ddfa:
        mov edx,dword ptr [ebp + 0x20]
        lea ecx,[eax + 0x3]
        cmp ecx,edx
        jnz L_5e00def9
        xor edx,edx
        xor ecx,ecx
        mov dx,word ptr [edi + eax*0x2 + 0x4]
        mov cx,word ptr [edi + eax*0x2 + 0x2]
        shl edx,0x5
        add edx,0x5e37a4c8
        push edx
        xor edx,edx
        mov dx,word ptr [edi + eax*0x2]
        shl ecx,0x5
        shl edx,0x5
        add ecx,0x5e37a4c8
        add edx,0x5e37a4c8
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        dec eax
        test eax,eax
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
        lea ebx,[eax + 0x1]
        shr ebx,0x1
L_5e00de5e:
        xor ecx,ecx
        xor edx,edx
        mov cx,word ptr [edi + 0x2]
        mov dx,word ptr [edi]
        shl ecx,0x5
        shl edx,0x5
        add ecx,0x5e37a4c8
        add edx,0x5e37a4c8
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e002340
        add edi,0x4
        dec ebx
        jnz L_5e00de5e
        jmp L_5e00def9
        mov eax,dword ptr [ebp + 0x20]
        lea ebx,[eax + -0x1]
        test ebx,ebx
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
L_5e00de99:
        xor ecx,ecx
        xor edx,edx
        mov cx,word ptr [edi + 0x2]
        mov dx,word ptr [edi]
        shl ecx,0x5
        shl edx,0x5
        add ecx,0x5e37a4c8
        add edx,0x5e37a4c8
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e002340
        add edi,0x2
        dec ebx
        jnz L_5e00de99
        jmp L_5e00def9
        mov ebx,dword ptr [ebp + 0x20]
        test ebx,ebx
        jle L_5e00def9
        mov edi,dword ptr [ebp + 0x1c]
L_5e00ded1:
        xor eax,eax
        mov ecx,esi
        mov ax,word ptr [edi]
        shl eax,0x5
        add eax,0x5e37a4c8
        push eax
        call FUN_5e0023e0
        add edi,0x2
        dec ebx
        jnz L_5e00ded1
        jmp L_5e00def9
L_5e00deee:
        mov dword ptr [ebp + 0x8],0x80004001
        jmp L_5e00def9
L_5e00def7:
        fstp st(0)
L_5e00def9:
        fninit
        fldcw word ptr [ebp + -0x18]
        mov eax,dword ptr [ebp + 0x8]
        pop edi
        pop ebx
        pop esi
        mov esp,ebp
        pop ebp
        ret 0x20
    }
}
