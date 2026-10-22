/* auto-built transcription draft for FUN_5e0057c0 (size=15122) */

extern int g_5e035010;
extern int g_5e035aa0;
extern int g_5e035aa4;
extern int g_5e0383b8;
extern int g_5e03a4c8;
extern int g_5e03a4cc;
extern int g_5e03a4e8;
extern int g_5e37a4c8;
extern int g_5e37a4cc;
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

__declspec(naked) void __stdcall FUN_5e0057c0(void)
{
    __asm {        push ebp
        mov ebp,esp
        sub esp,0x34
        push esi
        mov esi,dword ptr [ebp + 0x8]
        mov eax,dword ptr [esi + 0x4874]
        and eax,0x2
        test al,al
        jnz L_5e0057ee
        push 0x5e038450
        call dword ptr [g_5e035010]
        mov eax,0x80004005
        pop esi
        mov esp,ebp
        pop ebp
        ret 0x18
L_5e0057ee:
        push ebx
        xor ebx,ebx
        push edi
        mov dword ptr [ebp + 0x8],ebx
        fnstcw word ptr [ebp + -0x18]
        mov ecx,dword ptr [ebp + -0x18]
        and ecx,0xfcff
        or ecx,0x3f
        mov dword ptr [ebp + -0x14],ecx
        fldcw word ptr [ebp + -0x14]
        mov eax,dword ptr [ebp + 0x10]
        cmp eax,0x1c4
        ja L_5e00764a
        jz L_5e005aa7
        cmp eax,0x112
        jz L_5e005880
        cmp eax,0x1c2
        jnz L_5e007658
        mov ebx,dword ptr [ebp + 0x18]
        test ebx,ebx
        jbe L_5e005876
        mov edx,dword ptr [ebp + 0x14]
        mov ecx,0x5e57a4cc
        lea eax,[edx + 0x8]
        mov edx,ebx
L_5e005844:
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
        jnz L_5e005844
L_5e005876:
        mov edi,0x5e57a4c8
        jmp L_5e0076b5
L_5e005880:
        mov ecx,esi
        call FUN_5e003cc0
        mov ecx,dword ptr [ebp + 0x18]
        cmp ecx,ebx
        jbe L_5e005a9d
        mov eax,dword ptr [ebp + 0x14]
        mov edx,0x5e57a4c8
        sub edx,eax
        mov ebx,0x5e57a4cc
        mov dword ptr [ebp + -0x1c],edx
        mov edx,0x5e57a4d8
        sub edx,eax
        lea edi,[eax + 0x8]
        mov dword ptr [ebp + -0x20],edx
        mov edx,0x5e57a4dc
        sub edx,eax
        mov dword ptr [ebp + -0x14],ecx
        mov dword ptr [ebp + -0x24],edx
        mov edx,0x5e57a4d4
        sub edx,eax
        mov dword ptr [ebp + -0x28],edx
        mov edx,0x5e57a4d0
        sub edx,eax
        mov dword ptr [ebp + -0x10],edx
L_5e0058d2:
        mov eax,dword ptr [edi + -0x8]
        mov ecx,dword ptr [edi + -0x4]
        mov edx,dword ptr [edi]
        mov dword ptr [ebx + -0x4],eax
        mov eax,dword ptr [ebp + -0x1c]
        mov dword ptr [ebx],ecx
        mov ecx,dword ptr [edi + 0x10]
        mov dword ptr [eax + edi*0x1],edx
        mov edx,dword ptr [ebp + -0x20]
        mov eax,dword ptr [edi + 0x14]
        test byte ptr [esi + 0x45a9],0x20
        mov dword ptr [edx + edi*0x1],ecx
        mov ecx,dword ptr [ebp + -0x24]
        mov edx,dword ptr [ebp + -0x28]
        mov dword ptr [ecx + edi*0x1],eax
        mov dword ptr [edx + edi*0x1],0xff000000
        jz L_5e005915
        mov eax,dword ptr [esi + 0x41d0]
        jmp L_5e005a84
L_5e005915:
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
        jz L_5e00594d
        mov dword ptr [ebp + 0x14],0x0
        jmp L_5e005964
L_5e00594d:
        fld dword ptr [ebp + 0x14]
        fcomp dword ptr [g_5e035aa4]
        fnstsw ax
        test ah,0x41
        jnz L_5e005964
        mov dword ptr [ebp + 0x14],0x3f800000
L_5e005964:
        mov ecx,esi
        call FUN_5e00e660
        fld dword ptr [ebp + 0x14]
        fmul dword ptr [esi + 0x41b0]
        test eax,eax
        fadd dword ptr [esi + 0x41c0]
        jz L_5e0059cb
        mov eax,dword ptr [esi + 0x41d0]
        fstp dword ptr [ebp + 0x14]
        shr eax,0x18
        fld dword ptr [ebp + 0x14]
        fmul dword ptr [g_5e0383b8]
        fistp dword ptr [ebp + -0x4]
        mov ecx,dword ptr [ebp + -0x4]
        test ecx,ecx
        jge L_5e0059a1
        xor ecx,ecx
        jmp L_5e0059ae
L_5e0059a1:
        cmp ecx,0xff
        jle L_5e0059b1
        mov ecx,0xff
L_5e0059ae:
        mov dword ptr [ebp + -0x4],ecx
L_5e0059b1:
        shl eax,0x8
        mov edx,dword ptr [ebp + -0x10]
        or eax,ecx
        shl eax,0x8
        or eax,ecx
        shl eax,0x8
        or eax,ecx
        mov dword ptr [edx + edi*0x1],eax
        jmp L_5e005a8a
L_5e0059cb:
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
        jge L_5e005a17
        mov dword ptr [ebp + 0x10],0x0
        jmp L_5e005a26
L_5e005a17:
        cmp ecx,0xff
        jle L_5e005a26
        mov dword ptr [ebp + 0x10],0xff
L_5e005a26:
        fld dword ptr [ebp + -0x30]
        fmul dword ptr [g_5e0383b8]
        fistp dword ptr [ebp + -0x8]
        mov edx,dword ptr [ebp + -0x8]
        test edx,edx
        jge L_5e005a3d
        xor edx,edx
        jmp L_5e005a4a
L_5e005a3d:
        cmp edx,0xff
        jle L_5e005a4d
        mov edx,0xff
L_5e005a4a:
        mov dword ptr [ebp + -0x8],edx
L_5e005a4d:
        fld dword ptr [ebp + 0x14]
        fmul dword ptr [g_5e0383b8]
        fistp dword ptr [ebp + -0xc]
        mov ecx,dword ptr [ebp + -0xc]
        test ecx,ecx
        jge L_5e005a64
        xor ecx,ecx
        jmp L_5e005a71
L_5e005a64:
        cmp ecx,0xff
        jle L_5e005a74
        mov ecx,0xff
L_5e005a71:
        mov dword ptr [ebp + -0xc],ecx
L_5e005a74:
        shl eax,0x8
        or eax,dword ptr [ebp + 0x10]
        shl eax,0x8
        or eax,edx
        shl eax,0x8
        or eax,ecx
L_5e005a84:
        mov ecx,dword ptr [ebp + -0x10]
        mov dword ptr [ecx + edi*0x1],eax
L_5e005a8a:
        mov eax,dword ptr [ebp + -0x14]
        add ebx,0x20
        add edi,0x20
        dec eax
        mov dword ptr [ebp + -0x14],eax
        jnz L_5e0058d2
L_5e005a9d:
        mov edi,0x5e57a4c8
        jmp L_5e0076b2
L_5e005aa7:
        mov edi,dword ptr [ebp + 0x1c]
        mov edx,edi
        and edx,0x4
        test dl,dl
        jnz L_5e006a6f
        mov ebx,dword ptr [ebp + 0x18]
        mov eax,dword ptr [ebp + 0x14]
        push ebx
        push 0x5e03a4c8
        push eax
        mov ecx,esi
        call FUN_5e00e220
        mov ecx,edi
        and ecx,0x8
        test cl,cl
        jnz L_5e00673f
        mov edx,dword ptr [ebp + 0xc]
        lea eax,[edx + -0x1]
        cmp eax,0x5
        ja L_5e0092b6
        jmp dword ptr [eax*0x4 + 0x5e0092d4]
        lea eax,[ebx + -0x2]
        test eax,eax
        jle L_5e0066b0
        lea ecx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul ecx
        shr edx,0x1
        mov edi,0x5e03a4fc
        mov dword ptr [ebp + 0x1c],edx
L_5e005b0d:
        mov eax,dword ptr [edi + 0x54]
        mov edx,dword ptr [edi + -0x14]
        mov ecx,dword ptr [edi + 0x20]
        mov ebx,eax
        and ebx,edx
        and ebx,ecx
        test bl,0x3f
        jnz L_5e005b51
        or eax,edx
        or eax,ecx
        and eax,0x3f
        jz L_5e005b3d
        lea edx,[edi + 0x34]
        push eax
        push edx
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e005b51
L_5e005b3d:
        lea ecx,[edi + 0x34]
        lea edx,[edi + -0x34]
        push ecx
        push edi
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e005b51:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + -0x34]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005b6b
        fld dword ptr [esi + 0x4580]
        jmp L_5e005b6e
L_5e005b6b:
        fld dword ptr [edi + -0x34]
L_5e005b6e:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + -0x34]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e005b91
        fld dword ptr [esi + 0x4584]
        jmp L_5e005b94
L_5e005b91:
        fld dword ptr [edi + -0x34]
L_5e005b94:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x30]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005bb7
        fld dword ptr [esi + 0x4588]
        jmp L_5e005bba
L_5e005bb7:
        fld dword ptr [edi + -0x30]
L_5e005bba:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x30]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e005bdd
        fld dword ptr [esi + 0x458c]
        jmp L_5e005be0
L_5e005bdd:
        fld dword ptr [edi + -0x30]
L_5e005be0:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005bf9
        fld dword ptr [ebp + 0x18]
        jmp L_5e005bfb
L_5e005bf9:
        fld dword ptr [edi]
L_5e005bfb:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e005c17
        fld dword ptr [ebp + 0x14]
        jmp L_5e005c19
L_5e005c17:
        fld dword ptr [edi]
L_5e005c19:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005c36
        fld dword ptr [ebp + 0xc]
        jmp L_5e005c39
L_5e005c36:
        fld dword ptr [edi + 0x4]
L_5e005c39:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e005c55
        fstp st(0)
        fld dword ptr [edi + 0x4]
L_5e005c55:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi + 0x34]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005c6f
        fld dword ptr [ebp + 0x18]
        jmp L_5e005c72
L_5e005c6f:
        fld dword ptr [edi + 0x34]
L_5e005c72:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + 0x34]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e005c8c
        fld dword ptr [ebp + 0x14]
        jmp L_5e005c8f
L_5e005c8c:
        fld dword ptr [edi + 0x34]
L_5e005c8f:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x38]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005ca9
        fld dword ptr [ebp + 0xc]
        jmp L_5e005cac
L_5e005ca9:
        fld dword ptr [edi + 0x38]
L_5e005cac:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x38]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e005cc5
        fstp st(0)
        fld dword ptr [edi + 0x38]
L_5e005cc5:
        mov eax,dword ptr [ebp + 0x1c]
        add edi,0x9c
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e005b0d
        jmp L_5e0066b0
        test ebx,ebx
        jbe L_5e005d87
        fld dword ptr [esi + 0x4580]
        fcomp dword ptr [g_5e03a4c8]
        fnstsw ax
        test ah,0x1
        jz L_5e005d06
        fld dword ptr [esi + 0x4580]
        jmp L_5e005d0c
L_5e005d06:
        fld dword ptr [g_5e03a4c8]
L_5e005d0c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fcomp dword ptr [g_5e03a4c8]
        fnstsw ax
        test ah,0x41
        jnz L_5e005d2d
        fld dword ptr [esi + 0x4584]
        jmp L_5e005d33
L_5e005d2d:
        fld dword ptr [g_5e03a4c8]
L_5e005d33:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fcomp dword ptr [g_5e03a4cc]
        fnstsw ax
        test ah,0x1
        jz L_5e005d54
        fld dword ptr [esi + 0x4588]
        jmp L_5e005d5a
L_5e005d54:
        fld dword ptr [g_5e03a4cc]
L_5e005d5a:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fcomp dword ptr [g_5e03a4cc]
        fnstsw ax
        test ah,0x41
        jnz L_5e005d7b
        fld dword ptr [esi + 0x458c]
        jmp L_5e005d81
L_5e005d7b:
        fld dword ptr [g_5e03a4cc]
L_5e005d81:
        fstp dword ptr [esi + 0x458c]
L_5e005d87:
        lea eax,[ebx + -0x2]
        test eax,eax
        jle L_5e005e7f
        mov edi,0x5e03a530
        mov dword ptr [ebp + 0x18],eax
L_5e005d9a:
        mov eax,dword ptr [edi + 0x20]
        mov ecx,dword ptr [edi + -0x14]
        mov edx,eax
        and edx,ecx
        and edx,dword ptr [g_5e03a4e8]
        test dl,0x3f
        jnz L_5e005de7
        mov edx,dword ptr [g_5e03a4e8]
        or eax,ecx
        or eax,edx
        and eax,0x3f
        jz L_5e005dd2
        push eax
        push 0x5e03a4c8
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e005de7
L_5e005dd2:
        push 0x5e03a4c8
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e005de7:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005e00
        fld dword ptr [esi + 0x4580]
        jmp L_5e005e02
L_5e005e00:
        fld dword ptr [edi]
L_5e005e02:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e005e21
        fld dword ptr [esi + 0x4584]
        jmp L_5e005e23
L_5e005e21:
        fld dword ptr [edi]
