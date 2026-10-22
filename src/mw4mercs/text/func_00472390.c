/* FUN_00472390 - MLR mesh-build function (1601 B) */

extern int g_7b9590;
extern int g_7da724;
extern int g_7b958c;
extern double g_76e3e8;
extern void *g_76b2ec;
extern int g_7da5f0;
extern int g_7d9984;
extern int g_7b2284;
extern int g_7b220c;
extern float g_76d064;
extern float g_76d070;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0046fbc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void func_00472390(void)
{
    __asm {
        mov eax, dword ptr [g_7b9590]
        sub esp, 0x70
        push ebx
        push ebp
        push esi
        push edi
        push eax
        call FUN_006f4950
        push 0x20
        call FUN_004084d0
        xor edi, edi
        add esp, 0x4
        cmp eax, edi
        jz L4723c8
        mov ecx, dword ptr [g_7da724]
        push ecx
        push 0x14
        mov ecx, eax
        call FUN_00487830
        mov dword ptr [esp+0x24], eax
        jmp L4723cc
L4723c8:
        mov dword ptr [esp+0x24], edi
L4723cc:
        call FUN_006f49a0
        mov edx, dword ptr [g_7b958c]
        push edx
        call FUN_006f4950
        fld qword ptr [g_76e3e8]
        mov esi, dword ptr [esp+0x84]
        mov eax, dword ptr [esi+0x4]
        mov dword ptr [esp+0x28], eax
        fild dword ptr [esp+0x28]
        call FUN_0075db86
        fmul dword ptr [esi+0x10]
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [g_76b2ec]
        add esp, 0x8
        call FUN_0075db4a
        lea ecx, [eax+eax*2]
        cmp ecx, 0x100
        mov dword ptr [esp+0x14], eax
        jl L472428
        mov dword ptr [esp+0x14], 0x55
L472428:
        mov dword ptr [esp+0x20], edi
L47242c:
        xor esi, esi
        push 0x88
        mov dword ptr [g_7da5f0], esi
        call FUN_004084d0
        add esp, 0x4
        cmp eax, esi
        jz L472455
        mov edx, dword ptr [g_7d9984]
        push edx
        mov ecx, eax
        call FUN_0046fbc0
        jmp L472457
L472455:
        xor eax, eax
L472457:
        mov ebx, dword ptr [eax+0xc]
        mov ebp, dword ptr [esp+0x14]
        mov dword ptr [esp+0x18], eax
        mov eax, dword ptr [ebx+0xc]
        cmp ebp, eax
        mov dword ptr [esp+0x38], ebx
        jz L4724c0
        cmp ebp, esi
        jbe L4724ae
        push ebp
        call FUN_004084d0
        mov esi, dword ptr [ebx+0x8]
        add esp, 0x4
        test esi, esi
        mov edi, eax
        jz L4724a9
        mov eax, dword ptr [ebx+0xc]
        cmp ebp, eax
        jnc L47248c
        mov eax, ebp
L47248c:
        mov ecx, eax
        dec eax
        test ecx, ecx
        jz L4724a0
L472493:
        mov dl, byte ptr [esi+eax*1]
        mov ecx, eax
        mov byte ptr [eax+edi*1], dl
        dec eax
        test ecx, ecx
        jnz L472493
L4724a0:
        push esi
        call FUN_004084e0
        add esp, 0x4
L4724a9:
        mov dword ptr [ebx+0x8], edi
        jmp L4724bd
L4724ae:
        mov edx, dword ptr [ebx+0x8]
        push edx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [ebx+0x8], esi
L4724bd:
        mov dword ptr [ebx+0xc], ebp
L4724c0:
        test ebp, ebp
        jle L4724dc
        mov edi, dword ptr [ebx+0x8]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 0x2
        mov eax, 0x3030303
        rep stosd
        mov ecx, edx
        and ecx, 0x3
        rep stosb
L4724dc:
        mov edi, dword ptr [ebx+0x14]
        lea esi, [ebp+ebp*2]
        cmp esi, edi
        mov dword ptr [esp+0x1c], esi
        jz L472585
        test esi, esi
        jbe L47256f
        lea eax, [esi+esi*2]
        shl eax, 0x2
        push eax
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L472513
        lea ecx, [esi-1]
        mov dword ptr [esp+0x34], ecx
        mov dword ptr [esp+0x10], eax
        jmp L47251b
L472513:
        mov dword ptr [esp+0x10], 0x0
L47251b:
        mov eax, dword ptr [ebx+0x10]
        test eax, eax
        jz L472566
        cmp esi, edi
        jnc L472528
        mov edi, esi
L472528:
        mov edx, edi
        dec edi
        test edx, edx
        jz L472556
        mov eax, dword ptr [esp+0x10]
        mov ebp, dword ptr [ebx+0x10]
        lea ecx, [edi+edi*2]
        sub ebp, eax
        lea esi, [eax+ecx*4]
        inc edi
L47253f:
        lea edx, [esi+ebp*1]
        push edx
        mov ecx, esi
        call FUN_0040ccd0
        dec edi
        sub esi, 0xc
        test edi, edi
        ja L47253f
        mov esi, dword ptr [esp+0x1c]
L472556:
        mov eax, dword ptr [ebx+0x10]
        push eax
        call FUN_004084e0
        mov ebp, dword ptr [esp+0x18]
        add esp, 0x4
L472566:
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [ebx+0x10], eax
        jmp L472582
L47256f:
        mov ecx, dword ptr [ebx+0x10]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [ebx+0x10], 0x0
L472582:
        mov dword ptr [ebx+0x14], esi
L472585:
        cmp esi, dword ptr [ebx+0x4]
        jz L4725e1
        test esi, esi
        jbe L4725c9
        push esi
        call FUN_004084d0
        mov edi, dword ptr [ebx]
        add esp, 0x4
        test edi, edi
        mov ebp, eax
        jz L4725c5
        mov eax, dword ptr [ebx+0x4]
        cmp esi, eax
        jnc L4725a8
        mov eax, esi
L4725a8:
        mov edx, eax
        dec eax
        test edx, edx
        jz L4725bc
L4725af:
        mov cl, byte ptr [edi+eax*1]
        mov edx, eax
        mov byte ptr [eax+ebp*1], cl
        dec eax
        test edx, edx
        jnz L4725af
L4725bc:
        push edi
        call FUN_004084e0
        add esp, 0x4
L4725c5:
        mov dword ptr [ebx], ebp
        jmp L4725da
L4725c9:
        mov eax, dword ptr [ebx]
        push eax
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [ebx], 0x0
L4725da:
        mov ebp, dword ptr [esp+0x14]
        mov dword ptr [ebx+0x4], esi
L4725e1:
        mov eax, dword ptr [ebx+0x1c]
        lea esi, [ebp+ebp*2]
        shl esi, 0x1
        cmp esi, eax
        jz L472673
        test esi, esi
        jbe L47265d
        /* __emit: no-base SIB form LEA ECX,[ESI*8+0] (8D 0C F5) not encodable in MSVC6 inline asm */
        __emit 0x8D
        __emit 0x0C
        __emit 0xF5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push ecx
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L472615
        lea edx, [esi-1]
        mov dword ptr [esp+0x34], edx
        mov edi, eax
        jmp L472617
L472615:
        xor edi, edi
L472617:
        mov ecx, dword ptr [ebx+0x18]
        test ecx, ecx
        jz L472658
        mov edx, dword ptr [ebx+0x1c]
        cmp esi, edx
        jnc L472627
        mov edx, esi
L472627:
        mov eax, edx
        dec edx
        test eax, eax
        jz L47264c
        lea eax, [edi+edx*8]
        sub ecx, edi
        inc edx
L472634:
        mov ebp, dword ptr [ecx+eax*1]
        mov dword ptr [eax], ebp
        mov ebp, dword ptr [ecx+eax*1+0x4]
        mov dword ptr [eax+0x4], ebp
        dec edx
        sub eax, 0x8
        test edx, edx
        ja L472634
        mov ebp, dword ptr [esp+0x14]
L47264c:
        mov eax, dword ptr [ebx+0x18]
        push eax
        call FUN_004084e0
        add esp, 0x4
L472658:
        mov dword ptr [ebx+0x18], edi
        jmp L472670
L47265d:
        mov ecx, dword ptr [ebx+0x18]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [ebx+0x18], 0x0
L472670:
        mov dword ptr [ebx+0x1c], esi
L472673:
        mov eax, dword ptr [esp+0x20]
        lea edx, [eax+eax*2]
        lea ecx, [esp+0x60]
        /* __emit: no-base SIB form LEA EDX,[EDX*4+0x7b2314] (8D 14 95) not encodable in MSVC6 inline asm */
        __emit 0x8D
        __emit 0x14
        __emit 0x95
        __emit 0x14
        __emit 0x23
        __emit 0x7B
        __emit 0x00
        mov esi, 0x3
L47268a:
        mov eax, dword ptr [edx]
        lea eax, [eax+eax*2]
        shl eax, 0x2
        mov edi, dword ptr [eax+g_7b2284]
        mov dword ptr [ecx-0x4], edi
        mov edi, dword ptr [eax+g_7b2284+0x4]
        mov eax, dword ptr [eax+g_7b2284+0x8]
        mov dword ptr [ecx], edi
        mov dword ptr [ecx+0x4], eax
        add edx, 0x4
        add ecx, 0xc
        dec esi
        jnz L47268a
        mov esi, dword ptr [esp+0x84]
        mov ecx, dword ptr [esi+0xc]
        mov edx, dword ptr [esp+0x28]
        push ecx
        push ebp
        push edx
        lea eax, [esp+0x80]
        push eax
        mov eax, dword ptr [ebx+0x10]
        lea ecx, [esp+0x78]
        push ecx
        lea edx, [esp+0x70]
        push edx
        push eax
        call FUN_0047f1b0
        mov ecx, dword ptr [esp+0x34]
        mov eax, dword ptr [ebx+0x8]
        mov edx, dword ptr [ecx]
        add esp, 0x1c
        push 0x1
        push ebp
        push eax
        call dword ptr [edx+0xc]
        cmp byte ptr [esi+0x8], 0x1
        jnz L472825
        mov edi, dword ptr [esp+0x1c]
        lea ecx, [edi+edi*2]
        shl ecx, 0x2
        push ecx
        mov ebp, 0x1
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L472727
        lea edx, [edi-1]
        mov dword ptr [esp+0x34], edx
        mov dword ptr [esp+0x10], eax
        jmp L47272f
L472727:
        mov dword ptr [esp+0x10], 0x0
L47272f:
        mov esi, dword ptr [ebx+0x10]
        mov ecx, dword ptr [esp+0x10]
        push esi
        call FUN_0040c410
        cmp edi, 0x1
        mov ebx, dword ptr [ebx]
        mov dword ptr [esp+0x34], ebx
        mov byte ptr [ebx], 0x0
        mov dword ptr [esp+0x30], 0x1
        jle L4727c4
        mov eax, dword ptr [esp+0x10]
        add eax, 0xc
        mov dword ptr [esp+0x2c], eax
        add esi, 0xc
        xor ebx, ebx
L472762:
        test ebp, ebp
        jle L472787
        mov edi, dword ptr [esp+0x10]
L47276a:
        mov ecx, dword ptr [g_7b220c]
        push ecx
        push edi
        push esi
        call FUN_0041c540
        add esp, 0xc
        test al, al
        jnz L472787
        inc ebx
        add edi, 0xc
        cmp ebx, ebp
        jl L47276a
L472787:
        cmp ebx, ebp
        jnz L4727a9
        mov ecx, dword ptr [esp+0x2c]
        mov edx, dword ptr [esi]
        mov eax, ecx
        inc ebp
        add ecx, 0xc
        mov dword ptr [esp+0x2c], ecx
        mov ecx, dword ptr [esi+0x4]
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi+0x8]
        mov dword ptr [eax+0x4], ecx
        mov dword ptr [eax+0x8], edx
L4727a9:
        mov eax, dword ptr [esp+0x30]
        mov ecx, dword ptr [esp+0x34]
        mov byte ptr [ecx+eax*1], bl
        mov ecx, dword ptr [esp+0x1c]
        inc eax
        add esi, 0xc
        cmp eax, ecx
        mov dword ptr [esp+0x30], eax
        /* __emit: MSVC6 miscomputes this backward JL rel8 (emits 7C 9E, ref 7C 9C) */
        __emit 0x7C
        __emit 0x9C
L4727c4:
        mov ebx, dword ptr [esp+0x38]
        lea esi, [ebx+0x10]
        push ebp
        mov ecx, esi
        call FUN_0040c2e0
        mov eax, dword ptr [esi+0x4]
        test eax, eax
        jbe L4727ff
        mov esi, dword ptr [esi]
        mov edi, dword ptr [esp+0x10]
        sub edi, esi
        mov dword ptr [esp+0x30], eax
L4727e6:
        lea edx, [edi+esi*1]
        push edx
        mov ecx, esi
        call FUN_0040c410
        mov eax, dword ptr [esp+0x30]
        add esi, 0xc
        dec eax
        mov dword ptr [esp+0x30], eax
        jnz L4727e6
L4727ff:
        mov ecx, dword ptr [ebx+0x10]
        mov esi, dword ptr [esp+0x18]
        mov eax, dword ptr [esi]
        push ebp
        push ecx
        mov ecx, esi
        call dword ptr [eax+0x24]
        mov edx, dword ptr [esp+0x10]
        push edx
        call FUN_004084e0
        mov edi, dword ptr [esp+0x8c]
        add esp, 0x4
        jmp L472852
L472825:
        mov ebp, dword ptr [esp+0x1c]
        xor eax, eax
        test ebp, ebp
        jle L472839
L47282f:
        mov ecx, dword ptr [ebx]
        mov byte ptr [ecx+eax*1], al
        inc eax
        cmp eax, ebp
        /* __emit: MSVC6 miscomputes this backward JL rel8 (emits 7C F6, ref 7C F8) */
        __emit 0x7C
        __emit 0xF8
L472839:
        mov ecx, dword ptr [esp+0x18]
        mov edx, dword ptr [ebx+0x10]
        mov eax, dword ptr [ecx]
        push ebp
        push edx
        call dword ptr [eax+0x24]
        mov edi, dword ptr [esp+0x88]
        mov esi, dword ptr [esp+0x18]
L472852:
        mov ecx, dword ptr [esp+0x1c]
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr [eax+0x88]
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax+0x94]
        test edi, edi
        jnz L47289b
        lea ecx, [ebp+ebp*1]
        test ecx, ecx
        jle L47296c
        mov eax, dword ptr [ebx+0x18]
        mov dword ptr [esp+0x3c], edi
        mov dword ptr [esp+0x40], edi
        mov edx, edi
