/* FUN_0046f080 - MLR mesh-build function (2171 B) */

extern int g_7b9590;
extern int g_7da724;
extern int g_7b958c;
extern double g_76e3e8;
extern void *g_76b2ec;
extern int g_7da5f0;
extern int g_7d9968;
extern int g_7b2314;
extern int g_7b2284;
extern int g_7b220c;
extern float g_76d064;
extern float g_76d070;
extern float g_76f0d8;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0046bdf0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00423b80(void);
extern void __cdecl FUN_00439bc0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void func_0046f080(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x9c
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
        jz L46f0bc
        mov ecx, dword ptr [g_7da724]
        push ecx
        push 0x14
        mov ecx, eax
        call FUN_00487830
        mov dword ptr [ebp-0x38], eax
        jmp L46f0bf
L46f0bc:
        mov dword ptr [ebp-0x38], edi
L46f0bf:
        call FUN_006f49a0
        mov edx, dword ptr [g_7b958c]
        push edx
        call FUN_006f4950
        fld qword ptr [g_76e3e8]
        mov esi, dword ptr [ebp+0x8]
        fild dword ptr [esi+0x4]
        call FUN_0075db86
        fmul dword ptr [esi+0x10]
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [g_76b2ec]
        add esp, 0x8
        call FUN_0075db4a
        mov dword ptr [ebp-0x30], eax
        lea eax, [eax+eax*2]
        cmp eax, 0x100
        jl L46f10c
        mov dword ptr [ebp-0x30], 0x55
L46f10c:
        mov dword ptr [ebp-0x34], edi
L46f10f:
        xor edi, edi
        push 0x90
        mov dword ptr [g_7da5f0], edi
        call FUN_004084d0
        add esp, 0x4
        cmp eax, edi
        jz L46f13b
        mov ecx, dword ptr [g_7d9968]
        push ecx
        mov ecx, eax
        call FUN_0046bdf0
        mov dword ptr [ebp-0x18], eax
        jmp L46f13e
L46f13b:
        mov dword ptr [ebp-0x18], edi
L46f13e:
        mov edx, dword ptr [ebp-0x18]
        mov esi, dword ptr [edx+0xc]
        mov eax, dword ptr [esi+0xc]
        mov ebx, dword ptr [ebp-0x30]
        cmp ebx, eax
        mov dword ptr [ebp-0x1c], esi
        jz L46f1ad
        cmp ebx, edi
        jbe L46f199
        push ebx
        call FUN_004084d0
        mov edi, dword ptr [esi+0x8]
        add esp, 0x4
        test edi, edi
        mov dword ptr [ebp-0x4], eax
        jz L46f191
        mov eax, dword ptr [esi+0xc]
        cmp ebx, eax
        jnc L46f171
        mov eax, ebx
L46f171:
        mov ecx, eax
        dec eax
        test ecx, ecx
        jz L46f188
L46f17b:
        mov ecx, dword ptr [ebp-0x4]
        mov dl, byte ptr [edi+eax*1]
        mov byte ptr [eax+ecx*1], dl
        mov edx, eax
        dec eax
        test edx, edx
        /* __emit: MSVC6 miscomputes this backward JNZ rel8 (emits 75 F0, ref 75 F3) */
        __emit 0x75
        __emit 0xF3
L46f188:
        push edi
        call FUN_004084e0
        add esp, 0x4
L46f191:
        mov eax, dword ptr [ebp-0x4]
        mov dword ptr [esi+0x8], eax
        jmp L46f1a8
L46f199:
        mov ecx, dword ptr [esi+0x8]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [esi+0x8], edi
L46f1a8:
        mov dword ptr [esi+0xc], ebx
        xor edi, edi
L46f1ad:
        cmp ebx, edi
        jle L46f1c9
        mov edi, dword ptr [esi+0x8]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 0x2
        mov eax, 0x3030303
        rep stosd
        mov ecx, edx
        and ecx, 0x3
        rep stosb
L46f1c9:
        mov eax, dword ptr [esi+0x14]
        lea edi, [esi+0x10]
        lea ebx, [ebx+ebx*2]
        cmp ebx, eax
        mov dword ptr [ebp-0x8], edi
        mov dword ptr [ebp-0x24], ebx
        mov dword ptr [ebp-0xc], eax
        jz L46f27f
        test ebx, ebx
        jbe L46f26b
        lea eax, [ebx+ebx*2]
        shl eax, 0x2
        push eax
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L46f209
        lea ecx, [ebx-1]
        mov dword ptr [ebp-0x10], ecx
        mov dword ptr [ebp-0x4], eax
        jmp L46f210
L46f209:
        mov dword ptr [ebp-0x4], 0x0
L46f210:
        cmp dword ptr [edi], 0x0
        jz L46f264
        mov eax, dword ptr [ebp-0xc]
        cmp ebx, eax
        jnc L46f21e
        mov eax, ebx
L46f21e:
        mov edx, eax
        dec eax
        test edx, edx
        jz L46f250
        mov edx, dword ptr [ebp-0x4]
        lea ecx, [eax+eax*2]
        lea edi, [edx+ecx*4]
        mov ecx, dword ptr [ebp-0x8]
        mov ecx, dword ptr [ecx]
        sub ecx, edx
        mov dword ptr [ebp-0xc], ecx
        lea esi, [eax+1]
L46f23b:
        mov edx, dword ptr [ebp-0xc]
        add edx, edi
        push edx
        mov ecx, edi
        call FUN_0040ccd0
        dec esi
        sub edi, 0xc
        test esi, esi
        ja L46f23b
L46f250:
        mov eax, dword ptr [ebp-0x8]
        mov eax, dword ptr [eax]
        push eax
        call FUN_004084e0
        mov edi, dword ptr [ebp-0x8]
        mov esi, dword ptr [ebp-0x1c]
        add esp, 0x4
L46f264:
        mov ecx, dword ptr [ebp-0x4]
        mov dword ptr [edi], ecx
        jmp L46f27c
L46f26b:
        mov edx, dword ptr [edi]
        push edx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [edi], 0x0
L46f27c:
        mov dword ptr [edi+0x4], ebx
L46f27f:
        cmp ebx, dword ptr [esi+0x4]
        jz L46f2dd
        test ebx, ebx
        jbe L46f2c9
        push ebx
        call FUN_004084d0
        mov edi, dword ptr [esi]
        add esp, 0x4
        test edi, edi
        mov ecx, eax
        mov dword ptr [ebp-0xc], ecx
        jz L46f2c5
        mov eax, dword ptr [esi+0x4]
        cmp ebx, eax
        jnc L46f2a5
        mov eax, ebx
L46f2a5:
        mov edx, eax
        dec eax
        test edx, edx
        jz L46f2b9
L46f2ac:
        mov dl, byte ptr [edi+eax*1]
        mov byte ptr [eax+ecx*1], dl
        mov edx, eax
        dec eax
        test edx, edx
        jnz L46f2ac
L46f2b9:
        push edi
        call FUN_004084e0
        mov ecx, dword ptr [ebp-0xc]
        add esp, 0x4
L46f2c5:
        mov dword ptr [esi], ecx
        jmp L46f2da
L46f2c9:
        mov eax, dword ptr [esi]
        push eax
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [esi], 0x0
L46f2da:
        mov dword ptr [esi+0x4], ebx
L46f2dd:
        mov ecx, dword ptr [ebp-0x1c]
        mov edi, dword ptr [ebp-0x30]
        mov eax, dword ptr [ecx+0x1c]
        lea esi, [ecx+0x18]
        lea edi, [edi+edi*2]
        shl edi, 0x1
        cmp edi, eax
        mov dword ptr [ebp-0x28], esi
        mov dword ptr [ebp-0x10], esi
        jz L46f390
        test edi, edi
        jbe L46f37c
        /* __emit: no-base SIB form LEA EDX,[EDI*8+0] (8D 14 FD) not encodable in MSVC6 inline asm */
        __emit 0x8D
        __emit 0x14
        __emit 0xFD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push edx
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        mov dword ptr [ebp-0x4], eax
        jz L46f32d
        push 0x423b70
        push edi
        push 0x8
        push eax
        call FUN_00406c90
        mov ecx, dword ptr [ebp-0x4]
        mov dword ptr [ebp-0x4], ecx
        jmp L46f334
L46f32d:
        mov dword ptr [ebp-0x4], 0x0
L46f334:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        jz L46f375
        mov edx, dword ptr [esi+0x4]
        cmp edi, edx
        jnc L46f343
        mov edx, edi
L46f343:
        mov eax, edx
        dec edx
        test eax, eax
        jz L46f36a
        mov esi, dword ptr [ebp-0x4]
        lea eax, [esi+edx*8]
        sub ecx, esi
        inc edx
L46f353:
        mov esi, dword ptr [ecx+eax*1]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx+eax*1+0x4]
        mov dword ptr [eax+0x4], esi
        dec edx
        sub eax, 0x8
        test edx, edx
        ja L46f353
        mov esi, dword ptr [ebp-0x28]
