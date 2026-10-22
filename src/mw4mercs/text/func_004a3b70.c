/* FUN_004a3b70 - MLR (MidLevelRenderer) update, __thiscall, RET 0x4, FPU-heavy */
extern void __cdecl FUN_004941d0(void);
extern float __cdecl FUN_00415020(void);
extern void __cdecl FUN_0041af70(void);

extern float g_float_770300;   /* 0x00770300 */
extern float g_float_7702fc;   /* 0x007702fc */
extern int g_dword_7b8cd8;     /* 0x007b8cd8 */
extern int g_dword_7b8cdc;     /* 0x007b8cdc */
extern int g_dword_7b8ce0;     /* 0x007b8ce0 */
extern int g_dword_7b8ce4;     /* 0x007b8ce4 */

__declspec(naked) void func_004a3b70(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        push eax
        call FUN_004941d0
        mov esi, dword ptr [edi + 0x10]
        mov al, byte ptr [esi + 0xf8]
        fld dword ptr [esi + 0xe8]
        test al, al
        jz L_a3ba9
        fld dword ptr [esi + 0xf4]
        fmul dword ptr [edi + 0x98]
        fadd dword ptr [esi + 0xf0]
        fmulp st(1), st(0)
L_a3ba9:
        mov al, byte ptr [esi + 0xf8]
        fstp dword ptr [edi + 0xa8]
        test al, al
        fld dword ptr [esi + 0xe8]
        jz L_a3bd3
        fld dword ptr [esi + 0xf4]
        fmul dword ptr [edi + 0x98]
        fadd dword ptr [esi + 0xf0]
        fmulp st(1), st(0)
L_a3bd3:
        mov al, byte ptr [esi + 0xf8]
        fstp dword ptr [edi + 0xac]
        test al, al
        fld dword ptr [esi + 0xe8]
        jz L_a3bfd
        fld dword ptr [esi + 0xf4]
        fmul dword ptr [edi + 0x98]
        fadd dword ptr [esi + 0xf0]
        fmulp st(1), st(0)
L_a3bfd:
        mov al, byte ptr [esi + 0x11c]
        fstp dword ptr [edi + 0xb0]
        test al, al
        jz L_a3c5c
        call FUN_00415020
        fmul dword ptr [g_float_770300]
        fstp dword ptr [esp + 0xc]
        call FUN_00415020
        fmul dword ptr [g_float_7702fc]
        fstp dword ptr [esp + 0x20]
        call FUN_00415020
        fmul dword ptr [g_float_770300]
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0xc]
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x14], ecx
        fstp dword ptr [esp + 0x10]
        push eax
        lea ecx, [edi + 0xb4]
        mov dword ptr [esp + 0x1c], edx
        call FUN_0041af70
        jmp L_a3c8b
L_a3c5c:
        mov ecx, dword ptr [g_dword_7b8cd8]
        mov edx, dword ptr [g_dword_7b8cdc]
        mov eax, dword ptr [g_dword_7b8ce0]
        mov dword ptr [edi + 0xb4], ecx
        mov ecx, dword ptr [g_dword_7b8ce4]
        mov dword ptr [edi + 0xb8], edx
        mov dword ptr [edi + 0xbc], eax
        mov dword ptr [edi + 0xc0], ecx
L_a3c8b:
        mov edx, dword ptr [edi + 0x98]
        fld dword ptr [edi + 0x90]
        mov dword ptr [esp + 0x20], edx
        mov edx, dword ptr [esi + 0x108]
        xor ecx, ecx
        test edx, edx
        jbe L_a3cbe
        mov ebx, dword ptr [esi + 0x104]
L_a3cad:
        fcom dword ptr [ebx]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0); MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz L_a3cbe
        inc ecx
        add ebx, 0xc
        cmp ecx, edx
        jc L_a3cad
L_a3cbe:
        lea eax, [ecx + ecx*0x2]
        mov ecx, dword ptr [esi + 0x104]
        fsub dword ptr [ecx + eax*0x4 - 0xc]
        lea eax, [ecx + eax*0x4 - 0xc]
        fmul dword ptr [eax + 0x4]
        fadd dword ptr [eax + 0x8]
        mov al, byte ptr [esi + 0x118]
        test al, al
        jz L_a3d23
        mov edx, dword ptr [esi + 0x114]
        xor ecx, ecx
        test edx, edx
        jbe L_a3d06
        mov ebx, dword ptr [esi + 0x110]
L_a3cf1:
        fld dword ptr [ebx]
        fcomp dword ptr [esp + 0x20]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41 (F6 C4 41); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz L_a3d06
        inc ecx
        add ebx, 0xc
        cmp ecx, edx
        jc L_a3cf1
L_a3d06:
        mov eax, dword ptr [esi + 0x110]
        fld dword ptr [esp + 0x20]
        lea edx, [ecx + ecx*0x2]
        fsub dword ptr [eax + edx*0x4 - 0xc]
        lea eax, [eax + edx*0x4 - 0xc]
        fmul dword ptr [eax + 0x4]
        fadd dword ptr [eax + 0x8]
        fmulp st(1), st(0)
L_a3d23:
        fstp dword ptr [edi + 0xe8]
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}