L_5e005e23:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005e43
        fld dword ptr [esi + 0x4588]
        jmp L_5e005e46
L_5e005e43:
        fld dword ptr [edi + 0x4]
L_5e005e46:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e005e66
        fld dword ptr [esi + 0x458c]
        jmp L_5e005e69
L_5e005e66:
        fld dword ptr [edi + 0x4]
L_5e005e69:
        mov eax,dword ptr [ebp + 0x18]
        add edi,0x34
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e005d9a
L_5e005e7f:
        cmp ebx,0x1
        jbe L_5e0066b0
        lea edx,[ebx + ebx*0x2]
        lea ecx,[ebx + edx*0x4]
L_5e005e8e:
        fld dword ptr [esi + 0x4580]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a494]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005eae
        fld dword ptr [esi + 0x4580]
        jmp L_5e005eb4
L_5e005eae:
        fld dword ptr [ecx + 0x5e03a494]
L_5e005eb4:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a494]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e005ed7
        fld dword ptr [esi + 0x4584]
        jmp L_5e005edd
L_5e005ed7:
        fld dword ptr [ecx + 0x5e03a494]
L_5e005edd:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a498]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e005f00
        fld dword ptr [esi + 0x4588]
        jmp L_5e005f06
L_5e005f00:
        fld dword ptr [ecx + 0x5e03a498]
L_5e005f06:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a498]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0063ad
        fld dword ptr [esi + 0x458c]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e0066b0
        lea eax,[ebx + -0x3]
        xor edi,edi
        test eax,eax
        jle L_5e00611e
        inc eax
        mov edi,0x5e03a550
        shr eax,0x1
        mov dword ptr [ebp + 0x10],eax
        add eax,eax
        mov dword ptr [ebp + -0x30],eax
L_5e005f53:
        mov eax,dword ptr [edi + -0x68]
        mov edx,dword ptr [edi + -0x34]
        mov ecx,dword ptr [edi]
        mov ebx,eax
        and ebx,edx
        and ebx,ecx
        test bl,0x3f
        jnz L_5e005fa2
        or eax,edx
        or eax,ecx
        and eax,0x3f
        jz L_5e005f88
        lea ecx,[edi + -0x20]
        push eax
        lea edx,[edi + -0x54]
        push ecx
        lea eax,[edi + 0xffffff78]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e005fa2
L_5e005f88:
        lea ecx,[edi + -0x20]
        lea edx,[edi + -0x54]
        push ecx
        lea eax,[edi + 0xffffff78]
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e005fa2:
        mov eax,dword ptr [edi + -0x34]
        mov ecx,dword ptr [edi + 0x34]
        mov edx,dword ptr [edi]
        mov ebx,eax
        and ebx,ecx
        and ebx,edx
        test bl,0x3f
        jnz L_5e005feb
        or eax,ecx
        or eax,edx
        and eax,0x3f
        jz L_5e005fd4
        lea ecx,[edi + -0x20]
        push eax
        lea edx,[edi + 0x14]
        push ecx
        lea eax,[edi + -0x54]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e005feb
L_5e005fd4:
        lea ecx,[edi + -0x20]
        lea edx,[edi + 0x14]
        push ecx
        lea eax,[edi + -0x54]
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e005feb:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0xffffff78]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006008
        fld dword ptr [esi + 0x4580]
        jmp L_5e00600e
L_5e006008:
        fld dword ptr [edi + 0xffffff78]
L_5e00600e:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0xffffff78]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006034
        fld dword ptr [esi + 0x4584]
        jmp L_5e00603a
L_5e006034:
        fld dword ptr [edi + 0xffffff78]
L_5e00603a:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0xffffff7c]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006060
        fld dword ptr [esi + 0x4588]
        jmp L_5e006066
L_5e006060:
        fld dword ptr [edi + 0xffffff7c]
L_5e006066:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0xffffff7c]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00608c
        fld dword ptr [esi + 0x458c]
        jmp L_5e006092
L_5e00608c:
        fld dword ptr [edi + 0xffffff7c]
L_5e006092:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + -0x54]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0060ac
        fld dword ptr [ebp + 0x14]
        jmp L_5e0060af
L_5e0060ac:
        fld dword ptr [edi + -0x54]
L_5e0060af:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + -0x54]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0060c9
        fld dword ptr [ebp + 0xc]
        jmp L_5e0060cc
L_5e0060c9:
        fld dword ptr [edi + -0x54]
L_5e0060cc:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [edi + -0x50]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0060e6
        fld dword ptr [ebp + 0x1c]
        jmp L_5e0060e9
L_5e0060e6:
        fld dword ptr [edi + -0x50]
L_5e0060e9:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + -0x50]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e006102
        fstp st(0)
        fld dword ptr [edi + -0x50]
L_5e006102:
        mov eax,dword ptr [ebp + 0x10]
        add edi,0x68
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x10],eax
        jnz L_5e005f53
        mov ebx,dword ptr [ebp + 0x18]
        mov edi,dword ptr [ebp + -0x30]
L_5e00611e:
        lea ecx,[edi + 0x3]
        cmp ecx,ebx
        jnz L_5e006267
        lea edx,[edi + edi*0x2 + 0x6]
        lea eax,[edi + edi*0x2 + 0x3]
        lea ebx,[edi + edi*0x2]
        lea ecx,[edi + edx*0x4 + 0x2]
        lea eax,[edi + eax*0x4 + 0x1]
        lea edi,[edi + ebx*0x4]
        shl edi,0x2
        shl eax,0x2
        mov ebx,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],eax
        mov eax,dword ptr [eax + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],ebx
        shl ecx,0x2
        mov ebx,eax
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        and ebx,edx
        mov edx,dword ptr [ebp + 0xc]
        and ebx,edx
        test bl,0x3f
        jnz L_5e0061c0
        or eax,dword ptr [ecx + 0x5e03a4e8]
        or eax,edx
        and eax,0x3f
        jz L_5e00619d
        mov edx,dword ptr [ebp + 0x14]
        lea ecx,[ecx + 0x5e03a4c8]
        push eax
        push ecx
        lea eax,[edx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0061c0
L_5e00619d:
        mov eax,dword ptr [ebp + 0x14]
        lea edx,[ecx + 0x5e03a4c8]
        push edx
        lea edx,[edi + 0x5e03a4c8]
        lea ecx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e0061c0:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0061dd
        fld dword ptr [esi + 0x4580]
        jmp L_5e0061e3
L_5e0061dd:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e0061e3:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006206
        fld dword ptr [esi + 0x4584]
        jmp L_5e00620c
L_5e006206:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e00620c:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00622f
        fld dword ptr [esi + 0x4588]
        jmp L_5e006235
L_5e00622f:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e006235:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006258
        fld dword ptr [esi + 0x458c]
        jmp L_5e00625e
L_5e006258:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e00625e:
        mov ebx,dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x458c]
L_5e006267:
        cmp ebx,0x2
        jbe L_5e0066b0
        fld dword ptr [esi + 0x4580]
        lea eax,[ebx + ebx*0x2 + -0x6]
        lea ecx,[ebx + eax*0x4 + -0x2]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006298
        fld dword ptr [esi + 0x4580]
        jmp L_5e00629e
L_5e006298:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e00629e:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0062c4
        fld dword ptr [esi + 0x4584]
        jmp L_5e0062ca
L_5e0062c4:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e0062ca:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0062f0
        fld dword ptr [esi + 0x4588]
        jmp L_5e0062f6
L_5e0062f0:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e0062f6:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00631c
        fld dword ptr [esi + 0x458c]
        jmp L_5e006322
L_5e00631c:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e006322:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        lea ecx,[ebx + ebx*0x2]
        lea ecx,[ebx + ecx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a494]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006348
        fld dword ptr [ebp + 0x18]
        jmp L_5e00634e
L_5e006348:
        fld dword ptr [ecx + 0x5e03a494]
L_5e00634e:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + 0x5e03a494]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00636b
        fld dword ptr [ebp + 0x14]
        jmp L_5e006371
L_5e00636b:
        fld dword ptr [ecx + 0x5e03a494]
L_5e006371:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x5e03a498]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00638e
        fld dword ptr [ebp + 0xc]
        jmp L_5e006394
L_5e00638e:
        fld dword ptr [ecx + 0x5e03a498]
L_5e006394:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e03a498]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e0063b3
        fstp st(0)
L_5e0063ad:
        fld dword ptr [ecx + 0x5e03a498]
L_5e0063b3:
        fstp dword ptr [esi + 0x458c]
        jmp L_5e0066b0
        lea eax,[ebx + -0x1]
        test eax,eax
        jle L_5e0066b0
        lea ebx,[eax + 0x1]
        mov edi,0x5e03a4fc
        shr ebx,0x1
L_5e0063d3:
        mov eax,dword ptr [edi + -0x14]
        mov ecx,dword ptr [edi + 0x20]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e006404
        or eax,ecx
        and eax,0x3f
        jz L_5e0063f8
        push eax
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e006404
L_5e0063f8:
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        mov ecx,esi
        call FUN_5e002340
L_5e006404:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + -0x34]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00641e
        fld dword ptr [esi + 0x4580]
        jmp L_5e006421
L_5e00641e:
        fld dword ptr [edi + -0x34]
L_5e006421:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + -0x34]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006444
        fld dword ptr [esi + 0x4584]
        jmp L_5e006447
L_5e006444:
        fld dword ptr [edi + -0x34]
L_5e006447:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x30]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00646a
        fld dword ptr [esi + 0x4588]
        jmp L_5e00646d
L_5e00646a:
        fld dword ptr [edi + -0x30]
L_5e00646d:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x30]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006490
        fld dword ptr [esi + 0x458c]
        jmp L_5e006493
L_5e006490:
        fld dword ptr [edi + -0x30]
L_5e006493:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0064ac
        fld dword ptr [ebp + 0x18]
        jmp L_5e0064ae
L_5e0064ac:
        fld dword ptr [edi]
L_5e0064ae:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0064c7
        fld dword ptr [ebp + 0x14]
        jmp L_5e0064c9
L_5e0064c7:
        fld dword ptr [edi]
L_5e0064c9:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0064e3
        fld dword ptr [ebp + 0xc]
        jmp L_5e0064e6
L_5e0064e3:
        fld dword ptr [edi + 0x4]
L_5e0064e6:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e0064ff
        fstp st(0)
        fld dword ptr [edi + 0x4]
L_5e0064ff:
        add edi,0x68
        dec ebx
        fstp dword ptr [esi + 0x458c]
        jnz L_5e0063d3
        jmp L_5e0066b0
        lea eax,[ebx + -0x1]
        test eax,eax
        jle L_5e0065ec
        mov edi,0x5e03a4c8
        mov dword ptr [ebp + 0x14],eax
L_5e006527:
        mov eax,dword ptr [edi + 0x20]
        mov ecx,dword ptr [edi + 0x54]
        lea ebx,[edi + 0x34]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e006555
        or eax,ecx
        and eax,0x3f
        jz L_5e00654c
        push eax
        push ebx
        push edi
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e006555
L_5e00654c:
        push ebx
        push edi
        mov ecx,esi
        call FUN_5e002340
L_5e006555:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00656e
        fld dword ptr [esi + 0x4580]
        jmp L_5e006570
L_5e00656e:
        fld dword ptr [edi]
L_5e006570:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00658f
        fld dword ptr [esi + 0x4584]
        jmp L_5e006591
L_5e00658f:
        fld dword ptr [edi]
L_5e006591:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0065b1
        fld dword ptr [esi + 0x4588]
        jmp L_5e0065b4
L_5e0065b1:
        fld dword ptr [edi + 0x4]
L_5e0065b4:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0065d4
        fld dword ptr [esi + 0x458c]
        jmp L_5e0065d7
L_5e0065d4:
        fld dword ptr [edi + 0x4]
L_5e0065d7:
        mov eax,dword ptr [ebp + 0x14]
        mov edi,ebx
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x14],eax
        jnz L_5e006527
L_5e0065ec:
        mov eax,dword ptr [ebp + 0x18]
        cmp eax,0x1
        jbe L_5e0066b0
        lea ecx,[eax + eax*0x2]
        lea ecx,[eax + ecx*0x4]
        jmp L_5e005e8e
        test ebx,ebx
        jle L_5e0066b0
        mov edi,0x5e03a4c8
L_5e006610:
        test byte ptr [edi + 0x20],0x3f
        jnz L_5e00661e
        push edi
        mov ecx,esi
        call FUN_5e0023e0
L_5e00661e:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006637
        fld dword ptr [esi + 0x4580]
        jmp L_5e006639
L_5e006637:
        fld dword ptr [edi]
L_5e006639:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006658
        fld dword ptr [esi + 0x4584]
        jmp L_5e00665a
L_5e006658:
        fld dword ptr [edi]
L_5e00665a:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00667a
        fld dword ptr [esi + 0x4588]
        jmp L_5e00667d
L_5e00667a:
        fld dword ptr [edi + 0x4]
L_5e00667d:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00669d
        fld dword ptr [esi + 0x458c]
        jmp L_5e0066a0
L_5e00669d:
        fld dword ptr [edi + 0x4]
L_5e0066a0:
        add edi,0x34
        dec ebx
        fstp dword ptr [esi + 0x458c]
        jnz L_5e006610
L_5e0066b0:
        mov ecx,dword ptr [esi + 0x4550]
        xor edx,edx
        mov dword ptr [ebp + -0x34],ecx
        mov dword ptr [ebp + -0x30],edx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4580]
        fnstsw ax
        test ah,0x41
        jnz L_5e0066d6
        fstp dword ptr [esi + 0x4580]
        jmp L_5e006700