L46f36a:
        mov eax, dword ptr [esi]
        push eax
        call FUN_004084e0
        add esp, 0x4
L46f375:
        mov ecx, dword ptr [ebp-0x4]
        mov dword ptr [esi], ecx
        jmp L46f38d
L46f37c:
        mov edx, dword ptr [esi]
        push edx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [esi], 0x0
L46f38d:
        mov dword ptr [esi+0x4], edi
L46f390:
        mov eax, dword ptr [ebp-0x1c]
        lea esi, [eax+0x20]
        cmp ebx, dword ptr [esi+0x4]
        mov dword ptr [ebp-0xc], esi
        mov dword ptr [ebp-0x10], esi
        jz L46f409
        test ebx, ebx
        jbe L46f3f5
        /* __emit: no-base SIB form LEA ECX,[EBX*4+0] (8D 0C 9D) not encodable in MSVC6 inline asm */
        __emit 0x8D
        __emit 0x0C
        __emit 0x9D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push ecx
        call FUN_004084d0
        mov edx, dword ptr [esi]
        add esp, 0x4
        test edx, edx
        mov edi, eax
        mov dword ptr [ebp-0x14], edi
        jz L46f3f1
        mov ecx, dword ptr [esi+0x4]
        cmp ebx, ecx
        jnc L46f3c9
        mov ecx, ebx
