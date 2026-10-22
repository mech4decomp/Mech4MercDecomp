/* FUN_00479b10 - MLR render/build (2040 B, __cdecl, 2 args) */

extern int g_7b9590;
extern int g_7da724;
extern int g_7d99b4;
extern double g_76e3e8;
extern int *g_76b2ec;   /* IAT */
extern int g_7da5f0;
extern int g_7d99b0;
extern int g_7b2314;
extern int g_7b2284;
extern int g_7b2288;
extern int g_7b228c;
extern int g_7b220c;
extern float g_76d064;
extern float g_76d070;
extern float g_76f388;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_00487ce0(void);
extern void __cdecl FUN_004766c0(void);

__declspec(naked) void func_00479b10(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x8c
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
        jz L479b4c
        mov ecx, dword ptr [g_7da724]
        push ecx
        push 0x14
        mov ecx, eax
        call FUN_00487830
        mov dword ptr [ebp-0x2c], eax
        jmp L479b4f
L479b4c:
        mov dword ptr [ebp-0x2c], edi
L479b4f:
        call FUN_006f49a0
        mov edx, dword ptr [g_7d99b4]
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
        mov dword ptr [ebp-0x24], eax
        lea eax, [eax+eax*2]
        cmp eax, 0x100
        jl L479b9c
        mov dword ptr [ebp-0x24], 0x55
L479b9c:
        mov dword ptr [ebp-0x28], edi
L479b9f:
        xor edi, edi
        push 0x70
        mov dword ptr [g_7da5f0], edi
        call FUN_004084d0
        add esp, 0x4
        cmp eax, edi
        jz L479bc8
        mov ecx, dword ptr [g_7d99b0]
        push ecx
        mov ecx, eax
        call FUN_004766c0
        mov dword ptr [ebp-0x18], eax
        jmp L479bcb
L479bc8:
        mov dword ptr [ebp-0x18], edi
L479bcb:
        mov edx, dword ptr [ebp-0x18]
        mov ebx, dword ptr [edx+0xc]
        mov eax, dword ptr [ebx+0xc]
        mov esi, dword ptr [ebp-0x24]
        cmp esi, eax
        mov dword ptr [ebp-0x8], ebx
        jz L479c3a
        cmp esi, edi
        jbe L479c26
        push esi
        call FUN_004084d0
        mov edi, dword ptr [ebx+0x8]
        add esp, 0x4
        test edi, edi
        mov dword ptr [ebp-0x4], eax
        jz L479c1e
        mov eax, dword ptr [ebx+0xc]
        cmp esi, eax
        jnc L479bfe
        mov eax, esi
L479bfe:
        mov ecx, eax
        dec eax
        test ecx, ecx
        jz L479c15
L479c08:
        mov ecx, dword ptr [ebp-0x4]
        mov dl, byte ptr [edi+eax]
        mov byte ptr [eax+ecx], dl
        mov edx, eax
        dec eax
        test edx, edx
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-3) when a call-reloc follows; ref 75 F3 */
        __emit 0xF3
L479c15:
        push edi
        call FUN_004084e0
        add esp, 0x4
L479c1e:
        mov eax, dword ptr [ebp-0x4]
        mov dword ptr [ebx+0x8], eax
        jmp L479c35
L479c26:
        mov ecx, dword ptr [ebx+0x8]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [ebx+0x8], edi
L479c35:
        mov dword ptr [ebx+0xc], esi
        xor edi, edi
L479c3a:
        cmp esi, edi
        jle L479c56
        mov edi, dword ptr [ebx+0x8]
        mov ecx, esi
        mov edx, ecx
        shr ecx, 0x2
        mov eax, 0x3030303
        rep stosd
        mov ecx, edx
        and ecx, 0x3
        rep stosb
L479c56:
        mov eax, dword ptr [ebx+0x14]
        lea edi, [ebx+0x10]
        lea esi, [esi+esi*2]
        cmp esi, eax
        mov dword ptr [ebp-0xc], edi
        jz L479cff
        test esi, esi
        jbe L479ceb
        lea eax, [esi+esi*2]
        shl eax, 0x2
        push eax
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L479c8c
        lea ecx, [esi-1]
        mov dword ptr [ebp-0x1c], ecx
        mov dword ptr [ebp-0x14], eax
        jmp L479c93
L479c8c:
        mov dword ptr [ebp-0x14], 0x0
L479c93:
        cmp dword ptr [edi], 0x0
        jz L479ce4
        mov eax, dword ptr [edi+0x4]
        cmp esi, eax
        jnc L479ca1
        mov eax, esi