L47288b:
        mov dword ptr [eax], edx
        mov dword ptr [eax+0x4], edi
        add eax, 0x8
        dec ecx
        jnz L47288b
        jmp L47296c
L47289b:
        mov edx, dword ptr [esi]
        push 0x0
        push edi
        mov ecx, esi
        call dword ptr [edx+0x14]
        test dword ptr [edi], 0x3fff
        jbe L47293e
        test ebp, ebp
        jle L47296c
        mov ecx, dword ptr [ebx+0x18]
        mov eax, dword ptr [ebx+0x10]
        lea edx, [ecx+ebp*8]
        mov dword ptr [esp+0x30], ebp
L4728c6:
        fld dword ptr [eax]
        add ecx, 0x8
        fadd dword ptr [g_76d064]
        add edx, 0x8
        add eax, 0xc
        fmul dword ptr [g_76d070]
        fstp dword ptr [esp+0x44]
        fld dword ptr [eax-0x8]
        mov edi, dword ptr [esp+0x44]
        fadd dword ptr [g_76d064]
        mov dword ptr [ecx-0x8], edi
        fmul dword ptr [g_76d070]
        fstp dword ptr [esp+0x48]
        fld dword ptr [eax-0xc]
        mov edi, dword ptr [esp+0x48]
        fadd dword ptr [g_76d064]
        mov dword ptr [ecx-0x4], edi
        fmul dword ptr [g_76d070]
        fstp dword ptr [esp+0x4c]
        fld dword ptr [eax-0x4]
        mov edi, dword ptr [esp+0x4c]
        fadd dword ptr [g_76d064]
        mov dword ptr [edx-0x8], edi
        fmul dword ptr [g_76d070]
        fstp dword ptr [esp+0x50]
        mov edi, dword ptr [esp+0x50]
        mov dword ptr [edx-0x4], edi
        dec dword ptr [esp+0x30]
        jnz L4728c6
        jmp L47296c