L_5e0066d6:
        mov eax,dword ptr [esi + 0x4558]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4584]
        fnstsw ax
        test ah,0x1
        jz L_5e0066fe
        fstp dword ptr [esi + 0x4584]
        jmp L_5e006700
L_5e0066fe:
        fstp st(0)
L_5e006700:
        mov ecx,dword ptr [esi + 0x4554]
        mov dword ptr [ebp + -0x30],edx
        mov dword ptr [ebp + -0x34],ecx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4588]
        fnstsw ax
        test ah,0x41
        jnz L_5e006727
        fstp dword ptr [esi + 0x4588]
        jmp L_5e0092c1
L_5e006727:
        mov eax,dword ptr [esi + 0x455c]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        jmp L_5e00913c
L_5e00673f:
        mov ecx,dword ptr [ebp + 0xc]
        lea eax,[ecx + -0x1]
        cmp eax,0x5
        ja L_5e0092b6
        jmp dword ptr [eax*0x4 + 0x5e0092ec]
        lea eax,[ebx + -0x2]
        test eax,eax
        jle L_5e0092c1
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        shr edx,0x1
        mov edi,0x5e03a51c
        mov dword ptr [ebp + 0x18],edx
L_5e006774:
        mov eax,dword ptr [edi + -0x34]
        mov ecx,dword ptr [edi + 0x34]
        mov edx,dword ptr [edi]
        mov ebx,eax
        and ebx,ecx
        and ebx,edx
        test bl,0x3f
        jnz L_5e0067bd
        or eax,ecx
        or eax,edx
        and eax,0x3f
        jz L_5e0067a6
        push eax
        lea eax,[edi + 0x14]
        lea ecx,[edi + -0x20]
        push eax
        lea edx,[edi + -0x54]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0067bd
L_5e0067a6:
        lea eax,[edi + 0x14]
        lea ecx,[edi + -0x20]
        push eax
        lea edx,[edi + -0x54]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e0067bd:
        mov eax,dword ptr [ebp + 0x18]
        add edi,0x9c
        dec eax
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e006774
        jmp L_5e0092c1
        lea eax,[ebx + -0x2]
        test eax,eax
        jle L_5e0092c1
        mov edi,0x5e03a51c
        mov ebx,eax
L_5e0067e3:
        mov eax,dword ptr [edi + 0x34]
        mov ecx,dword ptr [edi]
        mov edx,eax
        and edx,ecx
        and edx,dword ptr [g_5e03a4e8]
        test dl,0x3f
        jnz L_5e006835
        mov edx,dword ptr [g_5e03a4e8]
        or eax,ecx
        or eax,edx
        and eax,0x3f
        jz L_5e00681d
        push eax
        lea eax,[edi + 0x14]
        push 0x5e03a4c8
        lea ecx,[edi + -0x20]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e006835
L_5e00681d:
        lea edx,[edi + 0x14]
        push 0x5e03a4c8
        lea eax,[edi + -0x20]
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e006835:
        add edi,0x34
        dec ebx
        jnz L_5e0067e3
        jmp L_5e0092c1
        mov ecx,dword ptr [ebp + 0x18]
        xor ebx,ebx
        lea eax,[ecx + -0x3]
        test eax,eax
        jle L_5e006908
        inc eax
        mov edi,0x5e03a550
        shr eax,0x1
        mov dword ptr [ebp + 0x14],eax
        lea ebx,[eax + eax*0x1]
L_5e00685e:
        mov eax,dword ptr [edi + -0x68]
        mov ecx,dword ptr [edi + -0x34]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [edi]
        and edx,ecx
        test dl,0x3f
        jnz L_5e0068ae
        or eax,dword ptr [edi + -0x34]
        or eax,ecx
        and eax,0x3f
        jz L_5e006894
        push eax
        lea eax,[edi + -0x20]
        lea ecx,[edi + -0x54]
        push eax
        lea edx,[edi + 0xffffff78]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0068ae
L_5e006894:
        lea eax,[edi + -0x20]
        lea ecx,[edi + -0x54]
        push eax
        lea edx,[edi + 0xffffff78]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e0068ae:
        mov eax,dword ptr [edi + -0x34]
        mov ecx,dword ptr [edi + 0x34]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [edi]
        and edx,ecx
        test dl,0x3f
        jnz L_5e0068f8
        or eax,dword ptr [edi + 0x34]
        or eax,ecx
        and eax,0x3f
        jz L_5e0068e1
        push eax
        lea eax,[edi + -0x20]
        lea ecx,[edi + 0x14]
        push eax
        lea edx,[edi + -0x54]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0068f8
L_5e0068e1:
        lea eax,[edi + -0x20]
        lea ecx,[edi + 0x14]
        push eax
        lea edx,[edi + -0x54]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e0068f8:
        mov eax,dword ptr [ebp + 0x14]
        add edi,0x68
        dec eax
        mov dword ptr [ebp + 0x14],eax
        jnz L_5e00685e
L_5e006908:
        mov ecx,dword ptr [ebp + 0x18]
        lea eax,[ebx + 0x3]
        cmp eax,ecx
        jnz L_5e0092c1
        lea ecx,[ebx + ebx*0x2 + 0x6]
        lea eax,[ebx + ebx*0x2 + 0x3]
        lea ecx,[ebx + ecx*0x4 + 0x2]
        lea edi,[ebx + eax*0x4 + 0x1]
        shl ecx,0x2
        shl edi,0x2
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov dword ptr [ebp + 0x18],edx
        lea edx,[ebx + ebx*0x2]
        mov eax,dword ptr [edi + 0x5e03a4e8]
        lea ebx,[ebx + edx*0x4]
        shl ebx,0x2
        mov dword ptr [ebp + 0x14],ebx
        mov edx,dword ptr [ebx + 0x5e03a4e8]
        mov ebx,eax
        mov dword ptr [ebp + 0xc],edx
        mov edx,dword ptr [ebp + 0x18]
        and ebx,edx
        mov edx,dword ptr [ebp + 0xc]
        and ebx,edx
        test bl,0x3f
        jnz L_5e0092c1
        or eax,dword ptr [ebp + 0x18]
        or eax,edx
        and eax,0x3f
        jz L_5e006994
        mov edx,dword ptr [ebp + 0x14]
        push eax
        lea eax,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        lea eax,[edx + 0x5e03a4c8]
        push ecx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0092c1
L_5e006994:
        mov eax,dword ptr [ebp + 0x14]
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[edi + 0x5e03a4c8]
        push ecx
        push edx
        jmp L_5e0085b7
        lea eax,[ebx + -0x1]
        test eax,eax
        jle L_5e0092c1
        lea ebx,[eax + 0x1]
        mov edi,0x5e03a4fc
        shr ebx,0x1
L_5e0069bf:
        mov eax,dword ptr [edi + -0x14]
        mov ecx,dword ptr [edi + 0x20]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e0069f0
        or eax,ecx
        and eax,0x3f
        jz L_5e0069e4
        push eax
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e0069f0
L_5e0069e4:
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        mov ecx,esi
        call FUN_5e002340
L_5e0069f0:
        add edi,0x68
        dec ebx
        jnz L_5e0069bf
        jmp L_5e0092c1
        lea eax,[ebx + -0x1]
        test eax,eax
        jle L_5e0092c1
        mov edi,0x5e03a4fc
        mov ebx,eax
L_5e006a0d:
        mov eax,dword ptr [edi + -0x14]
        mov ecx,dword ptr [edi + 0x20]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e006a3e
        or eax,ecx
        and eax,0x3f
        jz L_5e006a32
        push eax
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e006a3e
L_5e006a32:
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        mov ecx,esi
        call FUN_5e002340
L_5e006a3e:
        add edi,0x34
        dec ebx
        jnz L_5e006a0d
        jmp L_5e0092c1
        test ebx,ebx
        jle L_5e0092c1
        mov edi,0x5e03a4c8
L_5e006a56:
        test byte ptr [edi + 0x20],0x3f
        jnz L_5e006a64
        push edi
        mov ecx,esi
        call FUN_5e0023e0
L_5e006a64:
        add edi,0x34
        dec ebx
        jnz L_5e006a56
        jmp L_5e0092c1
L_5e006a6f:
        mov edx,edi
        and edx,0x8
        test dl,dl
        jnz L_5e0074c1
        mov eax,dword ptr [ebp + 0xc]
        dec eax
        cmp eax,0x5
        ja L_5e0092b6
        jmp dword ptr [eax*0x4 + 0x5e009304]
        mov ecx,dword ptr [ebp + 0x18]
        lea eax,[ecx + -0x2]
        cmp eax,ebx
        jle L_5e007432
        mov edx,dword ptr [ebp + 0x14]
        lea ecx,[eax + 0x2]
        mov eax,0xaaaaaaab
        lea edi,[edx + 0x44]
        mul ecx
        shr edx,0x1
        mov dword ptr [ebp + 0x1c],edx
L_5e006ab3:
        lea eax,[edi + -0x4]
        lea ecx,[edi + -0x24]
        lea ebx,[edi + -0x44]
        push eax
        push ecx
        push ebx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006ae3
        fld dword ptr [esi + 0x4580]
        jmp L_5e006ae5
L_5e006ae3:
        fld dword ptr [ebx]
L_5e006ae5:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006b07
        fld dword ptr [esi + 0x4584]
        jmp L_5e006b09
L_5e006b07:
        fld dword ptr [ebx]
L_5e006b09:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x40]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006b2c
        fld dword ptr [esi + 0x4588]
        jmp L_5e006b2f
L_5e006b2c:
        fld dword ptr [edi + -0x40]
L_5e006b2f:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x40]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006b52
        fld dword ptr [esi + 0x458c]
        jmp L_5e006b55
L_5e006b52:
        fld dword ptr [edi + -0x40]
L_5e006b55:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi + -0x24]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006b6f
        fld dword ptr [ebp + 0x18]
        jmp L_5e006b72
L_5e006b6f:
        fld dword ptr [edi + -0x24]
L_5e006b72:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + -0x24]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006b8f
        fld dword ptr [ebp + 0x14]
        jmp L_5e006b92
L_5e006b8f:
        fld dword ptr [edi + -0x24]
L_5e006b92:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + -0x20]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006baf
        fld dword ptr [ebp + 0xc]
        jmp L_5e006bb2
L_5e006baf:
        fld dword ptr [edi + -0x20]
L_5e006bb2:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + -0x20]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e006bce
        fstp st(0)
        fld dword ptr [edi + -0x20]
L_5e006bce:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi + -0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006be8
        fld dword ptr [ebp + 0x18]
        jmp L_5e006beb
L_5e006be8:
        fld dword ptr [edi + -0x4]
L_5e006beb:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + -0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006c05
        fld dword ptr [ebp + 0x14]
        jmp L_5e006c08
L_5e006c05:
        fld dword ptr [edi + -0x4]
L_5e006c08:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006c21
        fld dword ptr [ebp + 0xc]
        jmp L_5e006c23
L_5e006c21:
        fld dword ptr [edi]
L_5e006c23:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e006c3a
        fstp st(0)
        fld dword ptr [edi]
L_5e006c3a:
        mov eax,dword ptr [ebp + 0x1c]
        add edi,0x60
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e006ab3
        jmp L_5e007432
        mov ecx,dword ptr [ebp + 0x18]
        cmp ecx,ebx
        mov ebx,dword ptr [ebp + 0x14]
        jbe L_5e006ce7
        fld dword ptr [esi + 0x4580]
        fcomp dword ptr [ebx]
        fnstsw ax
        test ah,0x1
        jz L_5e006c7a
        fld dword ptr [esi + 0x4580]
        jmp L_5e006c7c
L_5e006c7a:
        fld dword ptr [ebx]
L_5e006c7c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fcomp dword ptr [ebx]
        fnstsw ax
        test ah,0x41
        jnz L_5e006c99
        fld dword ptr [esi + 0x4584]
        jmp L_5e006c9b
L_5e006c99:
        fld dword ptr [ebx]
L_5e006c9b:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006cbb
        fld dword ptr [esi + 0x4588]
        jmp L_5e006cbe
L_5e006cbb:
        fld dword ptr [ebx + 0x4]
L_5e006cbe:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006cde
        fld dword ptr [esi + 0x458c]
        jmp L_5e006ce1
L_5e006cde:
        fld dword ptr [ebx + 0x4]
L_5e006ce1:
        fstp dword ptr [esi + 0x458c]
L_5e006ce7:
        lea eax,[ecx + -0x2]
        test eax,eax
        jle L_5e006da4
        lea edi,[ebx + 0x40]
        mov dword ptr [ebp + 0x14],eax
L_5e006cf8:
        push ebx
        lea edx,[edi + -0x20]
        push edi
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006d22
        fld dword ptr [esi + 0x4580]
        jmp L_5e006d24
L_5e006d22:
        fld dword ptr [edi]
L_5e006d24:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006d43
        fld dword ptr [esi + 0x4584]
        jmp L_5e006d45
L_5e006d43:
        fld dword ptr [edi]
L_5e006d45:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006d65
        fld dword ptr [esi + 0x4588]
        jmp L_5e006d68
L_5e006d65:
        fld dword ptr [edi + 0x4]
L_5e006d68:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006d88
        fld dword ptr [esi + 0x458c]
        jmp L_5e006d8b
L_5e006d88:
        fld dword ptr [edi + 0x4]
L_5e006d8b:
        mov eax,dword ptr [ebp + 0x14]
        add edi,0x20
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x14],eax
        jnz L_5e006cf8
        mov ecx,dword ptr [ebp + 0x18]
L_5e006da4:
        cmp ecx,0x1
        jbe L_5e007432
        shl ecx,0x5
        add ecx,ebx
L_5e006db2:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ecx + -0x20]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006dcc
        fld dword ptr [esi + 0x4580]
        jmp L_5e006dcf