L46f3c9:
        mov eax, ecx
        dec ecx
        test eax, eax
        jz L46f3e6
        lea eax, [edi+ecx*4]
        sub edx, edi
        inc ecx
L46f3d6:
        mov edi, dword ptr [edx+eax*1]
        mov dword ptr [eax], edi
        dec ecx
        sub eax, 0x4
        test ecx, ecx
        ja L46f3d6
        mov edi, dword ptr [ebp-0x14]
L46f3e6:
        mov eax, dword ptr [esi]
        push eax
        call FUN_004084e0
        add esp, 0x4
L46f3f1:
        mov dword ptr [esi], edi
        jmp L46f406
L46f3f5:
        mov ecx, dword ptr [esi]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [esi], 0x0
L46f406:
        mov dword ptr [esi+0x4], ebx
L46f409:
        mov eax, dword ptr [ebp-0x34]
        lea edx, [eax+eax*2]
        lea ecx, [ebp-0x98]
        /* __emit: no-base SIB form LEA EDX,[EDX*4+0x7b2314] (8D 14 95) not encodable in MSVC6 inline asm */
        __emit 0x8D
        __emit 0x14
        __emit 0x95
        __emit 0x14
        __emit 0x23
        __emit 0x7B
        __emit 0x00
        mov edi, 0x3