L479ca1:
        mov edx, eax
        dec eax
        test edx, edx
        jz L479cd9
        mov edx, dword ptr [ebp-0x14]
        lea ecx, [eax+eax*2]
        lea edi, [edx+ecx*4]
        mov ecx, dword ptr [ebp-0xc]
        mov ecx, dword ptr [ecx]
        sub ecx, edx
        mov dword ptr [ebp-0x10], ecx
        lea ebx, [eax+1]
L479cbe:
        mov edx, dword ptr [ebp-0x10]
        add edx, edi
        push edx
        mov ecx, edi
        call FUN_0040ccd0
        dec ebx
        sub edi, 0xc
        test ebx, ebx
        ja L479cbe
        mov edi, dword ptr [ebp-0xc]
        mov ebx, dword ptr [ebp-0x8]
L479cd9:
        mov eax, dword ptr [edi]
        push eax
        call FUN_004084e0
        add esp, 0x4
L479ce4:
        mov eax, dword ptr [ebp-0x14]
        mov dword ptr [edi], eax
        jmp L479cfc
L479ceb:
        mov ecx, dword ptr [edi]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [edi], 0x0
L479cfc:
        mov dword ptr [edi+0x4], esi
L479cff:
        cmp esi, dword ptr [ebx+0x4]
        jz L479d5e
        test esi, esi
        jbe L479d4a
        push esi
        call FUN_004084d0
        mov edi, dword ptr [ebx]
        add esp, 0x4
        test edi, edi
        mov dword ptr [ebp-0x4], eax
        jz L479d43
        mov eax, dword ptr [ebx+0x4]
        cmp esi, eax
        jnc L479d23
        mov eax, esi
L479d23:
        mov edx, eax
        dec eax
        test edx, edx
        jz L479d3a
L479d2d:
        mov ecx, dword ptr [ebp-0x4]
        mov dl, byte ptr [edi+eax]
        mov byte ptr [eax+ecx], dl
        mov edx, eax
        dec eax
        test edx, edx
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-3) when a call-reloc follows; ref 75 F3 */
        __emit 0xF3
L479d3a:
        push edi
        call FUN_004084e0
        add esp, 0x4
L479d43:
        mov eax, dword ptr [ebp-0x4]
        mov dword ptr [ebx], eax
        jmp L479d5b
L479d4a:
        mov ecx, dword ptr [ebx]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [ebx], 0x0
L479d5b:
        mov dword ptr [ebx+0x4], esi
L479d5e:
        cmp esi, dword ptr [ebx+0x1c]
        jz L479df1
        test esi, esi
        jbe L479ddb
        lea edx, [esi*8+0]
        push edx
        call FUN_004084d0
        mov edi, eax
        add esp, 0x4
        test edi, edi
        jz L479d91
        push 0x423b70
        push esi
        push 0x8
        push edi
        call FUN_00406c90
        jmp L479d93
L479d91:
        xor edi, edi
L479d93:
        mov ecx, dword ptr [ebx+0x18]
        test ecx, ecx
        mov dword ptr [ebp-0x4], edi
        jz L479dd6
        mov edx, dword ptr [ebx+0x1c]
        cmp esi, edx
        jnc L479da6
        mov edx, esi
L479da6:
        mov eax, edx
        dec edx
        test eax, eax
        jz L479dca
        lea eax, [edi+edx*8]
        sub ecx, edi
        inc edx
L479db3:
        mov edi, dword ptr [ecx+eax]
        mov dword ptr [eax], edi
        mov edi, dword ptr [ecx+eax+0x4]
        mov dword ptr [eax+0x4], edi
        dec edx
        sub eax, 0x8
        test edx, edx
        ja L479db3
        mov edi, dword ptr [ebp-0x4]
L479dca:
        mov eax, dword ptr [ebx+0x18]
        push eax
        call FUN_004084e0
        add esp, 0x4
L479dd6:
        mov dword ptr [ebx+0x18], edi
        jmp L479dee
L479ddb:
        mov ecx, dword ptr [ebx+0x18]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [ebx+0x18], 0x0
L479dee:
        mov dword ptr [ebx+0x1c], esi