L_5e006dcc:
        fld dword ptr [ecx + -0x20]
L_5e006dcf:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + -0x20]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006def
        fld dword ptr [esi + 0x4584]
        jmp L_5e006df2
L_5e006def:
        fld dword ptr [ecx + -0x20]
L_5e006df2:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006e12
        fld dword ptr [esi + 0x4588]
        jmp L_5e006e15
L_5e006e12:
        fld dword ptr [ecx + -0x1c]
L_5e006e15:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007175
        fld dword ptr [esi + 0x458c]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e007432
        mov edx,dword ptr [ebp + 0x18]
        mov edi,dword ptr [ebp + 0x14]
        xor eax,eax
        lea ecx,[edx + -0x3]
        test ecx,ecx
        jle L_5e006fa9
        lea eax,[ecx + 0x1]
        add edi,0x24
        shr eax,0x1
        mov dword ptr [ebp + -0x14],eax
        add eax,eax
        mov dword ptr [ebp + -0x30],eax
L_5e006e65:
        lea eax,[edi + 0x1c]
        lea ecx,[edi + -0x4]
        lea ebx,[edi + -0x24]
        push eax
        push ecx
        push ebx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        lea eax,[edi + 0x1c]
        lea ecx,[edi + 0x3c]
        push eax
        lea eax,[edi + -0x4]
        push ecx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006eac
        fld dword ptr [esi + 0x4580]
        jmp L_5e006eae
L_5e006eac:
        fld dword ptr [ebx]
L_5e006eae:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006ed0
        fld dword ptr [esi + 0x4584]
        jmp L_5e006ed2
L_5e006ed0:
        fld dword ptr [ebx]
L_5e006ed2:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x20]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006ef5
        fld dword ptr [esi + 0x4588]
        jmp L_5e006ef8
L_5e006ef5:
        fld dword ptr [edi + -0x20]
L_5e006ef8:
        fst dword ptr [ebp + 0x10]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x20]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006f1b
        fld dword ptr [esi + 0x458c]
        jmp L_5e006f1e
L_5e006f1b:
        fld dword ptr [edi + -0x20]
L_5e006f1e:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + -0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006f38
        fld dword ptr [ebp + 0xc]
        jmp L_5e006f3b
L_5e006f38:
        fld dword ptr [edi + -0x4]
L_5e006f3b:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [edi + -0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e006f55
        fld dword ptr [ebp + 0x1c]
        jmp L_5e006f58
L_5e006f55:
        fld dword ptr [edi + -0x4]
L_5e006f58:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x10]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006f71
        fld dword ptr [ebp + 0x10]
        jmp L_5e006f73
L_5e006f71:
        fld dword ptr [edi]
L_5e006f73:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e006f8a
        fstp st(0)
        fld dword ptr [edi]
L_5e006f8a:
        mov eax,dword ptr [ebp + -0x14]
        add edi,0x40
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + -0x14],eax
        jnz L_5e006e65
        mov edi,dword ptr [ebp + 0x14]
        mov eax,dword ptr [ebp + -0x30]
        mov edx,dword ptr [ebp + 0x18]
L_5e006fa9:
        lea ecx,[eax + 0x3]
        cmp ecx,edx
        jnz L_5e007063
        lea ecx,[eax + 0x2]
        mov edx,eax
        shl ecx,0x5
        shl edx,0x5
        add ecx,edi
        inc eax
        shl eax,0x5
        add eax,edi
        lea ebx,[edx + edi*0x1]
        push ecx
        push eax
        push ebx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e006ff1
        fld dword ptr [esi + 0x4580]
        jmp L_5e006ff3
L_5e006ff1:
        fld dword ptr [ebx]
L_5e006ff3:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007012
        fld dword ptr [esi + 0x4584]
        jmp L_5e007014
L_5e007012:
        fld dword ptr [ebx]
L_5e007014:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007034
        fld dword ptr [esi + 0x4588]
        jmp L_5e007037
L_5e007034:
        fld dword ptr [ebx + 0x4]
L_5e007037:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ebx + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007057
        fld dword ptr [esi + 0x458c]
        jmp L_5e00705a
L_5e007057:
        fld dword ptr [ebx + 0x4]
L_5e00705a:
        mov edx,dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x458c]
L_5e007063:
        cmp edx,0x2
        jbe L_5e007432
        fld dword ptr [esi + 0x4580]
        lea eax,[edx + -0x2]
        shl eax,0x5
        fld dword ptr [eax + edi*0x1]
        lea ecx,[eax + edi*0x1]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00708f
        fld dword ptr [esi + 0x4580]
        jmp L_5e007091
L_5e00708f:
        fld dword ptr [ecx]
L_5e007091:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0070b3
        fld dword ptr [esi + 0x4584]
        jmp L_5e0070b5
L_5e0070b3:
        fld dword ptr [ecx]
L_5e0070b5:
        shl edx,0x5
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edx + edi*0x1 + -0x3c]
        lea ecx,[edx + edi*0x1]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0070df
        fld dword ptr [esi + 0x4588]
        jmp L_5e0070e2
L_5e0070df:
        fld dword ptr [ecx + -0x3c]
L_5e0070e2:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + -0x3c]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007105
        fld dword ptr [esi + 0x458c]
        jmp L_5e007108
L_5e007105:
        fld dword ptr [ecx + -0x3c]
L_5e007108:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [ecx + -0x20]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007122
        fld dword ptr [ebp + 0x18]
        jmp L_5e007125
L_5e007122:
        fld dword ptr [ecx + -0x20]
L_5e007125:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + -0x20]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00713f
        fld dword ptr [ebp + 0x14]
        jmp L_5e007142
L_5e00713f:
        fld dword ptr [ecx + -0x20]
L_5e007142:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00715c
        fld dword ptr [ebp + 0xc]
        jmp L_5e00715f
L_5e00715c:
        fld dword ptr [ecx + -0x1c]
L_5e00715f:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e007178
        fstp st(0)
L_5e007175:
        fld dword ptr [ecx + -0x1c]
L_5e007178:
        fstp dword ptr [esi + 0x458c]
        jmp L_5e007432
        mov ecx,dword ptr [ebp + 0x18]
        lea eax,[ecx + -0x1]
        cmp eax,ebx
        jle L_5e007432
        mov edx,dword ptr [ebp + 0x14]
        inc eax
        shr eax,0x1
        lea edi,[edx + 0x4]
        mov dword ptr [ebp + 0x1c],eax
L_5e00719d:
        lea eax,[edi + 0x1c]
        lea ebx,[edi + -0x4]
        push eax
        push ebx
        mov ecx,esi
        call FUN_5e002340
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0071c5
        fld dword ptr [esi + 0x4580]
        jmp L_5e0071c7
L_5e0071c5:
        fld dword ptr [ebx]
L_5e0071c7:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0071e9
        fld dword ptr [esi + 0x4584]
        jmp L_5e0071eb
L_5e0071e9:
        fld dword ptr [ebx]
L_5e0071eb:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00720d
        fld dword ptr [esi + 0x4588]
        jmp L_5e00720f
L_5e00720d:
        fld dword ptr [edi]
L_5e00720f:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007231
        fld dword ptr [esi + 0x458c]
        jmp L_5e007233
L_5e007231:
        fld dword ptr [edi]
L_5e007233:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi + 0x1c]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00724d
        fld dword ptr [ebp + 0x18]
        jmp L_5e007250
L_5e00724d:
        fld dword ptr [edi + 0x1c]
L_5e007250:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + 0x1c]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00726a
        fld dword ptr [ebp + 0x14]
        jmp L_5e00726d
L_5e00726a:
        fld dword ptr [edi + 0x1c]
L_5e00726d:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x20]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007287
        fld dword ptr [ebp + 0xc]
        jmp L_5e00728a
L_5e007287:
        fld dword ptr [edi + 0x20]
L_5e00728a:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x20]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e0072a3
        fstp st(0)
        fld dword ptr [edi + 0x20]
L_5e0072a3:
        mov eax,dword ptr [ebp + 0x1c]
        add edi,0x40
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e00719d
        jmp L_5e007432
        mov ecx,dword ptr [ebp + 0x18]
        lea eax,[ecx + -0x1]
        cmp eax,ebx
        jle L_5e007372
        mov edi,dword ptr [ebp + 0x14]
        mov ebx,eax
L_5e0072d1:
        lea eax,[edi + 0x20]
        mov ecx,esi
        push eax
        push edi
        call FUN_5e002340
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0072f6
        fld dword ptr [esi + 0x4580]
        jmp L_5e0072f8
L_5e0072f6:
        fld dword ptr [edi]
L_5e0072f8:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007317
        fld dword ptr [esi + 0x4584]
        jmp L_5e007319
L_5e007317:
        fld dword ptr [edi]
L_5e007319:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007339
        fld dword ptr [esi + 0x4588]
        jmp L_5e00733c
L_5e007339:
        fld dword ptr [edi + 0x4]
L_5e00733c:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00735c
        fld dword ptr [esi + 0x458c]
        jmp L_5e00735f
L_5e00735c:
        fld dword ptr [edi + 0x4]
L_5e00735f:
        add edi,0x20
        dec ebx
        fstp dword ptr [esi + 0x458c]
        jnz L_5e0072d1
        mov ecx,dword ptr [ebp + 0x18]
L_5e007372:
        cmp ecx,0x1
        jbe L_5e007432
        mov edx,dword ptr [ebp + 0x14]
        shl ecx,0x5
        add ecx,edx
        jmp L_5e006db2
        mov eax,dword ptr [ebp + 0x18]
        cmp eax,ebx
        jle L_5e007432
        mov edi,dword ptr [ebp + 0x14]
        mov ebx,eax
L_5e007398:
        push edi
        mov ecx,esi
        call FUN_5e0023e0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0073b9
        fld dword ptr [esi + 0x4580]
        jmp L_5e0073bb
L_5e0073b9:
        fld dword ptr [edi]
L_5e0073bb:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0073da
        fld dword ptr [esi + 0x4584]
        jmp L_5e0073dc
L_5e0073da:
        fld dword ptr [edi]
L_5e0073dc:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0073fc
        fld dword ptr [esi + 0x4588]
        jmp L_5e0073ff
L_5e0073fc:
        fld dword ptr [edi + 0x4]
L_5e0073ff:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00741f
        fld dword ptr [esi + 0x458c]
        jmp L_5e007422
L_5e00741f:
        fld dword ptr [edi + 0x4]
L_5e007422:
        add edi,0x20
        dec ebx
        fstp dword ptr [esi + 0x458c]
        jnz L_5e007398
L_5e007432:
        mov ecx,dword ptr [esi + 0x4550]
        xor edx,edx
        mov dword ptr [ebp + -0x34],ecx
        mov dword ptr [ebp + -0x30],edx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4580]
        fnstsw ax
        test ah,0x41
        jnz L_5e007458
        fstp dword ptr [esi + 0x4580]
        jmp L_5e007482
L_5e007458:
        mov eax,dword ptr [esi + 0x4558]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4584]
        fnstsw ax
        test ah,0x1
        jz L_5e007480
        fstp dword ptr [esi + 0x4584]
        jmp L_5e007482
L_5e007480:
        fstp st(0)
L_5e007482:
        mov ecx,dword ptr [esi + 0x4554]
        mov dword ptr [ebp + -0x30],edx
        mov dword ptr [ebp + -0x34],ecx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4588]
        fnstsw ax
        test ah,0x41
        jnz L_5e0074a9
        fstp dword ptr [esi + 0x4588]
        jmp L_5e0092c1
L_5e0074a9:
        mov eax,dword ptr [esi + 0x455c]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        jmp L_5e00913c
L_5e0074c1:
        mov ecx,dword ptr [ebp + 0xc]
        lea eax,[ecx + -0x1]
        cmp eax,0x5
        ja L_5e0092b6
        jmp dword ptr [eax*0x4 + 0x5e00931c]
        mov edx,dword ptr [ebp + 0x18]
        lea eax,[edx + -0x2]
        cmp eax,ebx
        jle L_5e0092c1
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov ecx,dword ptr [ebp + 0x14]
        mov edi,edx
        lea ebx,[esi + 0x400c]
        lea esi,[ecx + 0x20]
        shr edi,0x1
L_5e0074ff:
        lea eax,[esi + 0x20]
        lea ecx,[esi + -0x20]
        push eax
        push esi
        push ecx
        mov ecx,ebx
        call FUN_5e012eb0
        add esi,0x60
        dec edi
        jnz L_5e0074ff
        jmp L_5e0092c1
        mov edx,dword ptr [ebp + 0x18]
        lea edi,[edx + -0x2]
        test edi,edi
        jle L_5e0092c1
        mov eax,dword ptr [ebp + 0x14]
        lea ebx,[esi + 0x400c]
        add eax,0x20
L_5e007534:
        mov ecx,dword ptr [ebp + 0x14]
        lea esi,[eax + 0x20]
        push ecx
        push esi
        push eax
        mov ecx,ebx
        call FUN_5e012eb0
        dec edi
        mov eax,esi
        jnz L_5e007534
        jmp L_5e0092c1
        mov edx,dword ptr [ebp + 0x18]
        mov dword ptr [ebp + 0xc],ebx
        lea ebx,[edx + -0x3]
        test ebx,ebx
        jle L_5e007598
        mov eax,dword ptr [ebp + 0x14]
        inc ebx
        shr ebx,0x1
        lea edi,[eax + 0x40]
        lea ecx,[ebx + ebx*0x1]
        mov dword ptr [ebp + 0xc],ecx
L_5e00756a:
        lea eax,[edi + -0x20]
        push edi
        lea edx,[edi + -0x40]
        push eax
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        lea eax,[edi + 0x20]
        push edi
        push eax
        lea eax,[edi + -0x20]
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        add edi,0x40
        dec ebx
        jnz L_5e00756a
