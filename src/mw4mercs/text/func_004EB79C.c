/* func_004EB79C.c -- in-.text data block (block 0x4EB79C), 388 bytes.
   Two functions: a small thunk calling FUN_004179B0, and a larger function
   doing FPU math on object fields. */

extern int g_7dc868;
extern float g_76c5b0;
extern float g_76d064;

extern void FUN_004179B0(void);
extern void FUN_00767550(void);
extern void FUN_00707E70(void);

__declspec(naked) void func_004EB79C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        mov eax, dword ptr [ecx + 0x28]
        push ecx
        lea ecx, [eax + eax*4]
        lea edx, [eax + ecx*2]
        mov eax, dword ptr [g_7dc868]
        mov ecx, dword ptr [eax + 0x48]
        lea ecx, [ecx + edx*4 + 0x18]
        call FUN_004179B0
        mov al, 1
        ret
        nop
        nop
        sub esp, 0x40
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x4c]
        test esi, esi
        mov ebx, ecx
        mov dword ptr [esp + 8], 0
        jne L_4eb898
        mov eax, dword ptr [g_7dc868]
        fld dword ptr [ebx + 0x48]
        mov ecx, dword ptr [eax + 0x88]
        mov esi, dword ptr [ecx + 0xd8]
        push edi
        add esi, 0x80
        mov ecx, 0xc
        lea edi, [esp + 0x1c]
        rep movsd
        fsub dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ebx + 0x4c]
        fsub dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ebx + 0x50]
        fsub dword ptr [esp + 0x48]
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [ebx + 0x60]
        fstp dword ptr [esp + 0x1c]
        call FUN_00767550
        pop edi
        fld dword ptr [g_76c5b0]
        fld dword ptr [ebx + 0x68]
        fcomp dword ptr [ebx + 0x38]
        fnstsw ax
        test ah, 1
        jne L_4eb915
        fld dword ptr [ebx + 0x68]
        fcomp dword ptr [ebx + 0x44]
        fnstsw ax
        test ah, 0x41
        je L_4eb915
        fld dword ptr [ebx + 0x68]
        fcomp dword ptr [ebx + 0x3c]
        fnstsw ax
        test ah, 1
        jne L_4eb915
        __emit 0xDD  /* fstp st(0) -- MSVC6 rejects fstp st(0) operand form */
        __emit 0xD8
        fld dword ptr [ebx + 0x68]
        fcomp dword ptr [ebx + 0x40]
        fnstsw ax
        test ah, 1
        jne L_4eb883
        fld dword ptr [g_76d064]
        pop esi
        pop ebx
        add esp, 0x40
        ret 4
L_4eb883:
        fld dword ptr [ebx + 0x40]
        pop esi
        fsub dword ptr [ebx + 0x3c]
        fld st(0)
        fsub dword ptr [ebx + 0x68]
        pop ebx
        fdivrp st(1), st(0)
        add esp, 0x40
        ret 4
L_4eb898:
        fld dword ptr [ebx + 0x68]
        mov eax, dword ptr [esi + 0x54]
        fcomp dword ptr [ebx + 0x38]
        mov ecx, dword ptr [esi + 0x50]
        mov edx, dword ptr [esi + 0x58]
        mov dword ptr [ebx + 0x64], eax
        mov dword ptr [ebx + 0x60], ecx
        fnstsw ax
        mov dword ptr [ebx + 0x68], edx
        test ah, 1
        jne L_4eb8fb
        fld dword ptr [ebx + 0x68]
        fcomp dword ptr [ebx + 0x44]
        fnstsw ax
        test ah, 0x41
        je L_4eb8fb
        fld dword ptr [ebx + 0x68]
        fcomp dword ptr [ebx + 0x3c]
        fnstsw ax
        test ah, 1
        jne L_4eb8fb
        fld dword ptr [ebx + 0x68]
        fcomp dword ptr [ebx + 0x40]
        fnstsw ax
        test ah, 1
        jne L_4eb8e8
        mov dword ptr [esp + 8], 0x3f800000
        jmp L_4eb8fb
L_4eb8e8:
        fld dword ptr [ebx + 0x40]
        fsub dword ptr [ebx + 0x3c]
        fld st(0)
        fsub dword ptr [ebx + 0x68]
        fdiv st(0), st(1)
        fstp dword ptr [esp + 8]
        __emit 0xDD  /* fstp st(0) -- MSVC6 rejects fstp st(0) operand form */
        __emit 0xD8
L_4eb8fb:
        push 0
        call FUN_00707E70
        fsub qword ptr [esi + 0x28]
        mov eax, dword ptr [esi + 0x10]
        fdiv dword ptr [eax + 0x74]
        fsubr dword ptr [g_76d064]
        fmul dword ptr [esp + 8]
L_4eb915:
        pop esi
        pop ebx
        add esp, 0x40
        ret 4
        nop
        nop
        nop
    }
}