L479df1:
        cmp esi, dword ptr [ebx+0x24]
        jz L479e63
        test esi, esi
        jbe L479e4d
        lea edx, [esi*4+0]
        push edx
        call FUN_004084d0
        mov edx, dword ptr [ebx+0x20]
        add esp, 0x4
        test edx, edx
        mov edi, eax
        mov dword ptr [ebp-0x10], edi
        jz L479e48
        mov ecx, dword ptr [ebx+0x24]
        cmp esi, ecx
        jnc L479e1f
        mov ecx, esi
L479e1f:
        mov eax, ecx
        dec ecx
        test eax, eax
        jz L479e3c
        lea eax, [edi+ecx*4]
        sub edx, edi
        inc ecx
L479e2c:
        mov edi, dword ptr [edx+eax]
        mov dword ptr [eax], edi
        dec ecx
        sub eax, 0x4
        test ecx, ecx
        ja L479e2c
        mov edi, dword ptr [ebp-0x10]
L479e3c:
        mov eax, dword ptr [ebx+0x20]
        push eax
        call FUN_004084e0
        add esp, 0x4
L479e48:
        mov dword ptr [ebx+0x20], edi
        jmp L479e60
L479e4d:
        mov ecx, dword ptr [ebx+0x20]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [ebx+0x20], 0x0
L479e60:
        mov dword ptr [ebx+0x24], esi
L479e63:
        mov eax, dword ptr [ebp-0x28]
        lea edx, [eax+eax*2]
        lea ecx, [ebp-0x88]
        lea edx, [edx*4+g_7b2314]
        mov edi, 0x3
L479e7b:
        mov eax, dword ptr [edx]
        lea eax, [eax+eax*2]
        shl eax, 0x2
        mov ebx, dword ptr [eax+g_7b2284]
        mov dword ptr [ecx-0x4], ebx
        mov ebx, dword ptr [eax+g_7b2288]
        mov eax, dword ptr [eax+g_7b228c]
        mov dword ptr [ecx], ebx
        mov dword ptr [ecx+0x4], eax
        add edx, 0x4
        add ecx, 0xc
        dec edi
        jnz L479e7b
        mov edi, dword ptr [ebp+0x8]
        mov ecx, dword ptr [edi+0xc]
        mov edx, dword ptr [ebp-0x24]
        mov eax, dword ptr [edi+0x4]
        push ecx
        push edx
        push eax
        lea ecx, [ebp-0x74]
        push ecx
        mov ecx, dword ptr [ebp-0xc]
        lea edx, [ebp-0x80]
        push edx
        mov edx, dword ptr [ecx]
        lea eax, [ebp-0x8c]
        push eax
        push edx
        call FUN_0047f1b0
        mov ecx, dword ptr [ebp-0x24]
        mov edx, dword ptr [ebp-0x8]
        mov ebx, dword ptr [ebp-0x18]
        mov eax, dword ptr [ebx]
        add esp, 0x1c
        push 0x1
        push ecx
        mov ecx, dword ptr [edx+0x8]
        push ecx
        mov ecx, ebx
        call dword ptr [eax+0xc]
        cmp byte ptr [edi+0x8], 0x1
        jnz L47a011
        lea edx, [esi+esi*2]
        shl edx, 0x2
        push edx
        mov edi, 0x1
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L479f16
        lea ecx, [esi-1]
        mov dword ptr [ebp-0x1c], ecx
        mov dword ptr [ebp-0x20], eax
        jmp L479f1d
L479f16:
        mov dword ptr [ebp-0x20], 0x0
L479f1d:
        mov edx, dword ptr [ebp-0xc]
        mov ebx, dword ptr [edx]
        mov ecx, dword ptr [ebp-0x20]
        push ebx
        call FUN_0040c410
        cmp esi, 0x1
        mov eax, dword ptr [ebp-0x8]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp-0x1c], eax
        mov byte ptr [eax], 0x0
        mov dword ptr [ebp-0x10], 0x1
        jle L479fb8
        mov ecx, dword ptr [ebp-0x20]
        add ebx, 0xc
        add ecx, 0xc
        mov dword ptr [ebp-0x14], ebx
        mov dword ptr [ebp-0x30], ecx
L479f51:
        xor ebx, ebx
        test edi, edi
        jle L479f85
        mov edx, dword ptr [ebp-0x20]
        mov dword ptr [ebp-0x4], edx
L479f5d:
        mov eax, dword ptr [g_7b220c]
        mov ecx, dword ptr [ebp-0x4]
        mov edx, dword ptr [ebp-0x14]
        push eax
        push ecx
        push edx
        call FUN_0041c540
        add esp, 0xc
        test al, al
        jnz L479f85
        mov ecx, dword ptr [ebp-0x4]
        inc ebx
        add ecx, 0xc
        cmp ebx, edi
        mov dword ptr [ebp-0x4], ecx
        jl L479f5d