L46f421:
        mov eax, dword ptr [edx]
        lea eax, [eax+eax*2]
        shl eax, 0x2
        mov esi, dword ptr [eax+g_7b2284]
        mov dword ptr [ecx-0x4], esi
        mov esi, dword ptr [eax+g_7b2284+0x4]
        mov eax, dword ptr [eax+g_7b2284+0x8]
        mov dword ptr [ecx], esi
        mov dword ptr [ecx+0x4], eax
        add edx, 0x4
        add ecx, 0xc
        dec edi
        jnz L46f421
        mov esi, dword ptr [ebp+0x8]
        mov ecx, dword ptr [esi+0xc]
        mov edi, dword ptr [ebp-0x30]
        mov edx, dword ptr [esi+0x4]
        push ecx
        push edi
        push edx
        lea eax, [ebp-0x84]
        push eax
        mov eax, dword ptr [ebp-0x8]
        lea ecx, [ebp-0x90]
        push ecx
        mov ecx, dword ptr [eax]
        lea edx, [ebp-0x9c]
        push edx
        push ecx
        call FUN_0047f1b0
        mov eax, dword ptr [ebp-0x1c]
        mov ecx, dword ptr [ebp-0x18]
        mov eax, dword ptr [eax+0x8]
        mov edx, dword ptr [ecx]
        add esp, 0x1c
        push 0x1
        push edi
        push eax
        call dword ptr [edx+0xc]
        cmp byte ptr [esi+0x8], 0x1
        jnz L46f5b1
        lea ecx, [ebx+ebx*2]
        shl ecx, 0x2
        push ecx
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L46f4b8
        lea edx, [ebx-1]
        mov dword ptr [ebp-0x10], edx
        mov dword ptr [ebp-0x20], eax
        jmp L46f4bf
L46f4b8:
        mov dword ptr [ebp-0x20], 0x0
L46f4bf:
        mov eax, dword ptr [ebp-0x8]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp-0x20]
        push eax
        mov edi, 0x1
        mov dword ptr [ebp-0x2c], eax
        call FUN_0040c410
        cmp ebx, edi
        mov ecx, dword ptr [ebp-0x1c]
        mov eax, dword ptr [ecx]
        mov esi, edi
        mov dword ptr [ebp-0x10], eax
        mov byte ptr [eax], 0x0
        mov dword ptr [ebp-0x14], esi
        jle L46f55a
        mov edx, dword ptr [ebp-0x2c]
        mov eax, dword ptr [ebp-0x20]
        add edx, 0xc
        add eax, 0xc
        mov dword ptr [ebp-0x4], edx
        mov dword ptr [ebp-0x2c], eax
        xor ebx, ebx
L46f4fb:
        test edi, edi
        jle L46f527
        mov esi, dword ptr [ebp-0x20]
L46f504:
        mov ecx, dword ptr [g_7b220c]
        mov edx, dword ptr [ebp-0x4]
        push ecx
        push esi
        push edx
        call FUN_0041c540
        add esp, 0xc
        test al, al
        jnz L46f524
        inc ebx
        add esi, 0xc
        cmp ebx, edi
        jl L46f504
L46f524:
        mov esi, dword ptr [ebp-0x14]
L46f527:
        cmp ebx, edi
        jnz L46f540
        mov eax, dword ptr [ebp-0x2c]
        mov ecx, eax
        add eax, 0xc
        mov dword ptr [ebp-0x2c], eax
        mov eax, dword ptr [ebp-0x4]
        push eax
        inc edi
        call FUN_0040c410
L46f540:
        mov ecx, dword ptr [ebp-0x10]
        mov eax, dword ptr [ebp-0x24]
        mov byte ptr [ecx+esi*1], bl
        mov ecx, dword ptr [ebp-0x4]
        inc esi
        add ecx, 0xc
        cmp esi, eax
        mov dword ptr [ebp-0x14], esi
        mov dword ptr [ebp-0x4], ecx
        /* __emit: MSVC6 miscomputes this backward JL rel8 (emits 7C A3, ref 7C A1) */
        __emit 0x7C
        __emit 0xA1
L46f55a:
        mov esi, dword ptr [ebp-0x8]
        push edi
        mov ecx, esi
        call FUN_0040c2e0
        mov eax, dword ptr [esi+0x4]
        test eax, eax
        jbe L46f58f
        mov edx, esi
L46f56e:
        mov ebx, dword ptr [edx]
        mov esi, dword ptr [ebp-0x20]
        sub esi, ebx
        mov dword ptr [ebp-0x14], eax
