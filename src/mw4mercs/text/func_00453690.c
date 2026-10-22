/* FUN_00453690 - MLR mesh render (RET) */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00450b10(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00487ce0(void);

extern int g_7b9590;
extern int g_7da724;
extern int g_7b958c;
extern double g_76e3e8;
extern void *g_76b2ec;
extern int g_7da5f0;
extern int g_7b98cc;
extern int g_7b2314[];
extern int g_7b2284[];
extern int g_7b2288[];
extern int g_7b228c[];
extern float g_76d064;
extern float g_76d070;
extern float g_76ea28;
extern int g_7b220c;

__declspec(naked) void func_00453690(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x80
        mov eax, dword ptr [g_7b9590]
        push ebx
        push esi
        push edi
        push eax
        call FUN_006f4950
        push 0x20
        call FUN_004084d0
        xor edi, edi
        add esp, 0x4
        cmp eax, edi
        jz L_0x4536cc
        mov ecx, dword ptr [g_7da724]
        push ecx
        push 0x14
        mov ecx, eax
        call FUN_00487830
        mov dword ptr [ebp - 0x1c], eax
        jmp L_0x4536cf
    L_0x4536cc:
        mov dword ptr [ebp - 0x1c], edi
    L_0x4536cf:
        call FUN_006f49a0
        mov edx, dword ptr [g_7b958c]
        push edx
        call FUN_006f4950
        fld qword ptr [g_76e3e8]
        mov esi, dword ptr [ebp + 0x8]
        fild dword ptr [esi + 0x4]
        call FUN_0075db86
        fmul dword ptr [esi + 0x10]
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [g_76b2ec]
        add esp, 0x8
        call FUN_0075db4a
        lea ecx, [eax + eax*2]
        cmp ecx, 0x100
        mov dword ptr [ebp - 0x14], eax
        jl L_0x45371e
        mov eax, 0x55
        mov dword ptr [ebp - 0x14], eax
    L_0x45371e:
        lea edx, [eax + eax*2]
        mov dword ptr [ebp - 0x18], edi
        mov dword ptr [ebp - 0x20], edx
    L_0x453727:
        push 0x70
        mov dword ptr [g_7da5f0], 0x0
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_0x45374f
        mov ecx, dword ptr [g_7b98cc]
        push ecx
        mov ecx, eax
        call FUN_00450b10
        jmp L_0x453751
    L_0x45374f:
        xor eax, eax
    L_0x453751:
        mov edi, dword ptr [eax + 0xc]
        mov ebx, dword ptr [edi + 0x14]
        mov esi, dword ptr [ebp - 0x20]
        cmp esi, ebx
        mov dword ptr [ebp - 0xc], eax
        mov dword ptr [ebp - 0x4], edi
        jz L_0x453800
        test esi, esi
        jbe L_0x4537ea
        lea edx, [esi + esi*2]
        shl edx, 0x2
        push edx
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_0x45378a
        lea ecx, [esi - 0x1]
        mov dword ptr [ebp - 0x30], ecx
        mov dword ptr [ebp - 0x10], eax
        jmp L_0x453791
    L_0x45378a:
        mov dword ptr [ebp - 0x10], 0x0
    L_0x453791:
        mov ecx, dword ptr [edi + 0x10]
        test ecx, ecx
        mov dword ptr [ebp - 0x8], ecx
        jz L_0x4537e2
        cmp esi, ebx
        mov eax, esi
        jc L_0x4537a3
        mov eax, ebx
    L_0x4537a3:
        mov edx, eax
        dec eax
        test edx, edx
        jz L_0x4537d6
        mov edx, dword ptr [ebp - 0x10]
        lea ecx, [eax + eax*2]
        lea edi, [edx + ecx*4]
        mov ecx, dword ptr [ebp - 0x8]
        sub ecx, edx
        mov dword ptr [ebp - 0x28], ecx
        lea ebx, [eax + 0x1]
    L_0x4537be:
        mov edx, dword ptr [ebp - 0x28]
        add edx, edi
        push edx
        mov ecx, edi
        call FUN_0040ccd0
        dec ebx
        sub edi, 0xc
        test ebx, ebx
        ja L_0x4537be
        mov ecx, dword ptr [ebp - 0x8]
    L_0x4537d6:
        push ecx
        call FUN_004084e0
        mov edi, dword ptr [ebp - 0x4]
        add esp, 0x4
    L_0x4537e2:
        mov eax, dword ptr [ebp - 0x10]
        mov dword ptr [edi + 0x10], eax
        jmp L_0x4537fd
    L_0x4537ea:
        mov ecx, dword ptr [edi + 0x10]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [edi + 0x10], 0x0
    L_0x4537fd:
        mov dword ptr [edi + 0x14], esi
    L_0x453800:
        cmp esi, dword ptr [edi + 0x4]
        jz L_0x453858
        test esi, esi
        jbe L_0x453844
        push esi
        call FUN_004084d0
        mov ecx, dword ptr [edi]
        add esp, 0x4
        test ecx, ecx
        mov ebx, eax
        jz L_0x453840
        mov eax, dword ptr [edi + 0x4]
        cmp esi, eax
        jnc L_0x453823
        mov eax, esi
    L_0x453823:
        mov edx, eax
        dec eax
        test edx, edx
        jz L_0x453837
    L_0x45382a:
        mov dl, byte ptr [ecx + eax*1]
        mov byte ptr [eax + ebx*1], dl
        mov edx, eax
        dec eax
        test edx, edx
        jnz L_0x45382a
    L_0x453837:
        push ecx
        call FUN_004084e0
        add esp, 0x4
    L_0x453840:
        mov dword ptr [edi], ebx
        jmp L_0x453855
    L_0x453844:
        mov eax, dword ptr [edi]
        push eax
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [edi], 0x0
    L_0x453855:
        mov dword ptr [edi + 0x4], esi
    L_0x453858:
        cmp esi, dword ptr [edi + 0x1c]
        jz L_0x4538e3
        test esi, esi
        jbe L_0x4538cd
        lea ecx, [esi*8 + 0x0]
        push ecx
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_0x453883
        lea edx, [esi - 0x1]
        mov dword ptr [ebp - 0x30], edx
        mov ebx, eax
        jmp L_0x453885
    L_0x453883:
        xor ebx, ebx
    L_0x453885:
        mov ecx, dword ptr [edi + 0x18]
        test ecx, ecx
        mov dword ptr [ebp - 0x10], ebx
        jz L_0x4538c8
        mov edx, dword ptr [edi + 0x1c]
        cmp esi, edx
        jnc L_0x453898
        mov edx, esi
    L_0x453898:
        mov eax, edx
        dec edx
        test eax, eax
        jz L_0x4538bc
        lea eax, [ebx + edx*8]
        sub ecx, ebx
        inc edx
    L_0x4538a5:
        mov ebx, dword ptr [ecx + eax*1]
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [ecx + eax*1 + 0x4]
        mov dword ptr [eax + 0x4], ebx
        dec edx
        sub eax, 0x8
        test edx, edx
        ja L_0x4538a5
        mov ebx, dword ptr [ebp - 0x10]
    L_0x4538bc:
        mov eax, dword ptr [edi + 0x18]
        push eax
        call FUN_004084e0
        add esp, 0x4
    L_0x4538c8:
        mov dword ptr [edi + 0x18], ebx
        jmp L_0x4538e0
    L_0x4538cd:
        mov ecx, dword ptr [edi + 0x18]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [edi + 0x18], 0x0
    L_0x4538e0:
        mov dword ptr [edi + 0x1c], esi
    L_0x4538e3:
        cmp esi, dword ptr [edi + 0x24]
        jz L_0x453955
        test esi, esi
        jbe L_0x45393f
        lea edx, [esi*4 + 0x0]
        push edx
        call FUN_004084d0
        mov edx, dword ptr [edi + 0x20]
        add esp, 0x4
        test edx, edx
        mov ebx, eax
        mov dword ptr [ebp - 0x28], ebx
        jz L_0x45393a
        mov ecx, dword ptr [edi + 0x24]
        cmp esi, ecx
        jnc L_0x453911
        mov ecx, esi
    L_0x453911:
        mov eax, ecx
        dec ecx
        test eax, eax
        jz L_0x45392e
        lea eax, [ebx + ecx*4]
        sub edx, ebx
        inc ecx
    L_0x45391e:
        mov ebx, dword ptr [edx + eax*1]
        mov dword ptr [eax], ebx
        dec ecx
        sub eax, 0x4
        test ecx, ecx
        ja L_0x45391e
        mov ebx, dword ptr [ebp - 0x28]
    L_0x45392e:
        mov eax, dword ptr [edi + 0x20]
        push eax
        call FUN_004084e0
        add esp, 0x4
    L_0x45393a:
        mov dword ptr [edi + 0x20], ebx
        jmp L_0x453952
    L_0x45393f:
        mov ecx, dword ptr [edi + 0x20]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [edi + 0x20], 0x0
    L_0x453952:
        mov dword ptr [edi + 0x24], esi
    L_0x453955:
        mov eax, dword ptr [ebp - 0x18]
        lea edx, [eax + eax*2]
        lea ecx, [ebp - 0x7c]
        lea edx, [edx*4 + g_7b2314]
        mov edi, 0x3
    L_0x45396a:
        mov eax, dword ptr [edx]
        lea eax, [eax + eax*2]
        shl eax, 0x2
        mov ebx, dword ptr [eax + g_7b2284]
        mov dword ptr [ecx - 0x4], ebx
        mov ebx, dword ptr [eax + g_7b2288]
        mov eax, dword ptr [eax + g_7b228c]
        mov dword ptr [ecx], ebx
        mov dword ptr [ecx + 0x4], eax
        add edx, 0x4
        add ecx, 0xc
        dec edi
        jnz L_0x45396a
        mov edi, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [edi + 0xc]
        mov edx, dword ptr [ebp - 0x14]
        mov eax, dword ptr [edi + 0x4]
        push ecx
        push edx
        push eax
        lea ecx, [ebp - 0x68]
        push ecx
        mov ecx, dword ptr [ebp - 0x4]
        lea edx, [ebp - 0x74]
        push edx
        mov edx, dword ptr [ecx + 0x10]
        lea eax, [ebp - 0x80]
        push eax
        lea eax, [ecx + 0x10]
        push edx
        mov dword ptr [ebp - 0x10], eax
        call FUN_0047f1b0
        mov ecx, dword ptr [ebp - 0x14]
        mov ebx, dword ptr [ebp - 0xc]
        mov eax, dword ptr [ebx]
        add esp, 0x1c
        push 0x1
        push ecx
        push 0x0
        mov ecx, ebx
        call dword ptr [eax + 0xc]
        cmp byte ptr [edi + 0x8], 0x1
        jnz L_0x453aff
        lea edx, [esi + esi*2]
        shl edx, 0x2
        push edx
        mov edi, 0x1
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_0x453a04
        lea ecx, [esi - 0x1]
        mov dword ptr [ebp - 0x30], ecx
        mov dword ptr [ebp - 0x8], eax
        jmp L_0x453a0b
    L_0x453a04:
        mov dword ptr [ebp - 0x8], 0x0
    L_0x453a0b:
        mov edx, dword ptr [ebp - 0x10]
        mov ebx, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0x8]
        push ebx
        call FUN_0040c410
        cmp esi, 0x1
        mov eax, dword ptr [ebp - 0x4]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0x30], eax
        mov byte ptr [eax], 0x0
        mov dword ptr [ebp - 0x28], 0x1
        jle L_0x453a9e
        mov ecx, dword ptr [ebp - 0x8]
        add ebx, 0xc
        add ecx, 0xc
        mov dword ptr [ebp - 0x10], ebx
        mov dword ptr [ebp - 0x24], ecx
    L_0x453a3f:
        xor ebx, ebx
        test edi, edi
        jle L_0x453a6b
        mov esi, dword ptr [ebp - 0x8]
    L_0x453a48:
        mov edx, dword ptr [g_7b220c]
        mov eax, dword ptr [ebp - 0x10]
        push edx
        push esi
        push eax
        call FUN_0041c540
        add esp, 0xc
        test al, al
        jnz L_0x453a68
        inc ebx
        add esi, 0xc
        cmp ebx, edi
        jl L_0x453a48
    L_0x453a68:
        mov esi, dword ptr [ebp - 0x20]
    L_0x453a6b:
        cmp ebx, edi
        jnz L_0x453a84
        mov eax, dword ptr [ebp - 0x24]
        mov edx, dword ptr [ebp - 0x10]
        mov ecx, eax
        add eax, 0xc
        push edx
        inc edi
        mov dword ptr [ebp - 0x24], eax
        call FUN_0040c410
    L_0x453a84:
        mov eax, dword ptr [ebp - 0x28]
        mov ecx, dword ptr [ebp - 0x30]
        mov edx, dword ptr [ebp - 0x10]
        mov byte ptr [ecx + eax*1], bl
        inc eax
        add edx, 0xc
        cmp eax, esi
        mov dword ptr [ebp - 0x28], eax
        mov dword ptr [ebp - 0x10], edx
        jl L_0x453a3f
    L_0x453a9e:
        mov edx, dword ptr [ebp - 0x4]
        lea ebx, [edx + 0x10]
        push edi
        mov ecx, ebx
        call FUN_0040c2e0
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        jbe L_0x453ad9
        mov ebx, dword ptr [ebx]
        mov ecx, dword ptr [ebp - 0x8]
        sub ecx, ebx
        mov dword ptr [ebp - 0x30], ecx
        mov dword ptr [ebp - 0x28], eax
    L_0x453ac0:
        mov eax, dword ptr [ebp - 0x30]
        add eax, ebx
        push eax
        mov ecx, ebx
        call FUN_0040c410
        mov eax, dword ptr [ebp - 0x28]
        add ebx, 0xc
        dec eax
        mov dword ptr [ebp - 0x28], eax
        jnz L_0x453ac0
    L_0x453ad9:
        mov eax, dword ptr [ebp - 0x4]
        mov ecx, dword ptr [eax + 0x10]
        mov ebx, dword ptr [ebp - 0xc]
        mov edx, dword ptr [ebx]
        add eax, 0x10
        push edi
        push ecx
        mov ecx, ebx
        mov dword ptr [ebp - 0x10], eax
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [ebp - 0x8]
        push edx
        call FUN_004084e0
        add esp, 0x4
        jmp L_0x453b2c
    L_0x453aff:
        xor eax, eax
        test esi, esi
        mov edi, esi
        jle L_0x453b14
        mov ecx, dword ptr [ebp - 0x4]
        mov ecx, dword ptr [ecx]
    L_0x453b0c:
        mov byte ptr [ecx + eax*1], al
        inc eax
        cmp eax, esi
        jl L_0x453b0c
    L_0x453b14:
        mov eax, dword ptr [ebp - 0x4]
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [ebx]
        add eax, 0x10
        push esi
        push ecx
        mov ecx, ebx
        mov dword ptr [ebp - 0x10], eax
        call dword ptr [edx + 0x24]
        mov ebx, dword ptr [ebp - 0xc]
    L_0x453b2c:
        mov eax, dword ptr [ebp - 0x4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebx]
        push esi
        push ecx
        mov ecx, ebx
        call dword ptr [edx + 0x88]
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [edx + 0x94]
        mov esi, dword ptr [ebp + 0xc]
        test esi, esi
        jnz L_0x453b76
        test edi, edi
        jle L_0x453bfe
        mov eax, dword ptr [ebp - 0x4]
        mov eax, dword ptr [eax + 0x18]
        mov dword ptr [ebp - 0x3c], esi
        mov dword ptr [ebp - 0x38], esi
        mov ecx, edi
        mov edx, esi
    L_0x453b66:
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], esi
        add eax, 0x8
        dec ecx
        jnz L_0x453b66
        jmp L_0x453bfe
    L_0x453b76:
        mov edx, dword ptr [ebx]
        push 0x0
        push esi
        mov ecx, ebx
        call dword ptr [edx + 0x14]
        test dword ptr [esi], 0x3fff
        jbe L_0x453bd3
        test edi, edi
        jle L_0x453bfe
        mov eax, dword ptr [ebp - 0x4]
        mov edx, dword ptr [ebp - 0x10]
        mov ecx, dword ptr [eax + 0x18]
        mov eax, dword ptr [edx]
        mov edx, edi
    L_0x453b99:
        fld dword ptr [eax]
        add eax, 0xc
        fadd dword ptr [g_76d064]
        add ecx, 0x8
        dec edx
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp - 0x44]
        fld dword ptr [eax - 0x8]
        mov esi, dword ptr [ebp - 0x44]
        fadd dword ptr [g_76d064]
        mov dword ptr [ecx - 0x8], esi
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp - 0x40]
        mov esi, dword ptr [ebp - 0x40]
        mov dword ptr [ecx - 0x4], esi
        jnz L_0x453b99
        jmp L_0x453bfe
    L_0x453bd3:
        test edi, edi
        jle L_0x453bfe
        mov eax, dword ptr [ebp - 0x4]
        mov eax, dword ptr [eax + 0x18]
        mov dword ptr [ebp - 0x4c], 0x0
        mov edx, dword ptr [ebp - 0x4c]
        mov dword ptr [ebp - 0x48], 0x0
        mov esi, dword ptr [ebp - 0x48]
        mov ecx, edi
    L_0x453bf3:
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], esi
        add eax, 0x8
        dec ecx
        jnz L_0x453bf3
    L_0x453bfe:
        mov eax, dword ptr [ebp - 0x4]
        mov ecx, dword ptr [eax + 0x18]
        mov edx, dword ptr [ebx]
        push edi
        push ecx
        mov ecx, ebx
        call dword ptr [edx + 0x2c]
        xor edx, edx
        test edi, edi
        jle L_0x453d69
        lea eax, [ebp - 0x5c]
        mov dword ptr [ebp - 0x30], eax
        mov dword ptr [ebp - 0x10], edx
    L_0x453c20:
        mov ecx, dword ptr [ebp - 0x4]
        lea eax, [ecx + 0x10]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0x10]
        fld dword ptr [eax + ecx*1 + 0x8]
        add eax, ecx
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fld dword ptr [eax]
        mov dword ptr [ebp - 0x50], 0x3f800000
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp - 0x5c]
        fstp dword ptr [ebp - 0x58]
        fstp dword ptr [ebp - 0x54]
        fld dword ptr [g_76ea28]
        mov esi, dword ptr [ebp - 0x30]
        fld dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl ecx, 1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x34]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x34]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov dword ptr [ebp - 0x2c], ebx
        fld dword ptr [esi]
        mov ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl ecx, 1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x34]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x34]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x2c]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x2c], ecx
        fld dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x4]
        fadd st(0), st(1)
        rcl ecx, 1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x34]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x34]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x2c]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x2c], ecx
        mov ecx, dword ptr [esi + 0x8]
        fadd dword ptr [esi + 0x8]
        rcl ecx, 1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x34]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x34]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x2c]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x2c], ecx
        mov eax, dword ptr [ebp - 0x4]
        mov ecx, dword ptr [eax + 0x20]
        mov eax, dword ptr [ebp - 0x2c]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp - 0x10]
        inc edx
        add ecx, 0xc
        cmp edx, edi
        mov dword ptr [ebp - 0x10], ecx
        jl L_0x453c20
    L_0x453d69:
        mov eax, dword ptr [ebp - 0x4]
        mov ecx, dword ptr [eax + 0x20]
        mov esi, dword ptr [ebp - 0xc]
        mov edx, dword ptr [esi]
        push edi
        push ecx
        mov ecx, esi
        call dword ptr [edx + 0xa4]
        mov ecx, dword ptr [ebp - 0x1c]
        push esi
        call FUN_00487ce0
        dec word ptr [esi + 0x8]
        cmp word ptr [esi + 0x8], 0x0
        jnz L_0x453d9e
        test esi, esi
        jz L_0x453d9e
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx]
    L_0x453d9e:
        mov eax, dword ptr [ebp - 0x18]
        inc eax
        cmp eax, 0x14
        mov dword ptr [ebp - 0x18], eax
        jl L_0x453727
        call FUN_006f49a0
        mov eax, dword ptr [ebp - 0x1c]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