L_5e007598:
        mov ecx,dword ptr [ebp + 0xc]
        mov eax,dword ptr [ebp + 0x18]
        add ecx,0x3
        cmp ecx,eax
        jnz L_5e0092c1
        mov eax,dword ptr [ebp + 0xc]
        mov ecx,dword ptr [ebp + 0x14]
        lea edx,[eax + 0x2]
        shl edx,0x5
        add edx,ecx
        push edx
        lea edx,[eax + 0x1]
        shl edx,0x5
        shl eax,0x5
        add edx,ecx
        add eax,ecx
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        jmp L_5e0092c1
        mov eax,dword ptr [ebp + 0x18]
        dec eax
        cmp eax,ebx
        jle L_5e0092c1
        mov edi,dword ptr [ebp + 0x14]
        lea ebx,[eax + 0x1]
        shr ebx,0x1
L_5e0075eb:
        lea ecx,[edi + 0x20]
        push ecx
        push edi
        mov ecx,esi
        call FUN_5e002340
        add edi,0x40
        dec ebx
        jnz L_5e0075eb
        jmp L_5e0092c1
        mov edx,dword ptr [ebp + 0x18]
        lea ebx,[edx + -0x1]
        test ebx,ebx
        jle L_5e0092c1
        mov eax,dword ptr [ebp + 0x14]
L_5e007613:
        lea edi,[eax + 0x20]
        mov ecx,esi
        push edi
        push eax
        call FUN_5e002340
        dec ebx
        mov eax,edi
        jnz L_5e007613
        jmp L_5e0092c1
        mov ebx,dword ptr [ebp + 0x18]
        test ebx,ebx
        jle L_5e0092c1
        mov edi,dword ptr [ebp + 0x14]
L_5e007637:
        push edi
        mov ecx,esi
        call FUN_5e0023e0
        add edi,0x20
        dec ebx
        jnz L_5e007637
        jmp L_5e0092c1
L_5e00764a:
        cmp eax,0x1e2
        jz L_5e0076af
        cmp eax,0x2c2
        jz L_5e007664
L_5e007658:
        mov dword ptr [ebp + 0x8],0x80004005
        jmp L_5e0092c1
L_5e007664:
        mov edx,dword ptr [ebp + 0x18]
        cmp edx,ebx
        jbe L_5e0076a8
        mov eax,dword ptr [ebp + 0x14]
        mov ecx,0x5e57a4cc
        add eax,0x8
L_5e007676:
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
        jnz L_5e007676
L_5e0076a8:
        mov edi,0x5e57a4c8
        jmp L_5e0076b2
L_5e0076af:
        mov edi,dword ptr [ebp + 0x14]
L_5e0076b2:
        mov ebx,dword ptr [ebp + 0x18]
L_5e0076b5:
        mov ecx,esi
        call FUN_5e0040b0
        mov ecx,dword ptr [ebp + 0x1c]
        and ecx,0x4
        test cl,cl
        jnz L_5e00868b
        lea edx,[esi + 0x454c]
        push 0x5e03a4c8
        lea eax,[esi + 0x450c]
        push edx
        push eax
        push ebx
        push edi
        call FUN_5e028260
        mov ecx,dword ptr [ebp + 0x1c]
        and ecx,0x8
        test cl,cl
        jnz L_5e008353
        mov edx,dword ptr [ebp + 0xc]
        lea eax,[edx + -0x1]
        cmp eax,0x5
        ja L_5e0092b6
        jmp dword ptr [eax*0x4 + 0x5e009334]
        add ebx,-0x2
        test ebx,ebx
        jle L_5e0082c4
        add ebx,0x2
        mov eax,0xaaaaaaab
        mul ebx
        shr edx,0x1
        mov edi,0x5e03a4fc
        mov dword ptr [ebp + 0x1c],edx
L_5e007727:
        mov eax,dword ptr [edi + 0x54]
        mov edx,dword ptr [edi + -0x14]
        mov ecx,dword ptr [edi + 0x20]
        mov ebx,eax
        and ebx,edx
        and ebx,ecx
        test bl,0x3f
        jnz L_5e00776b
        or eax,edx
        or eax,ecx
        and eax,0x3f
        jz L_5e007757
        push eax
        lea eax,[edi + 0x34]
        push eax
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00776b
L_5e007757:
        lea edx,[edi + 0x34]
        lea eax,[edi + -0x34]
        push edx
        push edi
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00776b:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + -0x34]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007785
        fld dword ptr [esi + 0x4580]
        jmp L_5e007788
L_5e007785:
        fld dword ptr [edi + -0x34]
L_5e007788:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + -0x34]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0077ab
        fld dword ptr [esi + 0x4584]
        jmp L_5e0077ae
L_5e0077ab:
        fld dword ptr [edi + -0x34]
L_5e0077ae:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x30]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0077d1
        fld dword ptr [esi + 0x4588]
        jmp L_5e0077d4
L_5e0077d1:
        fld dword ptr [edi + -0x30]
L_5e0077d4:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x30]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0077f7
        fld dword ptr [esi + 0x458c]
        jmp L_5e0077fa
L_5e0077f7:
        fld dword ptr [edi + -0x30]
L_5e0077fa:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007813
        fld dword ptr [ebp + 0x18]
        jmp L_5e007815
L_5e007813:
        fld dword ptr [edi]
L_5e007815:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007831
        fld dword ptr [ebp + 0x14]
        jmp L_5e007833
L_5e007831:
        fld dword ptr [edi]
L_5e007833:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007850
        fld dword ptr [ebp + 0xc]
        jmp L_5e007853
L_5e007850:
        fld dword ptr [edi + 0x4]
L_5e007853:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00786f
        fstp st(0)
        fld dword ptr [edi + 0x4]
L_5e00786f:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi + 0x34]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007889
        fld dword ptr [ebp + 0x18]
        jmp L_5e00788c
L_5e007889:
        fld dword ptr [edi + 0x34]
L_5e00788c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + 0x34]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0078a6
        fld dword ptr [ebp + 0x14]
        jmp L_5e0078a9
L_5e0078a6:
        fld dword ptr [edi + 0x34]
L_5e0078a9:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x38]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0078c3
        fld dword ptr [ebp + 0xc]
        jmp L_5e0078c6
L_5e0078c3:
        fld dword ptr [edi + 0x38]
L_5e0078c6:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x38]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e0078df
        fstp st(0)
        fld dword ptr [edi + 0x38]
L_5e0078df:
        mov eax,dword ptr [ebp + 0x1c]
        add edi,0x9c
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e007727
        jmp L_5e0082c4
        test ebx,ebx
        jbe L_5e0079a1
        fld dword ptr [esi + 0x4580]
        fcomp dword ptr [g_5e03a4c8]
        fnstsw ax
        test ah,0x1
        jz L_5e007920
        fld dword ptr [esi + 0x4580]
        jmp L_5e007926
L_5e007920:
        fld dword ptr [g_5e03a4c8]
L_5e007926:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fcomp dword ptr [g_5e03a4c8]
        fnstsw ax
        test ah,0x41
        jnz L_5e007947
        fld dword ptr [esi + 0x4584]
        jmp L_5e00794d
L_5e007947:
        fld dword ptr [g_5e03a4c8]
L_5e00794d:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fcomp dword ptr [g_5e03a4cc]
        fnstsw ax
        test ah,0x1
        jz L_5e00796e
        fld dword ptr [esi + 0x4588]
        jmp L_5e007974
L_5e00796e:
        fld dword ptr [g_5e03a4cc]
L_5e007974:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fcomp dword ptr [g_5e03a4cc]
        fnstsw ax
        test ah,0x41
        jnz L_5e007995
        fld dword ptr [esi + 0x458c]
        jmp L_5e00799b
L_5e007995:
        fld dword ptr [g_5e03a4cc]
L_5e00799b:
        fstp dword ptr [esi + 0x458c]
L_5e0079a1:
        lea eax,[ebx + -0x2]
        test eax,eax
        jle L_5e007a99
        mov edi,0x5e03a530
        mov dword ptr [ebp + 0x18],eax
L_5e0079b4:
        mov eax,dword ptr [edi + 0x20]
        mov ecx,dword ptr [edi + -0x14]
        mov edx,eax
        and edx,ecx
        and edx,dword ptr [g_5e03a4e8]
        test dl,0x3f
        jnz L_5e007a01
        mov edx,dword ptr [g_5e03a4e8]
        or eax,ecx
        or eax,edx
        and eax,0x3f
        jz L_5e0079ec
        push eax
        push 0x5e03a4c8
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e007a01
L_5e0079ec:
        push 0x5e03a4c8
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e007a01:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007a1a
        fld dword ptr [esi + 0x4580]
        jmp L_5e007a1c
L_5e007a1a:
        fld dword ptr [edi]
L_5e007a1c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007a3b
        fld dword ptr [esi + 0x4584]
        jmp L_5e007a3d
L_5e007a3b:
        fld dword ptr [edi]
L_5e007a3d:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007a5d
        fld dword ptr [esi + 0x4588]
        jmp L_5e007a60
L_5e007a5d:
        fld dword ptr [edi + 0x4]
L_5e007a60:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007a80
        fld dword ptr [esi + 0x458c]
        jmp L_5e007a83
L_5e007a80:
        fld dword ptr [edi + 0x4]
L_5e007a83:
        mov eax,dword ptr [ebp + 0x18]
        add edi,0x34
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e0079b4
L_5e007a99:
        cmp ebx,0x1
        jbe L_5e0082c4
        lea edx,[ebx + ebx*0x2]
        lea ecx,[ebx + edx*0x4]
L_5e007aa8:
        fld dword ptr [esi + 0x4580]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a494]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007ac8
        fld dword ptr [esi + 0x4580]
        jmp L_5e007ace
L_5e007ac8:
        fld dword ptr [ecx + 0x5e03a494]
L_5e007ace:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a494]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007af1
        fld dword ptr [esi + 0x4584]
        jmp L_5e007af7
L_5e007af1:
        fld dword ptr [ecx + 0x5e03a494]
L_5e007af7:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a498]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007b1a
        fld dword ptr [esi + 0x4588]
        jmp L_5e007b20
L_5e007b1a:
        fld dword ptr [ecx + 0x5e03a498]
L_5e007b20:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a498]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007fc7
        fld dword ptr [esi + 0x458c]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e0082c4
        lea eax,[ebx + -0x3]
        xor edi,edi
        test eax,eax
        jle L_5e007d38
        inc eax
        mov edi,0x5e03a550
        shr eax,0x1
        mov dword ptr [ebp + 0x10],eax
        add eax,eax
        mov dword ptr [ebp + -0x30],eax
L_5e007b6d:
        mov eax,dword ptr [edi + -0x68]
        mov edx,dword ptr [edi + -0x34]
        mov ecx,dword ptr [edi]
        mov ebx,eax
        and ebx,edx
        and ebx,ecx
        test bl,0x3f
        jnz L_5e007bbc
        or eax,edx
        or eax,ecx
        and eax,0x3f
        jz L_5e007ba2
        lea ecx,[edi + -0x20]
        push eax
        lea edx,[edi + -0x54]
        push ecx
        lea eax,[edi + 0xffffff78]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e007bbc
L_5e007ba2:
        lea ecx,[edi + -0x20]
        lea edx,[edi + -0x54]
        push ecx
        lea eax,[edi + 0xffffff78]
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e007bbc:
        mov eax,dword ptr [edi + -0x34]
        mov ecx,dword ptr [edi + 0x34]
        mov edx,dword ptr [edi]
        mov ebx,eax
        and ebx,ecx
        and ebx,edx
        test bl,0x3f
        jnz L_5e007c05
        or eax,ecx
        or eax,edx
        and eax,0x3f
        jz L_5e007bee
        lea ecx,[edi + -0x20]
        push eax
        lea edx,[edi + 0x14]
        push ecx
        lea eax,[edi + -0x54]
        push edx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e007c05
L_5e007bee:
        lea ecx,[edi + -0x20]
        lea edx,[edi + 0x14]
        push ecx
        lea eax,[edi + -0x54]
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e007c05:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0xffffff78]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007c22
        fld dword ptr [esi + 0x4580]
        jmp L_5e007c28
L_5e007c22:
        fld dword ptr [edi + 0xffffff78]
L_5e007c28:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0xffffff78]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007c4e
        fld dword ptr [esi + 0x4584]
        jmp L_5e007c54
L_5e007c4e:
        fld dword ptr [edi + 0xffffff78]
L_5e007c54:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0xffffff7c]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007c7a
        fld dword ptr [esi + 0x4588]
        jmp L_5e007c80
L_5e007c7a:
        fld dword ptr [edi + 0xffffff7c]
L_5e007c80:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0xffffff7c]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007ca6
        fld dword ptr [esi + 0x458c]
        jmp L_5e007cac
L_5e007ca6:
        fld dword ptr [edi + 0xffffff7c]
L_5e007cac:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + -0x54]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007cc6
        fld dword ptr [ebp + 0x14]
        jmp L_5e007cc9
L_5e007cc6:
        fld dword ptr [edi + -0x54]
L_5e007cc9:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + -0x54]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007ce3
        fld dword ptr [ebp + 0xc]
        jmp L_5e007ce6
L_5e007ce3:
        fld dword ptr [edi + -0x54]
L_5e007ce6:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [edi + -0x50]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007d00
        fld dword ptr [ebp + 0x1c]
        jmp L_5e007d03
L_5e007d00:
        fld dword ptr [edi + -0x50]
L_5e007d03:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + -0x50]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e007d1c
        fstp st(0)
        fld dword ptr [edi + -0x50]