L46f578:
        lea eax, [esi+ebx*1]
        push eax
        mov ecx, ebx
        call FUN_0040c410
        mov eax, dword ptr [ebp-0x14]
        add ebx, 0xc
        dec eax
        mov dword ptr [ebp-0x14], eax
        jnz L46f578
L46f58f:
        mov eax, dword ptr [ebp-0x8]
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [ebp-0x18]
        mov edx, dword ptr [esi]
        push edi
        push ecx
        mov ecx, esi
        call dword ptr [edx+0x24]
        mov edx, dword ptr [ebp-0x20]
        push edx
        call FUN_004084e0
        mov ebx, dword ptr [ebp-0x24]
        add esp, 0x4
        jmp L46f61e
L46f5b1:
        xor esi, esi
        test ebx, ebx
        mov edi, ebx
        jle L46f60c
        mov eax, dword ptr [ebp-0x1c]
        mov dword ptr [ebp-0x4], eax
L46f5bf:
        mov ecx, esi
        and ecx, 0xff
        xor eax, eax
        push ecx
        lea ecx, [ebp-0x44]
        mov dword ptr [ebp-0x44], eax
        mov dword ptr [ebp-0x40], eax
        call FUN_00423b80
        mov eax, dword ptr [ebp-0x4]
        lea edx, [ebp-0x44]
        cmp eax, edx
        jz L46f5ee
        mov ecx, dword ptr [ebp-0x4]
        lea eax, [ebp-0x44]
        push eax
        call FUN_00439bc0
L46f5ee:
        mov eax, dword ptr [ebp-0x44]
        test eax, eax
        jz L46f5fe
        push eax
        call FUN_004084e0
        add esp, 0x4
L46f5fe:
        mov ecx, dword ptr [ebp-0x4]
        inc esi
        add ecx, 0x8
        cmp esi, ebx
        mov dword ptr [ebp-0x4], ecx
        jl L46f5bf
L46f60c:
        mov eax, dword ptr [ebp-0x8]
        mov ecx, dword ptr [ebp-0x18]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push ebx
        push eax
        call dword ptr [edx+0x24]
        mov esi, dword ptr [ebp-0x18]
L46f61e:
        mov eax, dword ptr [ebp-0x1c]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi]
        push ebx
        push ecx
        mov ecx, esi
        call dword ptr [edx+0x88]
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+0x94]
        mov ebx, dword ptr [ebp+0xc]
        test ebx, ebx
        jnz L46f668
        lea ecx, [edi+edi*1]
        test ecx, ecx
        jle L46f732
        mov eax, dword ptr [ebp-0x28]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp-0x68], ebx
        mov dword ptr [ebp-0x64], ebx
        mov edx, ebx
L46f658:
        mov dword ptr [eax], edx
        mov dword ptr [eax+0x4], ebx
        add eax, 0x8
        dec ecx
        jnz L46f658
        jmp L46f732
L46f668:
        mov edx, dword ptr [esi]
        push 0x0
        push ebx
        mov ecx, esi
        call dword ptr [edx+0x14]
        test dword ptr [ebx], 0x3fff
        jbe L46f707
        test edi, edi
        jle L46f732
        mov eax, dword ptr [ebp-0x28]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp-0x8]
        mov eax, dword ptr [ecx]
        mov ecx, edx
        lea edx, [edx+edi*8]
        mov dword ptr [ebp-0x24], edi
L46f698:
        fld dword ptr [eax]
        add ecx, 0x8
        fadd dword ptr [g_76d064]
        add edx, 0x8
        add eax, 0xc
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x60]
        fld dword ptr [eax-0x8]
        mov ebx, dword ptr [ebp-0x60]
        fadd dword ptr [g_76d064]
        mov dword ptr [ecx-0x8], ebx
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x5c]
        fld dword ptr [eax-0xc]
        mov ebx, dword ptr [ebp-0x5c]
        fadd dword ptr [g_76d064]
        mov dword ptr [ecx-0x4], ebx
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x50]
        fld dword ptr [eax-0x4]
        mov ebx, dword ptr [ebp-0x50]
        fadd dword ptr [g_76d064]
        mov dword ptr [edx-0x8], ebx
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x4c]
        mov ebx, dword ptr [ebp-0x4c]
        mov dword ptr [edx-0x4], ebx
        dec dword ptr [ebp-0x24]
        jnz L46f698
        jmp L46f732
