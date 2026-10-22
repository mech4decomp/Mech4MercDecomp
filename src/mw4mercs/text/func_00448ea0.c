/* MLR mesh FUN_00448ea0 (1342 bytes, __thiscall RET 0x14) */

extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_00448e50(void);
extern void __cdecl FUN_0043e0e0(void);
extern void __cdecl FUN_00421f00(void);

extern int   *g_7da848;   /* 0x007da848 */
extern int    g_7da864;   /* 0x007da864 */
extern char  **g_7da600;  /* 0x007da600 */
extern short *g_7da5f4;   /* 0x007da5f4 */
extern char   g_7da86c;   /* 0x007da86c */
extern int    g_7b2210;   /* 0x007b2210 */
extern float  g_76d064;   /* 0x0076d064 */
extern float  g_7da87c;   /* 0x007da87c */
extern float  g_7da874;   /* 0x007da874 */
extern float  g_7da878;   /* 0x007da878 */
extern float  g_7da870;   /* 0x007da870 */
extern char  **g_7d98fc;  /* 0x007d98fc */
extern float  g_76d070;   /* 0x0076d070 */
extern float  g_76dd60;   /* 0x0076dd60 */

__declspec(naked) void func_00448ea0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x24]
        and eax, 0x3fff
        push edi
        jz L_448f4c
        test eax, eax
        jle L_448f4c
        mov ecx, dword ptr [g_7da848]
        mov eax, dword ptr [ecx + eax*0x4 + 0x24]
        test eax, eax
        jz L_448f4c
        mov edx, dword ptr [eax]
        push 0x0
        mov ecx, eax
        call dword ptr [edx + 0x4]
        mov ecx, eax
        call FUN_00491cd0
        cmp eax, 0x100
        jl L_448ef1
        mov dword ptr [g_7da864], 0x1
        jmp L_448f4c
L_448ef1:
        cmp eax, 0x80
        jl L_448f04
        mov dword ptr [g_7da864], 0x2
        jmp L_448f4c
L_448f04:
        cmp eax, 0x40
        jl L_448f15
        mov dword ptr [g_7da864], 0x4
        jmp L_448f4c
L_448f15:
        cmp eax, 0x20
        jl L_448f26
        mov dword ptr [g_7da864], 0x8
        jmp L_448f4c
L_448f26:
        cmp eax, 0x10
        jl L_448f37
        mov dword ptr [g_7da864], 0x10
        jmp L_448f4c
L_448f37:
        xor ecx, ecx
        cmp eax, 0x8
        setl cl
        dec ecx
        and ecx, 0xffffffe0
        add ecx, 0x40
        mov dword ptr [g_7da864], ecx
L_448f4c:
        mov dl, byte ptr [ebp + 0x18]
        test dl, dl
        jz L_448f5b
        mov edi, dword ptr [ebp + 0xc]
        mov eax, dword ptr [edi + 0x38]
        jmp L_448f6d
L_448f5b:
        mov ecx, dword ptr [ebp + 0xc]
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x18]
        mov edi, dword ptr [ebp + 0xc]
        lea eax, [eax + eax*0x4]
        lea eax, [ecx + eax*0x8]
L_448f6d:
        mov dword ptr [ebx + 0xa4], eax
        mov eax, dword ptr [ebx + 0x18]
        cmp eax, 0x100
        mov dword ptr [ebp + -0xc], eax
        jle L_448f87
        mov dword ptr [ebp + -0xc], 0x100
L_448f87:
        test dl, dl
        jz L_448f90
        mov eax, dword ptr [edi + 0x30]
        jmp L_448f9a
L_448f90:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [edi + 0x10]
        shl eax, 0x5
        add eax, ecx
L_448f9a:
        test dl, dl
        mov dword ptr [ebx + 0x44], eax
        jz L_448fa6
        mov eax, dword ptr [edi + 0x38]
        jmp L_448fb2
L_448fa6:
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi + 0x18]
        lea eax, [eax + eax*0x4]
        lea eax, [ecx + eax*0x8]
L_448fb2:
        push esi
        xor esi, esi
        cmp word ptr [ebx + 0x56], si
        mov dword ptr [ebx + 0xa4], eax
        mov word ptr [ebx + 0xa], si
        jnz L_448fd2
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [edx + 0x98]
        mov dl, byte ptr [ebp + 0x18]