L_5e007d1c:
        mov eax,dword ptr [ebp + 0x10]
        add edi,0x68
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x10],eax
        jnz L_5e007b6d
        mov edi,dword ptr [ebp + -0x30]
        mov ebx,dword ptr [ebp + 0x18]
L_5e007d38:
        lea ecx,[edi + 0x3]
        cmp ecx,ebx
        jnz L_5e007e81
        lea edx,[edi + edi*0x2 + 0x6]
        lea eax,[edi + edi*0x2 + 0x3]
        lea ebx,[edi + edi*0x2]
        lea ecx,[edi + edx*0x4 + 0x2]
        lea eax,[edi + eax*0x4 + 0x1]
        lea edi,[edi + ebx*0x4]
        shl edi,0x2
        shl eax,0x2
        mov ebx,dword ptr [edi + 0x5e03a4e8]
        mov dword ptr [ebp + 0x14],eax
        mov eax,dword ptr [eax + 0x5e03a4e8]
        mov dword ptr [ebp + 0xc],ebx
        shl ecx,0x2
        mov ebx,eax
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        and ebx,edx
        mov edx,dword ptr [ebp + 0xc]
        and ebx,edx
        test bl,0x3f
        jnz L_5e007dda
        or eax,dword ptr [ecx + 0x5e03a4e8]
        or eax,edx
        and eax,0x3f
        jz L_5e007db7
        mov edx,dword ptr [ebp + 0x14]
        lea ecx,[ecx + 0x5e03a4c8]
        push eax
        push ecx
        lea eax,[edx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e007dda
L_5e007db7:
        mov eax,dword ptr [ebp + 0x14]
        lea edx,[ecx + 0x5e03a4c8]
        push edx
        lea edx,[edi + 0x5e03a4c8]
        lea ecx,[eax + 0x5e03a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e007dda:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007df7
        fld dword ptr [esi + 0x4580]
        jmp L_5e007dfd
L_5e007df7:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e007dfd:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007e20
        fld dword ptr [esi + 0x4584]
        jmp L_5e007e26
L_5e007e20:
        fld dword ptr [edi + 0x5e03a4c8]
L_5e007e26:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007e49
        fld dword ptr [esi + 0x4588]
        jmp L_5e007e4f
L_5e007e49:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e007e4f:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007e72
        fld dword ptr [esi + 0x458c]
        jmp L_5e007e78
L_5e007e72:
        fld dword ptr [edi + 0x5e03a4cc]
L_5e007e78:
        mov ebx,dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x458c]
L_5e007e81:
        cmp ebx,0x2
        jbe L_5e0082c4
        fld dword ptr [esi + 0x4580]
        lea eax,[ebx + ebx*0x2 + -0x6]
        lea ecx,[ebx + eax*0x4 + -0x2]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007eb2
        fld dword ptr [esi + 0x4580]
        jmp L_5e007eb8
L_5e007eb2:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e007eb8:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e03a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007ede
        fld dword ptr [esi + 0x4584]
        jmp L_5e007ee4
L_5e007ede:
        fld dword ptr [ecx + 0x5e03a4c8]
L_5e007ee4:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007f0a
        fld dword ptr [esi + 0x4588]
        jmp L_5e007f10
L_5e007f0a:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e007f10:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e03a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007f36
        fld dword ptr [esi + 0x458c]
        jmp L_5e007f3c
L_5e007f36:
        fld dword ptr [ecx + 0x5e03a4cc]
L_5e007f3c:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        lea ecx,[ebx + ebx*0x2]
        lea ecx,[ebx + ecx*0x4]
        shl ecx,0x2
        fld dword ptr [ecx + 0x5e03a494]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007f62
        fld dword ptr [ebp + 0x18]
        jmp L_5e007f68
L_5e007f62:
        fld dword ptr [ecx + 0x5e03a494]
L_5e007f68:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + 0x5e03a494]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e007f85
        fld dword ptr [ebp + 0x14]
        jmp L_5e007f8b
L_5e007f85:
        fld dword ptr [ecx + 0x5e03a494]
L_5e007f8b:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x5e03a498]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e007fa8
        fld dword ptr [ebp + 0xc]
        jmp L_5e007fae
L_5e007fa8:
        fld dword ptr [ecx + 0x5e03a498]
L_5e007fae:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e03a498]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e007fcd
        fstp st(0)
L_5e007fc7:
        fld dword ptr [ecx + 0x5e03a498]
L_5e007fcd:
        fstp dword ptr [esi + 0x458c]
        jmp L_5e0082c4
        dec ebx
        test ebx,ebx
        jle L_5e0082c4
        inc ebx
        mov edi,0x5e03a4fc
        shr ebx,0x1
L_5e007fe9:
        mov eax,dword ptr [edi + -0x14]
        mov ecx,dword ptr [edi + 0x20]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e00801a
        or eax,ecx
        and eax,0x3f
        jz L_5e00800e
        push eax
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00801a
L_5e00800e:
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        mov ecx,esi
        call FUN_5e002340
L_5e00801a:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi + -0x34]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008034
        fld dword ptr [esi + 0x4580]
        jmp L_5e008037
L_5e008034:
        fld dword ptr [edi + -0x34]
L_5e008037:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi + -0x34]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00805a
        fld dword ptr [esi + 0x4584]
        jmp L_5e00805d
L_5e00805a:
        fld dword ptr [edi + -0x34]
L_5e00805d:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x30]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008080
        fld dword ptr [esi + 0x4588]
        jmp L_5e008083
L_5e008080:
        fld dword ptr [edi + -0x30]
L_5e008083:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x30]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0080a6
        fld dword ptr [esi + 0x458c]
        jmp L_5e0080a9
L_5e0080a6:
        fld dword ptr [edi + -0x30]
L_5e0080a9:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0080c2
        fld dword ptr [ebp + 0x18]
        jmp L_5e0080c4
L_5e0080c2:
        fld dword ptr [edi]
L_5e0080c4:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0080dd
        fld dword ptr [ebp + 0x14]
        jmp L_5e0080df
L_5e0080dd:
        fld dword ptr [edi]
L_5e0080df:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0080f9
        fld dword ptr [ebp + 0xc]
        jmp L_5e0080fc
L_5e0080f9:
        fld dword ptr [edi + 0x4]
L_5e0080fc:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e008115
        fstp st(0)
        fld dword ptr [edi + 0x4]
L_5e008115:
        add edi,0x68
        dec ebx
        fstp dword ptr [esi + 0x458c]
        jnz L_5e007fe9
        jmp L_5e0082c4
        dec ebx
        test ebx,ebx
        jle L_5e008200
        mov edi,0x5e03a4c8
        mov dword ptr [ebp + 0x14],ebx
L_5e00813b:
        mov eax,dword ptr [edi + 0x20]
        mov ecx,dword ptr [edi + 0x54]
        lea ebx,[edi + 0x34]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e008169
        or eax,ecx
        and eax,0x3f
        jz L_5e008160
        push eax
        push ebx
        push edi
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e008169
L_5e008160:
        push ebx
        push edi
        mov ecx,esi
        call FUN_5e002340
L_5e008169:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008182
        fld dword ptr [esi + 0x4580]
        jmp L_5e008184
L_5e008182:
        fld dword ptr [edi]
L_5e008184:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0081a3
        fld dword ptr [esi + 0x4584]
        jmp L_5e0081a5
L_5e0081a3:
        fld dword ptr [edi]
L_5e0081a5:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0081c5
        fld dword ptr [esi + 0x4588]
        jmp L_5e0081c8
L_5e0081c5:
        fld dword ptr [edi + 0x4]
L_5e0081c8:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0081e8
        fld dword ptr [esi + 0x458c]
        jmp L_5e0081eb
L_5e0081e8:
        fld dword ptr [edi + 0x4]
L_5e0081eb:
        mov eax,dword ptr [ebp + 0x14]
        mov edi,ebx
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x14],eax
        jnz L_5e00813b
L_5e008200:
        mov eax,dword ptr [ebp + 0x18]
        cmp eax,0x1
        jbe L_5e0082c4
        lea ecx,[eax + eax*0x2]
        lea ecx,[eax + ecx*0x4]
        jmp L_5e007aa8
        test ebx,ebx
        jle L_5e0082c4
        mov edi,0x5e03a4c8
L_5e008224:
        test byte ptr [edi + 0x20],0x3f
        jnz L_5e008232
        push edi
        mov ecx,esi
        call FUN_5e0023e0
L_5e008232:
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00824b
        fld dword ptr [esi + 0x4580]
        jmp L_5e00824d
L_5e00824b:
        fld dword ptr [edi]
L_5e00824d:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00826c
        fld dword ptr [esi + 0x4584]
        jmp L_5e00826e
L_5e00826c:
        fld dword ptr [edi]
L_5e00826e:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00828e
        fld dword ptr [esi + 0x4588]
        jmp L_5e008291
L_5e00828e:
        fld dword ptr [edi + 0x4]
L_5e008291:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0082b1
        fld dword ptr [esi + 0x458c]
        jmp L_5e0082b4
L_5e0082b1:
        fld dword ptr [edi + 0x4]
L_5e0082b4:
        add edi,0x34
        dec ebx
        fstp dword ptr [esi + 0x458c]
        jnz L_5e008224
L_5e0082c4:
        mov ecx,dword ptr [esi + 0x4550]
        xor edx,edx
        mov dword ptr [ebp + -0x34],ecx
        mov dword ptr [ebp + -0x30],edx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4580]
        fnstsw ax
        test ah,0x41
        jnz L_5e0082ea
        fstp dword ptr [esi + 0x4580]
        jmp L_5e008314
L_5e0082ea:
        mov eax,dword ptr [esi + 0x4558]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4584]
        fnstsw ax
        test ah,0x1
        jz L_5e008312
        fstp dword ptr [esi + 0x4584]
        jmp L_5e008314
L_5e008312:
        fstp st(0)
L_5e008314:
        mov ecx,dword ptr [esi + 0x4554]
        mov dword ptr [ebp + -0x30],edx
        mov dword ptr [ebp + -0x34],ecx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4588]
        fnstsw ax
        test ah,0x41
        jnz L_5e00833b
        fstp dword ptr [esi + 0x4588]
        jmp L_5e0092c1
L_5e00833b:
        mov eax,dword ptr [esi + 0x455c]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        jmp L_5e00913c
L_5e008353:
        mov ecx,dword ptr [ebp + 0xc]
        lea eax,[ecx + -0x1]
        cmp eax,0x5
        ja L_5e0092b6
        jmp dword ptr [eax*0x4 + 0x5e00934c]
        add ebx,-0x2
        test ebx,ebx
        jle L_5e0092c1
        add ebx,0x2
        mov eax,0xaaaaaaab
        mul ebx
        shr edx,0x1
        mov edi,0x5e03a51c
        mov dword ptr [ebp + 0x18],edx
L_5e008388:
        mov eax,dword ptr [edi + -0x34]
        mov ecx,dword ptr [edi + 0x34]
        mov edx,dword ptr [edi]
        mov ebx,eax
        and ebx,ecx
        and ebx,edx
        test bl,0x3f
        jnz L_5e0083d1
        or eax,ecx
        or eax,edx
        and eax,0x3f
        jz L_5e0083ba
        push eax
        lea edx,[edi + 0x14]
        lea eax,[edi + -0x20]
        push edx
        lea ecx,[edi + -0x54]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0083d1
L_5e0083ba:
        lea edx,[edi + 0x14]
        lea eax,[edi + -0x20]
        push edx
        lea ecx,[edi + -0x54]
        push eax
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e0083d1:
        mov eax,dword ptr [ebp + 0x18]
        add edi,0x9c
        dec eax
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e008388
        jmp L_5e0092c1
        add ebx,-0x2
        test ebx,ebx
        jle L_5e0092c1
        mov edi,0x5e03a51c
L_5e0083f5:
        mov eax,dword ptr [edi + 0x34]
        mov ecx,dword ptr [edi]
        mov edx,eax
        and edx,ecx
        and edx,dword ptr [g_5e03a4e8]
        test dl,0x3f
        jnz L_5e008447
        mov edx,dword ptr [g_5e03a4e8]
        or eax,ecx
        or eax,edx
        and eax,0x3f
        jz L_5e00842f
        push eax
        lea eax,[edi + 0x14]
        push 0x5e03a4c8
        lea ecx,[edi + -0x20]
        push eax
        push ecx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e008447
L_5e00842f:
        lea edx,[edi + 0x14]
        push 0x5e03a4c8
        lea eax,[edi + -0x20]
        push edx
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e008447:
        add edi,0x34
        dec ebx
        jnz L_5e0083f5
        jmp L_5e0092c1
        mov ecx,dword ptr [ebp + 0x18]
        xor ebx,ebx
        lea eax,[ecx + -0x3]
        test eax,eax
        jle L_5e00851a
        inc eax
        mov edi,0x5e03a550
        shr eax,0x1
        mov dword ptr [ebp + 0x14],eax
        lea ebx,[eax + eax*0x1]
L_5e008470:
        mov eax,dword ptr [edi + -0x68]
        mov ecx,dword ptr [edi + -0x34]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [edi]
        and edx,ecx
        test dl,0x3f
        jnz L_5e0084c0
        or eax,dword ptr [edi + -0x34]
        or eax,ecx
        and eax,0x3f
        jz L_5e0084a6
        push eax
        lea eax,[edi + -0x20]
        lea ecx,[edi + -0x54]
        push eax
        lea edx,[edi + 0xffffff78]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0084c0