L479f85:
        cmp ebx, edi
        jnz L479f9e
        mov eax, dword ptr [ebp-0x30]
        mov ecx, eax
        add eax, 0xc
        mov dword ptr [ebp-0x30], eax
        mov eax, dword ptr [ebp-0x14]
        push eax
        inc edi
        call FUN_0040c410
L479f9e:
        mov eax, dword ptr [ebp-0x10]
        mov ecx, dword ptr [ebp-0x1c]
        mov edx, dword ptr [ebp-0x14]
        mov byte ptr [ecx+eax], bl
        inc eax
        add edx, 0xc
        cmp eax, esi
        mov dword ptr [ebp-0x10], eax
        mov dword ptr [ebp-0x14], edx
        jl L479f51
L479fb8:
        mov ebx, dword ptr [ebp-0xc]
        push edi
        mov ecx, ebx
        call FUN_0040c2e0
        mov eax, dword ptr [ebx+0x4]
        test eax, eax
        jbe L479ff2
        mov ecx, dword ptr [ebp-0x20]
        mov edx, ebx
L479fd9:
        mov ebx, dword ptr [edx]
        sub ecx, ebx
        mov dword ptr [ebp-0x1c], ecx
        mov dword ptr [ebp-0x10], eax
        mov eax, dword ptr [ebp-0x1c]
        add eax, ebx
        push eax
        mov ecx, ebx
        call FUN_0040c410
        mov eax, dword ptr [ebp-0x10]
        add ebx, 0xc
        dec eax
        mov dword ptr [ebp-0x10], eax
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-10) when a call-reloc sits in the loop; ref 75 E7 */
        __emit 0xE7
L479ff2:
        mov eax, dword ptr [ebp-0xc]
        mov ecx, dword ptr [eax]
        mov ebx, dword ptr [ebp-0x18]
        mov edx, dword ptr [ebx]
        push edi
        push ecx
        mov ecx, ebx
        call dword ptr [edx+0x24]
        mov edx, dword ptr [ebp-0x20]
        push edx
        call FUN_004084e0
        add esp, 0x4
        jmp L47a037
L47a011:
        xor eax, eax
        test esi, esi
        mov edi, esi
        jle L47a026
        mov ecx, dword ptr [ebp-0x8]
        mov ecx, dword ptr [ecx]
L47a01e:
        mov byte ptr [ecx+eax], al
        inc eax
        cmp eax, esi
        jl L47a01e
L47a026:
        mov eax, dword ptr [ebp-0xc]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebx]
        push esi
        push ecx
        mov ecx, ebx
        call dword ptr [edx+0x24]
        mov ebx, dword ptr [ebp-0x18]
L47a037:
        mov eax, dword ptr [ebp-0x8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebx]
        push esi
        push ecx
        mov ecx, ebx
        call dword ptr [edx+0x88]
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [edx+0x94]
        mov esi, dword ptr [ebp+0xc]
        test esi, esi
        jnz L47a081
        test edi, edi
        jle L47a14c
        mov eax, dword ptr [ebp-0x8]
        mov eax, dword ptr [eax+0x18]
        mov dword ptr [ebp-0x58], esi
        mov dword ptr [ebp-0x54], esi
        mov ecx, edi
        mov edx, esi
L47a071:
        mov dword ptr [eax], edx
        mov dword ptr [eax+0x4], esi
        add eax, 0x8
        dec ecx
        jnz L47a071
        jmp L47a14c
L47a081:
        mov edx, dword ptr [ebx]
        push 0x0
        push esi
        mov ecx, ebx
        call dword ptr [edx+0x14]
        test dword ptr [esi], 0x3fff
        jbe L47a121
        test edi, edi
        jle L47a14c
        mov eax, dword ptr [ebp-0x8]
        mov edx, dword ptr [eax+0x18]
        mov ecx, dword ptr [ebp-0xc]
        mov eax, dword ptr [ecx]
        mov ecx, edx
        lea edx, [edx+edi*8]
        mov esi, edi