L_448fd2:
        cmp dword ptr [ebp + -0xc], esi
        mov dword ptr [ebp + -0x4], esi
        jle L_4491e3
        xor edi, edi
        mov dword ptr [ebp + -0x8], edi
L_448fe3:
        mov eax, dword ptr [g_7da600]
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + esi*0x1], 0x0
        jnz L_448ff8
        inc dword ptr [ebp + -0x4]
        jmp L_4491ce
L_448ff8:
        mov eax, dword ptr [ebp + -0x4]
        mov edx, esi
        sub edx, eax
        mov eax, dword ptr [g_7da5f4]
        lea ecx, [ebp + -0x14]
        push ecx
        mov dword ptr [eax + esi*0x2], edx
        lea edx, [ebp + -0x18]
        push edx
        push esi
        mov ecx, ebx
        call FUN_00448e50
        test byte ptr [g_7da86c], 0x2
        jle L_44916b
        mov eax, dword ptr [ebx + 0x28]
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x3C
        jz L_44916b
        cmp dword ptr [g_7b2210], 0x1
        jnz L_44916b
        mov ecx, dword ptr [ebx + 0x14]
        fld dword ptr [ebp + -0x18]
        fmul dword ptr [ebx + 0x9c]
        mov edx, dword ptr [ebx + 0xa4]
        mov eax, edi
        add eax, ecx
        mov dword ptr [ebp + -0x10], eax
        fstp dword ptr [ebp + -0x20]
        fld dword ptr [ebp + -0x14]
        xor eax, eax
        mov ax, word ptr [ebx + 0xa]
        fmul dword ptr [ebx + 0xa0]
        fstp dword ptr [ebp + -0x1c]
        lea ecx, [eax + eax*0x4]
        lea ecx, [edx + ecx*0x8]
        mov dword ptr [ebp + -0x8], ecx
        mov edx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebp + -0x10]
        fld dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [ebp + -0x8]
        fld dword ptr [edx + 0x34]
        fmul st(0), st(2)
        fld dword ptr [edx + 0x38]
        fmul st(0), st(2)
__emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xC9
        fadd dword ptr [edx + 0x3c]
        fld dword ptr [edx + 0x30]
        fmul st(0), st(5)
        __emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xCA
        faddp st(1), st(0)
        fld dword ptr [edx + 0x14]
        fmul st(0), st(4)
        __emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xCA
        faddp st(1), st(0)
        fld dword ptr [edx + 0x18]
        fmul st(0), st(3)
__emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xC9
        fstp dword ptr [eax + 0xc]
        fadd dword ptr [edx + 0x1c]
        fld dword ptr [edx + 0x10]
        fmul st(0), st(5)
        __emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xCA
        faddp st(1), st(0)
        fld dword ptr [edx + 0x24]
        fmul st(0), st(4)
        __emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xCA
        faddp st(1), st(0)
        fld dword ptr [edx + 0x28]
        fmul st(0), st(3)
__emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xC9
        fstp dword ptr [eax + 0x4]
        fadd dword ptr [edx + 0x2c]
        fld dword ptr [edx + 0x20]
        fmul st(0), st(5)
        __emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xCA
        faddp st(1), st(0)
        fld dword ptr [edx + 0x4]
        fmul st(0), st(4)
        __emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xCA
        faddp st(1), st(0)
        fld dword ptr [edx + 0x8]
        fmul st(0), st(3)
__emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xC9
        fstp dword ptr [eax + 0x8]
        fadd dword ptr [edx + 0xc]
        fld dword ptr [edx]
        fmul st(0), st(5)
        __emit 0xD9   /* __emit: MSVC6 does not support fxch in inline asm */
        __emit 0xCA
        faddp st(1), st(0)
        faddp st(1), st(0)
        fstp st(1)
        fstp st(1)
        fstp st(1)
        fstp dword ptr [eax]
        fld dword ptr [g_76d064]
        fdiv dword ptr [ecx + 0xc]
        fst dword ptr [ecx + 0xc]
        fld st(0)
        fmul dword ptr [ecx + 0x8]
        mov eax, dword ptr [ebp + -0x18]
        mov dword ptr [ecx + 0x18], eax
        mov edx, dword ptr [ebp + -0x14]
        mov eax, dword ptr [ebp + -0x20]
        mov dword ptr [ecx + 0x20], eax
        fstp dword ptr [ecx + 0x8]
        xor eax, eax
        mov ax, word ptr [ebx + 0xa]
        fld st(0)
        mov dword ptr [ecx + 0x1c], edx
        fmul dword ptr [ecx]
        mov edx, dword ptr [ebp + -0x1c]
        mov dword ptr [ecx + 0x24], edx
        mov edx, dword ptr [ebp + 0x14]
        fmul dword ptr [g_7da87c]
        lea eax, [eax + eax*0x4]
        fadd dword ptr [g_7da874]
        fstp dword ptr [ecx]
        fmul dword ptr [ecx + 0x4]
        fmul dword ptr [g_7da878]
        fadd dword ptr [g_7da870]
        fstp dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ebx + 0xa4]
        mov dword ptr [ecx + eax*0x8 + 0x10], edx
        jmp L_4491a3