L_5e0084a6:
        lea eax,[edi + -0x20]
        lea ecx,[edi + -0x54]
        push eax
        lea edx,[edi + 0xffffff78]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e0084c0:
        mov eax,dword ptr [edi + -0x34]
        mov ecx,dword ptr [edi + 0x34]
        mov edx,eax
        and edx,ecx
        mov ecx,dword ptr [edi]
        and edx,ecx
        test dl,0x3f
        jnz L_5e00850a
        or eax,dword ptr [edi + 0x34]
        or eax,ecx
        and eax,0x3f
        jz L_5e0084f3
        push eax
        lea eax,[edi + -0x20]
        lea ecx,[edi + 0x14]
        push eax
        lea edx,[edi + -0x54]
        push ecx
        push edx
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e00850a
L_5e0084f3:
        lea eax,[edi + -0x20]
        lea ecx,[edi + 0x14]
        push eax
        lea edx,[edi + -0x54]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
L_5e00850a:
        mov eax,dword ptr [ebp + 0x14]
        add edi,0x68
        dec eax
        mov dword ptr [ebp + 0x14],eax
        jnz L_5e008470
L_5e00851a:
        mov ecx,dword ptr [ebp + 0x18]
        lea eax,[ebx + 0x3]
        cmp eax,ecx
        jnz L_5e0092c1
        lea ecx,[ebx + ebx*0x2 + 0x6]
        lea eax,[ebx + ebx*0x2 + 0x3]
        lea ecx,[ebx + ecx*0x4 + 0x2]
        lea edi,[ebx + eax*0x4 + 0x1]
        shl ecx,0x2
        shl edi,0x2
        mov edx,dword ptr [ecx + 0x5e03a4e8]
        mov dword ptr [ebp + 0x18],edx
        lea edx,[ebx + ebx*0x2]
        mov eax,dword ptr [edi + 0x5e03a4e8]
        lea ebx,[ebx + edx*0x4]
        shl ebx,0x2
        mov dword ptr [ebp + 0x14],ebx
        mov edx,dword ptr [ebx + 0x5e03a4e8]
        mov ebx,eax
        mov dword ptr [ebp + 0xc],edx
        mov edx,dword ptr [ebp + 0x18]
        and ebx,edx
        mov edx,dword ptr [ebp + 0xc]
        and ebx,edx
        test bl,0x3f
        jnz L_5e0092c1
        or eax,dword ptr [ebp + 0x18]
        or eax,edx
        and eax,0x3f
        jz L_5e0085a6
        mov edx,dword ptr [ebp + 0x14]
        push eax
        lea eax,[ecx + 0x5e03a4c8]
        lea ecx,[edi + 0x5e03a4c8]
        push eax
        lea eax,[edx + 0x5e03a4c8]
        push ecx
        push eax
        mov ecx,esi
        call FUN_5e005220
        jmp L_5e0092c1
L_5e0085a6:
        mov eax,dword ptr [ebp + 0x14]
        lea ecx,[ecx + 0x5e03a4c8]
        lea edx,[edi + 0x5e03a4c8]
        push ecx
        push edx
L_5e0085b7:
        lea ecx,[eax + 0x5e03a4c8]
        push ecx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        jmp L_5e0092c1
        dec ebx
        test ebx,ebx
        jle L_5e0092c1
        inc ebx
        mov edi,0x5e03a4fc
        shr ebx,0x1
L_5e0085df:
        mov eax,dword ptr [edi + 0x20]
        mov ecx,dword ptr [edi + -0x14]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e008610
        or eax,ecx
        and eax,0x3f
        jz L_5e008604
        push eax
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e008610
L_5e008604:
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        mov ecx,esi
        call FUN_5e002340
L_5e008610:
        add edi,0x68
        dec ebx
        jnz L_5e0085df
        jmp L_5e0092c1
        dec ebx
        test ebx,ebx
        jle L_5e0092c1
        mov edi,0x5e03a4fc
L_5e008629:
        mov eax,dword ptr [edi + -0x14]
        mov ecx,dword ptr [edi + 0x20]
        mov edx,eax
        and edx,ecx
        test dl,0x3f
        jnz L_5e00865a
        or eax,ecx
        and eax,0x3f
        jz L_5e00864e
        push eax
        lea eax,[edi + -0x34]
        push edi
        push eax
        mov ecx,esi
        call FUN_5e005420
        jmp L_5e00865a
L_5e00864e:
        lea ecx,[edi + -0x34]
        push edi
        push ecx
        mov ecx,esi
        call FUN_5e002340
L_5e00865a:
        add edi,0x34
        dec ebx
        jnz L_5e008629
        jmp L_5e0092c1
        test ebx,ebx
        jle L_5e0092c1
        mov edi,0x5e03a4c8
L_5e008672:
        test byte ptr [edi + 0x20],0x3f
        jnz L_5e008680
        push edi
        mov ecx,esi
        call FUN_5e0023e0
L_5e008680:
        add edi,0x34
        dec ebx
        jnz L_5e008672
        jmp L_5e0092c1
L_5e00868b:
        lea edx,[esi + 0x454c]
        push 0x5e37a4c8
        lea eax,[esi + 0x450c]
        push edx
        push eax
        push ebx
        push edi
        call FUN_5e028100
        mov ecx,dword ptr [ebp + 0x1c]
        and ecx,0x8
        test cl,cl
        jnz L_5e009158
        mov edx,dword ptr [ebp + 0xc]
        lea eax,[edx + -0x1]
        cmp eax,0x5
        ja L_5e0092b6
        jmp dword ptr [eax*0x4 + 0x5e009364]
        add ebx,-0x2
        test ebx,ebx
        jle L_5e0090b2
        add ebx,0x2
        mov eax,0xaaaaaaab
        mul ebx
        shr edx,0x1
        mov edi,0x5e37a4e8
        mov dword ptr [ebp + 0x1c],edx
L_5e0086e8:
        lea eax,[edi + 0x20]
        lea ebx,[edi + -0x20]
        push eax
        push edi
        push ebx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008715
        fld dword ptr [esi + 0x4580]
        jmp L_5e008717
L_5e008715:
        fld dword ptr [ebx]
L_5e008717:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008739
        fld dword ptr [esi + 0x4584]
        jmp L_5e00873b
L_5e008739:
        fld dword ptr [ebx]
L_5e00873b:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00875e
        fld dword ptr [esi + 0x4588]
        jmp L_5e008761
L_5e00875e:
        fld dword ptr [edi + -0x1c]
L_5e008761:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008784
        fld dword ptr [esi + 0x458c]
        jmp L_5e008787
L_5e008784:
        fld dword ptr [edi + -0x1c]
L_5e008787:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0087a0
        fld dword ptr [ebp + 0x18]
        jmp L_5e0087a2
L_5e0087a0:
        fld dword ptr [edi]
L_5e0087a2:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0087be
        fld dword ptr [ebp + 0x14]
        jmp L_5e0087c0
L_5e0087be:
        fld dword ptr [edi]
L_5e0087c0:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0087dd
        fld dword ptr [ebp + 0xc]
        jmp L_5e0087e0
L_5e0087dd:
        fld dword ptr [edi + 0x4]
L_5e0087e0:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e0087fc
        fstp st(0)
        fld dword ptr [edi + 0x4]
L_5e0087fc:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi + 0x20]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008816
        fld dword ptr [ebp + 0x18]
        jmp L_5e008819
L_5e008816:
        fld dword ptr [edi + 0x20]
L_5e008819:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi + 0x20]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008833
        fld dword ptr [ebp + 0x14]
        jmp L_5e008836
L_5e008833:
        fld dword ptr [edi + 0x20]
L_5e008836:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x24]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008850
        fld dword ptr [ebp + 0xc]
        jmp L_5e008853
L_5e008850:
        fld dword ptr [edi + 0x24]
L_5e008853:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x24]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e00886c
        fstp st(0)
        fld dword ptr [edi + 0x24]
L_5e00886c:
        mov eax,dword ptr [ebp + 0x1c]
        add edi,0x60
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e0086e8
        jmp L_5e0090b2
        test ebx,ebx
        jbe L_5e00892b
        fld dword ptr [esi + 0x4580]
        fcomp dword ptr [g_5e37a4c8]
        fnstsw ax
        test ah,0x1
        jz L_5e0088aa
        fld dword ptr [esi + 0x4580]
        jmp L_5e0088b0
L_5e0088aa:
        fld dword ptr [g_5e37a4c8]
L_5e0088b0:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fcomp dword ptr [g_5e37a4c8]
        fnstsw ax
        test ah,0x41
        jnz L_5e0088d1
        fld dword ptr [esi + 0x4584]
        jmp L_5e0088d7
L_5e0088d1:
        fld dword ptr [g_5e37a4c8]
L_5e0088d7:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fcomp dword ptr [g_5e37a4cc]
        fnstsw ax
        test ah,0x1
        jz L_5e0088f8
        fld dword ptr [esi + 0x4588]
        jmp L_5e0088fe
L_5e0088f8:
        fld dword ptr [g_5e37a4cc]
L_5e0088fe:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fcomp dword ptr [g_5e37a4cc]
        fnstsw ax
        test ah,0x41
        jnz L_5e00891f
        fld dword ptr [esi + 0x458c]
        jmp L_5e008925
L_5e00891f:
        fld dword ptr [g_5e37a4cc]
L_5e008925:
        fstp dword ptr [esi + 0x458c]
L_5e00892b:
        lea eax,[ebx + -0x2]
        test eax,eax
        jle L_5e008f4d
        mov edi,0x5e37a508
        mov dword ptr [ebp + 0x18],eax
L_5e00893e:
        push 0x5e37a4c8
        lea eax,[edi + -0x20]
        push edi
        push eax
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00896c
        fld dword ptr [esi + 0x4580]
        jmp L_5e00896e
L_5e00896c:
        fld dword ptr [edi]
L_5e00896e:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00898d
        fld dword ptr [esi + 0x4584]
        jmp L_5e00898f
L_5e00898d:
        fld dword ptr [edi]
L_5e00898f:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e0089af
        fld dword ptr [esi + 0x4588]
        jmp L_5e0089b2
L_5e0089af:
        fld dword ptr [edi + 0x4]
L_5e0089b2:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e0089d2
        fld dword ptr [esi + 0x458c]
        jmp L_5e0089d5
L_5e0089d2:
        fld dword ptr [edi + 0x4]
L_5e0089d5:
        mov eax,dword ptr [ebp + 0x18]
        add edi,0x20
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e00893e
        jmp L_5e008f4d
        lea eax,[ebx + -0x3]
        xor edi,edi
        test eax,eax
        jle L_5e008b4c
        inc eax
        mov edi,0x5e37a4e8
        shr eax,0x1
        mov dword ptr [ebp + 0x10],eax
        lea ecx,[eax + eax*0x1]
        mov dword ptr [ebp + -0x2c],ecx
L_5e008a0e:
        lea eax,[edi + 0x20]
        lea ebx,[edi + -0x20]
        push eax
        push edi
        push ebx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        lea eax,[edi + 0x20]
        lea ecx,[edi + 0x40]
        push eax
        mov dword ptr [ebp + -0x30],ecx
        push ecx
        push edi
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008a52
        fld dword ptr [esi + 0x4580]
        jmp L_5e008a54
L_5e008a52:
        fld dword ptr [ebx]
L_5e008a54:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008a76
        fld dword ptr [esi + 0x4584]
        jmp L_5e008a78
L_5e008a76:
        fld dword ptr [ebx]
L_5e008a78:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008a9b
        fld dword ptr [esi + 0x4588]
        jmp L_5e008a9e
L_5e008a9b:
        fld dword ptr [edi + -0x1c]
L_5e008a9e:
        fst dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008ac1
        fld dword ptr [esi + 0x458c]
        jmp L_5e008ac4
L_5e008ac1:
        fld dword ptr [edi + -0x1c]
L_5e008ac4:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008add
        fld dword ptr [ebp + 0x14]
        jmp L_5e008adf
L_5e008add:
        fld dword ptr [edi]
L_5e008adf:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008af8
        fld dword ptr [ebp + 0xc]
        jmp L_5e008afa
L_5e008af8:
        fld dword ptr [edi]
L_5e008afa:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0x1c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008b14
        fld dword ptr [ebp + 0x1c]
        jmp L_5e008b17
L_5e008b14:
        fld dword ptr [edi + 0x4]
L_5e008b17:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e008b30
        fstp st(0)
        fld dword ptr [edi + 0x4]
L_5e008b30:
        mov eax,dword ptr [ebp + 0x10]
        mov edi,dword ptr [ebp + -0x30]
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x10],eax
        jnz L_5e008a0e
        mov edi,dword ptr [ebp + -0x2c]
        mov ebx,dword ptr [ebp + 0x18]
L_5e008b4c:
        lea edx,[edi + 0x3]
        cmp edx,ebx
        jnz L_5e008c11
        shl edi,0x5
        lea eax,[edi + 0x5e37a508]
        lea ecx,[edi + 0x5e37a4e8]
        lea ebx,[edi + 0x5e37a4c8]
        push eax
        push ecx
        push ebx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008b93
        fld dword ptr [esi + 0x4580]
        jmp L_5e008b95
L_5e008b93:
        fld dword ptr [ebx]
L_5e008b95:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008bb4
        fld dword ptr [esi + 0x4584]
        jmp L_5e008bb6
L_5e008bb4:
        fld dword ptr [ebx]
L_5e008bb6:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008bd9
        fld dword ptr [esi + 0x4588]
        jmp L_5e008bdf
L_5e008bd9:
        fld dword ptr [edi + 0x5e37a4cc]
L_5e008bdf:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008c02
        fld dword ptr [esi + 0x458c]
        jmp L_5e008c08
L_5e008c02:
        fld dword ptr [edi + 0x5e37a4cc]
L_5e008c08:
        mov ebx,dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x458c]