L47293e:
        lea ecx, [ebp+ebp*1]
        test ecx, ecx
        jle L47296c
        mov eax, dword ptr [ebx+0x18]
        mov dword ptr [esp+0x54], 0x0
        mov edx, dword ptr [esp+0x54]
        mov dword ptr [esp+0x58], 0x0
        mov edi, dword ptr [esp+0x58]
L472961:
        mov dword ptr [eax], edx
        mov dword ptr [eax+0x4], edi
        add eax, 0x8
        dec ecx
        jnz L472961
L47296c:
        mov edx, dword ptr [ebx+0x18]
        mov eax, dword ptr [esi]
        lea ecx, [ebp+ebp*1]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr [eax+0x2c]
        mov ecx, dword ptr [esp+0x8c]
        mov eax, dword ptr [esi]
        push 0x0
        push ecx
        mov ecx, esi
        call dword ptr [eax+0x14]
        mov ecx, dword ptr [esp+0x24]
        push esi
        call FUN_00487ce0
        dec word ptr [esi+0x8]
        cmp word ptr [esi+0x8], 0x0
        jnz L4729ae
        test esi, esi
        jz L4729ae
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx]
L4729ae:
        mov eax, dword ptr [esp+0x20]
        inc eax
        cmp eax, 0x14
        mov dword ptr [esp+0x20], eax
        jl L47242c
        call FUN_006f49a0
        mov eax, dword ptr [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x70
        ret
    }
}