L_44916b:
        mov ecx, dword ptr [ebx + 0x44]
        mov edx, dword ptr [ebp + 0x8]
        xor eax, eax
        mov ax, word ptr [ebx + 0xa]
        push edx
        mov edx, dword ptr [ebx + 0x14]
        shl eax, 0x5
        lea edi, [eax + ecx*0x1]
        mov eax, dword ptr [ebp + -0x8]
        add eax, edx
        push eax
        mov ecx, edi
        call FUN_0043e0e0
        mov ecx, dword ptr [ebp + -0x18]
        mov eax, dword ptr [ebp + 0x14]
        mov dword ptr [edi + 0x18], ecx
        mov edx, dword ptr [ebp + -0x14]
        mov dword ptr [edi + 0x1c], edx
        mov dword ptr [edi + 0x10], eax
        mov edi, dword ptr [ebp + -0x8]
L_4491a3:
        mov ecx, dword ptr [ebp + 0x10]
        test ecx, ecx
        jz L_4491c7
        mov eax, dword ptr [ebx + 0x14]
        mov edx, edi
        add edx, eax
        push edx
        call FUN_00421f00
        mov edx, dword ptr [ebx + 0x44]
        xor ecx, ecx
        mov cx, word ptr [ebx + 0xa]
        shl ecx, 0x5
        mov byte ptr [ecx + edx*0x1 + 0x17], al
L_4491c7:
        inc word ptr [ebx + 0xa]
        mov dl, byte ptr [ebp + 0x18]
L_4491ce:
        mov eax, dword ptr [ebp + -0xc]
        inc esi
        add edi, 0xc
        cmp esi, eax
        mov dword ptr [ebp + -0x8], edi
        jl L_448fe3
        mov edi, dword ptr [ebp + 0xc]
L_4491e3:
        cmp dword ptr [g_7b2210], 0x1
        jnz L_4493be
        test byte ptr [g_7da86c], 0x2
        jle L_4492d6
        mov eax, dword ptr [ebx + 0x28]
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x3C
        jz L_4492d6
        test dl, dl
        jnz L_4493d6
        mov ecx, dword ptr [edi + 0x4]
        xor eax, eax
        mov ax, word ptr [ebx + 0xa]
        add ecx, eax
        mov dword ptr [edi + 0x4], ecx
L_44921f:
        mov eax, dword ptr [edi + 0xc]
        mov ecx, dword ptr [edi + 0x28]
        lea eax, [ecx + eax*0x2]
L_449228:
        mov ecx, dword ptr [ebx + 0x58]
        xor edx, edx
        xor edi, edi
        cmp ecx, edx
        mov dword ptr [ebx + 0x50], eax
        mov word ptr [ebx + 0x54], di
        mov dword ptr [ebp + 0x14], edx
        mov dword ptr [ebp + 0x8], edx
        jle L_4492a6
        mov ecx, dword ptr [g_7d98fc]
        mov ecx, dword ptr [ecx]
        mov dword ptr [ebp + 0x10], ecx
        mov ecx, dword ptr [g_7da5f4]
        mov esi, dword ptr [ebp + 0x10]