L46f707:
        lea ecx, [edi+edi*1]
        test ecx, ecx
        jle L46f732
        mov edx, dword ptr [ebp-0x28]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp-0x58], 0x0
        mov edx, dword ptr [ebp-0x58]
        mov dword ptr [ebp-0x54], 0x0
        mov ebx, dword ptr [ebp-0x54]
L46f727:
        mov dword ptr [eax], edx
        mov dword ptr [eax+0x4], ebx
        add eax, 0x8
        dec ecx
        jnz L46f727
L46f732:
        mov edx, dword ptr [ebp-0x28]
        mov eax, dword ptr [esi]
        lea ecx, [edi+edi*1]
        push ecx
        mov ecx, dword ptr [edx]
        push ecx
        mov ecx, esi
        call dword ptr [eax+0x2c]
        xor edx, edx
        test edi, edi
        jle L46f89b
        lea eax, [ebp-0x78]
        mov dword ptr [ebp-0x10], eax
        mov dword ptr [ebp-0x4], edx
L46f756:
        mov ecx, dword ptr [ebp-0x8]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ebp-0x4]
        fld dword ptr [eax+ecx*1+0x8]
        add eax, ecx
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fld dword ptr [eax+0x4]
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fld dword ptr [eax]
        mov dword ptr [ebp-0x6c], 0x3f800000
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x78]
        fstp dword ptr [ebp-0x74]
        fstp dword ptr [ebp-0x70]
        fld dword ptr [g_76f0d8]
        mov esi, dword ptr [ebp-0x10]
        fld dword ptr [esi+0xc]
        mov ecx, dword ptr [esi+0xc]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp-0x48]
        xor ecx, ecx
        mov ebx, dword ptr [ebp-0x48]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov dword ptr [ebp-0x3c], ebx
        fld dword ptr [esi]
        mov ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp-0x48]
        xor ecx, ecx
        mov ebx, dword ptr [ebp-0x48]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp-0x3c]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp-0x3c], ecx
        fld dword ptr [esi+0x4]
        mov ecx, dword ptr [esi+0x4]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp-0x48]
        xor ecx, ecx
        mov ebx, dword ptr [ebp-0x48]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp-0x3c]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp-0x3c], ecx
        mov ecx, dword ptr [esi+0x8]
        fadd dword ptr [esi+0x8]
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp-0x48]
        xor ecx, ecx
        mov ebx, dword ptr [ebp-0x48]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp-0x3c]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp-0x3c], ecx
        mov eax, dword ptr [ebp-0xc]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ebp-0x3c]
        mov dword ptr [ecx+edx*4], eax
        mov ecx, dword ptr [ebp-0x4]
        inc edx
        add ecx, 0xc
        cmp edx, edi
        mov dword ptr [ebp-0x4], ecx
        jl L46f756
L46f89b:
        mov eax, dword ptr [ebp-0xc]
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [ebp-0x18]
        mov edx, dword ptr [esi]
        push edi
        push ecx
        mov ecx, esi
        call dword ptr [edx+0xa4]
        mov eax, dword ptr [ebp+0x10]
        mov edx, dword ptr [esi]
        push 0x1
        push eax
        mov ecx, esi
        call dword ptr [edx+0x14]
        mov ecx, dword ptr [ebp-0x38]
        push esi
        call FUN_00487ce0
        dec word ptr [esi+0x8]
        cmp word ptr [esi+0x8], 0x0
        jnz L46f8dc
        test esi, esi
        jz L46f8dc
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx]
L46f8dc:
        mov eax, dword ptr [ebp-0x34]
        inc eax
        cmp eax, 0x14
        mov dword ptr [ebp-0x34], eax
        jl L46f10f
        call FUN_006f49a0
        mov eax, dword ptr [ebp-0x38]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