L47a0b1:
        fld dword ptr [eax]
        add ecx, 0x8
        fadd dword ptr [g_76d064]
        add edx, 0x8
        add eax, 0xc
        dec esi
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x3c]
        fld dword ptr [eax-0x8]
        mov ebx, dword ptr [ebp-0x3c]
        fadd dword ptr [g_76d064]
        mov dword ptr [ecx-0x8], ebx
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x38]
        fld dword ptr [eax-0xc]
        mov ebx, dword ptr [ebp-0x38]
        fadd dword ptr [g_76d064]
        mov dword ptr [ecx-0x4], ebx
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x44]
        fld dword ptr [eax-0x4]
        mov ebx, dword ptr [ebp-0x44]
        fadd dword ptr [g_76d064]
        mov dword ptr [edx-0x8], ebx
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x40]
        mov ebx, dword ptr [ebp-0x40]
        mov dword ptr [edx-0x4], ebx
        jnz L47a0b1
        mov ebx, dword ptr [ebp-0x18]
        jmp L47a14c
L47a121:
        test edi, edi
        jle L47a14c
        mov edx, dword ptr [ebp-0x8]
        mov eax, dword ptr [edx+0x18]
        mov dword ptr [ebp-0x4c], 0x0
        mov edx, dword ptr [ebp-0x4c]
        mov dword ptr [ebp-0x48], 0x0
        mov esi, dword ptr [ebp-0x48]
        mov ecx, edi
L47a141:
        mov dword ptr [eax], edx
        mov dword ptr [eax+0x4], esi
        add eax, 0x8
        dec ecx
        jnz L47a141
L47a14c:
        mov ecx, dword ptr [ebp-0x8]
        mov edx, dword ptr [ecx+0x18]
        mov eax, dword ptr [ebx]
        push edi
        push edx
        mov ecx, ebx
        call dword ptr [eax+0x2c]
        xor edx, edx
        test edi, edi
        jle L47a2b4
        lea eax, [ebp-0x68]
        mov dword ptr [ebp-0x1c], eax
        mov dword ptr [ebp-0x4], edx
L47a16e:
        mov ecx, dword ptr [ebp-0xc]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ebp-0x4]
        fld dword ptr [eax+ecx+0x8]
        add eax, ecx
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fld dword ptr [eax+0x4]
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fld dword ptr [eax]
        mov dword ptr [ebp-0x5c], 0x3f800000
        fadd dword ptr [g_76d064]
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp-0x68]
        fstp dword ptr [ebp-0x64]
        fstp dword ptr [ebp-0x60]
        fld dword ptr [g_76f388]
        mov esi, dword ptr [ebp-0x1c]
        fld dword ptr [esi+0xc]
        mov ecx, dword ptr [esi+0xc]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp-0x50]
        xor ecx, ecx
        mov ebx, dword ptr [ebp-0x50]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov dword ptr [ebp-0x34], ebx
        fld dword ptr [esi]
        mov ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp-0x50]
        xor ecx, ecx
        mov ebx, dword ptr [ebp-0x50]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp-0x34]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp-0x34], ecx
        fld dword ptr [esi+0x4]
        mov ecx, dword ptr [esi+0x4]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp-0x50]
        xor ecx, ecx
        mov ebx, dword ptr [ebp-0x50]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp-0x34]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp-0x34], ecx
        mov ecx, dword ptr [esi+0x8]
        fadd dword ptr [esi+0x8]
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp-0x50]
        xor ecx, ecx
        mov ebx, dword ptr [ebp-0x50]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp-0x34]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp-0x34], ecx
        mov eax, dword ptr [ebp-0x8]
        mov ecx, dword ptr [eax+0x20]
        mov eax, dword ptr [ebp-0x34]
        mov dword ptr [ecx+edx*4], eax
        mov ecx, dword ptr [ebp-0x4]
        inc edx
        add ecx, 0xc
        cmp edx, edi
        mov dword ptr [ebp-0x4], ecx
        jl L47a16e
L47a2b4:
        mov eax, dword ptr [ebp-0x8]
        mov ecx, dword ptr [eax+0x20]
        mov esi, dword ptr [ebp-0x18]
        mov edx, dword ptr [esi]
        push edi
        push ecx
        mov ecx, esi
        call dword ptr [edx+0xa4]
        mov ecx, dword ptr [ebp-0x2c]
        push esi
        call FUN_00487ce0
        dec word ptr [esi+0x8]
        cmp word ptr [esi+0x8], 0x0
        jnz L47a2e9
        test esi, esi
        jz L47a2e9
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx]
L47a2e9:
        mov eax, dword ptr [ebp-0x28]
        inc eax
        cmp eax, 0x14
        mov dword ptr [ebp-0x28], eax
        jl L479b9f
        call FUN_006f49a0
        mov eax, dword ptr [ebp-0x2c]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