L_449251:
        cmp byte ptr [esi + edx*0x1], 0x0
        jz L_449297
        mov edx, dword ptr [ebx + 0x48]
        mov esi, dword ptr [ebp + 0x8]
        add esi, edx
        xor edx, edx
        mov dl, byte ptr [esi]
        add eax, 0x2
        inc edi
        add eax, 0x2
        mov dx, word ptr [ecx + edx*0x2]
        mov word ptr [eax + -0x4], dx
        xor edx, edx
        mov dl, byte ptr [esi + 0x2]
        inc edi
        mov dx, word ptr [ecx + edx*0x2]
        mov word ptr [eax + -0x2], dx
        xor edx, edx
        mov dl, byte ptr [esi + 0x1]
        inc edi
        add eax, 0x2
        mov dx, word ptr [ecx + edx*0x2]
        mov word ptr [eax + -0x2], dx
        mov edx, dword ptr [ebp + 0x14]
L_449297:
        add dword ptr [ebp + 0x8], 0x3
        mov esi, dword ptr [ebx + 0x58]
        inc edx
        cmp edx, esi
        mov dword ptr [ebp + 0x14], edx
        __emit 0x7C   /* __emit: MSVC6 miscomputes backward jcc rel8 (off-by-3) when a call-reloc sits between branch and target */
        __emit 0xAB
L_4492a6:
        mov al, byte ptr [ebp + 0x18]
        test al, al
        mov word ptr [ebx + 0x54], di
        pop esi
        jnz L_4492c3
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [eax + 0xc]
        and edi, 0xffff
        add ecx, edi
        mov dword ptr [eax + 0xc], ecx
L_4492c3:
        cmp word ptr [ebx + 0xa], 0x0
        pop edi
        setnz al
        mov byte ptr [ebx + 0x10], al
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
L_4492d6:
        mov esi, dword ptr [ebx + 0x44]
        xor ecx, ecx
        mov cx, word ptr [ebx + 0xa]
        mov dword ptr [ebp + -0x4], 0x0
        shl ecx, 0x5
        lea edi, [esi + ecx*0x1]
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        xor edx, edx
        rep movsb
        mov dx, word ptr [ebx + 0xa]
        test edx, edx
        jle L_44939e
        mov eax, dword ptr [ebx + 0x44]
        mov ecx, edx
        shl ecx, 0x5
        lea ecx, [ecx + eax*0x1 + 0xc]
        lea esi, [eax + 0x1c]
        mov edi, edx
L_449319:
        fld dword ptr [esi + -0x4]
        fmul dword ptr [ebx + 0x9c]
        fstp dword ptr [ecx + 0xc]
        fld dword ptr [esi]
        fmul dword ptr [ebx + 0xa0]
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [ecx]
        fcomp dword ptr [ebx + 0x8c]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz L_449348
        and dword ptr [ecx + 0x4], 0xffffff
        jmp L_44938e
L_449348:
        fld dword ptr [ecx]
        mov eax, dword ptr [ebp + -0x4]
        fcomp dword ptr [ebx + 0x88]
        inc eax
        mov dword ptr [ebp + -0x4], eax
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz L_44938e
        fld dword ptr [ecx]
        fsub dword ptr [ebx + 0x8c]
        fmul dword ptr [ebx + 0x90]
        fsub dword ptr [g_76d070]
        fadd dword ptr [g_76dd60]
        fstp dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebp + 0x8]
        and eax, 0xffff
        shl eax, 0x18
        or eax, 0xffffff
        and dword ptr [ecx + 0x4], eax
L_44938e:
        add esi, 0x20
        add ecx, 0x20
        dec edi
        jnz L_449319
        mov eax, dword ptr [ebp + -0x4]
        test eax, eax
        jnz L_4493a4
L_44939e:
        mov byte ptr [ebx + 0x64], 0x0
        jmp L_4493a8
L_4493a4:
        mov byte ptr [ebx + 0x64], 0x1
L_4493a8:
        mov al, byte ptr [ebp + 0x18]
        test al, al
        jnz L_4493d3
        mov eax, dword ptr [ebp + 0xc]
        lea ecx, [edx + edx*0x1]
        add dword ptr [eax], ecx
        mov edi, eax
        jmp L_44921f
L_4493be:
        test dl, dl
        jnz L_4493d6
        mov eax, dword ptr [edi]
        xor edx, edx
        mov dx, word ptr [ebx + 0xa]
        add eax, edx
        mov dword ptr [edi], eax
        jmp L_44921f
L_4493d3:
        mov edi, dword ptr [ebp + 0xc]
L_4493d6:
        mov eax, dword ptr [edi + 0x48]
        jmp L_449228
    }
}