L_5e008c11:
        cmp ebx,0x2
        jbe L_5e0090b2
        fld dword ptr [esi + 0x4580]
        lea ecx,[ebx + -0x2]
        shl ecx,0x5
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008c3d
        fld dword ptr [esi + 0x4580]
        jmp L_5e008c43
L_5e008c3d:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e008c43:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ecx + 0x5e37a4c8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008c69
        fld dword ptr [esi + 0x4584]
        jmp L_5e008c6f
L_5e008c69:
        fld dword ptr [ecx + 0x5e37a4c8]
L_5e008c6f:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008c95
        fld dword ptr [esi + 0x4588]
        jmp L_5e008c9b
L_5e008c95:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e008c9b:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ecx + 0x5e37a4cc]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008cc1
        fld dword ptr [esi + 0x458c]
        jmp L_5e008cc7
L_5e008cc1:
        fld dword ptr [ecx + 0x5e37a4cc]
L_5e008cc7:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        shl ebx,0x5
        mov ecx,ebx
        fld dword ptr [ecx + 0x5e37a4a8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008ce9
        fld dword ptr [ebp + 0x18]
        jmp L_5e008cef
L_5e008ce9:
        fld dword ptr [ecx + 0x5e37a4a8]
L_5e008cef:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [ecx + 0x5e37a4a8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008d0c
        fld dword ptr [ebp + 0x14]
        jmp L_5e008d12
L_5e008d0c:
        fld dword ptr [ecx + 0x5e37a4a8]
L_5e008d12:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [ecx + 0x5e37a4ac]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008d2f
        fld dword ptr [ebp + 0xc]
        jmp L_5e008d35
L_5e008d2f:
        fld dword ptr [ecx + 0x5e37a4ac]
L_5e008d35:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [ecx + 0x5e37a4ac]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e008d54
        fstp st(0)
        fld dword ptr [ecx + 0x5e37a4ac]
L_5e008d54:
        fstp dword ptr [esi + 0x458c]
        jmp L_5e0090b2
        dec ebx
        test ebx,ebx
        jle L_5e0090b2
        lea eax,[ebx + 0x1]
        mov edi,0x5e37a4e8
        shr eax,0x1
        mov dword ptr [ebp + 0x1c],eax
L_5e008d75:
        lea ebx,[edi + -0x20]
        push edi
        push ebx
        mov ecx,esi
        call FUN_5e002340
        fld dword ptr [esi + 0x4580]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008d9a
        fld dword ptr [esi + 0x4580]
        jmp L_5e008d9c
L_5e008d9a:
        fld dword ptr [ebx]
L_5e008d9c:
        fst dword ptr [ebp + 0x18]
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008dbe
        fld dword ptr [esi + 0x4584]
        jmp L_5e008dc0
L_5e008dbe:
        fld dword ptr [ebx]
L_5e008dc0:
        fst dword ptr [ebp + 0x14]
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008de3
        fld dword ptr [esi + 0x4588]
        jmp L_5e008de6
L_5e008de3:
        fld dword ptr [edi + -0x1c]
L_5e008de6:
        fst dword ptr [ebp + 0xc]
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + -0x1c]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008e09
        fld dword ptr [esi + 0x458c]
        jmp L_5e008e0c
L_5e008e09:
        fld dword ptr [edi + -0x1c]
L_5e008e0c:
        fst dword ptr [esi + 0x458c]
        fld dword ptr [ebp + 0x18]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008e25
        fld dword ptr [ebp + 0x18]
        jmp L_5e008e27
L_5e008e25:
        fld dword ptr [edi]
L_5e008e27:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [ebp + 0x14]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008e40
        fld dword ptr [ebp + 0x14]
        jmp L_5e008e42
L_5e008e40:
        fld dword ptr [edi]
L_5e008e42:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [ebp + 0xc]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008e5c
        fld dword ptr [ebp + 0xc]
        jmp L_5e008e5f
L_5e008e5c:
        fld dword ptr [edi + 0x4]
L_5e008e5f:
        fstp dword ptr [esi + 0x4588]
        fld st(0)
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jnz L_5e008e78
        fstp st(0)
        fld dword ptr [edi + 0x4]
L_5e008e78:
        mov eax,dword ptr [ebp + 0x1c]
        add edi,0x40
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x1c],eax
        jnz L_5e008d75
        jmp L_5e0090b2
        lea eax,[ebx + -0x1]
        test eax,eax
        jle L_5e008f4d
        mov edi,0x5e37a4c8
        mov dword ptr [ebp + 0x18],eax
L_5e008ea6:
        lea eax,[edi + 0x20]
        mov ecx,esi
        push eax
        push edi
        mov dword ptr [ebp + 0x14],eax
        call FUN_5e002340
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008ece
        fld dword ptr [esi + 0x4580]
        jmp L_5e008ed0
L_5e008ece:
        fld dword ptr [edi]
L_5e008ed0:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008eef
        fld dword ptr [esi + 0x4584]
        jmp L_5e008ef1
L_5e008eef:
        fld dword ptr [edi]
L_5e008ef1:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008f11
        fld dword ptr [esi + 0x4588]
        jmp L_5e008f14
L_5e008f11:
        fld dword ptr [edi + 0x4]
L_5e008f14:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008f34
        fld dword ptr [esi + 0x458c]
        jmp L_5e008f37
L_5e008f34:
        fld dword ptr [edi + 0x4]
L_5e008f37:
        mov eax,dword ptr [ebp + 0x18]
        mov edi,dword ptr [ebp + 0x14]
        dec eax
        fstp dword ptr [esi + 0x458c]
        mov dword ptr [ebp + 0x18],eax
        jnz L_5e008ea6
L_5e008f4d:
        cmp ebx,0x1
        jbe L_5e0090b2
        fld dword ptr [esi + 0x4580]
        shl ebx,0x5
        fld dword ptr [ebx + 0x5e37a4a8]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008f76
        fld dword ptr [esi + 0x4580]
        jmp L_5e008f7c
L_5e008f76:
        fld dword ptr [ebx + 0x5e37a4a8]
L_5e008f7c:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [ebx + 0x5e37a4a8]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008f9f
        fld dword ptr [esi + 0x4584]
        jmp L_5e008fa5
L_5e008f9f:
        fld dword ptr [ebx + 0x5e37a4a8]
L_5e008fa5:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [ebx + 0x5e37a4ac]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e008fc8
        fld dword ptr [esi + 0x4588]
        jmp L_5e008fce
L_5e008fc8:
        fld dword ptr [ebx + 0x5e37a4ac]
L_5e008fce:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [ebx + 0x5e37a4ac]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e008ffa
        fld dword ptr [esi + 0x458c]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e0090b2
L_5e008ffa:
        fld dword ptr [ebx + 0x5e37a4ac]
        fstp dword ptr [esi + 0x458c]
        jmp L_5e0090b2
        test ebx,ebx
        jle L_5e0090b2
        mov edi,0x5e37a4c8
L_5e009018:
        push edi
        mov ecx,esi
        call FUN_5e0023e0
        fld dword ptr [esi + 0x4580]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e009039
        fld dword ptr [esi + 0x4580]
        jmp L_5e00903b
L_5e009039:
        fld dword ptr [edi]
L_5e00903b:
        fstp dword ptr [esi + 0x4580]
        fld dword ptr [esi + 0x4584]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00905a
        fld dword ptr [esi + 0x4584]
        jmp L_5e00905c
L_5e00905a:
        fld dword ptr [edi]
L_5e00905c:
        fstp dword ptr [esi + 0x4584]
        fld dword ptr [esi + 0x4588]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x41
        jnz L_5e00907c
        fld dword ptr [esi + 0x4588]
        jmp L_5e00907f
L_5e00907c:
        fld dword ptr [edi + 0x4]
L_5e00907f:
        fstp dword ptr [esi + 0x4588]
        fld dword ptr [esi + 0x458c]
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah,0x1
        jz L_5e00909f
        fld dword ptr [esi + 0x458c]
        jmp L_5e0090a2
L_5e00909f:
        fld dword ptr [edi + 0x4]
L_5e0090a2:
        add edi,0x20
        dec ebx
        fstp dword ptr [esi + 0x458c]
        jnz L_5e009018
L_5e0090b2:
        mov ecx,dword ptr [esi + 0x4550]
        xor edx,edx
        mov dword ptr [ebp + -0x34],ecx
        mov dword ptr [ebp + -0x30],edx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4580]
        fnstsw ax
        test ah,0x41
        jnz L_5e0090d8
        fstp dword ptr [esi + 0x4580]
        jmp L_5e009102
L_5e0090d8:
        mov eax,dword ptr [esi + 0x4558]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4584]
        fnstsw ax
        test ah,0x1
        jz L_5e009100
        fstp dword ptr [esi + 0x4584]
        jmp L_5e009102
L_5e009100:
        fstp st(0)
L_5e009102:
        mov ecx,dword ptr [esi + 0x4554]
        mov dword ptr [ebp + -0x30],edx
        mov dword ptr [ebp + -0x34],ecx
        fild qword ptr [ebp + -0x34]
        fcom dword ptr [esi + 0x4588]
        fnstsw ax
        test ah,0x41
        jnz L_5e009129
        fstp dword ptr [esi + 0x4588]
        jmp L_5e0092c1
L_5e009129:
        mov eax,dword ptr [esi + 0x455c]
        mov dword ptr [ebp + -0x30],edx
        add eax,ecx
        fstp st(0)
        mov dword ptr [ebp + -0x34],eax
        fild qword ptr [ebp + -0x34]
L_5e00913c:
        fcom dword ptr [esi + 0x458c]
        fnstsw ax
        test ah,0x1
        jz L_5e0092bf
        fstp dword ptr [esi + 0x458c]
        jmp L_5e0092c1
L_5e009158:
        mov ecx,dword ptr [ebp + 0xc]
        lea eax,[ecx + -0x1]
        cmp eax,0x5
        ja L_5e0092b6
        jmp dword ptr [eax*0x4 + 0x5e00937c]
        lea eax,[ebx + -0x2]
        test eax,eax
        jle L_5e0092c1
        lea edx,[eax + 0x2]
        mov eax,0xaaaaaaab
        mul edx
        mov edi,edx
        lea ebx,[esi + 0x400c]
        mov esi,0x5e37a4e8
        shr edi,0x1
L_5e009192:
        lea eax,[esi + 0x20]
        lea ecx,[esi + -0x20]
        push eax
        push esi
        push ecx
        mov ecx,ebx
        call FUN_5e012eb0
        add esi,0x60
        dec edi
        jnz L_5e009192
        jmp L_5e0092c1
        lea edi,[ebx + -0x2]
        test edi,edi
        jle L_5e0092c1
        lea ebx,[esi + 0x400c]
        mov eax,0x5e37a4e8
L_5e0091c3:
        lea esi,[eax + 0x20]
        push 0x5e37a4c8
        push esi
        push eax
        mov ecx,ebx
        call FUN_5e012eb0
        dec edi
        mov eax,esi
        jnz L_5e0091c3
        jmp L_5e0092c1
        add ebx,-0x3
        xor eax,eax
        test ebx,ebx
        mov dword ptr [ebp + 0x14],eax
        jle L_5e00922c
        inc ebx
        mov edi,0x5e37a4e8
        shr ebx,0x1
        lea edx,[ebx + ebx*0x1]
        mov dword ptr [ebp + 0x14],edx
L_5e0091f8:
        lea eax,[edi + 0x20]
        lea ecx,[esi + 0x400c]
        push eax
        lea eax,[edi + -0x20]
        push edi
        push eax
        call FUN_5e012eb0
        lea eax,[edi + 0x20]
        lea ecx,[edi + 0x40]
        push eax
        mov dword ptr [ebp + 0xc],ecx
        push ecx
        push edi
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        mov edi,dword ptr [ebp + 0xc]
        dec ebx
        jnz L_5e0091f8
        mov eax,dword ptr [ebp + 0x14]
L_5e00922c:
        mov edx,dword ptr [ebp + 0x18]
        lea ecx,[eax + 0x3]
        cmp ecx,edx
        jnz L_5e0092c1
        shl eax,0x5
        lea edx,[eax + 0x5e37a508]
        lea ecx,[eax + 0x5e37a4e8]
        push edx
        lea edx,[eax + 0x5e37a4c8]
        push ecx
        push edx
        lea ecx,[esi + 0x400c]
        call FUN_5e012eb0
        jmp L_5e0092c1
        dec ebx
        test ebx,ebx
        jle L_5e0092c1
        inc ebx
        mov edi,0x5e37a4c8
        shr ebx,0x1
L_5e00926c:
        lea eax,[edi + 0x20]
        mov ecx,esi
        push eax
        push edi
        call FUN_5e002340
        add edi,0x40
        dec ebx
        jnz L_5e00926c
        jmp L_5e0092c1
        dec ebx
        test ebx,ebx
        jle L_5e0092c1
        mov eax,0x5e37a4c8
L_5e00928a:
        lea edi,[eax + 0x20]
        mov ecx,esi
        push edi
        push eax
        call FUN_5e002340
        dec ebx
        mov eax,edi
        jnz L_5e00928a
        jmp L_5e0092c1
        test ebx,ebx
        jle L_5e0092c1
        mov edi,0x5e37a4c8
L_5e0092a6:
        push edi
        mov ecx,esi
        call FUN_5e0023e0
        add edi,0x20
        dec ebx
        jnz L_5e0092a6
        jmp L_5e0092c1
L_5e0092b6:
        mov dword ptr [ebp + 0x8],0x80004001
        jmp L_5e0092c1
L_5e0092bf:
        fstp st(0)
L_5e0092c1:
        fninit
        fldcw word ptr [ebp + -0x18]
        mov eax,dword ptr [ebp + 0x8]
        pop edi
        pop ebx
        pop esi
        mov esp,ebp
        pop ebp
        ret 0x18
    }
}
